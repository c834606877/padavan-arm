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

cd truck
fakeroot ./build_firmware_modify QEMU

```


__Run on QEMU__

``` bash
qemu-system-aarch64 -m 512 -cpu cortex-a53 -M virt-2.9  -kernel ~/workdir/Image.gz  -D qemu_a53.log -nographic -initrd ~/workdir/ramdisk -append "root=/dev/ram0" -device virtio-net-pci,netdev=net0 -netdev user,id=net0

Enable eth0:

ip link set eth0 up
ip addr add 10.0.2.15/24 dev eth0
ip route add default via 192.0.2.2 dev eth0

# check the virt gateway
ping 10.0.2.2

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
