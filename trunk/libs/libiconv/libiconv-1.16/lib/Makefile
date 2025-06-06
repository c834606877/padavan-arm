# Makefile for libiconv/lib

#### Start of system configuration section. ####

# Directories used by "make":
srcdir = .

# Directories used by "make install":
prefix = /home/user/workdir/openwrt-fs/padavan-arm/trunk/stage
local_prefix = /usr/local
exec_prefix = ${prefix}
libdir = ${exec_prefix}/lib

# Programs used by "make":
CC = /home/user/workdir/openwrt-fs/padavan-arm/trunk/../toolchain-aarch64_cortex-a53_gcc-12.3.0_musl//toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/bin/aarch64-openwrt-linux-musl-gcc -march=armv8-a -mfix-cortex-a53-843419
CFLAGS = -Os -fomit-frame-pointer -pipe  -DEMBED -I/home/user/workdir/openwrt-fs/padavan-arm/trunk/stage/include -Dlinux -D__linux__ -Dunix -Wall -Wno-trigraphs -Wno-strict-aliasing -Wno-format-security -fno-tree-slsr -fno-aggressive-loop-optimizations -Wno-pointer-sign -Wno-unused -ffunction-sections -fdata-sections -fvisibility=hidden
CPPFLAGS = 
LDFLAGS = -L/home/user/workdir/openwrt-fs/padavan-arm/trunk/stage/lib -Wl,--gc-sections $(LDFLAGS_no)
LDFLAGS_yes = -Wl,--export-all-symbols
LDFLAGS_no =
INCLUDES = -I. -I$(srcdir) -I../include -I$(srcdir)/../include -I.. -I$(srcdir)/..
# -DBUILDING_LIBICONV: Change expansion of LIBICONV_DLL_EXPORTED macro.
# -DBUILDING_DLL: Change expansion of RELOCATABLE_DLL_EXPORTED macro.
DEFS = -DLIBDIR=\"$(libdir)\" -DBUILDING_LIBICONV -DBUILDING_DLL \
-DENABLE_RELOCATABLE=1 -DIN_LIBRARY -DINSTALLDIR=\"$(libdir)\" -DNO_XMALLOC \
-Dset_relocation_prefix=libiconv_set_relocation_prefix \
-Drelocate=libiconv_relocate -Drelocate2=libiconv_relocate2 -DHAVE_CONFIG_H
LIBTOOL = /bin/bash $(top_builddir)/libtool
LIBTOOL_COMPILE = $(LIBTOOL) --mode=compile
LIBTOOL_LINK = $(LIBTOOL) --mode=link
LIBTOOL_INSTALL = $(LIBTOOL) --mode=install
LIBTOOL_UNINSTALL = $(LIBTOOL) --mode=uninstall
AR = /home/user/workdir/openwrt-fs/padavan-arm/trunk/../toolchain-aarch64_cortex-a53_gcc-12.3.0_musl//toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/bin/aarch64-openwrt-linux-musl-ar
# Windows resource compiler (windres). Used via libtool.
RC = 
CP = cp
MV = mv
LN = ln
LN_S = ln -s
RM = rm -f

# Programs used by "make install":
INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
mkinstalldirs = $(SHELL) ../build-aux/mkinstalldirs

#### End of system configuration section. ####

SHELL = /bin/bash

# Before making a release, change this according to the libtool documentation,
# section "Library interface versions".
LIBICONV_VERSION_INFO = 8:1:6

PACKAGE_VERSION = 1.16

# Needed by $(LIBTOOL).
top_builddir = ..

SOURCES = $(srcdir)/iconv.c $(srcdir)/../libcharset/lib/localcharset.c $(srcdir)/relocatable.c

OBJECTS = iconv.lo localcharset.lo relocatable.lo $(OBJECTS_EXP_no) $(OBJECTS_RES_no)
OBJECTS_EXP_yes = iconv-exports.lo
OBJECTS_EXP_no =
OBJECTS_RES_yes = libiconv.res.lo
OBJECTS_RES_no =

all : libiconv.la

libiconv.la : $(OBJECTS)
	$(LIBTOOL_LINK) $(CC) $(LDFLAGS) $(CFLAGS) -o libiconv.la -rpath $(libdir) -version-info $(LIBICONV_VERSION_INFO) -no-undefined $(OBJECTS)

iconv.lo : $(srcdir)/iconv.c $(srcdir)/converters.h \
           $(srcdir)/encodings.def $(srcdir)/encodings_aix.def $(srcdir)/encodings_osf1.def $(srcdir)/encodings_dos.def $(srcdir)/encodings_local.def \
           $(srcdir)/aliases.h $(srcdir)/aliases_sysaix.h $(srcdir)/aliases_syshpux.h $(srcdir)/aliases_sysosf1.h $(srcdir)/aliases_syssolaris.h \
           $(srcdir)/aliases_aix.h $(srcdir)/aliases_aix_sysaix.h \
           $(srcdir)/aliases_osf1.h $(srcdir)/aliases_osf1_sysosf1.h \
           $(srcdir)/aliases_dos.h \
           $(srcdir)/aliases_extra.h \
           $(srcdir)/flags.h $(srcdir)/translit.h
	$(LIBTOOL_COMPILE) $(CC) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(DEFS) -c $(srcdir)/iconv.c

localcharset.lo : $(srcdir)/../libcharset/lib/localcharset.c $(srcdir)/relocatable.h
	$(LIBTOOL_COMPILE) $(CC) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(DEFS) -c $(srcdir)/../libcharset/lib/localcharset.c

relocatable.lo : $(srcdir)/relocatable.c $(srcdir)/relocatable.h
	$(LIBTOOL_COMPILE) $(CC) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(DEFS) -c $(srcdir)/relocatable.c

iconv-exports.lo : $(srcdir)/../woe32dll/iconv-exports.c
	$(LIBTOOL_COMPILE) $(CC) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(DEFS) -c $(srcdir)/../woe32dll/iconv-exports.c

libiconv.res.lo : $(srcdir)/../windows/libiconv.rc
	$(LIBTOOL_COMPILE) --tag=RC $(RC) `$(SHELL) $(srcdir)/../windows/windres-options --escape $(PACKAGE_VERSION)` -i $(srcdir)/../windows/libiconv.rc -o libiconv.res.lo --output-format=coff

# Installs the library and include files only. Typically called with only
# $(libdir) and $(includedir) - don't use $(prefix) and $(exec_prefix) here.
install-lib : all force
	if [ ! -d $(libdir) ] ; then $(mkinstalldirs) $(libdir) ; fi
	$(LIBTOOL_INSTALL) $(INSTALL) libiconv.la $(libdir)/libiconv.la

# On AIX, libiconv.a must include the object files of /lib/libiconv.a,
# otherwise the setlocale() call fails when invoked from executables linked
# with -rpath $(libdir), even if linked without -liconv.
install : all force
	if [ ! -d $(DESTDIR)$(libdir) ] ; then $(mkinstalldirs) $(DESTDIR)$(libdir) ; fi
	$(LIBTOOL_INSTALL) $(INSTALL) libiconv.la $(DESTDIR)$(libdir)/libiconv.la
	case "linux-gnu" in \
	  aix*) (cd $(DESTDIR)$(libdir) && \
	         objects=`$(AR) t libiconv.a`" "`$(AR) t /lib/libiconv.a` && \
	         $(AR) x libiconv.a && $(AR) x /lib/libiconv.a && \
	         $(AR) q libiconv.new.a $$objects && \
	         rm -f $$objects && \
	         mv -f libiconv.new.a libiconv.a) ;; \
	esac

install-strip : install

installdirs : force
	if [ ! -d $(DESTDIR)$(libdir) ] ; then $(mkinstalldirs) $(DESTDIR)$(libdir) ; fi

uninstall : force
	$(LIBTOOL_UNINSTALL) $(RM) $(DESTDIR)$(libdir)/libiconv.la

check : all

mostlyclean : clean

clean : force
	$(RM) *.o *.lo *.a *.la core *.stackdump so_locations
	$(RM) -r .libs _libs

distclean : clean
	$(RM) Makefile config.h

maintainer-clean : distclean

# List of source files.
SOURCE_FILES = \
  Makefile.in config.h.in \
  encodings.def \
  encodings_aix.def \
  encodings_osf1.def \
  encodings_dos.def \
  encodings_extra.def \
  encodings_local.def \
  translit.def \
  genaliases.c \
  genaliases2.c \
  genflags.c \
  gentranslit.c \
  iconv.c \
    converters.h \
      ascii.h \
      utf8.h \
      ucs2.h \
      ucs2be.h \
      ucs2le.h \
      ucs4.h \
      ucs4be.h \
      ucs4le.h \
      utf16.h \
      utf16be.h \
      utf16le.h \
      utf32.h \
      utf32be.h \
      utf32le.h \
      utf7.h \
      ucs2internal.h \
      ucs2swapped.h \
      ucs4internal.h \
      ucs4swapped.h \
      c99.h \
      java.h \
      iso8859_1.h \
      iso8859_2.h \
      iso8859_3.h \
      iso8859_4.h \
      iso8859_5.h \
      iso8859_6.h \
      iso8859_7.h \
      iso8859_8.h \
      iso8859_9.h \
      iso8859_10.h \
      iso8859_11.h \
      iso8859_13.h \
      iso8859_14.h \
      iso8859_15.h \
      iso8859_16.h \
      koi8_r.h \
      koi8_u.h \
      koi8_ru.h \
      cp1250.h \
      cp1251.h \
      cp1252.h \
      cp1253.h \
      cp1254.h \
      cp1255.h \
      cp1256.h \
      cp1257.h \
      cp1258.h \
        vietcomb.h \
      cp850.h \
      cp862.h \
      cp866.h \
      cp1131.h \
      mac_roman.h \
      mac_centraleurope.h \
      mac_iceland.h \
      mac_croatian.h \
      mac_romania.h \
      mac_cyrillic.h \
      mac_ukraine.h \
      mac_greek.h \
      mac_turkish.h \
      mac_hebrew.h \
      mac_arabic.h \
      mac_thai.h \
      hp_roman8.h \
      nextstep.h \
      armscii_8.h \
      georgian_academy.h \
      georgian_ps.h \
      koi8_t.h \
      pt154.h \
      rk1048.h \
      mulelao.h \
      cp1133.h \
      tis620.h \
      cp874.h \
      viscii.h \
      tcvn.h \
      iso646_jp.h \
      jisx0201.h \
      jisx0208.h \
      jisx0212.h \
      iso646_cn.h \
      gb2312.h \
      isoir165.h \
        isoir165ext.h \
      gb12345.h \
        gb12345ext.h \
      gbk.h \
        gbkext1.h \
        gbkext2.h \
        gbkext_inv.h \
        cp936ext.h \
      cns11643.h \
        cns11643_1.h \
        cns11643_2.h \
        cns11643_3.h \
        cns11643_4.h \
          cns11643_4a.h \
          cns11643_4b.h \
        cns11643_5.h \
        cns11643_6.h \
        cns11643_7.h \
        cns11643_15.h \
        cns11643_inv.h \
      big5.h \
      ksc5601.h \
      johab_hangul.h \
      euc_jp.h \
      sjis.h \
      cp932.h \
        cp932ext.h \
      iso2022_jp.h \
      iso2022_jp1.h \
      iso2022_jp2.h \
      iso2022_jpms.h \
        cp50221_0208_ext.h \
        cp50221_0212_ext.h \
      euc_cn.h \
      ces_gbk.h \
      cp936.h \
      gb18030.h \
        gb18030ext.h \
        gb18030uni.h \
      iso2022_cn.h \
      iso2022_cnext.h \
      hz.h \
      euc_tw.h \
      ces_big5.h \
      cp950.h \
        cp950ext.h \
      big5hkscs1999.h \
        hkscs1999.h \
      big5hkscs2001.h \
        hkscs2001.h \
      big5hkscs2004.h \
        hkscs2004.h \
      big5hkscs2008.h \
        hkscs2008.h \
      euc_kr.h \
      cp949.h \
        uhc_1.h \
        uhc_2.h \
      johab.h \
      iso2022_kr.h \
      cp856.h \
      cp922.h \
      cp943.h \
      cp1046.h \
      cp1124.h \
      cp1129.h \
      cp1161.h \
      cp1162.h \
      cp1163.h \
      dec_kanji.h \
      dec_hanyu.h \
      cp437.h \
      cp737.h \
      cp775.h \
      cp852.h \
      cp853.h \
      cp855.h \
      cp857.h \
      cp858.h \
      cp860.h \
      cp861.h \
      cp863.h \
      cp864.h \
      cp865.h \
      cp869.h \
      cp1125.h \
      euc_jisx0213.h \
        jisx0213.h \
      shift_jisx0213.h \
      iso2022_jp3.h \
      big5_2003.h \
      tds565.h \
      atarist.h \
      riscos1.h \
    flushwc.h \
    cjk_variants.h \
    loops.h \
      loop_unicode.h \
      loop_wchar.h \
    aliases2.h \
    iconv_open1.h \
    iconv_open2.h \
  relocatable.h relocatable.c
# List of distributed files imported from other packages.
IMPORTED_FILES =
# List of distributed files generated by autotools or Makefile.devel.
GENERATED_FILES = \
  aliases.gperf aliases_sysaix.gperf aliases_syshpux.gperf aliases_sysosf1.gperf aliases_syssolaris.gperf \
  aliases.h aliases_sysaix.h aliases_syshpux.h aliases_sysosf1.h aliases_syssolaris.h \
  aliases_aix.h aliases_aix_sysaix.h \
  aliases_osf1.h aliases_osf1_sysosf1.h \
  aliases_dos.h \
  aliases_extra.h \
  canonical.h canonical_sysaix.h canonical_syshpux.h canonical_sysosf1.h canonical_syssolaris.h \
  canonical_aix.h canonical_aix_sysaix.h \
  canonical_osf1.h canonical_osf1_sysosf1.h \
  canonical_dos.h \
  canonical_extra.h \
  canonical_local.h canonical_local_sysaix.h canonical_local_syshpux.h canonical_local_sysosf1.h canonical_local_syssolaris.h \
  flags.h \
  translit.h
# List of distributed files generated by "make".
DISTRIBUTED_BUILT_FILES =
# List of distributed files.
DISTFILES = $(SOURCE_FILES) $(IMPORTED_FILES) $(GENERATED_FILES) $(DISTRIBUTED_BUILT_FILES)

distdir : $(DISTFILES)
	for file in $(DISTFILES); do \
	  if test -f $$file; then dir='.'; else dir='$(srcdir)'; fi; \
	  cp -p "$$dir/$$file" '$(distdir)'/$$file || exit 1; \
	done

force :

