#!/bin/sh

# install-debug-info-for-buildid.sh -- Helper script for libbacktrace library
# testing.
# Copyright (C) 2019-2022 Free Software Foundation, Inc.

# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met:

#     (1) Redistributions of source code must retain the above copyright
#     notice, this list of conditions and the following disclaimer.

#     (2) Redistributions in binary form must reproduce the above copyright
#     notice, this list of conditions and the following disclaimer in
#     the documentation and/or other materials provided with the
#     distribution.

#     (3) The name of the author may not be used to
#     endorse or promote products derived from this software without
#     specific prior written permission.

# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
# WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
# INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
# (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
# SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
# STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
# IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.

# Extract build-id from src, and copy debug info of src to
# $build_id_dir/aa/bb...zz.debug.

set -e

sed=/home/user/workdir/openwrt-fs/openwrt-23.05.5/staging_dir/host/bin/sed
awk=gawk
grep=/home/user/workdir/openwrt-fs/openwrt-23.05.5/staging_dir/host/bin/grep
objcopy=objcopy
readelf=readelf
mkdir_p="/usr/bin/mkdir -p"

build_id_dir="$1"
src="$2"

buildid=$(LANG=C $readelf -n $src \
	      | $grep "Build ID" \
	      | $awk '{print $3}')

prefix=$(echo $buildid \
	     | $sed 's/^\(.\{2\}\).*/\1/')

remainder=$(echo $buildid \
		| $sed 's/^.\{2\}//')

dir=$build_id_dir/$prefix
dst=$dir/$remainder.debug

$mkdir_p $dir

$objcopy --only-keep-debug $src $dst
