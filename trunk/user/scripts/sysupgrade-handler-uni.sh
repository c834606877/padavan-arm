#!/bin/sh

###############################################################################
# Sysupgrade Handler for Padavan on Arm (eMMC / UBI / NAND)
#
# Purpose: Verify and flash sysupgrade tar files to eMMC partitions,
#          UBI volumes, or raw NAND MTD partitions.
# Implementation based on OpenWrt's emmc_upgrade_tar / nand_upgrade_tar.
# Usage: sysupgrade-handler.sh <board_name> <sysupgrade_file> [kernel_device] [rootfs_device]
#
# Sysupgrade file format (tar-based):
#   sysupgrade-<board>/CONTROL  (Board info)
#   sysupgrade-<board>/kernel   (Kernel binary, FIT image)
#   sysupgrade-<board>/root     (Rootfs, squashfs)
#
# Storage type is auto-detected (reference: storage_main.sh):
#   EMMC     -> dd block write to /dev/mmcblk0p5 / p6
#   UBI      -> ubi tools: attach, rm/mk volumes, ubiupdatevol
#   NAND_MTD -> mtd_write to raw kernel / rootfs MTD partitions
###############################################################################

set -e

FW_UPGRADE_REBOOT="1"
# Configuration
BOARD_NAME="$1"
SYSUPGRADE_HEADER="sysupgrade-${BOARD_NAME}"
KERNEL_PART_DEFAULT="/dev/mmcblk0p5"  # eMMC Part 5: kernel
ROOTFS_PART_DEFAULT="/dev/mmcblk0p6"  # eMMC Part 6: rootfs
WORK_DIR="/tmp/sysupgrade_work"
LOG_FILE="/tmp/sysupgrade.log"
MIN_FILE_SIZE=$((2 * 1024 * 1024))  # 2 MB minimum

# UBI / NAND configuration
UBI_MTD_PART="ubi"           # MTD partition holding UBI (from DTS)
UBI_KERN_VOL="kernel"        # UBI volume for kernel (FIT image)
UBI_ROOT_VOL="rootfs"        # UBI volume for rootfs (squashfs)
UBI_DATA_VOL="rootfs_data"   # UBI volume for overlay (auto-resize)
NAND_KERN_PART="kernel"      # raw NAND kernel MTD partition
NAND_ROOT_PART="rootfs"      # raw NAND rootfs MTD partition

# Board specific UBI volume naming.
# The Xiaomi AX3000T is booted by the stock OpenWrt/ImmortalWrt U-Boot, which
# reads the production image from the UBI volume "fit" (see boot_production /
# ubi_read_production in that U-Boot).  The squashfs rootfs is embedded in the
# very same FIT as "ramdisk" sub-image, so no separate rootfs volume is used.
case "$BOARD_NAME" in
	xiaomi_ax3000t*)
		UBI_KERN_VOL="fit"
		UBI_ROOT_VOL=""
		;;
esac

# Status codes
SUCCESS=0
ERR_INVALID_FILE=1
ERR_VALIDATION_FAILED=2
ERR_FLASH_FAILED=3

STORAGE_TYPE=""

###############################################################################
# Utility Functions
###############################################################################

log_info() {
	local msg="$1"
	echo "[INFO] $msg" | tee -a "$LOG_FILE"
}

log_error() {
	local msg="$1"
	echo "[ERROR] $msg" | tee -a "$LOG_FILE" >&2
}

log_warn() {
	local msg="$1"
	echo "[WARN] $msg" | tee -a "$LOG_FILE"
}

log_success() {
	local msg="$1"
	echo "[SUCCESS] $msg" | tee -a "$LOG_FILE"
}

cleanup() {
	log_info "Cleaning up temporary files..."
	[ -d "$WORK_DIR" ] && rm -rf "$WORK_DIR"
}

trap cleanup EXIT

###############################################################################
# Device detection
###############################################################################

detect_storage_type() {
	# CASE 1: eMMC (block device present)
	if [ -b "/dev/mmcblk0" ]; then
		STORAGE_TYPE="EMMC"
		return 0
	fi

	# CASE 2: UBI (kernel UBI subsystem active)
	if [ -d "/sys/class/ubi/ubi0" ] || grep -q "ubi" /proc/devices 2>/dev/null; then
		STORAGE_TYPE="UBI"
		return 0
	fi

	# CASE 3: raw NAND MTD partitions
	if grep -q "\"$NAND_KERN_PART\"" /proc/mtd 2>/dev/null && \
	   grep -q "\"$NAND_ROOT_PART\"" /proc/mtd 2>/dev/null; then
		STORAGE_TYPE="NAND_MTD"
		return 0
	fi

	STORAGE_TYPE="UNKNOWN"
	log_error "Cannot detect storage type (eMMC/UBI/NAND)"
	return 1
}

# Find MTD partition number by name (e.g. "ubi" -> 4)
find_mtd_index() {
	local part_name="$1"
	grep -i "\"$part_name\"" /proc/mtd 2>/dev/null | head -n1 | cut -d: -f1 | sed 's/mtd//'
}

# Find UBI device (e.g. ubi0) attached to a given MTD partition number
find_ubi_dev_by_mtd() {
	local mtdnum="$1"
	local ubidevdir cmtdnum
	for ubidevdir in /sys/class/ubi/ubi*; do
		[ -e "$ubidevdir/mtd_num" ] || continue
		cmtdnum="$(cat "$ubidevdir/mtd_num" 2>/dev/null)"
		[ "$mtdnum" = "$cmtdnum" ] || continue
		echo "$(basename "$ubidevdir")"
		return 0
	done
	return 1
}

# Find UBI volume device node (e.g. /dev/ubi0_0) by volume name
find_ubi_vol_dev() {
	local ubidev="$1"
	local volname="$2"
	local ubivoldir
	for ubivoldir in /sys/class/ubi/${ubidev}_*/; do
		[ -d "$ubivoldir" ] || continue
		if [ "$(cat "$ubivoldir/name" 2>/dev/null)" = "$volname" ]; then
			echo "/dev/$(basename "$ubivoldir")"
			return 0
		fi
	done
	return 1
}

###############################################################################
# Validation Functions
###############################################################################

verify_header() {
	local file="$1"

	log_info "Verifying sysupgrade file header..."
	
	# Read the first 40 bytes to check for sysupgrade-cmcc_rax3000m-emmc-ubootmod header
	local header=$(head -c 40 "$file" 2>/dev/null)

	if echo "$header" | grep -q "^sysupgrade-"; then
		log_info "Custom sysupgrade header detected"
		
		# Extract header string until null byte or space
		local header_str=$(echo "$header" | cut -d' ' -f1)

		case "$header_str" in
			"$SYSUPGRADE_HEADER"*)
				log_success "Header validation passed: $header_str"
				return 0
				;;
			*)
				log_error "Header mismatch. Expected: $SYSUPGRADE_HEADER, Got: $header_str"
				return 1
				;;
		esac
	else
		# Try to detect if it's a tar file (after stripping header)
		log_info "Checking for tar content..."
		return 0
	fi
}

verify_tar_integrity() {
	local file="$1"

	log_info "Verifying tar file integrity..."
	
	# Check if it's a valid tar (skip custom header if present)
	if tar -tf "$file" > /dev/null 2>&1; then
		log_success "Tar file integrity check passed"
		return 0
	else
		# Try skipping the header bytes if present
		local header_len=${#SYSUPGRADE_HEADER}
		if dd if="$file" bs=1 skip=$((header_len + 1)) 2>/dev/null | \
		   tar -tf - > /dev/null 2>&1; then
			log_success "Tar file integrity check passed (after header skip)"
			return 0
		else
			log_error "Invalid tar file"
			return 1
		fi
	fi
}

verify_control_file() {
	local control_file="$1"

	log_info "Verifying CONTROL file..."

	if [ ! -f "$control_file" ]; then
		log_error "CONTROL file not found"
		return 1
	fi

	if grep -q "^BOARD=" "$control_file"; then
		local board=$(grep "^BOARD=" "$control_file" | cut -d'=' -f2)
		log_success "CONTROL file valid: BOARD=$board"
		return 0
	else
		log_error "Invalid CONTROL file format"
		return 1
	fi
}

verify_kernel_file() {
	local kernel_file="$1"

	log_info "Verifying kernel file..."

	if [ ! -f "$kernel_file" ]; then
		log_error "Kernel file not found"
		return 1
	fi

	local kernel_size=$(stat -c%s "$kernel_file" 2>/dev/null || stat -f%z "$kernel_file" 2>/dev/null)
	local min_size=$((1024 * 1024))  # 1 MB minimum
	local max_size=$((32 * 1024 * 1024))  # 32 MB maximum

	# Boards that embed the squashfs rootfs into the FIT (e.g. the Xiaomi
	# AX3000T) ship one combined kernel+rootfs image, which is much bigger
	# than a plain kernel - allow up to the size of the UBI partition.
	if [ "$UBI_KERN_VOL" = "fit" ]; then
		max_size=$((112 * 1024 * 1024))
	fi

	if [ "$kernel_size" -lt "$min_size" ]; then
		log_error "Kernel file too small: $kernel_size bytes (minimum: $min_size bytes)"
		return 1
	fi

	if [ "$kernel_size" -gt "$max_size" ]; then
		log_error "Kernel file too large: $kernel_size bytes (maximum: $max_size bytes)"
		return 1
	fi
	
	# Verify kernel magic (should start with uImage magic or gzip magic)
	local magic=$(od -An -N 4 -tx1 "$kernel_file" | tr -d ' ')
	case "$magic" in
		27051956)  # uImage magic (0x27051956)
			log_success "Kernel file valid (uImage format): $kernel_size bytes"
			return 0
			;;
		1f8b0808|1f8b0808*)  # gzip magic
			log_success "Kernel file valid (gzip compressed): $kernel_size bytes"
			return 0
			;;
        d00dfeed)  # fdt magic
            log_success "Kernel file valid (FDT format): $kernel_size bytes"
            return 0
            ;;
		*)
			log_warn "Unknown kernel format (magic: $magic), proceeding with caution"
			log_success "Kernel file size check passed: $kernel_size bytes"
			return 0
			;;
	esac
}

###############################################################################
# Extraction Functions
###############################################################################

extract_sysupgrade() {
	local file="$1"

	log_info "Extracting sysupgrade file for verification..."

	mkdir -p "$WORK_DIR"
	
	# Check if file starts with custom header
	local header_len=${#SYSUPGRADE_HEADER}
	if false -a  head -c "$header_len" "$file" | grep -q "^sysupgrade-"; then
		log_info "Skipping custom header ($header_len bytes)..."
		# Skip custom header and extract tar
		dd if="$file" bs=1 skip=$((header_len + 1)) 2>/dev/null | \
		tar -xf - -C "$WORK_DIR"
	else
		# Extract directly
		tar -xf "$file" -C "$WORK_DIR"
	fi
	
	# Verify archive was extracted
	if [ -d "$WORK_DIR" ] && [ "$(ls -A "$WORK_DIR")" ]; then
		log_success "Extraction successful"
		return 0
	else
		log_error "Extraction failed or empty archive"
		return 1
	fi
}

###############################################################################
# Flash Functions
###############################################################################

# --- eMMC: block-based dd write ---
flash_kernel() {
	local sysupgrade_file="$1"
	local kernel_device="$2"
	local board_dir="$3"

	log_info "Flashing kernel to $kernel_device..."
	
	# Verify device exists
	if [ ! -b "$kernel_device" ] && [ ! -c "$kernel_device" ]; then
		log_error "Device $kernel_device not found or not a block device"
		return 1
	fi
	
	# Check if kernel exists in tar
	if ! tar -tf "$sysupgrade_file" "${board_dir}/kernel" > /dev/null 2>&1; then
		log_warn "Kernel file not found in sysupgrade archive"
		return 0
	fi

	log_info "Writing kernel from sysupgrade tar..."
	
	# Extract and flash kernel directly from tar
	# Use bs=512 for standard sector-based flashing
	local kernel_blocks=$(tar -xf "$sysupgrade_file" "${board_dir}/kernel" -O 2>/dev/null | \
	                       dd of="$kernel_device" bs=512 2>&1 | grep "records out" | cut -d' ' -f1)

	if [ -z "$kernel_blocks" ]; then
		log_error "Failed to flash kernel"
		return 1
	fi

	log_success "Kernel flashed successfully ($kernel_blocks blocks)"
	sync
	sleep 1

	return 0
}

flash_rootfs() {
	local sysupgrade_file="$1"
	local rootfs_device="$2"
	local board_dir="$3"
	
	# Check if rootfs exists in tar
	if ! tar -tf "$sysupgrade_file" "${board_dir}/root" > /dev/null 2>&1; then
		log_warn "Rootfs file not found in sysupgrade archive"
		return 0
	fi

	log_info "Flashing rootfs to $rootfs_device..."
	
	# Verify device exists
	if [ ! -b "$rootfs_device" ] && [ ! -c "$rootfs_device" ]; then
		log_error "Device $rootfs_device not found or not a block device"
		return 1
	fi

	log_info "Writing rootfs from sysupgrade tar..."
	
	# Extract and flash rootfs directly from tar
	# Use bs=512 for standard sector-based flashing
	local rootfs_blocks=$(tar -xf "$sysupgrade_file" "${board_dir}/root" -O 2>/dev/null | \
	                       dd of="$rootfs_device" bs=512 2>&1 | grep "records out" | cut -d' ' -f1)

	if [ -z "$rootfs_blocks" ]; then
		log_error "Failed to flash rootfs"
		return 1
	fi

	log_success "Rootfs flashed successfully ($rootfs_blocks blocks)"
	sync
	sleep 1

	return 0
}

flash_emmc() {
	local sysupgrade_file="$1"
	local kernel_device="$2"
	local rootfs_device="$3"
	local board_dir="$4"

	flash_kernel "$sysupgrade_file" "$kernel_device" "$board_dir" || return 1
	flash_rootfs "$sysupgrade_file" "$rootfs_device" "$board_dir" || return 1

	return 0
}

# --- UBI: in-place update with ubi tools ---
flash_ubi() {
	local sysupgrade_file="$1"
	local board_dir="$2"

	local mtdnum=$(find_mtd_index "$UBI_MTD_PART")
	if [ -z "$mtdnum" ]; then
		log_error "Cannot find UBI MTD partition '$UBI_MTD_PART'"
		return 1
	fi

	local ubidev=$(find_ubi_dev_by_mtd "$mtdnum")
	if [ -z "$ubidev" ]; then
		log_info "Attaching UBI to /dev/mtd$mtdnum..."
		if ! ubiattach -m "$mtdnum" 2>/dev/null; then
			log_warn "UBI attach failed, formatting /dev/mtd$mtdnum..."
			ubiformat "/dev/mtd$mtdnum" -y -q
			ubiattach -m "$mtdnum"
		fi
		ubidev=$(find_ubi_dev_by_mtd "$mtdnum")
		[ -z "$ubidev" ] && { log_error "Cannot attach UBI"; return 1; }
	fi
	log_info "Using UBI device $ubidev"

	# Update an existing volume in-place (no rm/mk -> no ENOSPC).
	# Create only if the volume is truly absent (fresh/erased UBI).
	update_volume() {
		local volname="$1"
		local vol_size="$2"
		local tar_member="$3"
		local dev

		dev=$(find_ubi_vol_dev "$ubidev" "$volname")
		if [ -n "$dev" ]; then
			log_info "Updating existing UBI volume '$volname' in-place (${vol_size} bytes)..."
			tar -xOf "$sysupgrade_file" "$tar_member" | \
				ubiupdatevol "$dev" -s "$vol_size" - 2>>"$LOG_FILE" || {
					log_error "In-place update of '$volname' failed"
					return 1
				}
		else
			log_info "Creating new UBI volume '$volname' (${vol_size} bytes)..."
			ubimkvol "/dev/$ubidev" -N "$volname" -s "$vol_size" 2>>"$LOG_FILE" || {
				log_error "Cannot create volume '$volname'"
				return 1
			}
			dev=$(find_ubi_vol_dev "$ubidev" "$volname")
			[ -z "$dev" ] && { log_error "Cannot find volume '$volname'"; return 1; }
			tar -xOf "$sysupgrade_file" "$tar_member" | \
				ubiupdatevol "$dev" -s "$vol_size" - 2>>"$LOG_FILE"
		fi
		return 0
	}

	# Kernel volume
	if tar -tf "$sysupgrade_file" "$board_dir/kernel" > /dev/null 2>&1; then
		local kernel_length=$(tar -xOf "$sysupgrade_file" "$board_dir/kernel" 2>/dev/null | wc -c)
		if [ -n "$kernel_length" ] && [ "$kernel_length" -gt 0 ]; then
			update_volume "$UBI_KERN_VOL" "$kernel_length" "$board_dir/kernel" || return 1
		fi
	fi

	# Rootfs volume (skipped for boards that embed the rootfs into the FIT)
	if [ -n "$UBI_ROOT_VOL" ] && tar -tf "$sysupgrade_file" "$board_dir/root" > /dev/null 2>&1; then
		local rootfs_length=$(tar -xOf "$sysupgrade_file" "$board_dir/root" 2>/dev/null | wc -c)
		if [ -n "$rootfs_length" ] && [ "$rootfs_length" -gt 0 ]; then
			update_volume "$UBI_ROOT_VOL" "$rootfs_length" "$board_dir/root" || return 1
		fi
	fi

	# rootfs_data left untouched -> preserves user config/overlay
	sync
	return 0
}
# --- Raw NAND MTD: mtd_write ---
flash_nand_mtd() {
	local sysupgrade_file="$1"
	local board_dir="$2"

	# Kernel
	if tar -tf "$sysupgrade_file" "$board_dir/kernel" > /dev/null 2>&1; then
		local kernel_mtd=$(find_mtd_index "$NAND_KERN_PART")
		if [ -z "$kernel_mtd" ]; then
			log_error "Cannot find kernel MTD partition '$NAND_KERN_PART'"
			return 1
		fi
		log_info "Writing kernel to mtd$kernel_mtd ($NAND_KERN_PART)..."
		tar -xOf "$sysupgrade_file" "$board_dir/kernel" | mtd_write write - "$NAND_KERN_PART"
	fi

	# Rootfs
	if tar -tf "$sysupgrade_file" "$board_dir/root" > /dev/null 2>&1; then
		local rootfs_mtd=$(find_mtd_index "$NAND_ROOT_PART")
		if [ -z "$rootfs_mtd" ]; then
			log_error "Cannot find rootfs MTD partition '$NAND_ROOT_PART'"
			return 1
		fi
		log_info "Writing rootfs to mtd$rootfs_mtd ($NAND_ROOT_PART)..."
		tar -xOf "$sysupgrade_file" "$board_dir/root" | mtd_write write - "$NAND_ROOT_PART"
	fi

	sync
	return 0
}

###############################################################################
# Main Function
###############################################################################

main() {
	local config_board_comp="$1"
	local sysupgrade_file="$2"
	local kernel_device="${3:-$KERNEL_PART_DEFAULT}"
	local rootfs_device="${4:-$ROOTFS_PART_DEFAULT}"

	# Initialize log
	: > "$LOG_FILE"

	log_info "==================================================================="
	log_info "Padavan on Arm Sysupgrade Handler"
	log_info "==================================================================="
	log_info "Input file: $sysupgrade_file"

	# Validate arguments
	if [ -z "$sysupgrade_file" ]; then
		log_error "Usage: $0 <sysupgrade_file> [kernel_device] [rootfs_device]"
		return 1
	fi

	if [ ! -f "$sysupgrade_file" ]; then
		log_error "Sysupgrade file not found: $sysupgrade_file"
		return 1
	fi

	# Check file size
	local file_size=$(stat -c%s "$sysupgrade_file" 2>/dev/null || stat -f%z "$sysupgrade_file" 2>/dev/null)
	if [ "$file_size" -lt "$MIN_FILE_SIZE" ]; then
		log_error "File size too small: $file_size bytes (minimum: $MIN_FILE_SIZE bytes)"
		return 1
	fi
	log_info "File size: $file_size bytes - OK"

	# Detect storage type
	detect_storage_type || return 1
	log_info "Detected storage type: $STORAGE_TYPE"

	case "$STORAGE_TYPE" in
		EMMC)
			log_info "Kernel device: $kernel_device"
			log_info "Rootfs device: $rootfs_device"
			;;
		UBI)
			log_info "UBI MTD partition: $UBI_MTD_PART"
			log_info "UBI volumes: $UBI_KERN_VOL / $UBI_ROOT_VOL / $UBI_DATA_VOL"
			;;
		NAND_MTD)
			log_info "Kernel MTD partition: $NAND_KERN_PART"
			log_info "Rootfs MTD partition: $NAND_ROOT_PART"
			;;
	esac

	# Run validation checks
	verify_header "$sysupgrade_file" || return 1
	verify_tar_integrity "$sysupgrade_file" || return 1

	# Detect board directory from tar (OpenWrt method)
	# Should be in format: sysupgrade-<board>/
	local board_dir=$(tar -tf "$sysupgrade_file" | grep -m 1 '^sysupgrade-.*/$')
	board_dir=${board_dir%/}

	if [ -z "$board_dir" ]; then
		log_error "Cannot find board directory in sysupgrade archive"
		return 1
	fi

	log_info "Board directory detected: $board_dir"

	# Verify CONTROL file exists
	if ! tar -tf "$sysupgrade_file" "${board_dir}/CONTROL" > /dev/null 2>&1; then
		log_error "CONTROL file not found in sysupgrade archive"
		return 1
	fi

	# Extract and verify CONTROL file
	extract_sysupgrade "$sysupgrade_file" || return 1
	local control_file="$WORK_DIR/$board_dir/CONTROL"
	verify_control_file "$control_file" || return 1


	local kernel_file="$WORK_DIR/$board_dir/kernel"
	verify_kernel_file "$kernel_file" || return 1


	# Flash according to detected storage type
	case "$STORAGE_TYPE" in
		EMMC)
			flash_emmc "$sysupgrade_file" "$kernel_device" "$rootfs_device" "$board_dir" || return 1
			;;
		UBI)
			flash_ubi "$sysupgrade_file" "$board_dir" || return 1
			;;
		NAND_MTD)
			flash_nand_mtd "$sysupgrade_file" "$board_dir" || return 1
			;;
		*)
			log_error "Unsupported storage type: $STORAGE_TYPE"
			return 1
			;;
	esac

	# Post-flash operations
	log_info "Performing post-flash operations..."
	log_info "Syncing filesystem..."
	sync
	sleep 1

	log_info "==================================================================="
	log_success "Sysupgrade completed successfully!"
	log_info "==================================================================="
	log_info "Log file: $LOG_FILE"

	# Optional: Reboot if specified via environment variable
	if [ "$FW_UPGRADE_REBOOT" = "1" ]; then
		log_info "Rebooting system in 2 seconds..."
		sleep 2
		reboot &
		sleep 3
		echo 1 > /proc/sys/kernel/sysrq
		echo b > /proc/sys/rqtrigger
	else
		log_info "Upgrade complete. Reboot required to apply new firmware."
	fi

	return 0
}

# Execute main function
main "$@"
exit $?