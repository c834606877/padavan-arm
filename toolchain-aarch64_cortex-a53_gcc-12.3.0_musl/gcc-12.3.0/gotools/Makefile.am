# Makefile for gotools
#   Copyright (C) 2015-2016 Free Software Foundation, Inc.
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

ACLOCAL_AMFLAGS = -I ../config

gcc_version := $(shell $(GCC_FOR_TARGET) -dumpversion)

libexecsubdir = $(libexecdir)/gcc/$(target_noncanonical)/$(gcc_version)

mkinstalldirs = $(SHELL) $(toplevel_srcdir)/mkinstalldirs
PWD_COMMAND = $${PWDCMD-pwd}
STAMP = echo timestamp >

libgodir = ../$(target_noncanonical)/libgo
libgccdir = ../$(target_noncanonical)/libgcc
LIBGODEP = $(libgodir)/libgo.la

LIBGOTOOL = $(libgodir)/libgotool.a

if NATIVE
# Use the compiler we just built.
GOCOMPILER = $(GOC_FOR_TARGET) $(XGCC_FLAGS_FOR_TARGET)
else
GOCOMPILER = $(GOC)
endif

GOCFLAGS = $(CFLAGS_FOR_TARGET)
GOCOMPILE = $(GOCOMPILER) $(GOCFLAGS)

AM_GOCFLAGS = -I $(libgodir)
AM_LDFLAGS = -L $(libgodir) -L $(libgodir)/.libs \
	-L $(libgccdir) -L $(libgccdir)/.libs -lgcc_s
GOLINK = $(GOCOMPILER) $(GOCFLAGS) $(AM_GOCFLAGS) $(LDFLAGS) $(AM_LDFLAGS) -o $@

libgosrcdir = $(srcdir)/../libgo/go
cmdsrcdir = $(libgosrcdir)/cmd
libgomiscdir = $(srcdir)/../libgo/misc

go_cmd_go_files = \
	$(cmdsrcdir)/go/alldocs.go \
	$(cmdsrcdir)/go/go11.go \
	$(cmdsrcdir)/go/main.go

go_cmd_gofmt_files = \
	$(cmdsrcdir)/gofmt/doc.go \
	$(cmdsrcdir)/gofmt/gofmt.go \
	$(cmdsrcdir)/gofmt/internal.go \
	$(cmdsrcdir)/gofmt/rewrite.go \
	$(cmdsrcdir)/gofmt/simplify.go

go_cmd_cgo_files = \
	$(cmdsrcdir)/cgo/ast.go \
	$(cmdsrcdir)/cgo/ast_go118.go \
	$(cmdsrcdir)/cgo/doc.go \
	$(cmdsrcdir)/cgo/gcc.go \
	$(cmdsrcdir)/cgo/godefs.go \
	$(cmdsrcdir)/cgo/main.go \
	$(cmdsrcdir)/cgo/out.go \
	$(cmdsrcdir)/cgo/util.go

go_cmd_vet_files = \
	$(cmdsrcdir)/vet/doc.go \
	$(cmdsrcdir)/vet/main.go

go_cmd_buildid_files = \
	$(cmdsrcdir)/buildid/buildid.go \
	$(cmdsrcdir)/buildid/doc.go

go_cmd_test2json_files = \
	$(cmdsrcdir)/test2json/main.go

GCCGO_INSTALL_NAME := $(shell echo gccgo|sed '$(program_transform_name)')
GCC_INSTALL_NAME := $(shell echo gcc|sed '$(program_transform_name)')
GXX_INSTALL_NAME := $(shell echo g++|sed '$(program_transform_name)')

zdefaultcc.go: s-zdefaultcc; @true
s-zdefaultcc: Makefile
	echo 'package main' > zdefaultcc.go.tmp
	echo 'func defaultGCCGO(goos, goarch string) string { return "$(bindir)/$(GCCGO_INSTALL_NAME)" }' >> zdefaultcc.go.tmp
	echo 'func defaultCC(goos, goarch string) string { return "$(GCC_INSTALL_NAME)" }' >> zdefaultcc.go.tmp
	echo 'func defaultCXX(goos, goarch string) string { return "$(GXX_INSTALL_NAME)" }' >> zdefaultcc.go.tmp
	echo 'const defaultPkgConfig = "pkg-config"' >> zdefaultcc.go.tmp
	$(SHELL) $(srcdir)/../move-if-change zdefaultcc.go.tmp zdefaultcc.go
	$(STAMP) $@ 

MOSTLYCLEANFILES = \
	zdefaultcc.go s-zdefaultcc \
	check-gccgo check-gcc gotools.head *-testlog gotools.sum gotools.log \
	*.sent

mostlyclean-local:
	if test -d check-go-dir; then chmod -R u+w check-go-dir; fi
	rm -rf check-go-dir cgo-test-dir carchive-test-dir \
	check-vet-dir check-embed-dir gocache-test

if NATIVE

# For a native build we build the programs using the newly built libgo
# and install them as regular programs.

bin_PROGRAMS = go$(EXEEXT) gofmt$(EXEEXT)
noinst_PROGRAMS = cgo$(EXEEXT) vet$(EXEEXT) buildid$(EXEEXT) test2json$(EXEEXT)
man_MANS = go.1 gofmt.1

go$(EXEEXT): $(go_cmd_go_files) $(LIBGOTOOL) $(LIBGODEP)
	$(GOLINK) $(go_cmd_go_files) $(LIBGOTOOL) $(LIBS) $(NET_LIBS)
gofmt$(EXEEXT): $(go_cmd_gofmt_files) $(LIBGODEP)
	$(GOLINK) $(go_cmd_gofmt_files) $(LIBGOTOOL) $(LIBS) $(NET_LIBS)
cgo$(EXEEXT): $(go_cmd_cgo_files) zdefaultcc.go $(LIBGOTOOL) $(LIBGODEP)
	$(GOLINK) $(go_cmd_cgo_files) zdefaultcc.go $(LIBGOTOOL) $(LIBS) $(NET_LIBS)
vet$(EXEEXT): $(go_cmd_vet_files) $(LIBGOTOOL) $(LIBGODEP)
	$(GOLINK) $(go_cmd_vet_files) $(LIBGOTOOL) $(LIBS) $(NET_LIBS)
buildid$(EXEEXT): $(go_cmd_buildid_files) $(LIBGOTOOL) $(LIBGODEP)
	$(GOLINK) $(go_cmd_buildid_files) $(LIBGOTOOL) $(LIBS) $(NET_LIBS)
test2json$(EXEEXT): $(go_cmd_test2json_files) $(LIBGOTOOL) $(LIBGODEP)
	$(GOLINK) $(go_cmd_test2json_files) $(LIBGOTOOL) $(LIBS) $(NET_LIBS)

install-exec-local: $(noinst_PROGRAMS)
	$(MKDIR_P) $(DESTDIR)$(libexecsubdir)
	for f in $(noinst_PROGRAMS); do \
	  rm -f $(DESTDIR)$(libexecsubdir)/$$f; \
	  $(INSTALL_PROGRAM) $$f $(DESTDIR)$(libexecsubdir)/$$f; \
	done

uninstall-local:
	for f in $(noinst_PROGRAMS); do \
	  rm -f $(DESTDIR)$(libexecsubdir)/$$f; \
	done

GOTESTFLAGS =

# Number of seconds before tests time out.
GOTOOLS_TEST_TIMEOUT = 1200

# Run tests using the go tool, and frob the output to look like that
# generated by DejaGNU.  The main output of this is two files:
# gotools.sum and gotools.log.

# check-head starts generating the log files in DejaGNU format.  This
# is a separate target so that the date is approximately when we start
# running the tests.
check-head:
	@echo "Test Run By $${USER} on `date`" > gotools.head
	@echo "Native configuration is $(host_triplet)" >> gotools.head
	@echo >> gotools.head
	@echo "		=== gotools tests ===" >> gotools.head
	@echo >> gotools.head

# check-gccgo is a little shell script that executes gccgo with the
# options to pick up the newly built libgo and libstdc++.
check-gccgo: Makefile
	rm -f $@ $@.tmp
	echo "#!/bin/sh" > $@.tmp
	abs_libgodir=`cd $(libgodir) && $(PWD_COMMAND)`; \
	echo "$(GOCOMPILE)" '"$$@"' "-I $${abs_libgodir} -L $${abs_libgodir} -L $${abs_libgodir}/.libs -B$${abs_libgodir}/../libstdc++-v3/src/.libs -B$${abs_libgodir}/../libstdc++-v3/libsupc++/.libs" >> $@.tmp
	chmod +x $@.tmp
	mv -f $@.tmp $@

# check-gcc is a little shell script that executes the newly built gcc
# with the options to pick up the newly built libgo and libstdc++.
check-gcc: Makefile
	rm -f $@ $@.tmp
	echo "#!/bin/sh" > $@.tmp
	abs_libgodir=`cd $(libgodir) && $(PWD_COMMAND)`; \
	echo "$(GCC_FOR_TARGET)" '"$$@"' "-L $${abs_libgodir} -L $${abs_libgodir}/.libs -B$${abs_libgodir}/../libstdc++-v3/src/.libs -B$${abs_libgodir}/../libstdc++-v3/libsupc++/.libs" >> $@.tmp
	chmod +x $@.tmp
	mv -f $@.tmp $@

# CHECK_ENV sets up the environment to run the newly built go tool.
# If you change this, change ECHO_ENV, below.
# The fl shell variable is used to avoid having FAIL appear
# in the log unnecessarily.
CHECK_ENV = \
	PATH=`echo $(abs_builddir):$${PATH} | sed 's,::*,:,g;s,^:*,,;s,:*$$,,'`; \
	export PATH; \
	GCCGO="$(abs_builddir)/check-gccgo"; \
	export GCCGO; \
	CC="$(abs_builddir)/check-gcc"; \
	export CC; \
	GCCGOTOOLDIR="$(abs_builddir)"; \
	export GCCGOTOOLDIR; \
	GO_TESTING_GOTOOLS=yes; \
	export GO_TESTING_GOTOOLS; \
	abs_libgodir=`cd $(libgodir) && $(PWD_COMMAND)`; \
	LD_LIBRARY_PATH=`echo $${abs_libgodir}/.libs:$${LD_LIBRARY_PATH} | sed 's,::*,:,g;s,^:*,,;s,:*$$,,'`; \
	export LD_LIBRARY_PATH; \
	GOROOT=$${abs_libgodir}; \
	export GOROOT; \
	GOCACHE=$(abs_builddir)/gocache-test; \
	export GOCACHE; \
	fl1="FA"; fl2="IL"; fl="$${fl1}$${fl2}";

# ECHO_ENV is a variant of CHECK_ENV to put into a testlog file.
# It assumes that abs_libgodir is set.
ECHO_ENV = PATH=`echo $(abs_builddir):$${PATH} | sed 's,::*,:,g;s,^:*,,;s,:*$$,,'` GCCGO='$(abs_builddir)/check-gccgo' CC='$(abs_builddir)/check-gcc' GCCGOTOOLDIR='$(abs_builddir)' GO_TESTING_GOTOOLS=yes LD_LIBRARY_PATH=`echo $${abs_libgodir}/.libs:$${LD_LIBRARY_PATH} | sed 's,::*,:,g;s,^:*,,;s,:*$$,,'` GOROOT=`echo $${abs_libgodir} GOCACHE='$(abs_builddir)/gocache-test'`

# check-go-tool runs `go test cmd/go` in our environment.
check-go-tool: go$(EXEEXT) $(noinst_PROGRAMS) check-head check-gccgo check-gcc
	if test -d check-go-dir; then chmod -R u+w check-go-dir; fi
	rm -rf check-go-dir cmd_go-testlog
	$(MKDIR_P) check-go-dir/src/cmd/go
	cp $(libgosrcdir)/go.mod check-go-dir/src/
	cp $(cmdsrcdir)/go.mod check-go-dir/src/cmd/
	$(MKDIR_P) check-go-dir/src/vendor check-go-dir/src/cmd/vendor
	cp $(libgosrcdir)/vendor/modules.txt check-go-dir/src/vendor/
	cp $(libgosrcdir)/cmd/vendor/modules.txt check-go-dir/src/cmd/vendor/
	cp $(cmdsrcdir)/go/*.go check-go-dir/src/cmd/go/
	cp -r $(cmdsrcdir)/go/internal check-go-dir/src/cmd/go/
	cp $(libgodir)/zdefaultcc.go check-go-dir/src/cmd/go/internal/cfg/
	cp -r $(cmdsrcdir)/go/testdata check-go-dir/src/cmd/go/
	cp -r $(cmdsrcdir)/internal check-go-dir/src/cmd/
	$(MKDIR_P) check-go-dir/src/cmd/vendor/golang.org/x
	cp -r $(libgosrcdir)/golang.org/x/mod check-go-dir/src/cmd/vendor/golang.org/x/
	cp -r $(libgosrcdir)/golang.org/x/crypto check-go-dir/src/cmd/vendor/golang.org/x/
	cp -r $(libgosrcdir)/golang.org/x/xerrors check-go-dir/src/cmd/vendor/golang.org/x/
	cp -r $(libgosrcdir)/golang.org/x/tools check-go-dir/src/cmd/vendor/golang.org/x/
	cp $(libgodir)/objabi.go check-go-dir/src/cmd/internal/objabi/
	@abs_libgodir=`cd $(libgodir) && $(PWD_COMMAND)`; \
	abs_checkdir=`cd check-go-dir && $(PWD_COMMAND)`; \
	echo "cd check-go-dir/src/cmd/go && $(ECHO_ENV) GOPATH=$${abs_checkdir} $(abs_builddir)/go$(EXEEXT) test -test.short -test.timeout=$(GOTOOLS_TEST_TIMEOUT)s -test.v" > cmd_go-testlog
	$(CHECK_ENV) \
	GOPATH=`cd check-go-dir && $(PWD_COMMAND)`; \
	export GOPATH; \
	(cd check-go-dir/src/cmd/go && $(abs_builddir)/go$(EXEEXT) test -test.short -test.timeout=$(GOTOOLS_TEST_TIMEOUT)s -test.v) >> cmd_go-testlog 2>&1 || echo "--- $${fl}: go test cmd/go (0.00s)" >> cmd_go-testlog
	grep '^--- ' cmd_go-testlog | sed -e 's/^--- \(.*\) ([^)]*)$$/\1/' | sort -k 2

# check-runtime runs `go test runtime` in our environment.
# The runtime package is also tested as part of libgo,
# but the runtime tests use the go tool heavily, so testing
# here too will catch more problems.
check-runtime: go$(EXEEXT) $(noinst_PROGRAMS) check-head check-gccgo check-gcc
	rm -f runtime-testlog
	@abs_libgodir=`cd $(libgodir) && $(PWD_COMMAND)`; \
	LD_LIBRARY_PATH=`echo $${abs_libgodir}/.libs:$${LD_LIBRARY_PATH} | sed 's,::*,:,g;s,^:*,,;s,:*$$,,'`; \
	export LD_LIBRARY_PATH; \
	GOARCH=`$(abs_builddir)/go$(EXEEXT) env GOARCH`; \
	GOOS=`$(abs_builddir)/go$(EXEEXT) env GOOS`; \
	files=`$(SHELL) $(libgosrcdir)/../match.sh --goarch=$${GOARCH} --goos=$${GOOS} --srcdir=$(libgosrcdir)/runtime --extrafiles="$(libgodir)/runtime_linknames.go $(libgodir)/runtime_sysinfo.go $(libgodir)/sigtab.go $(libgodir)/goroot.go" --tag=libffi`; \
	echo "$(ECHO_ENV) GC='$(abs_builddir)/check-gccgo -fgo-compiling-runtime' GOARCH=$${GOARCH} GOOS=$${GOOS} $(SHELL) $(libgosrcdir)/../testsuite/gotest --goarch=$${GOARCH} --goos=$${GOOS} --basedir=$(libgosrcdir)/.. --srcdir=$(libgosrcdir)/runtime --pkgpath=runtime --pkgfiles='$${files}' $(GOTESTFLAGS) -test.timeout=$(GOTOOLS_TEST_TIMEOUT)s -test.v" > runtime-testlog
	$(CHECK_ENV) \
	GC="$${GCCGO} -fgo-compiling-runtime"; \
	export GC; \
	GOARCH=`$(abs_builddir)/go$(EXEEXT) env GOARCH`; \
	GOOS=`$(abs_builddir)/go$(EXEEXT) env GOOS`; \
	files=`$(SHELL) $(libgosrcdir)/../match.sh --goarch=$${GOARCH} --goos=$${GOOS} --srcdir=$(libgosrcdir)/runtime --extrafiles="$(libgodir)/runtime_linknames.go $(libgodir)/runtime_sysinfo.go $(libgodir)/sigtab.go $(libgodir)/goroot.go" --tag=libffi`; \
	$(SHELL) $(libgosrcdir)/../testsuite/gotest --goarch=$${GOARCH} --goos=$${GOOS} --basedir=$(libgosrcdir)/.. --srcdir=$(libgosrcdir)/runtime --pkgpath=runtime --pkgfiles="$${files}" $(GOTESTFLAGS) -test.timeout=$(GOTOOLS_TEST_TIMEOUT)s -test.v >> runtime-testlog 2>&1 || echo "--- $${fl}: go test runtime (0.00s)" >> runtime-testlog
	grep '^--- ' runtime-testlog | sed -e 's/^--- \(.*\) ([^)]*)$$/\1/' | sort -k 2

# check-cgo-test runs `go test` in misc/cgo/test.
check-cgo-test: go$(EXEEXT) $(noinst_PROGRAMS) check-head check-gccgo check-gcc
	rm -rf cgo-test-dir cgo-testlog
	$(MKDIR_P) cgo-test-dir/misc/cgo
	echo 'module misc' > cgo-test-dir/misc/go.mod
	cp -r $(libgomiscdir)/cgo/test cgo-test-dir/misc/cgo/
	@abs_libgodir=`cd $(libgodir) && $(PWD_COMMAND)`; \
	echo "cd cgo-test-dir/misc/cgo/test && $(ECHO_ENV) GOTRACEBACK=2 $(abs_builddir)/go$(EXEEXT) test -test.short -test.timeout=$(GOTOOLS_TEST_TIMEOUT)s -test.v" > cgo-testlog
	$(CHECK_ENV) \
	GOTRACEBACK=2; \
	export GOTRACEBACK; \
	(cd cgo-test-dir/misc/cgo/test && $(abs_builddir)/go$(EXEEXT) test -test.short -test.timeout=$(GOTOOLS_TEST_TIMEOUT)s -test.v) >> cgo-testlog 2>&1 || echo "--- $${fl}: go test misc/cgo/test (0.00s)" >> cgo-testlog
	grep '^--- ' cgo-testlog | sed -e 's/^--- \(.*\) ([^)]*)$$/\1/' | sort -k 2

# check-carchive-test runs `go test` in misc/cgo/testcarchive.
# in our environment.
check-carchive-test: go$(EXEEXT) $(noinst_PROGRAMS) check-head check-gccgo check-gcc
	rm -rf carchive-test-dir carchive-testlog
	$(MKDIR_P) carchive-test-dir/misc/cgo
	echo 'module misc' > carchive-test-dir/misc/go.mod
	cp -r $(libgomiscdir)/cgo/testcarchive carchive-test-dir/misc/cgo/
	@abs_libgodir=`cd $(libgodir) && $(PWD_COMMAND)`; \
	echo "cd carchive-test-dir/misc/cgo/testcarchive && $(ECHO_ENV) LIBRARY_PATH=`echo $${abs_libgodir}/.libs` $(abs_builddir)/go$(EXEEXT) test -test.timeout=$(GOTOOLS_TEST_TIMEOUT)s -test.v" > carchive-testlog
	$(CHECK_ENV) \
	LIBRARY_PATH=`echo $${abs_libgodir}/.libs:$${LIBRARY_PATH} | sed 's,::*,:,g;s,^:*,,;s,:*$$,,'`; \
	export LIBRARY_PATH; \
	(cd carchive-test-dir/misc/cgo/testcarchive && $(abs_builddir)/go$(EXEEXT) test -test.timeout=$(GOTOOLS_TEST_TIMEOUT)s -test.v) >> carchive-testlog 2>&1 || echo "--- $${fl}: go test misc/cgo/testcarchive (0.00s)" >> carchive-testlog
	grep '^--- ' carchive-testlog | sed -e 's/^--- \(.*\) ([^)]*)$$/\1/' | sort -k 2

# check-vet runs `go test cmd/vet` in our environment.
check-vet: go$(EXEEXT) $(noinst_PROGRAMS) check-head check-gccgo check-gcc
	rm -rf check-vet-dir cmd_vet-testlog
	$(MKDIR_P) check-vet-dir/src/cmd/internal check-vet-dir/src/cmd/vendor/golang.org/x
	cp $(libgosrcdir)/go.mod check-vet-dir/src/
	cp $(cmdsrcdir)/go.mod check-vet-dir/src/cmd/
	$(MKDIR_P) check-vet-dir/src/vendor check-vet-dir/src/cmd/vendor
	cp $(libgosrcdir)/vendor/modules.txt check-vet-dir/src/vendor/
	cp $(libgosrcdir)/cmd/vendor/modules.txt check-vet-dir/src/cmd/vendor/
	cp -r $(cmdsrcdir)/vet check-vet-dir/src/cmd/
	cp -r $(cmdsrcdir)/internal/objabi check-vet-dir/src/cmd/internal
	cp $(libgodir)/objabi.go check-vet-dir/src/cmd/internal/objabi/
	cp -r $(libgosrcdir)/golang.org/x/tools check-vet-dir/src/cmd/vendor/golang.org/x/
	@abs_libgodir=`cd $(libgodir) && $(PWD_COMMAND)`; \
	abs_checkdir=`cd check-vet-dir && $(PWD_COMMAND)`; \
	echo "cd check-vet-dir/src/cmd/vet && $(ECHO_ENV) GOPATH=$${abs_checkdir} $(abs_builddir)/go$(EXEEXT) test -test.short -test.timeout=$(GOTOOLS_TEST_TIMEOUT)s -test.v" > cmd_vet-testlog
	$(CHECK_ENV) \
	GOPATH=`cd check-vet-dir && $(PWD_COMMAND)`; \
	export GOPATH; \
	(cd check-vet-dir/src/cmd/vet && $(abs_builddir)/go$(EXEEXT) test -test.short -test.timeout=$(GOTOOLS_TEST_TIMEOUT)s -test.v) >> cmd_vet-testlog 2>&1 || echo "--- $${fl}: go test cmd/vet (0.00s)" >> cmd_vet-testlog
	grep '^--- ' cmd_vet-testlog | sed -e 's/^--- \(.*\) ([^)]*)$$/\1/' | sort -k 2

# check-embed runs `go test embed/internal/embedtest` in our environment.
check-embed: go$(EXEEXT) $(noinst_PROGRAMS) check-head check-gccgo check-gcc
	rm -rf check-embed-dir embed-testlog
	$(MKDIR_P) check-embed-dir/src/embed/internal
	cp $(libgosrcdir)/go.mod check-embed-dir/src/
	$(MKDIR_P) check-embed-dir/src/vendor
	cp $(libgosrcdir)/vendor/modules.txt check-embed-dir/src/vendor/
	cp -r $(libgosrcdir)/embed/internal/embedtest check-embed-dir/src/embed/internal
	@abs_libgodir=`cd $(libgodir) && $(PWD_COMMAND)`; \
	abs_checkdir=`cd check-embed-dir && $(PWD_COMMAND)`; \
	echo "cd check-embed-dir/src/embed/internal/embedtest && $(ECHO_ENV) GOPATH=$${abs_checkdir} $(abs_builddir)/go$(EXEEXT) test -test.short -test.timeout=$(GOTOOLS_TEST_TIMEOUT)s -test.v" > embed-testlog
	$(CHECK_ENV) \
	GOPATH=`cd check-embed-dir && $(PWD_COMMAND)`; \
	export GOPATH; \
	(cd check-embed-dir/src/embed/internal/embedtest && $(abs_builddir)/go$(EXEEXT) test -test.short -test.timeout=$(GOTOOLS_TEST_TIMEOUT)s -test.v) >> embed-testlog 2>&1 || echo "--- $${fl}: go test embed/internal/embedtest (0.00s)" >> embed-testlog
	grep '^--- ' embed-testlog | sed -e 's/^--- \(.*\) ([^)]*)$$/\1/' | sort -k 2

# The check targets runs the tests and assembles the output files.
check: check-head check-go-tool check-runtime check-cgo-test check-carchive-test check-vet check-embed
	@mv gotools.head gotools.sum
	@cp gotools.sum gotools.log
	@for file in cmd_go-testlog runtime-testlog cgo-testlog carchive-testlog cmd_vet-testlog embed-testlog; do \
	  testname=`echo $${file} | sed -e 's/-testlog//' -e 's|_|/|'`; \
	  echo "Running $${testname}" >> gotools.sum; \
	  echo "Running $${testname}" >> gotools.log; \
	  sed -e 's/^--- \(.*\) ([^)]*)$$/\1/' < $${file} >> gotools.log; \
	  grep '^--- ' $${file} | sed -e 's/^--- \(.*\) ([^)]*)$$/\1/' -e 's/SKIP/UNTESTED/' | sort -k 2 >> gotools.sum; \
	done
	@echo >> gotools.sum
	@echo "		=== gotools Summary ===" >> gotools.sum
	@pass=`grep -c '^PASS' gotools.sum`; \
	if test "$${pass}" -ne "0"; then \
	  echo "# of expected passes		$${pass}" >> gotools.sum; \
	fi
	@fail=`grep -c '^FAIL' gotools.sum`; \
	if test "$${fail}" -ne "0"; then \
	  echo "# of unexpected failures	$${fail}" >> gotools.sum; \
	fi
	@untested=`grep -c '^UNTESTED' gotools.sum`; \
	if test "$${untested}" -ne "0"; then \
	  echo "# of untested testcases		$${untested}" >> gotools.sum; \
	fi
	@echo `echo $(GOC_FOR_TARGET) | sed -e 's/ .*//'`  `$(GOC_FOR_TARGET) -v 2>&1 | grep " version" | sed -n -e 's/.* \(version.*$$\)/\1/p'` >> gotools.sum
	@echo >> gotools.log
	@echo "runtest completed at `date`" >> gotools.log
	@if grep '^FAIL' gotools.sum >/dev/null 2>&1; then exit 1; fi

.PHONY: check check-head check-go-tool check-runtime check-cgo-test
.PHONY: check-carchive-test check-vet check-embed

else

# For a non-native build we have to build the programs using a
# previously built host (or build -> host) Go compiler.  We should
# only do this if such a compiler is available.  We also need to get
# the right values for GOARCH and GOOS in the default build context in
# the go/build package.  Figure this out later.

endif
