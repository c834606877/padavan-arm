# Makefile for c++tools
#   Copyright (C) 2020-2022 Free Software Foundation, Inc.
#
# This file is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
# 
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program; see the file COPYING3.  If not see
# <http://www.gnu.org/licenses/>.

srcdir := /home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/c++tools
prefix := /home/user/workdir/openwrt-fs/openwrt-23.05.5/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl
bindir := ${exec_prefix}/bin
libexecdir := ${exec_prefix}/libexec
target_noncanonical := aarch64-openwrt-linux-musl
gcc_version := $(shell cat $(srcdir)/../gcc/BASE-VER)
libexecsubdir := $(libexecdir)/gcc/$(target_noncanonical)/$(gcc_version)
INSTALL_PROGRAM := /home/user/workdir/openwrt-fs/openwrt-23.05.5/staging_dir/host/bin/install -c
INSTALL_STRIP_PROGRAM := $(srcdir)/../install-sh -c -s
AUTOCONF := autoconf
AUTOHEADER := autoheader
CXX := g++
CXXFLAGS := -O2 -I/home/user/workdir/openwrt-fs/openwrt-23.05.5/staging_dir/host/include  -pipe    
PIEFLAG := 
CXXOPTS := $(CXXFLAGS) $(PIEFLAG) -fno-exceptions -fno-rtti
LDFLAGS := -static-libstdc++ -static-libgcc 
exeext := 
LIBIBERTY := ../libiberty/libiberty.a
NETLIBS := 
VERSION.O := ../gcc/version.o

all::

mostlyclean::
	rm -f $(MAPPER.O)

clean::
	rm -f g++-mapper-server$(exeext)

distclean::
	rm -f config.log config.status config.h

maintainer-clean::

install::

check::
installcheck::
dvi::
pdf::
html::
info::
install-info::
install-pdf::
install-dvi::
install-man::
install-html::

install-strip: override INSTALL_PROGRAM = $(INSTALL_STRIP_PROGRAM)
ifneq ($(STRIP),)
install-strip: STRIPPROG = $(STRIP)
export STRIPPROG
endif
install-strip: install

vpath %.cc $(srcdir)
vpath %.in $(srcdir)
.SUFFIXES:
.SUFFIXES: .cc .o

# Per-source & per-directory compile flags (warning: recursive)
SRC_CXXFLAGS = $(CXXFLAGS$(patsubst $(srcdir)%,%,$1)) \
	$(if $(filter-out $(srcdir)/,$1),\
	  $(call $0,$(dir $(patsubst %/,%,$1))))

%.o: %.cc
	$(CXX) $(strip $(CXXOPTS) $(call SRC_CXXFLAGS,$<) $(CXXINC)) \
	  -MMD -MP -MF ${@:.o=.d} -c -o $@ $<

ifeq (yes,yes)

all::g++-mapper-server$(exeext)

MAPPER.O := server.o resolver.o
CODYLIB = ../libcody/libcody.a
CXXINC += -I$(srcdir)/../libcody -I$(srcdir)/../include -I$(srcdir)/../gcc -I. -I../gcc
g++-mapper-server$(exeext): $(MAPPER.O) $(CODYLIB)
	+$(CXX) $(LDFLAGS) $(PIEFLAG) -o $@ $^ $(LIBIBERTY) $(NETLIBS)

# copy to gcc dir so tests there can run
all::../gcc/g++-mapper-server$(exeext)

../gcc/g++-mapper-server$(exeext): g++-mapper-server$(exeext)
	$(INSTALL) $< $@

install::
	$(SHELL) $(srcdir)/../mkinstalldirs $(DESTDIR)$(libexecsubdir)
	$(INSTALL_PROGRAM) g++-mapper-server$(exeext) $(DESTDIR)$(libexecsubdir)
endif

ifneq ($(MAINTAINER),)
override MAINTAINER += $1
endif
ifeq (,yes)
MAINTAINER = $2
else
MAINTAINER = \# --enable-maintainer-mode to rebuild $1, or make MAINTAINER=touch
endif

all:: Makefile

Makefile: $(srcdir)/Makefile.in config.status
	$(SHELL) ./config.status Makefile

$(srcdir)/configure: $(srcdir)/configure.ac
	$(call MAINTAINER,$@,cd $(@D) && $(AUTOCONF) -W all,error)

$(srcdir)/config.h.in: $(srcdir)/configure.ac
	$(call MAINTAINER,$@,cd $(@D) && $(AUTOHEADER) -f -W all,error)

config.h: config.status config.h.in
	./$< --header=$@
	touch $@

config.status: $(srcdir)/configure $(srcdir)/config.h.in
	if test -x $@; then ./$@ -recheck; else $< @configure_args@; fi

.PHONY: all check clean distclean maintainer-clean

-include $(MAPPER.O:.o=.d)
