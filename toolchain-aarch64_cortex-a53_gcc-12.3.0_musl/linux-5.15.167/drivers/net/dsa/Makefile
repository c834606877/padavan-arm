# SPDX-License-Identifier: GPL-2.0
obj-$(CONFIG_NET_DSA_BCM_SF2)	+= bcm-sf2.o
bcm-sf2-objs			:= bcm_sf2.o bcm_sf2_cfp.o
obj-$(CONFIG_NET_DSA_LOOP)	+= dsa_loop.o
ifdef CONFIG_NET_DSA_LOOP
obj-$(CONFIG_FIXED_PHY)		+= dsa_loop_bdinfo.o
endif
obj-$(CONFIG_NET_DSA_LANTIQ_GSWIP) += lantiq_gswip.o
obj-$(CONFIG_NET_DSA_MT7530)	+= mt7530.o
obj-$(CONFIG_NET_DSA_MT7530_MDIO) += mt7530-mdio.o
obj-$(CONFIG_NET_DSA_MT7530_MMIO) += mt7530-mmio.o
obj-$(CONFIG_NET_DSA_MV88E6060) += mv88e6060.o
obj-$(CONFIG_NET_DSA_REALTEK_SMI) += realtek-smi.o
realtek-smi-objs		:= realtek-smi-core.o rtl8366.o rtl8366rb.o
obj-$(CONFIG_NET_DSA_SMSC_LAN9303) += lan9303-core.o
obj-$(CONFIG_NET_DSA_SMSC_LAN9303_I2C) += lan9303_i2c.o
obj-$(CONFIG_NET_DSA_SMSC_LAN9303_MDIO) += lan9303_mdio.o
obj-$(CONFIG_NET_DSA_VITESSE_VSC73XX) += vitesse-vsc73xx-core.o
obj-$(CONFIG_NET_DSA_VITESSE_VSC73XX_PLATFORM) += vitesse-vsc73xx-platform.o
obj-$(CONFIG_NET_DSA_VITESSE_VSC73XX_SPI) += vitesse-vsc73xx-spi.o
obj-y				+= b53/
obj-y				+= hirschmann/
obj-y				+= microchip/
obj-y				+= mv88e6xxx/
obj-y				+= ocelot/
obj-y				+= qca/
obj-y				+= sja1105/
obj-y				+= xrs700x/
