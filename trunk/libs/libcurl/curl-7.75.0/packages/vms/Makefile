# Makefile.in generated by automake 1.16.3 from Makefile.am.
# packages/vms/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994-2020 Free Software Foundation, Inc.

# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.



am__is_gnu_make = { \
  if test -z '$(MAKELEVEL)'; then \
    false; \
  elif test -n '$(MAKE_HOST)'; then \
    true; \
  elif test -n '$(MAKE_VERSION)' && test -n '$(CURDIR)'; then \
    true; \
  else \
    false; \
  fi; \
}
am__make_running_with_option = \
  case $${target_option-} in \
      ?) ;; \
      *) echo "am__make_running_with_option: internal error: invalid" \
              "target option '$${target_option-}' specified" >&2; \
         exit 1;; \
  esac; \
  has_opt=no; \
  sane_makeflags=$$MAKEFLAGS; \
  if $(am__is_gnu_make); then \
    sane_makeflags=$$MFLAGS; \
  else \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        bs=\\; \
        sane_makeflags=`printf '%s\n' "$$MAKEFLAGS" \
          | sed "s/$$bs$$bs[$$bs $$bs	]*//g"`;; \
    esac; \
  fi; \
  skip_next=no; \
  strip_trailopt () \
  { \
    flg=`printf '%s\n' "$$flg" | sed "s/$$1.*$$//"`; \
  }; \
  for flg in $$sane_makeflags; do \
    test $$skip_next = yes && { skip_next=no; continue; }; \
    case $$flg in \
      *=*|--*) continue;; \
        -*I) strip_trailopt 'I'; skip_next=yes;; \
      -*I?*) strip_trailopt 'I';; \
        -*O) strip_trailopt 'O'; skip_next=yes;; \
      -*O?*) strip_trailopt 'O';; \
        -*l) strip_trailopt 'l'; skip_next=yes;; \
      -*l?*) strip_trailopt 'l';; \
      -[dEDm]) skip_next=yes;; \
      -[JT]) skip_next=yes;; \
    esac; \
    case $$flg in \
      *$$target_option*) has_opt=yes; break;; \
    esac; \
  done; \
  test $$has_opt = yes
am__make_dryrun = (target_option=n; $(am__make_running_with_option))
am__make_keepgoing = (target_option=k; $(am__make_running_with_option))
pkgdatadir = $(datadir)/curl
pkgincludedir = $(includedir)/curl
pkglibdir = $(libdir)/curl
pkglibexecdir = $(libexecdir)/curl
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-pc-linux-gnu
host_triplet = aarch64-unknown-linux-gnu
subdir = packages/vms
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/m4/ax_compile_check_sizeof.m4 \
	$(top_srcdir)/m4/curl-compilers.m4 \
	$(top_srcdir)/m4/curl-confopts.m4 \
	$(top_srcdir)/m4/curl-functions.m4 \
	$(top_srcdir)/m4/curl-openssl.m4 \
	$(top_srcdir)/m4/curl-override.m4 \
	$(top_srcdir)/m4/curl-reentrant.m4 $(top_srcdir)/m4/libtool.m4 \
	$(top_srcdir)/m4/ltoptions.m4 $(top_srcdir)/m4/ltsugar.m4 \
	$(top_srcdir)/m4/ltversion.m4 $(top_srcdir)/m4/lt~obsolete.m4 \
	$(top_srcdir)/m4/xc-am-iface.m4 \
	$(top_srcdir)/m4/xc-cc-check.m4 \
	$(top_srcdir)/m4/xc-lt-iface.m4 \
	$(top_srcdir)/m4/xc-translit.m4 \
	$(top_srcdir)/m4/xc-val-flgs.m4 \
	$(top_srcdir)/m4/zz40-xc-ovr.m4 \
	$(top_srcdir)/m4/zz50-xc-ovr.m4 \
	$(top_srcdir)/m4/zz60-xc-ovr.m4 $(top_srcdir)/acinclude.m4 \
	$(top_srcdir)/configure.ac
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
DIST_COMMON = $(srcdir)/Makefile.am $(am__DIST_COMMON)
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = $(top_builddir)/lib/curl_config.h
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
AM_V_P = $(am__v_P_$(V))
am__v_P_ = $(am__v_P_$(AM_DEFAULT_VERBOSITY))
am__v_P_0 = false
am__v_P_1 = :
AM_V_GEN = $(am__v_GEN_$(V))
am__v_GEN_ = $(am__v_GEN_$(AM_DEFAULT_VERBOSITY))
am__v_GEN_0 = @echo "  GEN     " $@;
am__v_GEN_1 = 
AM_V_at = $(am__v_at_$(V))
am__v_at_ = $(am__v_at_$(AM_DEFAULT_VERBOSITY))
am__v_at_0 = @
am__v_at_1 = 
SOURCES =
DIST_SOURCES =
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
am__tagged_files = $(HEADERS) $(SOURCES) $(TAGS_FILES) $(LISP)
am__DIST_COMMON = $(srcdir)/Makefile.in
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} '/home/user/workdir/openwrt-fs/padavan-arm/trunk/libs/libcurl/curl-7.75.0/missing' aclocal-1.16
AMTAR = $${TAR-tar}
AM_DEFAULT_VERBOSITY = 0
AR = /home/user/workdir/openwrt-fs/padavan-arm/trunk/../toolchain-aarch64_cortex-a53_gcc-12.3.0_musl//toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/bin/aarch64-openwrt-linux-musl-ar
AR_FLAGS = cr
AS = /home/user/workdir/openwrt-fs/padavan-arm/trunk/../toolchain-aarch64_cortex-a53_gcc-12.3.0_musl//toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/bin/aarch64-openwrt-linux-musl-as -march=armv8-a -mfix-cortex-a53-843419
AUTOCONF = ${SHELL} '/home/user/workdir/openwrt-fs/padavan-arm/trunk/libs/libcurl/curl-7.75.0/missing' autoconf
AUTOHEADER = ${SHELL} '/home/user/workdir/openwrt-fs/padavan-arm/trunk/libs/libcurl/curl-7.75.0/missing' autoheader
AUTOMAKE = ${SHELL} '/home/user/workdir/openwrt-fs/padavan-arm/trunk/libs/libcurl/curl-7.75.0/missing' automake-1.16
AWK = gawk
BLANK_AT_MAKETIME = 
CC = /home/user/workdir/openwrt-fs/padavan-arm/trunk/../toolchain-aarch64_cortex-a53_gcc-12.3.0_musl//toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/bin/aarch64-openwrt-linux-musl-gcc -march=armv8-a -mfix-cortex-a53-843419
CCDEPMODE = depmode=gcc3
CFLAGS = -Os -fomit-frame-pointer -pipe -DEMBED -isystem /home/user/workdir/openwrt-fs/padavan-arm/trunk/stage/include -Dlinux -D__linux__ -Dunix -Wall -Wno-trigraphs -Wno-strict-aliasing -Wno-format-security -fno-tree-slsr -fno-aggressive-loop-optimizations -Wno-pointer-sign -Wno-unused -ffunction-sections -fdata-sections -Werror-implicit-function-declaration -Wno-system-headers -Wenum-conversion
CFLAG_CURL_SYMBOL_HIDING = -fvisibility=hidden
CONFIGURE_OPTIONS = " '--prefix=/home/user/workdir/openwrt-fs/padavan-arm/trunk/stage' '--enable-static' '--enable-shared' '--enable-ipv6' '--disable-gopher' '--disable-ldap' '--disable-ldaps' '--disable-rtsp' '--disable-telnet' '--disable-tftp' '--disable-smtp' '--disable-pop3' '--disable-imap' '--disable-sspi' '--disable-dict' '--disable-ares' '--disable-debug' '--disable-curldebug' '--disable-manual' '--disable-verbose' '--disable-tls-srp' '--disable-libcurl-option' '--disable-threaded-resolver' '--without-gnutls' '--without-ca-bundle' '--without-libidn' '--without-libssh2' '--without-krb4' '--without-nss' '--with-random=/dev/urandom' '--with-zlib=/home/user/workdir/openwrt-fs/padavan-arm/trunk/stage' '--with-ssl=/home/user/workdir/openwrt-fs/padavan-arm/trunk/stage' '--host=aarch64-linux' '--build=x86_64-pc-linux-gnu' 'build_alias=x86_64-pc-linux-gnu' 'host_alias=aarch64-linux' 'CC=/home/user/workdir/openwrt-fs/padavan-arm/trunk/../toolchain-aarch64_cortex-a53_gcc-12.3.0_musl//toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/bin/aarch64-openwrt-linux-musl-gcc -march=armv8-a -mfix-cortex-a53-843419' 'CFLAGS=-Os -fomit-frame-pointer -pipe  -DEMBED -I/home/user/workdir/openwrt-fs/padavan-arm/trunk/stage/include -Dlinux -D__linux__ -Dunix -Wall -Wno-trigraphs -Wno-strict-aliasing -Wno-format-security -fno-tree-slsr -fno-aggressive-loop-optimizations -Wno-pointer-sign -Wno-unused -ffunction-sections -fdata-sections' 'LDFLAGS=-L/home/user/workdir/openwrt-fs/padavan-arm/trunk/stage/lib -Wl,--gc-sections -Wl,-rpath-link=/home/user/workdir/openwrt-fs/padavan-arm/trunk/stage/lib -Wl,-rpath-link=/home/user/workdir/openwrt-fs/padavan-arm/trunk/stage/lib'"
CPP = /home/user/workdir/openwrt-fs/padavan-arm/trunk/../toolchain-aarch64_cortex-a53_gcc-12.3.0_musl//toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/bin/aarch64-openwrt-linux-musl-gcc -march=armv8-a -mfix-cortex-a53-843419 -E
CPPFLAGS = -isystem /home/user/workdir/openwrt-fs/padavan-arm/trunk/stage/include -isystem /home/user/workdir/openwrt-fs/padavan-arm/trunk/stage/include
CPPFLAG_CURL_STATICLIB = 
CURLVERSION = 7.75.0
CURL_CA_BUNDLE = 
CURL_CFLAG_EXTRAS = 
CURL_DISABLE_DICT = 1
CURL_DISABLE_FILE = 
CURL_DISABLE_FTP = 
CURL_DISABLE_GOPHER = 1
CURL_DISABLE_HTTP = 
CURL_DISABLE_IMAP = 1
CURL_DISABLE_LDAP = 1
CURL_DISABLE_LDAPS = 1
CURL_DISABLE_MQTT = 
CURL_DISABLE_POP3 = 1
CURL_DISABLE_PROXY = 
CURL_DISABLE_RTSP = 1
CURL_DISABLE_SMB = 
CURL_DISABLE_SMTP = 1
CURL_DISABLE_TELNET = 1
CURL_DISABLE_TFTP = 1
CURL_LT_SHLIB_VERSIONED_FLAVOUR = 
CURL_NETWORK_AND_TIME_LIBS = 
CURL_NETWORK_LIBS = 
CURL_WITH_MULTI_SSL = 
CYGPATH_W = echo
DEFAULT_SSL_BACKEND = no
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DLLTOOL = false
DSYMUTIL = 
DUMPBIN = 
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /usr/bin/grep -E
ENABLE_SHARED = yes
ENABLE_STATIC = yes
EXEEXT = 
FGREP = /usr/bin/grep -F
FISH_FUNCTIONS_DIR = ${prefix}/share/fish/vendor_completions.d
GCOV = 
GREP = /usr/bin/grep
HAVE_BROTLI = 
HAVE_GNUTLS_SRP = 
HAVE_LDAP_SSL = 
HAVE_LIBZ = 1
HAVE_OPENSSL_SRP = 
HAVE_PROTO_BSDSOCKET_H = 
HAVE_ZSTD = 
IDN_ENABLED = 
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
IPV6_ENABLED = 1
LCOV = 
LD = /home/user/workdir/openwrt-fs/padavan-arm/trunk/../toolchain-aarch64_cortex-a53_gcc-12.3.0_musl//toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/bin/aarch64-openwrt-linux-musl-ld
LDFLAGS = -L/home/user/workdir/openwrt-fs/padavan-arm/trunk/stage/lib -Wl,--gc-sections -Wl,-rpath-link=/home/user/workdir/openwrt-fs/padavan-arm/trunk/stage/lib -Wl,-rpath-link=/home/user/workdir/openwrt-fs/padavan-arm/trunk/stage/lib -L/home/user/workdir/openwrt-fs/padavan-arm/trunk/stage/lib -L/home/user/workdir/openwrt-fs/padavan-arm/trunk/stage/lib
LIBCURL_LIBS = -lssl -lcrypto -lssl -lcrypto -lz
LIBCURL_NO_SHARED = 
LIBMETALINK_CPPFLAGS = 
LIBMETALINK_LDFLAGS = 
LIBMETALINK_LIBS = 
LIBOBJS = 
LIBS = -lssl -lcrypto -lssl -lcrypto -lz
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIPO = 
LN_S = ln -s
LTLIBOBJS = 
LT_SYS_LIBRARY_PATH = 
MAINT = #
MAKEINFO = ${SHELL} '/home/user/workdir/openwrt-fs/padavan-arm/trunk/libs/libcurl/curl-7.75.0/missing' makeinfo
MANIFEST_TOOL = :
MANOPT = -man
MKDIR_P = /usr/bin/mkdir -p
NM = /home/user/workdir/openwrt-fs/padavan-arm/trunk/../toolchain-aarch64_cortex-a53_gcc-12.3.0_musl//toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/bin/aarch64-openwrt-linux-musl-nm
NMEDIT = 
NROFF = /usr/bin/nroff
NSS_LIBS = 
OBJDUMP = objdump
OBJEXT = o
OTOOL = 
OTOOL64 = 
PACKAGE = curl
PACKAGE_BUGREPORT = a suitable curl mailing list: https://curl.se/mail/
PACKAGE_NAME = curl
PACKAGE_STRING = curl -
PACKAGE_TARNAME = curl
PACKAGE_URL = 
PACKAGE_VERSION = -
PATH_SEPARATOR = :
PERL = /usr/bin/perl
PKGADD_NAME = curl - a client that groks URLs
PKGADD_PKG = HAXXcurl
PKGADD_VENDOR = curl.se
PKGCONFIG = no
RANDOM_FILE = /dev/urandom
RANLIB = /home/user/workdir/openwrt-fs/padavan-arm/trunk/../toolchain-aarch64_cortex-a53_gcc-12.3.0_musl//toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/bin/aarch64-openwrt-linux-musl-ranlib
REQUIRE_LIB_DEPS = no
SED = /usr/bin/sed
SET_MAKE = 
SHELL = /bin/bash
SSL_BACKENDS = OpenSSL
SSL_ENABLED = 1
SSL_LIBS = -lssl -lcrypto
STRIP = /home/user/workdir/openwrt-fs/padavan-arm/trunk/../toolchain-aarch64_cortex-a53_gcc-12.3.0_musl//toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/bin/aarch64-openwrt-linux-musl-strip
SUPPORT_FEATURES = HTTPS-proxy IPv6 NTLM NTLM_WB SSL UnixSockets alt-svc libz
SUPPORT_PROTOCOLS = FILE FTP FTPS HTTP HTTPS MQTT SMB SMBS
USE_ARES = 
USE_BEARSSL = 
USE_GNUTLS = 
USE_GNUTLS_NETTLE = 
USE_HYPER = 
USE_LIBRTMP = 
USE_LIBSSH = 
USE_LIBSSH2 = 
USE_MBEDTLS = 
USE_MESALINK = 
USE_NGHTTP2 = 
USE_NGHTTP3 = 
USE_NGTCP2 = 
USE_NGTCP2_CRYPTO_GNUTLS = 
USE_NGTCP2_CRYPTO_OPENSSL = 
USE_NSS = 
USE_OPENLDAP = 
USE_QUICHE = 
USE_SCHANNEL = 
USE_SECTRANSP = 
USE_UNIX_SOCKETS = 1
USE_WINDOWS_SSPI = 
USE_WOLFSSH = 
USE_WOLFSSL = 
VERSION = -
VERSIONNUM = 074b00
ZLIB_LIBS = -lz
ZSH_FUNCTIONS_DIR = ${prefix}/share/zsh/site-functions
abs_builddir = /home/user/workdir/openwrt-fs/padavan-arm/trunk/libs/libcurl/curl-7.75.0/packages/vms
abs_srcdir = /home/user/workdir/openwrt-fs/padavan-arm/trunk/libs/libcurl/curl-7.75.0/packages/vms
abs_top_builddir = /home/user/workdir/openwrt-fs/padavan-arm/trunk/libs/libcurl/curl-7.75.0
abs_top_srcdir = /home/user/workdir/openwrt-fs/padavan-arm/trunk/libs/libcurl/curl-7.75.0
ac_ct_AR = 
ac_ct_CC = 
ac_ct_DUMPBIN = 
am__include = include
am__leading_dot = .
am__quote = 
am__tar = $${TAR-tar} chof - "$$tardir"
am__untar = $${TAR-tar} xf -
bindir = ${exec_prefix}/bin
build = x86_64-pc-linux-gnu
build_alias = x86_64-pc-linux-gnu
build_cpu = x86_64
build_os = linux-gnu
build_vendor = pc
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
exec_prefix = ${prefix}
host = aarch64-unknown-linux-gnu
host_alias = aarch64-linux
host_cpu = aarch64
host_os = linux-gnu
host_vendor = unknown
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /home/user/workdir/openwrt-fs/padavan-arm/trunk/libs/libcurl/curl-7.75.0/install-sh
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
libext = a
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
mandir = ${datarootdir}/man
mkdir_p = $(MKDIR_P)
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /home/user/workdir/openwrt-fs/padavan-arm/trunk/stage
program_transform_name = s,x,x,
psdir = ${docdir}
runstatedir = ${localstatedir}/run
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
subdirs = 
sysconfdir = ${prefix}/etc
target_alias = 
top_build_prefix = ../../
top_builddir = ../..
top_srcdir = ../..

#***************************************************************************
#                                  _   _ ____  _
#  Project                     ___| | | |  _ \| |
#                             / __| | | | |_) | |
#                            | (__| |_| |  _ <| |___
#                             \___|\___/|_| \_\_____|
#
# Copyright (C) 1998 - 2020, Daniel Stenberg, <daniel@haxx.se>, et al.
#
# This software is licensed as described in the file COPYING, which
# you should have received as part of this distribution. The terms
# are also available at https://curl.se/docs/copyright.html.
#
# You may opt to use, copy, modify, merge, publish, distribute and/or sell
# copies of the Software, and permit persons to whom the Software is
# furnished to do so, under the terms of the COPYING file.
#
# This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
# KIND, either express or implied.
#
###########################################################################
EXTRA_DIST = \
 backup_gnv_curl_src.com \
 build_curl-config_script.com \
 build_gnv_curl.com \
 build_gnv_curl_pcsi_desc.com \
 build_gnv_curl_pcsi_text.com \
 build_gnv_curl_release_notes.com \
 build_libcurl_pc.com \
 build_vms.com \
 clean_gnv_curl.com \
 compare_curl_source.com \
 config_h.com \
 curl_crtl_init.c \
 curl_gnv_build_steps.txt \
 curl_release_note_start.txt \
 curl_startup.com \
 curlmsg.h \
 curlmsg.msg \
 curlmsg.sdl \
 curlmsg_vms.h \
 generate_config_vms_h_curl.com \
 generate_vax_transfer.com \
 gnv_conftest.c_first \
 gnv_curl_configure.sh \
 gnv_libcurl_symbols.opt \
 gnv_link_curl.com \
 macro32_exactcase.patch \
 make_gnv_curl_install.sh \
 make_pcsi_curl_kit_name.com \
 pcsi_gnv_curl_file_list.txt \
 pcsi_product_gnv_curl.com \
 readme \
 report_openssl_version.c \
 setup_gnv_curl_build.com \
 stage_curl_install.com \
 vms_eco_level.h

all: all-am

.SUFFIXES:
$(srcdir)/Makefile.in: # $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --foreign packages/vms/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --foreign packages/vms/Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__maybe_remake_depfiles)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__maybe_remake_depfiles);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure: # $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4): # $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs
tags TAGS:

ctags CTAGS:

cscope cscopelist:


distdir: $(BUILT_SOURCES)
	$(MAKE) $(AM_MAKEFLAGS) distdir-am

distdir-am: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile
installdirs:
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-generic clean-libtool mostlyclean-am

distclean: distclean-am
	-rm -f Makefile
distclean-am: clean-am distclean-generic

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am:

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am:

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-generic mostlyclean-libtool

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am:

.MAKE: install-am install-strip

.PHONY: all all-am check check-am clean clean-generic clean-libtool \
	cscopelist-am ctags-am distclean distclean-generic \
	distclean-libtool distdir dvi dvi-am html html-am info info-am \
	install install-am install-data install-data-am install-dvi \
	install-dvi-am install-exec install-exec-am install-html \
	install-html-am install-info install-info-am install-man \
	install-pdf install-pdf-am install-ps install-ps-am \
	install-strip installcheck installcheck-am installdirs \
	maintainer-clean maintainer-clean-generic mostlyclean \
	mostlyclean-generic mostlyclean-libtool pdf pdf-am ps ps-am \
	tags-am uninstall uninstall-am

.PRECIOUS: Makefile


# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
