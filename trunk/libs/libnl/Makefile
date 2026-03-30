SRC_NAME=libnl-tiny
SRC_URL=https://codeload.github.com/openwrt/libnl-tiny/zip/refs/heads/master

THISDIR = $(shell pwd)

CFLAGS += -fno-unwind-tables -fno-asynchronous-unwind-tables

#download_test extract_test config_test
all: config_test
	$(MAKE) -j$(HOST_NCPU) -C $(SRC_NAME)/build

download_test:
	( if [ ! -f $(THISDIR)/$(SRC_NAME).tar.gz ]; then \
		wget -t5 --timeout=20 --no-check-certificate -O $(SRC_NAME).tar.gz $(SRC_URL); \
	fi )

extract_test:
	( if [ ! -d $(THISDIR)/$(SRC_NAME) ]; then \
		tar zxf $(SRC_NAME).tar.gz; \
	fi )

config_test:
	( if [ -f ./config_done ]; then \
		echo "the same configuration"; \
	else \
		make clean;\
		make configure && touch config_done; \
	fi )

configure:
	echo "STAGEDIR=$(STAGEDIR)"
	( mkdir -p $(SRC_NAME)/build && cd $(SRC_NAME)/build ; \
	DESTDIR="" cmake -DCMAKE_TOOLCHAIN_FILE=../../cross-aarch64-linux.cmake -DCMAKE_BUILD_TYPE=RELEASE -DCMAKE_EXE_LINKER_FLAGS=-L$(STAGEDIR)/lib -DCMAKE_INSTALL_PREFIX=$(STAGEDIR) .. \
	)

clean:
	#( cd $(SRC_NAME)/build ; \
	#cmake -DCMAKE_TOOLCHAIN_FILE=../../cross-aarch64-linux.cmake -DCMAKE_BUILD_TYPE=RELEASE -DCMAKE_EXE_LINKER_FLAGS=-L$(STAGEDIR)/lib -DCMAKE_INSTALL_LIBDIR=$(STAGEDIR) .. clean \
	#)

	rm -rf $(SRC_NAME)/build
	rm -rf $(SRC_NAME)/CMakeFiles
	rm -rf $(SRC_NAME)/CMakeCache.txt
	rm -rf $(SRC_NAME)/Makefile
	rm -f config_done

romfs:
	#$(ROMFSINST) $(THISDIR)/$(SRC_NAME)/build/ttyd /usr/bin/ttyd
	#$(ROMFSINST) $(THISDIR)/ttyd.sh /usr/bin/ttyd.sh

install:
	#$(MAKE) -C $(SRC_NAME) install DESTDIR=""
	#cp -f $(SRC_NAME)/*.a $(STAGEDIR)/lib
	(cd $(SRC_NAME)/build ; \
		make install DESTDIR=""   \
	)

romfs:
	cp -fP $(DESTDIR)/lib/libnl-tiny.so* $(ROMFSDIR)/lib


