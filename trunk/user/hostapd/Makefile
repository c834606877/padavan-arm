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
		#patch -d $(SRC_NAME) -p1 -i ../openssh-orig.patch; \
	fi )

config_test:
	( if [ -f ./config_done ]; then \
		echo "the same configuration"; \
	else \
		make configure && touch config_done; \
	fi )

configure:
	( cd $(SRC_NAME) ; \
	autoreconf -v; \
	LD="$(CC)" \
	./configure \
		--prefix=/usr \
		--sysconfdir=/etc/storage/openssh \
		--libexecdir=/usr/libexec \
		--with-pid-dir=/var/run \
		--with-privsep-path=/var/empty \
		--with-privsep-user=sshd \
		--with-sandbox=no \
		--without-pam \
		--without-selinux \
		--without-bsd-auth \
		--without-kerberos5 \
		--disable-strip \
		--disable-etc-default-login \
		--disable-lastlog \
		--disable-utmp \
		--disable-utmpx \
		--disable-wtmp \
		--disable-wtmpx \
		--disable-libutil \
		--host=$(HOST_TARGET) \
		--build=$(HOST_BUILD) ; \
	)

clean:
	if [ -f $(SRC_NAME)/Makefile ] ; then \
		$(MAKE) -C $(SRC_NAME) clean ; \
	fi ; \
	rm -f config_done

romfs:
	#mkdir -p $(INSTALLDIR)/usr/libexec
	$(ROMFSINST) -p +x $(THISDIR)/$(SRC_NAME)/hostapd /usr/sbin/hostapd
	#$(ROMFSINST) $(THISDIR)/hostapd.conf /etc/hostapd.conf
	#$(ROMFSINST) $(THISDIR)/hostapd_wlan1.conf /etc/hostapd_wlan1.conf
	$(ROMFSINST) -p +x $(THISDIR)/hostapd.sh /usr/bin/hostapd.sh
