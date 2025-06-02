SRC_NAME = u-boot-2025.04
SRC_URL = https://ftp.denx.de/pub/u-boot/u-boot-2025.04.tar.bz2
THISDIR = $(shell pwd)

all: download_test extract_test config_test
	$(MAKE) -j$(HOST_NCPU) -C $(SRC_NAME) tools-only
	cp $(SRC_NAME)/tools/mkimage ./

download_test:
	( if [ ! -f $(SRC_NAME).tar.bz2 ]; then \
		wget -t5 --timeout=20 --no-check-certificate -O $(SRC_NAME).tar.gz $(SRC_URL); \
	fi )

extract_test:
	( if [ ! -d $(SRC_NAME) ]; then \
		tar xf $(SRC_NAME).tar.bz2; \
	fi )

config_test:
	( if [ -f ./config_done ]; then \
		echo "the same configuration"; \
	else \
		cd $(SRC_NAME) ; \
		cp ../tools-only_defconfig configs/tools-only_defconfig ;\
		make tools-only_defconfig && cd ../ && touch config_done; \
	fi )

configure:
	( cd $(SRC_NAME) ; \
		cp ../tools-only_defconfig configs/tools-only_defconfig ;\
		make tools-only_config
	)

clean:
	if [ -f $(SRC_NAME)/Makefile ] ; then \
		$(MAKE) -C $(SRC_NAME) distclean ; \
	fi ; \
	rm -f config_done


