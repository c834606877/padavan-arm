# Makefile for libiconv/tests

#### Start of system configuration section. ####

# Directories used by "make":
srcdir = .

# Programs used by "make":
CC = /home/user/workdir/openwrt-fs/padavan-arm/trunk/../toolchain-aarch64_cortex-a53_gcc-12.3.0_musl//toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/bin/aarch64-openwrt-linux-musl-gcc -march=armv8-a -mfix-cortex-a53-843419
CFLAGS = -Os -fomit-frame-pointer -pipe  -DEMBED -I/home/user/workdir/openwrt-fs/padavan-arm/trunk/stage/include -Dlinux -D__linux__ -Dunix -Wall -Wno-trigraphs -Wno-strict-aliasing -Wno-format-security -fno-tree-slsr -fno-aggressive-loop-optimizations -Wno-pointer-sign -Wno-unused -ffunction-sections -fdata-sections
CPPFLAGS = 
LDFLAGS = -L/home/user/workdir/openwrt-fs/padavan-arm/trunk/stage/lib -Wl,--gc-sections
INCLUDES = -I. -I$(srcdir) -I../include -I$(srcdir)/../include -I../srclib -I$(srcdir)/../srclib -I..
LIBTOOL = /bin/bash $(top_builddir)/libtool
LIBTOOL_COMPILE = $(LIBTOOL) --mode=compile
LIBTOOL_LINK = $(LIBTOOL) --mode=link
LIBTOOL_INSTALL = $(LIBTOOL) --mode=install
LIBTOOL_UNINSTALL = $(LIBTOOL) --mode=uninstall
RM = rm -f


#### End of system configuration section. ####

SHELL = /bin/bash

# Needed by $(LIBTOOL).
top_builddir = ..

all :

check : all table-from table-to ../src/iconv_no_i18n test-shiftseq test-to-wchar
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ASCII
#	/* General multi-byte encodings */
	$(CC) $(LDFLAGS) $(INCLUDES) $(CFLAGS) $(CPPFLAGS) $(srcdir)/genutf8.c ../srclib/libicrt.a -o genutf8 && \
	./genutf8 > UTF-8.TXT && \
	$(SHELL) $(srcdir)/check-stateless . UTF-8 && \
	$(RM) -r genutf8 genutf8.dSYM UTF-8.TXT
	$(SHELL) $(srcdir)/check-stateful $(srcdir) UCS-2BE
	$(SHELL) $(srcdir)/check-stateful $(srcdir) UCS-2LE
	$(SHELL) $(srcdir)/check-stateful $(srcdir) UCS-4BE
	$(SHELL) $(srcdir)/check-stateful $(srcdir) UCS-4LE
	$(SHELL) $(srcdir)/check-stateful $(srcdir) UTF-16
	$(SHELL) $(srcdir)/check-stateful $(srcdir) UTF-16BE
	$(SHELL) $(srcdir)/check-stateful $(srcdir) UTF-16LE
	$(SHELL) $(srcdir)/check-stateful $(srcdir) UTF-32
	$(SHELL) $(srcdir)/check-stateful $(srcdir) UTF-32BE
	$(SHELL) $(srcdir)/check-stateful $(srcdir) UTF-32LE
	$(SHELL) $(srcdir)/check-stateful $(srcdir) UTF-7
#	/* 8-bit encodings */
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ISO-8859-1
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ISO-8859-2
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ISO-8859-3
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ISO-8859-4
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ISO-8859-5
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ISO-8859-6
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ISO-8859-7
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ISO-8859-8
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ISO-8859-9
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ISO-8859-10
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ISO-8859-11
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ISO-8859-13
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ISO-8859-14
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ISO-8859-15
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ISO-8859-16
	$(SHELL) $(srcdir)/check-stateless $(srcdir) KOI8-R
	$(SHELL) $(srcdir)/check-stateless $(srcdir) KOI8-U
	$(SHELL) $(srcdir)/check-stateless $(srcdir) KOI8-RU
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP1250
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP1251
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP1252
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP1253
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP1254
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP1255
	$(SHELL) $(srcdir)/check-stateful $(srcdir) CP1255
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP1256
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP1257
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP1258
	$(SHELL) $(srcdir)/check-stateful $(srcdir) CP1258
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP850
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP862
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP866
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP1131
	$(SHELL) $(srcdir)/check-stateless $(srcdir) MacRoman
	$(SHELL) $(srcdir)/check-stateless $(srcdir) MacCentralEurope
	$(SHELL) $(srcdir)/check-stateless $(srcdir) MacIceland
	$(SHELL) $(srcdir)/check-stateless $(srcdir) MacCroatian
	$(SHELL) $(srcdir)/check-stateless $(srcdir) MacRomania
	$(SHELL) $(srcdir)/check-stateless $(srcdir) MacCyrillic
	$(SHELL) $(srcdir)/check-stateless $(srcdir) MacUkraine
	$(SHELL) $(srcdir)/check-stateless $(srcdir) MacGreek
	$(SHELL) $(srcdir)/check-stateless $(srcdir) MacTurkish
	$(SHELL) $(srcdir)/check-stateless $(srcdir) MacHebrew
	$(SHELL) $(srcdir)/check-stateless $(srcdir) MacArabic
	$(SHELL) $(srcdir)/check-stateless $(srcdir) MacThai
	$(SHELL) $(srcdir)/check-stateless $(srcdir) HP-ROMAN8
	$(SHELL) $(srcdir)/check-stateless $(srcdir) NEXTSTEP
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ARMSCII-8
	$(SHELL) $(srcdir)/check-stateless $(srcdir) Georgian-Academy
	$(SHELL) $(srcdir)/check-stateless $(srcdir) Georgian-PS
	$(SHELL) $(srcdir)/check-stateless $(srcdir) KOI8-T
	$(SHELL) $(srcdir)/check-stateless $(srcdir) PT154
	$(SHELL) $(srcdir)/check-stateless $(srcdir) RK1048
	$(SHELL) $(srcdir)/check-stateless $(srcdir) MuleLao-1
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP1133
	$(SHELL) $(srcdir)/check-stateless $(srcdir) TIS-620
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP874
	$(SHELL) $(srcdir)/check-stateless $(srcdir) VISCII
	$(SHELL) $(srcdir)/check-stateless $(srcdir) TCVN
	$(SHELL) $(srcdir)/check-stateful $(srcdir) TCVN
#	/* CJK character sets */
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ISO646-JP
	$(SHELL) $(srcdir)/check-stateless $(srcdir) JIS_X0201
#	$(SHELL) $(srcdir)/check-stateless $(srcdir) JIS_X0208 # redundant, see EUC-JP
#	$(SHELL) $(srcdir)/check-stateless $(srcdir) JIS_X0212 # redundant, see EUC-JP
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ISO646-CN
#	$(SHELL) $(srcdir)/check-stateless $(srcdir) GB_2312-80 # redundant, see EUC-CN
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ISO-IR-165
#	$(SHELL) $(srcdir)/check-stateless $(srcdir) KSC_5601 # redundant, see EUC-KR
#	/* CJK encodings */
	$(SHELL) $(srcdir)/check-stateless $(srcdir) EUC-JP
	$(SHELL) $(srcdir)/check-stateless $(srcdir) SHIFT_JIS
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP932
	$(SHELL) $(srcdir)/check-stateful $(srcdir) ISO-2022-JP
	$(SHELL) $(srcdir)/check-stateful $(srcdir) ISO-2022-JP-2
	$(SHELL) $(srcdir)/check-stateful $(srcdir) ISO-2022-JP-1
	$(SHELL) $(srcdir)/check-stateful $(srcdir) ISO-2022-JP-MS
	$(SHELL) $(srcdir)/check-stateless $(srcdir) EUC-CN
	$(SHELL) $(srcdir)/check-stateless $(srcdir) GBK
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP936
	$(CC) $(LDFLAGS) $(INCLUDES) $(CFLAGS) $(CPPFLAGS) $(srcdir)/gengb18030z.c ../srclib/libicrt.a -o gengb18030z && \
	{ cat $(srcdir)/GB18030-BMP.TXT ; ./gengb18030z ; } | sort > GB18030.TXT && \
	{ test $(srcdir) = . || cp $(srcdir)/GB18030.IRREVERSIBLE.TXT GB18030.IRREVERSIBLE.TXT; } && \
	$(SHELL) $(srcdir)/check-stateless . GB18030 && \
	{ test $(srcdir) = . || $(RM) GB18030.IRREVERSIBLE.TXT; } && \
	$(RM) -r gengb18030z gengb18030z.dSYM GB18030.TXT
	$(SHELL) $(srcdir)/check-stateful $(srcdir) ISO-2022-CN
	$(SHELL) $(srcdir)/check-stateful $(srcdir) ISO-2022-CN-EXT
	$(SHELL) $(srcdir)/check-stateful $(srcdir) HZ
	$(SHELL) $(srcdir)/check-stateless $(srcdir) EUC-TW
	$(SHELL) $(srcdir)/check-stateless $(srcdir) BIG5
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP950
	$(SHELL) $(srcdir)/check-stateless $(srcdir) BIG5-HKSCS:1999
	$(SHELL) $(srcdir)/check-stateful $(srcdir) BIG5-HKSCS:1999
	$(SHELL) $(srcdir)/check-stateless $(srcdir) BIG5-HKSCS:2001
	$(SHELL) $(srcdir)/check-stateful $(srcdir) BIG5-HKSCS:2001
	$(SHELL) $(srcdir)/check-stateless $(srcdir) BIG5-HKSCS:2004
	$(SHELL) $(srcdir)/check-stateful $(srcdir) BIG5-HKSCS:2004
	$(SHELL) $(srcdir)/check-stateless $(srcdir) BIG5-HKSCS:2008
	$(SHELL) $(srcdir)/check-stateful $(srcdir) BIG5-HKSCS:2008
	$(SHELL) $(srcdir)/check-stateless $(srcdir) EUC-KR
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP949
	$(SHELL) $(srcdir)/check-stateless $(srcdir) JOHAB
	$(SHELL) $(srcdir)/check-stateful $(srcdir) ISO-2022-KR
#	/* system dependent and extra encodings */
	$(MAKE) check-extra
#	/* transliteration */
	$(SHELL) $(srcdir)/check-translit $(srcdir) Quotes UTF-8 ISO-8859-1
	$(SHELL) $(srcdir)/check-translit $(srcdir) Quotes UTF-8 ASCII
	$(SHELL) $(srcdir)/check-translit $(srcdir) Translit1 ISO-8859-1 ASCII
	$(SHELL) $(srcdir)/check-translitfailure $(srcdir) TranslitFail1 ISO-8859-1 ASCII
#	/* substitution */
	$(SHELL) $(srcdir)/check-subst
#	/* shift sequence before invalid multibyte character */
	./test-shiftseq
#	/* conversion to wchar_t */
	./test-to-wchar

check-extra: check-extra-no
check-extra-no:
check-extra-yes: all table-from table-to ../src/iconv_no_i18n
#	/* AIX specific encodings */
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP856
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP922
#	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP943
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP1046
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP1124
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP1129
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP1161
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP1162
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP1163
#	/* OSF/1 specific encodings */
	$(SHELL) $(srcdir)/check-stateless $(srcdir) DEC-KANJI
	$(SHELL) $(srcdir)/check-stateless $(srcdir) DEC-HANYU
#	/* DOS specific encodings */
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP437
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP737
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP775
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP852
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP853
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP855
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP857
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP858
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP860
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP861
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP863
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP864
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP865
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP869
	$(SHELL) $(srcdir)/check-stateless $(srcdir) CP1125
#	/* Extra encodings */
	$(SHELL) $(srcdir)/check-stateless $(srcdir) EUC-JISX0213
	$(SHELL) $(srcdir)/check-stateless $(srcdir) SHIFT_JISX0213
	$(SHELL) $(srcdir)/check-stateful $(srcdir) ISO-2022-JP-3
	$(SHELL) $(srcdir)/check-stateless $(srcdir) BIG5-2003
	$(SHELL) $(srcdir)/check-stateless $(srcdir) TDS565
	$(SHELL) $(srcdir)/check-stateless $(srcdir) ATARIST
	$(SHELL) $(srcdir)/check-stateless $(srcdir) RISCOS-LATIN1

table-from : table-from.o ../lib/libiconv.la
	$(LIBTOOL_LINK) $(CC) $(LDFLAGS) $(CFLAGS) table-from.o ../srclib/libicrt.a ../lib/libiconv.la -o $@

table-from.o : $(srcdir)/table-from.c
	$(CC) -c $(INCLUDES) $(CFLAGS) $(CPPFLAGS) $(srcdir)/table-from.c

table-to : table-to.o ../lib/libiconv.la
	$(LIBTOOL_LINK) $(CC) $(LDFLAGS) $(CFLAGS) table-to.o ../srclib/libicrt.a ../lib/libiconv.la -o $@

table-to.o : $(srcdir)/table-to.c
	$(CC) -c $(INCLUDES) $(CFLAGS) $(CPPFLAGS) $(srcdir)/table-to.c

test-shiftseq : test-shiftseq.o ../lib/libiconv.la
	$(LIBTOOL_LINK) $(CC) $(LDFLAGS) $(CFLAGS) test-shiftseq.o ../srclib/libicrt.a ../lib/libiconv.la -o $@

test-shiftseq.o : $(srcdir)/test-shiftseq.c
	$(CC) -c $(INCLUDES) $(CFLAGS) $(CPPFLAGS) $(srcdir)/test-shiftseq.c

test-to-wchar : test-to-wchar.o ../lib/libiconv.la
	$(LIBTOOL_LINK) $(CC) $(LDFLAGS) $(CFLAGS) test-to-wchar.o ../srclib/libicrt.a ../lib/libiconv.la -o $@

test-to-wchar.o : $(srcdir)/test-to-wchar.c
	$(CC) -c $(INCLUDES) $(CFLAGS) $(CPPFLAGS) $(srcdir)/test-to-wchar.c

# The following rule is necessary to avoid a toplevel "make -n check" failure.
../lib/libiconv.la :
	cd ../lib && $(MAKE) libiconv.la

mostlyclean : clean

clean : force
	$(RM) *.o *.lo table-from table-from table-to table-to test-shiftseq test-shiftseq test-to-wchar test-to-wchar tmp-* genutf8 genutf8 UTF-8.TXT gengb18030z gengb18030z GB18030.TXT core *.stackdump
	$(RM) -r .libs _libs

distclean : clean
	$(RM) Makefile

maintainer-clean : distclean

# List of source files.
SOURCE_FILES = \
  Makefile.in \
  table-from.c table-to.c uniq-u.c \
  check-stateful check-stateful.bat \
  check-stateless check-stateless.bat \
  check-translit check-translit.bat \
  check-translitfailure \
  ASCII.TXT \
  genutf8.c \
  UCS-2BE-snippet UCS-2BE-snippet.UTF-8 \
  UCS-2LE-snippet UCS-2LE-snippet.UTF-8 \
  UCS-4BE-snippet UCS-4BE-snippet.UTF-8 \
  UCS-4LE-snippet UCS-4LE-snippet.UTF-8 \
  UTF-16-snippet UTF-16-snippet.UTF-8 \
  UTF-16BE-snippet UTF-16BE-snippet.UTF-8 \
  UTF-16LE-snippet UTF-16LE-snippet.UTF-8 \
  UTF-32-snippet UTF-32-snippet.UTF-8 \
  UTF-32BE-snippet UTF-32BE-snippet.UTF-8 \
  UTF-32LE-snippet UTF-32LE-snippet.UTF-8 \
  UTF-7-snippet UTF-7-snippet.UTF-8 \
  ISO-8859-1.TXT \
  ISO-8859-2.TXT \
  ISO-8859-3.TXT \
  ISO-8859-4.TXT \
  ISO-8859-5.TXT \
  ISO-8859-6.TXT \
  ISO-8859-7.TXT \
  ISO-8859-8.TXT \
  ISO-8859-9.TXT \
  ISO-8859-10.TXT \
  ISO-8859-11.TXT \
  ISO-8859-13.TXT \
  ISO-8859-14.TXT \
  ISO-8859-15.TXT \
  ISO-8859-16.TXT \
  KOI8-R.TXT \
  KOI8-U.TXT \
  KOI8-RU.TXT \
  CP1250.TXT \
  CP1251.TXT \
  CP1252.TXT \
  CP1253.TXT \
  CP1254.TXT \
  CP1255.TXT CP1255.IRREVERSIBLE.TXT \
  CP1255-snippet CP1255-snippet.UTF-8 \
  CP1256.TXT \
  CP1257.TXT \
  CP1258.TXT CP1258.IRREVERSIBLE.TXT \
  CP1258-snippet CP1258-snippet.UTF-8 \
  CP850.TXT \
  CP862.TXT \
  CP866.TXT \
  CP1131.TXT \
  MacRoman.TXT \
  MacCentralEurope.TXT \
  MacIceland.TXT \
  MacCroatian.TXT \
  MacRomania.TXT \
  MacCyrillic.TXT \
  MacUkraine.TXT \
  MacGreek.TXT \
  MacTurkish.TXT \
  MacHebrew.TXT \
  MacArabic.TXT \
  MacThai.TXT \
  HP-ROMAN8.TXT \
  NEXTSTEP.TXT \
  ARMSCII-8.TXT ARMSCII-8.IRREVERSIBLE.TXT \
  Georgian-Academy.TXT \
  Georgian-PS.TXT \
  KOI8-T.TXT \
  PT154.TXT \
  RK1048.TXT \
  MuleLao-1.TXT \
  CP1133.TXT \
  TIS-620.TXT \
  CP874.TXT \
  VISCII.TXT \
  TCVN.TXT TCVN.IRREVERSIBLE.TXT \
  TCVN-snippet TCVN-snippet.UTF-8 \
  ISO646-JP.TXT \
  JIS_X0201.TXT \
  ISO646-CN.TXT \
  ISO-IR-165.TXT ISO-IR-165.IRREVERSIBLE.TXT \
  EUC-JP.TXT EUC-JP.IRREVERSIBLE.TXT \
  SHIFT_JIS.TXT \
  CP932.TXT CP932.IRREVERSIBLE.TXT \
  ISO-2022-JP-snippet ISO-2022-JP-snippet.UTF-8 \
  ISO-2022-JP-2-snippet ISO-2022-JP-2-snippet.UTF-8 \
  ISO-2022-JP-1-snippet ISO-2022-JP-1-snippet.UTF-8 \
  ISO-2022-JP-MS-snippet ISO-2022-JP-MS-snippet.alt ISO-2022-JP-MS-snippet.UTF-8 \
  EUC-CN.TXT \
  GBK.TXT \
  CP936.TXT \
  gengb18030z.c GB18030-BMP.TXT GB18030.IRREVERSIBLE.TXT \
  ISO-2022-CN-snippet ISO-2022-CN-snippet.UTF-8 \
  ISO-2022-CN-EXT-snippet ISO-2022-CN-EXT-snippet.UTF-8 \
  HZ-snippet HZ-snippet.UTF-8 \
  EUC-TW.TXT EUC-TW.IRREVERSIBLE.TXT \
  BIG5.TXT \
  CP950.TXT CP950.IRREVERSIBLE.TXT \
  BIG5-HKSCS-1999.TXT BIG5-HKSCS-1999.IRREVERSIBLE.TXT \
  BIG5-HKSCS-1999-snippet BIG5-HKSCS-1999-snippet.UTF-8 \
  BIG5-HKSCS-2001.TXT BIG5-HKSCS-2001.IRREVERSIBLE.TXT \
  BIG5-HKSCS-2001-snippet BIG5-HKSCS-2001-snippet.UTF-8 \
  BIG5-HKSCS-2004.TXT BIG5-HKSCS-2004.IRREVERSIBLE.TXT \
  BIG5-HKSCS-2004-snippet BIG5-HKSCS-2004-snippet.UTF-8 \
  BIG5-HKSCS-2008.TXT BIG5-HKSCS-2008.IRREVERSIBLE.TXT \
  BIG5-HKSCS-2008-snippet BIG5-HKSCS-2008-snippet.UTF-8 \
  EUC-KR.TXT \
  CP949.TXT \
  JOHAB.TXT \
  ISO-2022-KR-snippet \
  ISO-2022-KR-snippet.UTF-8 \
  Quotes.UTF-8 Quotes.ISO-8859-1 Quotes.ASCII \
  Translit1.ISO-8859-1 Translit1.ASCII \
  TranslitFail1.ISO-8859-1 \
  check-subst \
  test-shiftseq.c \
  test-to-wchar.c \
  CP856.TXT \
  CP922.TXT \
  CP1046.TXT \
  CP1124.TXT \
  CP1129.TXT \
  CP1161.TXT CP1161.IRREVERSIBLE.TXT \
  CP1162.TXT \
  CP1163.TXT CP1163.IRREVERSIBLE.TXT \
  DEC-KANJI.TXT \
  DEC-HANYU.TXT DEC-HANYU.IRREVERSIBLE.TXT \
  CP437.TXT \
  CP737.TXT \
  CP775.TXT \
  CP852.TXT \
  CP853.TXT \
  CP855.TXT \
  CP857.TXT \
  CP858.TXT \
  CP860.TXT \
  CP861.TXT \
  CP863.TXT \
  CP864.TXT \
  CP865.TXT \
  CP869.TXT \
  CP1125.TXT \
  EUC-JISX0213.TXT \
  SHIFT_JISX0213.TXT \
  ISO-2022-JP-3-snippet ISO-2022-JP-3-snippet.UTF-8 \
  BIG5-2003.TXT BIG5-2003.IRREVERSIBLE.TXT \
  TDS565.TXT \
  ATARIST.TXT \
  RISCOS-LATIN1.TXT
# List of distributed files imported from other packages.
IMPORTED_FILES =
# List of distributed files generated by autotools or Makefile.devel.
GENERATED_FILES =
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
