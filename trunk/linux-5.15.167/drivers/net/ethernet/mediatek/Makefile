# SPDX-License-Identifier: GPL-2.0-only
#
# Makefile for the Mediatek SoCs built-in ethernet macs
#

obj-$(CONFIG_NET_MEDIATEK_SOC) += mtk_eth.o
mtk_eth-y := mtk_eth_soc.o mtk_eth_path.o mtk_ppe.o mtk_ppe_debugfs.o mtk_ppe_offload.o
mtk_eth-$(CONFIG_NET_MEDIATEK_SOC_USXGMII) += mtk_usxgmii.o
mtk_eth-$(CONFIG_NET_MEDIATEK_SOC_WED) += mtk_wed.o mtk_wed_mcu.o mtk_wed_wo.o
ifdef CONFIG_DEBUG_FS
mtk_eth-$(CONFIG_NET_MEDIATEK_SOC_WED) += mtk_wed_debugfs.o
endif
obj-$(CONFIG_NET_MEDIATEK_SOC_WED) += mtk_wed_ops.o
obj-$(CONFIG_NET_MEDIATEK_STAR_EMAC) += mtk_star_emac.o

# FIXME: temporarily silence -Warray-bounds on non W=1+ builds
ifndef KBUILD_EXTRA_WARN
CFLAGS_mtk_ppe.o += -Wno-array-bounds
endif
