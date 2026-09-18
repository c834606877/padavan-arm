#!/bin/bash
###########################################################################
# Xiaomi AX3000T (RD03) - one-shot build helper for the padavan-arm tree
#
#   ./build_ax3000t.sh            # preflight checks, then build
#   ./build_ax3000t.sh --check    # only run the preflight checks
#   ./build_ax3000t.sh --clean    # clear_tree_simple first, then build
#
# Must run on Linux (Ubuntu 20.04 is what this tree targets; WSL2 works).
# The build needs fakeroot plus the aarch64 toolchain that ships next to
# the trunk directory - see README.AX3000T.md section 5 for the details.
###########################################################################

set -u

HERE="$(cd "$(dirname "$0")" && pwd)"
TRUNK="$HERE/trunk"
PRODUCT="AX3000T"
PRODUCT_ID="AX3000T"
KERNEL_ID="5.15.167"
BOARD_COMP="xiaomi_ax3000t-ubootmod"
BOARD_DT="linux-5.15.167/arch/arm64/boot/dts/mediatek/mt7981b-xiaomi-ax3000t-ubootmod"
DTSMK="linux-5.15.167/arch/arm64/boot/dts/mediatek/Makefile"
TOOLDIR="toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl"

MODE="build"
for arg in "$@"; do
    case "$arg" in
        --check) MODE="check" ;;
        --clean) MODE="clean" ;;
        -h|--help) sed -n '2,12p' "$0" | sed 's/^# \{0,1\}//'; exit 0 ;;
        *) echo "unknown option: $arg (use --check / --clean / --help)"; exit 2 ;;
    esac
done

fail=0
ok()   { printf '  [ ok ]  %s\n' "$*"; }
bad()  { printf '  [FAIL]  %s\n' "$*"; fail=$((fail + 1)); }
warn() { printf '  [warn]  %s\n' "$*"; }

echo "=================================================================="
echo " padavan-arm  /  Xiaomi AX3000T  build helper"
echo " trunk : $TRUNK"
echo "=================================================================="

echo
echo "== 1. host & tools =="
if [ "$(uname -s 2>/dev/null)" != "Linux" ]; then
    bad "not a Linux host ('$(uname -s 2>/dev/null)') - the toolchain and fakeroot need Linux (use WSL2 or a VM)"
else
    ok "Linux: $(uname -r)"
fi

# Building on a Windows drive (WSL2 /mnt/c, /mnt/d, ...) is very slow and can
# fail on file permission / case sensitivity handling.  Copy the tree into the
# Linux filesystem for the build.
case "$HERE" in
    /mnt/[a-z]/*)
        warn "tree is on a Windows drive ($HERE)"
        warn "  WSL2 builds there are slow and may fail on permissions/case -"
        warn "  copy it first, e.g.:  cp -a '$HERE' ~/padavan-arm && cd ~/padavan-arm && ./build_ax3000t.sh"
        ;;
esac

# essential for this configuration - a missing one always fails the build
for t in fakeroot make gcc g++ patch tar bzip2; do
    if command -v "$t" >/dev/null 2>&1; then
        ok "tool: $t"
    else
        bad "tool missing: $t"
    fi
done
# nice to have - some optional packages/features use them
for t in awk rsync cpio bc flex bison perl python3 wget unzip xz pkg-config; do
    command -v "$t" >/dev/null 2>&1 || warn "tool missing: $t (needed by some optional packages)"
done

echo
echo "== 2. cross toolchain =="
TCGCC="$HERE/$TOOLDIR/bin/aarch64-openwrt-linux-musl-gcc"
if [ ! -f "$TCGCC" ]; then
    bad "toolchain missing: $TCGCC"
elif [ ! -x "$TCGCC" ]; then
    bad "toolchain present but NOT executable: $TCGCC"
    warn "  fix with:  chmod -R +x '$HERE/$TOOLDIR/bin'"
    warn "  (this also happens if the tree sits on a filesystem mounted noexec)"
else
    ok "found: $TOOLDIR/bin/aarch64-openwrt-linux-musl-gcc"
fi

echo
echo "== 3. AX3000T build inputs =="
for f in \
    "configs/templates/$PRODUCT.config" \
    "configs/boards/$PRODUCT/board.h" \
    "configs/boards/$PRODUCT/board.mk" \
    "configs/boards/$PRODUCT/kernel-$KERNEL_ID.config" \
    "$BOARD_DT.dts" \
    "vendors/RAX/config.arch" \
    "$DTSMK" ; do
    if [ -f "$TRUNK/$f" ]; then ok "$f"; else bad "missing: $f"; fi
done

if [ "${#PRODUCT_ID}" -le 12 ]; then
    ok "CONFIG_FIRMWARE_PRODUCT_ID '$PRODUCT_ID' fits the 12 char limit"
else
    bad "CONFIG_FIRMWARE_PRODUCT_ID '$PRODUCT_ID' is longer than 12 chars"
fi

if grep -q "dtb-.*+= $(basename "$BOARD_DT").dtb" "$TRUNK/$DTSMK" 2>/dev/null; then
    ok "dtb registered in $DTSMK"
else
    bad "$(basename "$BOARD_DT").dtb not registered in $DTSMK"
fi

tpl="$TRUNK/configs/templates/$PRODUCT.config"
check_kv() {
    if grep -q "^$1$" "$tpl" 2>/dev/null; then ok "$1"; else bad "$1 not set in $PRODUCT.config"; fi
}
check_kv "CONFIG_BOARD_COMP=$BOARD_COMP"
check_kv "CONFIG_FIRMWARE_PRODUCT_ID=\"$PRODUCT_ID\""
check_kv "CONFIG_FIRMWARE_FIT_WITH_ROOTFS=y"
check_kv "CONFIG_LINUXDIR=linux-$KERNEL_ID"
if grep -q "^CONFIG_BOARD_DT=.*$(basename "$BOARD_DT")\$" "$tpl" 2>/dev/null; then
    ok "CONFIG_BOARD_DT points at $(basename "$BOARD_DT")"
else
    bad "CONFIG_BOARD_DT does not point at $(basename "$BOARD_DT")"
fi

kcfg="$TRUNK/configs/boards/$PRODUCT/kernel-$KERNEL_ID.config"
for k in "CONFIG_BLK_DEV_RAM=y" "CONFIG_ARCH_MEDIATEK=y" "CONFIG_OF_EARLY_FLATTREE=y" \
         "CONFIG_MTD_SPI_NAND=y" "CONFIG_MTD_UBI=y" "CONFIG_MTD_UBI_BLOCK=y" \
         "CONFIG_NMBM=y" "CONFIG_NET_DSA_MT7530=y" "CONFIG_SQUASHFS=y" \
         "CONFIG_WATCHDOG_HANDLE_BOOT_ENABLED=y" "CONFIG_WATCHDOG_OPEN_TIMEOUT=0"; do
    if grep -q "^$k\$" "$kcfg" 2>/dev/null; then ok "kernel: $k"; else bad "kernel: $k missing"; fi
done

if grep -rq "BOARD_XIAOMI_AX3000T" "$TRUNK/configs/boards/$PRODUCT/board.mk" 2>/dev/null; then
    ok "board.mk defines -DBOARD_XIAOMI_AX3000T"
else
    bad "board.mk does not define -DBOARD_XIAOMI_AX3000T"
fi

echo
if [ "$fail" -ne 0 ]; then
    echo "== $fail check(s) FAILED - not starting the build =="
    echo "Install/repair first, then re-run. Host dependencies for Ubuntu 20.04:"
    echo "  sudo apt-get update && sudo apt-get install -y build-essential g++ gawk \\"
    echo "    autoconf automake gettext git-core subversion libtool-bin bison flex \\"
    echo "    libncurses5-dev zlib1g-dev libssl-dev bc rsync cpio unzip xz-utils \\"
    echo "    python3 swig libelf-dev texinfo gperf wget fakeroot"
    exit 1
fi

if [ "$MODE" = "check" ]; then
    echo "== preflight OK (--check: build not started) =="
    exit 0
fi

if [ "$MODE" = "clean" ]; then
    echo "== running clear_tree_simple (may take a while) =="
    ( cd "$TRUNK" && ./clear_tree_simple ) || { echo "clear_tree_simple failed"; exit 1; }
fi

echo
echo "== 4. building: fakeroot ./build_firmware_modify $PRODUCT =="
echo "   (first build takes a long time; log is both on screen and can be"
echo "    captured with:  ./build_ax3000t.sh 2>&1 | tee build.log)"
echo
cd "$TRUNK" || exit 1
fakeroot ./build_firmware_modify "$PRODUCT"
rc=$?

echo
echo "== 5. result =="
if [ "$rc" -ne 0 ]; then
    echo "BUILD FAILED (exit $rc). Most useful lines are usually the first"
    echo "compilation error in the log (search for 'Error' / 'error:')."
    exit "$rc"
fi

found=0
for f in images/sysupgrade_"$BOARD_COMP"_*.bin images/fit_"$BOARD_COMP"_*.itb; do
    [ -f "$TRUNK/$f" ] || continue
    found=1
    printf '  %10s  %s\n' "$(stat -c%s "$TRUNK/$f")" "$TRUNK/$f"
done
[ -f "$HOME/workdir/$BOARD_COMP.itb" ] && printf '  %10s  %s\n' \
    "$(stat -c%s "$HOME/workdir/$BOARD_COMP.itb")" "$HOME/workdir/$BOARD_COMP.itb"
if [ "$found" -eq 0 ]; then
    echo "  no sysupgrade/itb artifact found in $TRUNK/images - check the log above"
    exit 1
fi

echo
echo "== done =="
echo "Flash with the TFTP flow from README.AX3000T.md section 6.2 first:"
echo "  MT7981> tftpboot \$loadaddr \$bootfile && bootm \$loadaddr#config-1"
