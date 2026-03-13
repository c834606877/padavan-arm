#!/bin/bash
set -e
curl -sS https://dl.yarnpkg.com/debian/pubkey.gpg | gpg --dearmor > /usr/share/keyrings/yarn-archive-keyring.gpg

apt update

apt install -y libtool-bin  autopoint gettext &

apt install -y groff gperf autoconf-archive yodl gtk-doc-tools  python3-docutils python3-setuptools python3-dev libusb-dev libxml-parser-perl &

apt install -y fakeroot flex bc help2man libltdl-dev texinfo kmod 

