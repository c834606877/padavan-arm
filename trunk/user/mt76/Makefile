#https://github.com/openwrt/mt76
#SRC_NAME = mt76-openwrt-23.05
SRC_NAME = mt76-1361519851f389ed70a53ae92100be7f4db06166
SRC_URL = https://github.com/openwrt/mt76/archive/refs/heads/openwrt-23.05.zip

THISDIR = $(shell pwd)

#KBUILDDIR=$(ROOTDIR)/$(LINUXDIR)
KBUILDDIR=/home/user/workdir/openwrt-fs/padavan-arm/trunk/linux-5.15.167/

all: #download_test extract_test config_test
	echo "mt76 build done"
#	${MAKEARCH_KERNEL} -C $(KBUILDDIR) M=$(THISDIR)/mt76-1361519851f389ed70a53ae92100be7f4db06166 V=1 \
#                        KCFLAGS="-DPACKAGE_VERSION=1.0" \
#                        INSTALL_MOD_PATH=$(ROMFSDIR) DEPMOD=$(ROOTDIR)/tools/depmod.sh modules
#        $(MAKE) -j$(HOST_NCPU) -C $(SRC_NAME)/build

download_test:
	( if [ ! -f $(THISDIR)/$(SRC_NAME).zip ]; then \
                wget -t5 --timeout=20 --no-check-certificate -O $(SRC_NAME).zip $(SRC_URL); \
        fi )

extract_test:
	( if [ ! -d $(THISDIR)/$(SRC_NAME) ]; then \
                unzip $(SRC_NAME).zip; \
        fi )

config_test:
	( if [ -f ./config_done ]; then \
                echo "the same configuration"; \
        else \
                make clean;\
                make configure && touch config_done; \
        fi )

configure:
	( cd $(SRC_NAME) ; \
		echo "";\
 	)

clean:
	echo "mt76 module clean"

romfs:
	#${MAKE} -C $(KBUILDDIR) M=$(THISDIR)/mt76-1361519851f389ed70a53ae92100be7f4db06166 V=1 \
#                        KCFLAGS="-DPACKAGE_VERSION=1.0" \
#                        KDIR=$$PWD/kernel modules_install
#	$(MAKEARCH_KERNEL) -C $(KBUILDDIR)  M=$(THISDIR)/mt76-1361519851f389ed70a53ae92100be7f4db06166 INSTALL_MOD_PATH=$(ROMFSDIR) DEPMOD=$(ROOTDIR)/tools/depmod.sh modules_install;

#	$(ROMFSINST) $(THISDIR)/$(SRC_NAME)/mt76.ko  /lib/modules/5.15.167/kernel/drivers/net/wireless/mediatek/mt76/mt76.ko
	#$(ROMFSINST) $(THISDIR)/$(SRC_NAME)/mt76x02-lib.ko  /lib/modules/5.15.167/kernel/drivers/net/wireless/mediatek/mt76/mt76x02-lib.ko
	#$(ROMFSINST) $(THISDIR)/$(SRC_NAME)/mt76-common.ko  /lib/modules/5.15.167/kernel/drivers/net/wireless/mediatek/mt76/mt76x2/mt76-common.ko
	mkdir -p $(ROMFSDIR)/lib/firmware/mediatek

	$(ROMFSINST) $(THISDIR)/$(SRC_NAME)/firmware/mt7981_rom_patch.bin /lib/firmware/mediatek/mt7981_rom_patch.bin
	$(ROMFSINST) $(THISDIR)/$(SRC_NAME)/firmware/mt7981_wa.bin /lib/firmware/mediatek/mt7981_wa.bin
	$(ROMFSINST) $(THISDIR)/$(SRC_NAME)/firmware/mt7981_wm.bin /lib/firmware/mediatek/mt7981_wm.bin
	$(ROMFSINST) $(THISDIR)/$(SRC_NAME)/firmware/mt7981_eeprom_mt7976_dbdc.bin /lib/firmware/mediatek/mt7981_eeprom_mt7976_dbdc.bin
	#$(ROMFSINST) $(THISDIR)/$(SRC_NAME)/firmware/mt7981_rom_patch.bin /lib/firmware/mediatek/mt7981_rom_patch.bin

