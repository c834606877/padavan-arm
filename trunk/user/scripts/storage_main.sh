#!/bin/sh
# Single merged storage script for Padavan (Supports UBI, Legacy MTD, and eMMC RootFS Tail)

STORAGE_DIR="/etc/storage"
TMP_BZ2_FILE="/tmp/storage.tar.bz2"
LOCK_FILE="/var/run/storage_adaptive.lock"
TARGET_MNT="/mnt/rwdata"
FILE_BACKUP_PATH="$TARGET_MNT/storage_backup.tar.bz2"
LOOP_DEV="/dev/loop7"

[ -z "$CONFIG_FIRMWARE_INCLUDE_HTTPS" ] && CONFIG_FIRMWARE_INCLUDE_HTTPS=y

funcs_lock() { exec 9>>"$LOCK_FILE"; flock -x 9; }
funcs_unlock() { exec 9>&- ; rm -f "$LOCK_FILE"; }

# =================================================================
# CORE LOGIC: Dynamic Hardware Detection and Mount Pipeline
# =================================================================
mount_persistent_media() {
    # If already mounted, skip checking
    if grep -q "$TARGET_MNT" /proc/mounts; then
        return 0
    fi
    mkdir -p "$TARGET_MNT"

    # CASE 1: Detect and Mount UBI / UBIFS
    # CASE 1: Detect, Adapt, and Dynamically Create UBI / UBIFS
    if [ -d "/sys/class/ubi/ubi0" ] || grep -q "ubi" /proc/devices; then

        # Sub-step A: Check if any UBIFS volume is already mounted by the kernel
        if grep -q "ubifs" /proc/mounts; then
            echo "STORAGE INIT: UBIFS volume already attached to system."
            mount --bind "$(grep "ubifs" /proc/mounts | awk '{print $2}')" "$TARGET_MNT"
            return 0
        fi

        # Sub-step B: Dynamically scan existing volumes for standard labels
        ACTIVE_UBI_DEV=""
        if [ -d "/sys/class/ubi/ubi0" ]; then
            echo "STORAGE INIT: UBI active subsystem matched."
            # Priority 1: Scan for specific volume names in preferential order
            # 'storage' (Padavan), 'ubi_data' (Modern OpenWrt), 'rootfs_data' (Legacy OpenWrt)
            for target_label in "storage" "ubi_data" "rootfs_data"; do
                for name_node in /sys/class/ubi/ubi0_*/name; do
                    if [ -f "$name_node" ] && [ "$(cat "$name_node")" = "$target_label" ]; then
                        vol_dir=$(dirname "$name_node")
                        ACTIVE_UBI_DEV="/dev/$(basename "$vol_dir")"
                        echo "STORAGE INIT: Match found for volume label [$target_label] at $ACTIVE_UBI_DEV"
                        break 2
                    fi
                done
            done

            # Fallback: If no recognized labels found, select any other volume,
            # but never touch volumes owned by the bootloader
            # (ubootenv / ubootenv2 / fit / recovery).
            if [ -z "$ACTIVE_UBI_DEV" ]; then
                for name_node in /sys/class/ubi/ubi0_*/name; do
                    [ -f "$name_node" ] || continue
                    case "$(cat "$name_node")" in
                        ubootenv|ubootenv2|fit|recovery) continue ;;
                    esac
                    vol_dir=$(dirname "$name_node")
                    ACTIVE_UBI_DEV="/dev/$(basename "$vol_dir")"
                    echo "STORAGE INIT: Fallback applied. Selecting existing volume at $ACTIVE_UBI_DEV"
                    break
                done
            fi
        fi

        # Sub-step C: Dynamic Creation (If no suitable volume exists, create a new one named 'storage')
        if [ -z "$ACTIVE_UBI_DEV" ] && [ -e "/dev/ubi0" ]; then
            FREE_BLOCKS=$(cat /sys/class/ubi/ubi0/avail_eraseblocks 2>/dev/null)
            echo "STORAGE INIT: Unallocated UBI memory blocks available: ${FREE_BLOCKS:-0}"

            if [ ! -z "$FREE_BLOCKS" ] && [ "$FREE_BLOCKS" -gt 4 ]; then
                echo "STORAGE INIT: No valid volume found. Executing dynamic creation via ubimkvol..."
                ubimkvol /dev/ubi0 -N storage -m 2>/dev/null

                # Resolve the new volume by NAME - its id is not known in
                # advance (ubootenv/ubootenv2/fit usually occupy ids 0..2).
                for name_node in /sys/class/ubi/ubi0_*/name; do
                    [ -f "$name_node" ] || continue
                    if [ "$(cat "$name_node")" = "storage" ]; then
                        ACTIVE_UBI_DEV="/dev/$(basename "$(dirname "$name_node")")"
                        break
                    fi
                done

                if [ -n "$ACTIVE_UBI_DEV" ]; then
                    echo "STORAGE INIT: Dynamic creation successful. Selected target: $ACTIVE_UBI_DEV"
                else
                    echo "STORAGE INIT ERROR: ubimkvol binary execution aborted or failed."
                fi
            fi
        fi

        # Sub-step D: Perform the physical mount operation
        if [ ! -z "$ACTIVE_UBI_DEV" ]; then
            mount -t ubifs "$ACTIVE_UBI_DEV" "$TARGET_MNT" 2>/dev/null || mount -t ubifs ubi0:storage "$TARGET_MNT" 2>/dev/null
            if [ $? -eq 0 ]; then
                echo "STORAGE INIT: UBIFS cleanly mounted onto $TARGET_MNT."
                return 0
            else
                # This build has no mkfs.ubifs (user/mtd-utils is configured
                # with --without-ubifs), so a freshly created volume can never
                # be formatted as UBIFS.  Keep the compressed storage archive
                # directly inside the raw UBI volume instead - the volume is
                # readable/writable as a plain character device and
                # ubiupdatevol (mtd-utils, always installed) sets its size.
                echo "STORAGE INIT: $ACTIVE_UBI_DEV is not UBIFS, using raw UBI volume mode."
                echo "$ACTIVE_UBI_DEV" > /tmp/.storage_ubi_dev
                touch /tmp/.storage_is_ubi_raw
                return 0
            fi
        fi
    fi

    # CASE 2: Detect Legacy NAND MTD Partition (No mount needed, raw block mode)
    if grep -q '"Storage"' /proc/mtd && [ ! -b "/dev/mmcblk0" ]; then
	echo "STORAGE INIT: Using NAND MTD Partition 'Storage'"
        touch /tmp/.storage_is_nand_mtd
        return 0
    fi

    # CASE 3: eMMC Reuse RootFS Partition Tail Space via Loop device
    if [ -b "/dev/mmcblk0" ]; then
        if [ -L "/dev/root" ]; then
            # Use 'ls -l' and awk/sed to dynamically extract the symlink target
            # Example: "/dev/root -> mmcblk0p6" becomes "/dev/mmcblk0p6"
            LINK_TARGET=$(ls -l /dev/root | awk -F'-> ' '{print $2}')
            if [ -z "$LINK_TARGET" ]; then
                LINK_TARGET=$(ls -l /dev/root | sed 's/.*-> //')
            fi
            
            # Ensure the target path is absolute
            if echo "$LINK_TARGET" | grep -q "^/"; then
                ROOTFS_DEV="$LINK_TARGET"
            else
                ROOTFS_DEV="/dev/$LINK_TARGET"
            fi

        elif [ -b "/dev/root" ]; then
            ROOTFS_DEV="/dev/root"
        else
            ROOTFS_DEV="/dev/mmcblk0p6"
        fi

        DEV_BASENAME=$(basename "$ROOTFS_DEV")
        if [ ! -f "/sys/class/block/$DEV_BASENAME/size" ]; then
            return 1
        fi

        echo "STORAGE INIT: eMMC Reuse RootFS $DEV_BASENAME Partition Tail Space."

        TOTAL_SECTORS=$(cat "/sys/class/block/$DEV_BASENAME/size")
        TOTAL_BYTES=$((TOTAL_SECTORS * 512))
        SQUASHFS_BYTES=$(hexdump -s 40 -n 8 -e '"%u"' "$ROOTFS_DEV" 2>/dev/null)

        if [ -z "$SQUASHFS_BYTES" ] || [ "$SQUASHFS_BYTES" -le 0 ]; then
            return 1
        fi

        PAGE_ALIGN=$((4096 - 1))
        START_OFFSET=$(((SQUASHFS_BYTES + PAGE_ALIGN) & ~PAGE_ALIGN))
        REMAINING_BYTES=$((TOTAL_BYTES - START_OFFSET))

        if [ "$REMAINING_BYTES" -gt 4194304 ]; then
            losetup -d "$LOOP_DEV" 2>/dev/null
            losetup -o "$START_OFFSET" "$LOOP_DEV" "$ROOTFS_DEV"
	    modprobe ext4
            if [ $? -eq 0 ]; then
                mount -t ext4 -o noatime,nodiratime "$LOOP_DEV" "$TARGET_MNT" 2>/dev/null
                if [ $? -eq 0 ]; then
                    return 0
                else
                    if [ -x "/sbin/mkfs.ext4" ] || [ -x "/usr/sbin/mkfs.ext4" ]; then
                        mkfs.ext4 -F -m 0 "$LOOP_DEV"
                        mount -t ext4 -o noatime,nodiratime "$LOOP_DEV" "$TARGET_MNT"
                        [ $? -eq 0 ] && return 0
                    fi
                fi
            fi
        fi
    fi
    return 1
}

# Resolve the UBI volume used in "raw UBI volume" mode.
# Prefers the volume selected at load time, otherwise re-detects it.
get_ubi_raw_dev() {
    if [ -s /tmp/.storage_ubi_dev ]; then
        cat /tmp/.storage_ubi_dev
        return 0
    fi
    for name_node in /sys/class/ubi/ubi0_*/name; do
        [ -f "$name_node" ] || continue
        case "$(cat "$name_node")" in
            storage|ubi_data|rootfs_data)
                echo "/dev/$(basename "$(dirname "$name_node")")"
                return 0
                ;;
        esac
    done
    return 1
}

# Resolve active storage type based on runtime environment
get_media_type() {
    if grep -q "$TARGET_MNT" /proc/mounts; then
        if grep "$TARGET_MNT" /proc/mounts | grep -q "ubifs"; then
            MEDIA_TYPE="UBIFS"
        else
            MEDIA_TYPE="EMMC_ROOTFS_TAIL"
        fi
    elif [ -f /tmp/.storage_is_nand_mtd ] || grep -q '"Storage"' /proc/mtd; then
        MEDIA_TYPE="NAND_MTD"
        MTD_PART_NAME="Storage"
    elif [ -f /tmp/.storage_is_ubi_raw ] || [ -n "$(get_ubi_raw_dev 2>/dev/null)" ]; then
        MEDIA_TYPE="UBI_RAW"
    else
        MEDIA_TYPE="RAM_ONLY"
    fi
}

# =================================================================
# OPERATIONS: Restore, Save and Clear
# =================================================================
func_restore() {
    funcs_lock
    
    # Run the mount pipeline first to establish persistent channel
    mount_persistent_media
    get_media_type
    echo "STORAGE MAIN: Active storage media resolved to [$MEDIA_TYPE]"

    rm -rf "$STORAGE_DIR"/*
    mkdir -p "$STORAGE_DIR"

    case "$MEDIA_TYPE" in
        "UBIFS"|"EMMC_ROOTFS_TAIL")
            if [ -f "$FILE_BACKUP_PATH" ]; then
                tar -xjf "$FILE_BACKUP_PATH" -C "$STORAGE_DIR"
                echo "STORAGE MAIN: Restore from $MEDIA_TYPE file successful."
            else
                echo "STORAGE MAIN: No configuration backup file found."
            fi
            ;;
        "NAND_MTD")
            mtd_part_index=$(grep -i '"'"$MTD_PART_NAME"'"' /proc/mtd | cut -d: -f1 | sed 's/mtd//')
            if [ ! -z "$mtd_part_index" ] && [ -b "/dev/mtdblock$mtd_part_index" ]; then
                dd if=/dev/mtdblock$mtd_part_index of="$TMP_BZ2_FILE" 2>/dev/null
                tar -xjf "$TMP_BZ2_FILE" -C "$STORAGE_DIR" 2>/dev/null
                rm -f "$TMP_BZ2_FILE"
                echo "STORAGE MAIN: Restore from raw NAND MTD successful."
            fi
            ;;
        "UBI_RAW")
            ubi_raw_dev="$(get_ubi_raw_dev 2>/dev/null)"
            if [ -n "$ubi_raw_dev" ]; then
                dd if="$ubi_raw_dev" of="$TMP_BZ2_FILE" bs=4096 2>/dev/null
                if [ -s "$TMP_BZ2_FILE" ]; then
                    tar -xjf "$TMP_BZ2_FILE" -C "$STORAGE_DIR" 2>/dev/null
                    echo "STORAGE MAIN: Restore from raw UBI volume $ubi_raw_dev successful."
                else
                    echo "STORAGE MAIN: No configuration backup file found."
                fi
                rm -f "$TMP_BZ2_FILE"
            else
                echo "STORAGE MAIN WARNING: No usable UBI volume found."
            fi
            ;;
        *)
            echo "STORAGE MAIN WARNING: Operating in volatile RAM-only mode."
            ;;
    esac

    # Prevent boot loop due to empty configuration directory
    [ -d /etc_ro/storage ] && cp -rf /etc_ro/storage/* "$STORAGE_DIR/" 2>/dev/null
    
    # Re-link HTTPS certifications for Padavan web server compatibility
    #if [ "$CONFIG_FIRMWARE_INCLUDE_HTTPS" = "y" ] ; then
        #[ ! -d "$STORAGE_DIR/https" ] && mkdir -p "$STORAGE_DIR/https"
        #[ ! -f "$STORAGE_DIR/https/server.crt" ] && ln -sf /etc_ro/server.crt "$STORAGE_DIR/https/server.crt"
        #[ ! -f "$STORAGE_DIR/https/server.key" ] && ln -sf /etc_ro/server.key "$STORAGE_DIR/https/server.key"
    #fi

    funcs_unlock
}

func_save() {
    funcs_lock
    get_media_type
    
    rm -f "$TMP_BZ2_FILE"
    cd "$STORAGE_DIR" || exit 1

    TMP_LIST="/tmp/storage_vols.txt"
    find . -type f ! -name "*.tmp" ! -path "./https/server.crt" ! -path "./https/server.key" > "$TMP_LIST" 2>/dev/null
    find . -type d ! -path "./https" >> "$TMP_LIST" 2>/dev/null
    if [ -s "$TMP_LIST" ]; then
        tar -cjf "$TMP_BZ2_FILE" -T "$TMP_LIST" 2>/dev/null
    fi
    rm -f "$TMP_LIST"


    if [ ! -f "$TMP_BZ2_FILE" ]; then
        funcs_unlock
        return 1
    fi

    case "$MEDIA_TYPE" in
        "UBIFS"|"EMMC_ROOTFS_TAIL")
            cp -f "$TMP_BZ2_FILE" "$FILE_BACKUP_PATH" && sync
            echo "STORAGE MAIN: Configuration backup saved to $MEDIA_TYPE filesystem."
            ;;
        "NAND_MTD")
            if [ -x "/sbin/mtd_write" ]; then
                mtd_write write "$TMP_BZ2_FILE" "$MTD_PART_NAME"
                echo "STORAGE MAIN: Configuration saved to raw NAND MTD."
            fi
            ;;
        "UBI_RAW")
            ubi_raw_dev="$(get_ubi_raw_dev 2>/dev/null)"
            if [ -n "$ubi_raw_dev" ] && [ -x /sbin/ubiupdatevol ]; then
                if /sbin/ubiupdatevol "$ubi_raw_dev" "$TMP_BZ2_FILE"; then
                    sync
                    echo "STORAGE MAIN: Configuration saved to raw UBI volume $ubi_raw_dev."
                else
                    echo "STORAGE MAIN ERROR: Failed to write to $ubi_raw_dev!"
                fi
            else
                echo "STORAGE MAIN ERROR: No usable UBI volume / ubiupdatevol missing!"
            fi
            ;;
        *)
            echo "STORAGE MAIN ERROR: No persistent writable media found to commit changes!"
            ;;
    esac
    
    rm -f "$TMP_BZ2_FILE"
    funcs_unlock
}

func_clear() {
    funcs_lock
    get_media_type
    
    case "$MEDIA_TYPE" in
        "UBIFS"|"EMMC_ROOTFS_TAIL")
            rm -f "$FILE_BACKUP_PATH" && sync
            ;;
        "NAND_MTD")
            [ -x "/sbin/mtd_write" ] && mtd_write erase "$MTD_PART_NAME" 2>/dev/null
            ;;
        "UBI_RAW")
            ubi_raw_dev="$(get_ubi_raw_dev 2>/dev/null)"
            if [ -n "$ubi_raw_dev" ] && [ -x /sbin/ubiupdatevol ]; then
                /sbin/ubiupdatevol "$ubi_raw_dev" -t 2>/dev/null && sync
            fi
            ;;
    esac

    rm -rf "$STORAGE_DIR"/*
    [ -d /etc_ro/storage ] && cp -rf /etc_ro/storage/* "$STORAGE_DIR/" 2>/dev/null
    
    echo "STORAGE MAIN: Factory storage reset executed."
    funcs_unlock
}

# =================================================================
# SCRIPT ENTRYPOINT
# =================================================================
case "$1" in
    load|restore) func_restore ;;
    save) func_save ;;
    clear|reset) func_clear ;;
    *) echo "Usage: $0 {load|save|clear}"; exit 1 ;;
esac
exit $?

