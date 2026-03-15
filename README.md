# padavan-arm

This is an ARM based padavan porting version. The original is from https://github.com/hanwckf/padavan-4.4.git
The kernel version is 5.15.167, which is forked from openwrt 23.05.5 and added MT7981 patchs. 
Current, only support QEMU for dev.

__Disabled Path__

- mips-toolchain
- trunk/libc/uclib
- trunk/linux-4.4.198

__Inctroduced Path__

- aarch64-gcc-musl
- trunk/linux-5.15.167

__Build__

* Based on ubuntu-20.04, and install below packages.
* Suggest use Docker with ubuntu-20.04 base.

```
ln -snf /usr/share/zoneinfo/$CONTAINER_TIMEZONE /etc/localtime && echo $CONTAINER_TIMEZONE > /etc/timezone

apt-get update && apt-get install -y texinfo libtool-bin gperf python3-docutils autopoint gettext
apt-get install -y sudo time git-core subversion build-essential g++ bash make \
        libssl-dev patch libncurses5 libncurses5-dev zlib1g-dev gawk \
        flex gettext wget unzip xz-utils python python-distutils-extra \
        python3 python3-distutils-extra python3-setuptools swig rsync curl \
        libsnmp-dev liblzma-dev libpam0g-dev cpio rsync gcc-multilib bc vim \
        cmake  bison libnfnetlink-dev libnfnetlink0 kmod libelf-dev help2man \
        libthread-queue-any-perl python3-dev xsltproc \
        libboost-dev  libxml-parser-perl   libusb-dev  \
        groff automake-1.15

```


``` bash

cd trunk
fakeroot ./build_firmware_modify QEMU
fakeroot ./build_firmware_modify RAX3000M

```


__Run on QEMU__

``` bash
qemu-system-aarch64 -m 512 -cpu cortex-a53 -M virt-2.9  -kernel ~/workdir/Image.gz  -D qemu_a53.log -nographic -initrd ~/workdir/ramdisk -append "root=/dev/ram0" -device virtio-net-pci,netdev=net0 -netdev user,id=net0,hostfwd=tcp:127.0.0.1:8800-10.0.2.15:80

Enable eth0:

ip link set eth0 up
ip addr add 10.0.2.15/24 dev eth0
ip route add default via 10.0.2.2 dev eth0

# check the virt gateway
ping 10.0.2.2

```


__Run on RAX3000M__


This part is not completed. check the boot log.

1. Flash the fip with mtk_uartboot

fip and bl2 picked from https://downloads.immortalwrt.org/releases/23.05.0/targets/mediatek/filogic/

You can find the binaries from RAX3000M_flash_bins folder.

```
./mtk_uartboot -s /dev/<uart_port> --brom-load-baudrate 115200 --bl2-load-baudrate 115200 -p mt7981-ram-ddr4-bl2.bin -a -f mt7981-cmcc_rax3000m-emmc-fip.bin

```

2. Flash the "sysupgrade_cmcc_rax3000m-emmc-ubootmod.bin" to the emmc board through uboot.

__Partion layout with the Rax3000m build__

```
MT7981> mmc part

Partition Map for MMC device 0  --   Partition Type: EFI

Part	Start LBA	End LBA		Name
	Attributes
	Type GUID
	Partition GUID
  1	0x00002000	0x000023ff	"u-boot-env"
	attrs:	0x0000000000000000
	type:	0fc63daf-8483-4772-8e79-3d69d8477de4
		(linux)
	guid:	493dcd1a-59c0-11ee-b4d0-b083fea0360d
  2	0x00002400	0x000033ff	"factory"
	attrs:	0x0000000000000000
	type:	0fc63daf-8483-4772-8e79-3d69d8477de4
		(linux)
	guid:	493ddcce-59c0-11ee-b4d0-b083fea0360d
  3	0x00003400	0x000053ff	"fip"
	attrs:	0x0000000000000000
	type:	0fc63daf-8483-4772-8e79-3d69d8477de4
		(linux)
	guid:	493de9f8-59c0-11ee-b4d0-b083fea0360d
  4	0x00016000	0x0001ffff	"config"
	attrs:	0x0000000000000000
	type:	0fc63daf-8483-4772-8e79-3d69d8477de4
		(linux)
	guid:	493df68c-59c0-11ee-b4d0-b083fea0360d
  5	0x00020000	0x0003ffff	"kernel"
	attrs:	0x0000000000000000
	type:	0fc63daf-8483-4772-8e79-3d69d8477de4
		(linux)
	guid:	493e030c-59c0-11ee-b4d0-b083fea0360d
  6	0x00040000	0x0016bfff	"rootfs"
	attrs:	0x0000000000000000
	type:	0fc63daf-8483-4772-8e79-3d69d8477de4
		(linux)
	guid:	493e0f82-59c0-11ee-b4d0-b083fea0360d


```



# padavan-4.4 #

This project is based on original rt-n56u with latest mtk 4.4.198 kernel, which is fetch from D-LINK GPL code.

- Features
  - Based on 4.4.198 Linux kernel
  - Support MT7621 based devices
  - Support MT7615D/MT7615N/MT7915D wireless chips
  - Support raeth and mt7621 hwnat with legency driver
  - Support qca shortcut-fe
  - Support IPv6 NAT based on netfilter
  - Support WireGuard integrated in kernel
  - Support fullcone NAT (by Chion82)
  - Support LED&GPIO control via sysfs

- WIP
  - 802.11kvr and mtkiappd roam functions
  - IPTV related functions

- Supported devices
  - CR660x
  - JCG-Q20
  - JCG-AC860M
  - JCG-836PRO
  - JCG-Y2
  - DIR-878
  - DIR-882
  - K2P
  - K2P-USB
  - NETGEAR-BZV
  - MR2600
  - MI-R3P
  - XY-C1

- Compilation step
  - Install dependencies
    ```sh
    # Debian/Ubuntu
    sudo apt install unzip libtool-bin curl cmake gperf gawk flex bison nano xxd \
        fakeroot kmod cpio git python3-docutils gettext automake autopoint \
        texinfo build-essential help2man pkg-config zlib1g-dev libgmp3-dev \
        libmpc-dev libmpfr-dev libncurses5-dev libltdl-dev wget libc-dev-bin

    # Archlinux/Manjaro
    sudo pacman -Syu --needed git base-devel cmake gperf ncurses libmpc \
            gmp python-docutils vim rpcsvc-proto fakeroot cpio help2man

    # Alpine
    sudo apk add make gcc g++ cpio curl wget nano xxd kmod \
        pkgconfig rpcgen fakeroot ncurses bash patch \
        bsd-compat-headers python2 python3 zlib-dev \
        automake gettext gettext-dev autoconf bison \
        flex coreutils cmake git libtool gawk sudo
    ```
  - Clone source code
    ```sh
    git clone https://github.com/hanwckf/padavan-4.4.git
    ```
  - Prepare toolchain
    ```sh
    cd padavan-4.4/toolchain-mipsel

    # (Recommend) Download prebuilt toolchain for x86_64 or aarch64 host
    ./dl_toolchain.sh

    # or build toolchain with crosstool-ng
    # ./build_toolchain
    ```
  - Modify template file and start compiling
    ```sh
    cd padavan-4.4/trunk

    # (Optional) Modify template file
    # nano configs/templates/K2P.config

    # Start compiling
    fakeroot ./build_firmware_modify K2P

    # To build firmware for other devices, clean the tree after previous build
    ./clear_tree
    ```

- Manuals
  - Controlling GPIO and LEDs via sysfs
  - How to use NAND RWFS partition
  - How to use IPv6 NAT and fullcone NAT
  - How to add new device support with device tree
