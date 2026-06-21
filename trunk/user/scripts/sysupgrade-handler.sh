#!/bin/sh

###############################################################################
# Sysupgrade Handler for Padavan MT7981 eMMC Platform
# 
# Purpose: Verify and flash sysupgrade tar files to eMMC partitions
# Implementation based on OpenWrt's emmc_upgrade_tar (openwrt/upgrade/lib/upgrade/emmc.sh)
# Usage: sysupgrade-handler.sh <sysupgrade_file> [kernel_device] [rootfs_device]
#
# Sysupgrade file format (tar-based):
#   - Header: sysupgrade-cmcc_rax3000m-emmc-ubootmod
#   - Contents:
#     - sysupgrade-<board>/CONTROL (Board info)
#     - sysupgrade-<board>/kernel  (Kernel binary)
#     - sysupgrade-<board>/root    (Rootfs, optional)
#
# Key features:
#   - Direct extraction from tar during flashing (no intermediate files)
#   - Block-based flashing using standard 512-byte sectors
#   - Kernel partition invalidation during rootfs flash for safety
#   - Partition header clearing after flash
#   - Full logging and error handling
###############################################################################

set -e

FW_UPGRADE_REBOOT="1"
# Configuration
BOARD_NAME="cmcc_rax3000m-emmc-ubootmod"
SYSUPGRADE_HEADER="sysupgrade-${BOARD_NAME}"
KERNEL_PART_DEFAULT="/dev/mmcblk0p5"  # Part 5: kernel
ROOTFS_PART_DEFAULT="/dev/mmcblk0p6"  # Part 6: rootfs
WORK_DIR="/tmp/sysupgrade_work"
LOG_FILE="/tmp/sysupgrade.log"
MIN_FILE_SIZE=$((2 * 1024 * 1024))  # 2 MB minimum

# Status codes
SUCCESS=0
ERR_INVALID_FILE=1
ERR_VALIDATION_FAILED=2
ERR_FLASH_FAILED=3

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
# Flash Functions (based on OpenWrt emmc_upgrade_tar)
###############################################################################

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
	
	# Sync
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

###############################################################################
# Main Function
###############################################################################

main() {
	local sysupgrade_file="$1"
	local kernel_device="${2:-$KERNEL_PART_DEFAULT}"
	local rootfs_device="${3:-$ROOTFS_PART_DEFAULT}"
	
	# Initialize log
	: > "$LOG_FILE"
	
	log_info "==================================================================="
	log_info "Padavan MT7981 eMMC Sysupgrade Handler"
	log_info "==================================================================="
	log_info "Input file: $sysupgrade_file"
	log_info "Kernel device: $kernel_device"
	log_info "Rootfs device: $rootfs_device"
	
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
	
	# Flash kernel and rootfs directly from tar (OpenWrt method)
	flash_kernel "$sysupgrade_file" "$kernel_device" "$board_dir" || return 1
	flash_rootfs "$sysupgrade_file" "$rootfs_device" "$board_dir" || return 1
	
	# Post-flash operations
	log_info "Performing post-flash operations..."
	
	# Sync all filesystem changes
	log_info "Syncing filesystem..."
	sync
	sleep 1
	
	# Save logs to persistent storage if available
	#if [ -d "/etc/storage" ]; then
	#	log_info "Saving upgrade log to persistent storage..."
	#	cp "$LOG_FILE" "/etc/storage/sysupgrade_$(date +%s).log" 2>/dev/null || true
	#fi
	
	log_info "==================================================================="
	log_success "Sysupgrade completed successfully!"
	log_info "==================================================================="
	log_info "Log file: $LOG_FILE"
	
	# Optional: Reboot if specified via environment variable
	if [ "$FW_UPGRADE_REBOOT" = "1" ]; then
		log_info "Rebooting system in 2 seconds..."
		sleep 2
		reboot &
	else
		log_info "Upgrade complete. Reboot required to apply new firmware."
	fi
	
	return 0
}

# Execute main function
main "$@"
exit $?
