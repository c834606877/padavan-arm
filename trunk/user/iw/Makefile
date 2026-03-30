SRC_NAME = iw-5.19
SRC_URL = https://www.kernel.org/pub/software/network/iw/iw-5.19.tar.gz
THISDIR = $(shell pwd)

TARGET_CPPFLAGS:= \
	-I$(STAGEDIR)/include/libnl-tiny \
	$(TARGET_CPPFLAGS) \
	-DCONFIG_LIBNL20 \
	-D_GNU_SOURCE \
	-DIW_FULL

all: download_test extract_test config_test
	PKG_CONFIG_PATH=$(STAGEDIR)/lib/pkgconfig $(MAKE) -j$(HOST_NCPU) -C $(SRC_NAME) CFLAGS="${TARGET_CPPFLAGS}"  \
		NL1FOUND="" NL2FOUND=Y NLLIBNAME="libnl-tiny" LIBS="-lm -lnl-tiny" \
		PKG_CONFIG_PATH="$(STAGEDIR)/lib/pkgconfig"

download_test:
	( if [ ! -f $(SRC_NAME).tar.gz ]; then \
		wget -t5 --timeout=20 --no-check-certificate -O $(SRC_NAME).tar.gz $(SRC_URL); \
	fi )

extract_test:
	( if [ ! -d $(SRC_NAME) ]; then \
		tar xf $(SRC_NAME).tar.gz; \
	fi )

config_test:
	( if [ -f ./config_done ]; then \
		echo "the same configuration"; \
	else \
		make configure && touch config_done; \
	fi )

configure:
	( cd $(SRC_NAME) ; \
		echo "configing" \
	)
	touch ./config_done

clean:
	if [ -f $(SRC_NAME)/Makefile ] ; then \
		$(MAKE) -C $(SRC_NAME) distclean ; \
	fi ; \
	rm -f config_done

romfs:
	$(ROMFSINST) -p +x $(THISDIR)/$(SRC_NAME)/iw /usr/sbin/iw
