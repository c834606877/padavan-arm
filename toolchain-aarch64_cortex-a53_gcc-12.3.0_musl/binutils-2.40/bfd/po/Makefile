# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2001-2023 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = bfd
VERSION = 2.40.0

SHELL = /bin/sh


srcdir = .
top_srcdir = ..

top_builddir = ..

prefix = /home/user/workdir/openwrt-fs/openwrt-23.05.5/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl
exec_prefix = ${prefix}
datadir = ${datarootdir}
localedir = ${datarootdir}/locale
gnulocaledir = ${prefix}/share/locale
gettextsrcdir = ${prefix}/share/gettext/po
subdir = po

DESTDIR =

INSTALL = /home/user/workdir/openwrt-fs/openwrt-23.05.5/staging_dir/host/bin/install -c
INSTALL_DATA = /home/user/workdir/openwrt-fs/openwrt-23.05.5/staging_dir/host/bin/install -c -m 644
MKINSTALLDIRS = $(top_builddir)/./../mkinstalldirs

CC = gcc
GENCAT = 
GMSGFMT = PATH=../src:$$PATH /usr/bin/msgfmt
MSGFMT = /usr/bin/msgfmt
XGETTEXT = PATH=../src:$$PATH /usr/bin/xgettext
MSGMERGE = PATH=../src:$$PATH msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -O2 -I/home/user/workdir/openwrt-fs/openwrt-23.05.5/staging_dir/host/include     
CPPFLAGS = 

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

SOURCES = cat-id-tbl.c
POFILES =  da.po es.po fi.po fr.po hr.po id.po ja.po ro.po ru.po rw.po sr.po sv.po tr.po uk.po vi.po zh_CN.po pt.po
GMOFILES =  da.gmo es.gmo fi.gmo fr.gmo hr.gmo id.gmo ja.gmo ro.gmo ru.gmo rw.gmo sr.gmo sv.gmo tr.gmo uk.gmo vi.gmo zh_CN.gmo pt.gmo
DISTFILES = ChangeLog Makefile.in.in SRC-POTFILES.in BLD-POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of source dir POTFILES.
SRC-POTFILES = \
	../aix386-core.c \
	../aix5ppc-core.c \
	../aout-cris.c \
	../aout-ns32k.c \
	../aout-target.h \
	../aout32.c \
	../aout64.c \
	../aoutx.h \
	../arc-got.h \
	../arc-plt.h \
	../archive.c \
	../archive64.c \
	../archures.c \
	../bfd.c \
	../bfdio.c \
	../bfdwin.c \
	../binary.c \
	../cache.c \
	../cf-i386lynx.c \
	../cisco-core.c \
	../coff-alpha.c \
	../coff-arm.h \
	../coff-bfd.c \
	../coff-bfd.h \
	../coff-go32.c \
	../coff-i386.c \
	../coff-mips.c \
	../coff-rs6000.c \
	../coff-sh.c \
	../coff-stgo32.c \
	../coff-tic30.c \
	../coff-tic4x.c \
	../coff-tic54x.c \
	../coff-x86_64.c \
	../coff-z80.c \
	../coff-z8k.c \
	../coff64-rs6000.c \
	../coffcode.h \
	../coffgen.c \
	../cofflink.c \
	../coffswap.h \
	../compress.c \
	../corefile.c \
	../cpu-aarch64.c \
	../cpu-aarch64.h \
	../cpu-alpha.c \
	../cpu-amdgcn.c \
	../cpu-arc.c \
	../cpu-arm.c \
	../cpu-arm.h \
	../cpu-avr.c \
	../cpu-bfin.c \
	../cpu-bpf.c \
	../cpu-cr16.c \
	../cpu-cris.c \
	../cpu-crx.c \
	../cpu-csky.c \
	../cpu-d10v.c \
	../cpu-d30v.c \
	../cpu-dlx.c \
	../cpu-epiphany.c \
	../cpu-fr30.c \
	../cpu-frv.c \
	../cpu-ft32.c \
	../cpu-h8300.c \
	../cpu-h8300.h \
	../cpu-hppa.c \
	../cpu-i386.c \
	../cpu-ia64.c \
	../cpu-iamcu.c \
	../cpu-ip2k.c \
	../cpu-iq2000.c \
	../cpu-lm32.c \
	../cpu-loongarch.c \
	../cpu-m10200.c \
	../cpu-m10300.c \
	../cpu-m32c.c \
	../cpu-m32r.c \
	../cpu-m68hc11.c \
	../cpu-m68hc12.c \
	../cpu-m68k.c \
	../cpu-m68k.h \
	../cpu-m9s12x.c \
	../cpu-m9s12xg.c \
	../cpu-mcore.c \
	../cpu-mep.c \
	../cpu-metag.c \
	../cpu-microblaze.c \
	../cpu-mips.c \
	../cpu-mmix.c \
	../cpu-moxie.c \
	../cpu-msp430.c \
	../cpu-mt.c \
	../cpu-nds32.c \
	../cpu-nfp.c \
	../cpu-nios2.c \
	../cpu-ns32k.c \
	../cpu-or1k.c \
	../cpu-pdp11.c \
	../cpu-pj.c \
	../cpu-powerpc.c \
	../cpu-pru.c \
	../cpu-riscv.c \
	../cpu-riscv.h \
	../cpu-rl78.c \
	../cpu-rs6000.c \
	../cpu-rx.c \
	../cpu-s12z.c \
	../cpu-s390.c \
	../cpu-score.c \
	../cpu-sh.c \
	../cpu-sparc.c \
	../cpu-spu.c \
	../cpu-tic30.c \
	../cpu-tic4x.c \
	../cpu-tic54x.c \
	../cpu-tic6x.c \
	../cpu-tilegx.c \
	../cpu-tilepro.c \
	../cpu-v850.c \
	../cpu-v850_rh850.c \
	../cpu-vax.c \
	../cpu-visium.c \
	../cpu-wasm32.c \
	../cpu-xgate.c \
	../cpu-xstormy16.c \
	../cpu-xtensa.c \
	../cpu-z80.c \
	../cpu-z8k.c \
	../dwarf1.c \
	../dwarf2.c \
	../ecoff-bfd.h \
	../ecoff.c \
	../ecofflink.c \
	../ecoffswap.h \
	../elf-attrs.c \
	../elf-bfd.h \
	../elf-eh-frame.c \
	../elf-hppa.h \
	../elf-ifunc.c \
	../elf-linker-x86.h \
	../elf-linux-core.h \
	../elf-m10200.c \
	../elf-m10300.c \
	../elf-nacl.c \
	../elf-nacl.h \
	../elf-properties.c \
	../elf-s390.h \
	../elf-sframe.c \
	../elf-strtab.c \
	../elf-vxworks.c \
	../elf-vxworks.h \
	../elf.c \
	../elf32-am33lin.c \
	../elf32-arc.c \
	../elf32-arm.c \
	../elf32-arm.h \
	../elf32-avr.c \
	../elf32-avr.h \
	../elf32-bfin.c \
	../elf32-bfin.h \
	../elf32-cr16.c \
	../elf32-cr16.h \
	../elf32-cris.c \
	../elf32-crx.c \
	../elf32-csky.c \
	../elf32-csky.h \
	../elf32-d10v.c \
	../elf32-d30v.c \
	../elf32-dlx.c \
	../elf32-dlx.h \
	../elf32-epiphany.c \
	../elf32-fr30.c \
	../elf32-frv.c \
	../elf32-ft32.c \
	../elf32-gen.c \
	../elf32-h8300.c \
	../elf32-hppa.c \
	../elf32-hppa.h \
	../elf32-i386.c \
	../elf32-ip2k.c \
	../elf32-iq2000.c \
	../elf32-lm32.c \
	../elf32-m32c.c \
	../elf32-m32r.c \
	../elf32-m68hc11.c \
	../elf32-m68hc12.c \
	../elf32-m68hc1x.c \
	../elf32-m68hc1x.h \
	../elf32-m68k.c \
	../elf32-m68k.h \
	../elf32-mcore.c \
	../elf32-mep.c \
	../elf32-metag.c \
	../elf32-metag.h \
	../elf32-microblaze.c \
	../elf32-mips.c \
	../elf32-moxie.c \
	../elf32-msp430.c \
	../elf32-mt.c \
	../elf32-nds32.c \
	../elf32-nds32.h \
	../elf32-nios2.c \
	../elf32-nios2.h \
	../elf32-or1k.c \
	../elf32-pj.c \
	../elf32-ppc.c \
	../elf32-ppc.h \
	../elf32-pru.c \
	../elf32-rl78.c \
	../elf32-rx.c \
	../elf32-rx.h \
	../elf32-s12z.c \
	../elf32-s390.c \
	../elf32-score.c \
	../elf32-score.h \
	../elf32-score7.c \
	../elf32-sh-relocs.h \
	../elf32-sh.c \
	../elf32-sparc.c \
	../elf32-spu.c \
	../elf32-spu.h \
	../elf32-tic6x.c \
	../elf32-tic6x.h \
	../elf32-tilegx.c \
	../elf32-tilegx.h \
	../elf32-tilepro.c \
	../elf32-tilepro.h \
	../elf32-v850.c \
	../elf32-v850.h \
	../elf32-vax.c \
	../elf32-visium.c \
	../elf32-wasm32.c \
	../elf32-xgate.c \
	../elf32-xstormy16.c \
	../elf32-xtensa.c \
	../elf32-z80.c \
	../elf32.c \
	../elf64-alpha.c \
	../elf64-amdgcn.c \
	../elf64-bpf.c \
	../elf64-gen.c \
	../elf64-hppa.c \
	../elf64-hppa.h \
	../elf64-ia64-vms.c \
	../elf64-mips.c \
	../elf64-mmix.c \
	../elf64-nfp.c \
	../elf64-ppc.c \
	../elf64-ppc.h \
	../elf64-s390.c \
	../elf64-sparc.c \
	../elf64-tilegx.c \
	../elf64-tilegx.h \
	../elf64-x86-64.c \
	../elf64.c \
	../elfcode.h \
	../elfcore.h \
	../elflink.c \
	../elfn32-mips.c \
	../elfxx-aarch64.c \
	../elfxx-aarch64.h \
	../elfxx-ia64.c \
	../elfxx-ia64.h \
	../elfxx-loongarch.c \
	../elfxx-loongarch.h \
	../elfxx-mips.c \
	../elfxx-mips.h \
	../elfxx-riscv.c \
	../elfxx-riscv.h \
	../elfxx-sparc.c \
	../elfxx-sparc.h \
	../elfxx-tilegx.c \
	../elfxx-tilegx.h \
	../elfxx-x86.c \
	../elfxx-x86.c \
	../elfxx-x86.h \
	../format.c \
	../genlink.h \
	../go32stub.h \
	../hash.c \
	../hpux-core.c \
	../i386aout.c \
	../i386bsd.c \
	../i386lynx.c \
	../i386msdos.c \
	../ihex.c \
	../init.c \
	../irix-core.c \
	../libaout.h \
	../libbfd.c \
	../libbfd.h \
	../libcoff.h \
	../libecoff.h \
	../libhppa.h \
	../libpei.h \
	../libxcoff.h \
	../linker.c \
	../lynx-core.c \
	../mach-o-aarch64.c \
	../mach-o-arm.c \
	../mach-o-i386.c \
	../mach-o-x86-64.c \
	../mach-o.c \
	../mach-o.h \
	../merge.c \
	../mmo.c \
	../netbsd-core.c \
	../netbsd.h \
	../ns32k.h \
	../ns32knetbsd.c \
	../opncls.c \
	../osf-core.c \
	../pc532-mach.c \
	../pdb.c \
	../pdp11.c \
	../pe-aarch64.c \
	../pe-arm-wince.c \
	../pe-arm.c \
	../pe-i386.c \
	../pe-mcore.c \
	../pe-sh.c \
	../pe-x86_64.c \
	../pef-traceback.h \
	../pef.c \
	../pef.h \
	../pei-aarch64.c \
	../pei-arm-wince.c \
	../pei-arm.c \
	../pei-i386.c \
	../pei-ia64.c \
	../pei-loongarch64.c \
	../pei-mcore.c \
	../pei-sh.c \
	../pei-x86_64.c \
	../peicode.h \
	../plugin.c \
	../plugin.h \
	../ppcboot.c \
	../reloc.c \
	../reloc16.c \
	../rs6000-core.c \
	../sco5-core.c \
	../section.c \
	../simple.c \
	../som.c \
	../som.h \
	../srec.c \
	../stab-syms.c \
	../stabs.c \
	../syms.c \
	../sysdep.h \
	../targets.c \
	../tekhex.c \
	../trad-core.c \
	../vax1knetbsd.c \
	../vaxnetbsd.c \
	../verilog.c \
	../version.h \
	../vms-alpha.c \
	../vms-lib.c \
	../vms-misc.c \
	../vms.h \
	../wasm-module.c \
	../wasm-module.h \
	../xcofflink.c \
	../xcofflink.h \
	../xsym.c \
	../xsym.h \
	../xtensa-dynconfig.c \
	../xtensa-isa.c \
	../xtensa-modules.c 

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of build dir POTFILES.
BLD-POTFILES = \
	../bfdver.h \
	../elf32-aarch64.c \
	../elf32-ia64.c \
	../elf32-loongarch.c \
	../elf32-riscv.c \
	../elf32-target.h \
	../elf64-aarch64.c \
	../elf64-ia64.c \
	../elf64-loongarch.c \
	../elf64-riscv.c \
	../elf64-target.h \
	../pe-aarch64igen.c \
	../pe-loongarch64igen.c \
	../peigen.c \
	../pepigen.c \
	../pex64igen.c \
	../targmatch.h 

CATALOGS = 
CATOBJEXT = 
INSTOBJEXT = 

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo .msg .cat

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && $(GENCAT) $@ $*.msg


all: all-no

all-yes: $(CATALOGS) # $(PACKAGE).pot
all-no:

$(srcdir)/$(PACKAGE).pot: $(SRC-POTFILES) $(BLD-POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --msgid-bugs-address=https://sourceware.org/bugzilla/ \
	  --files-from=$(srcdir)/SRC-POTFILES.in 
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=.. \
	  --directory=. \
	  --add-comments --keyword=_ --keyword=N_ \
	  --join-existing \
	  --msgid-bugs-address=https://sourceware.org/bugzilla/ \
	  --files-from=$(srcdir)/BLD-POTFILES.in
	rm -f $(srcdir)/$(PACKAGE).pot
	mv $(PACKAGE).po $(srcdir)/$(PACKAGE).pot

$(srcdir)/cat-id-tbl.c: stamp-cat-id; @:
$(srcdir)/stamp-cat-id: $(PACKAGE).pot
	rm -f cat-id-tbl.tmp
	sed -f ../intl/po2tbl.sed $(srcdir)/$(PACKAGE).pot \
		| sed -e "s/@PACKAGE NAME@/$(PACKAGE)/" > cat-id-tbl.tmp
	if cmp -s cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; then \
	  rm cat-id-tbl.tmp; \
	else \
	  echo cat-id-tbl.c changed; \
	  rm -f $(srcdir)/cat-id-tbl.c; \
	  mv cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; \
	fi
	cd $(srcdir) && rm -f stamp-cat-id && echo timestamp > stamp-cat-id


install: install-exec install-data
install-exec:
install-info:
install-html:
install-pdf:
install-data: install-data-no
install-data-no: all
install-data-yes: all
	if test -r $(MKINSTALLDIRS); then \
	  $(MKINSTALLDIRS) $(DESTDIR)$(datadir); \
	else \
	  $(top_srcdir)/mkinstalldirs $(DESTDIR)$(datadir); \
	fi
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  case "$$cat" in \
	    *.gmo) destdir=$(gnulocaledir);; \
	    *)     destdir=$(localedir);; \
	  esac; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  dir=$(DESTDIR)$$destdir/$$lang/LC_MESSAGES; \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $$dir; \
	  else \
	    $(top_srcdir)/mkinstalldirs $$dir; \
	  fi; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $$cat as $$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $(srcdir)/$$cat as" \
		 "$$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  fi; \
	  if test -r $$cat.m; then \
	    $(INSTALL_DATA) $$cat.m $$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	    echo "installing $$cat.m as $$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	  else \
	    if test -r $(srcdir)/$$cat.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$cat.m \
		$$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	      echo "installing $(srcdir)/$$cat as" \
		   "$$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $(DESTDIR)$(gettextsrcdir); \
	  else \
	    $(top_srcdir)/mkinstalldirs $(DESTDIR)$(gettextsrcdir); \
	  fi; \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	done
	rm -f $(DESTDIR)$(gettextsrcdir)/po-Makefile.in.in

check: all

cat-id-tbl.o: ../intl/libgettext.h

html dvi pdf ps info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.old.po cat-id-tbl.tmp
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in *.mo *.msg *.cat *.cat.m
	rm -f SRC-POTFILES BLD-POTFILES 

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES) SRC-POTFILES.in BLD-POTFILES.in

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: update-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  ln $(srcdir)/$$file $(distdir) 2> /dev/null \
	    || cp -p $(srcdir)/$$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(PACKAGE).pot
	PATH=`pwd`/../src:$$PATH; \
	cd $(srcdir); \
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  mv $$lang.po $$lang.old.po; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$lang.old.po $(PACKAGE).pot -o $$lang.po; then \
	    rm -f $$lang.old.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.po; \
	    mv $$lang.old.po $$lang.po; \
	  fi; \
	done

SRC-POTFILES: SRC-POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

BLD-POTFILES: BLD-POTFILES.in
	  ( rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	../& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

SRC-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/SRC-POTFILES.in

BLD-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/BLD-POTFILES.in

# Note - The presence of SRC-POTFILES and BLD-POTFILES as dependencies
# here breaks the implementation of the 'distclean' rule for maintainers.
# This is because if 'make distclean' is run in the BFD directory, the
# Makefile there will be deleted before 'distclean' is made here, and so
# the dependency SRC-POTFILES -> SRC-POTFILES.in -> ../Makefile cannot
# be satisfied.
#
# The SRC-POTFILES and BLD-POTFILES dependencies cannot be removed,
# however since it is necessary that these files be built during
# *configure* time, so that configure can insert them into the
# po/Makefile that it is creating, so that the Makefile will have
# the correct dependencies.
Makefile: Make-in ../config.status SRC-POTFILES BLD-POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
