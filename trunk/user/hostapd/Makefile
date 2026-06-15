#SRC_NAME=hostapd-2.11/hostapd
SRC_NAME=hostapd-2.10/hostapd
SRC_VER=2.10
SRC_URL=https://w1.fi/releases/hostapd-$(SRC_VER).tar.gz

CFLAGS += -ffunction-sections -fdata-sections
LDFLAGS += -Wl,--gc-sections

THISDIR = $(shell pwd)

all: download_test extract_test #config_test
	cp hostapd.padavan.config $(THISDIR)/$(SRC_NAME)/.config
	$(MAKE) -j$(HOST_NCPU) -C $(SRC_NAME) 

download_test:
	( if [ ! -f hostapd-$(SRC_VER).tar.gz ]; then \
		wget -t5 --timeout=20 --no-check-certificate -O hostapd-$(SRC_VER).tar.gz $(SRC_URL); \
	fi )

extract_test:
	( if [ ! -d hostapd-$(SRC_VER) ]; then \
		tar xzf hostapd-$(SRC_VER).tar.gz; \
	fi )

#config_test:
#	( if [ -f ./config_done ]; then \
#		echo "the same configuration"; \
#	else \
#		make configure && touch config_done; \
#	fi )

clean:
	if [ -f $(SRC_NAME)/Makefile ] ; then \
		$(MAKE) -C $(SRC_NAME) clean ; \
	fi ; \
	rm -f config_done

romfs:
	#mkdir -p $(INSTALLDIR)/usr/libexec
	$(ROMFSINST) -p +x $(THISDIR)/$(SRC_NAME)/hostapd /usr/sbin/hostapd
	$(ROMFSINST) -p +x $(THISDIR)/$(SRC_NAME)/hostapd_cli /usr/sbin/hostapd_cli
	#$(ROMFSINST) $(THISDIR)/hostapd.conf /etc/hostapd.conf
	#$(ROMFSINST) $(THISDIR)/hostapd_wlan1.conf /etc/hostapd_wlan1.conf
	$(ROMFSINST) -p +x $(THISDIR)/hostapd.sh /usr/bin/hostapd.sh
	$(ROMFSINST) -p +x $(THISDIR)/hostapd_genconf.sh /usr/bin/hostapd_genconf.sh
