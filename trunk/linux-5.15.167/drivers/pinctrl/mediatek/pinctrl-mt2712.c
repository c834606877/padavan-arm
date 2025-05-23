// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (c) 2018 MediaTek Inc.
 * Author: Zhiyong Tao <zhiyong.tao@mediatek.com>
 *
 */

#include <linux/module.h>
#include <linux/platform_device.h>
#include <linux/of.h>
#include <linux/of_device.h>
#include <linux/pinctrl/pinctrl.h>
#include <linux/regmap.h>
#include <linux/pinctrl/pinconf-generic.h>
#include <dt-bindings/pinctrl/mt65xx.h>

#include "pinctrl-mtk-common.h"
#include "pinctrl-mtk-mt2712.h"

static const struct mtk_pin_spec_pupd_set_samereg mt2712_spec_pupd[] = {
	MTK_PIN_PUPD_SPEC_SR(18, 0xe50, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(19, 0xe60, 12, 11, 10),
	MTK_PIN_PUPD_SPEC_SR(20, 0xe50, 5, 4, 3),
	MTK_PIN_PUPD_SPEC_SR(21, 0xe60, 15, 14, 13),
	MTK_PIN_PUPD_SPEC_SR(22, 0xe50, 8, 7, 6),
	MTK_PIN_PUPD_SPEC_SR(23, 0xe70, 2, 1, 0),

	MTK_PIN_PUPD_SPEC_SR(30, 0xf30, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(31, 0xf30, 6, 5, 4),
	MTK_PIN_PUPD_SPEC_SR(32, 0xf30, 10, 9, 8),
	MTK_PIN_PUPD_SPEC_SR(33, 0xf30, 14, 13, 12),
	MTK_PIN_PUPD_SPEC_SR(34, 0xf40, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(35, 0xf40, 6, 5, 4),
	MTK_PIN_PUPD_SPEC_SR(36, 0xf40, 10, 9, 8),
	MTK_PIN_PUPD_SPEC_SR(37, 0xc40, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(38, 0xc60, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(39, 0xc60, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(40, 0xc60, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(41, 0xc60, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(42, 0xc60, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(43, 0xc60, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(44, 0xc60, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(45, 0xc60, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(46, 0xc50, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(47, 0xda0, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(48, 0xd90, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(49, 0xdf0, 14, 13, 12),
	MTK_PIN_PUPD_SPEC_SR(50, 0xdf0, 10, 9, 8),
	MTK_PIN_PUPD_SPEC_SR(51, 0xdf0, 6, 5, 4),
	MTK_PIN_PUPD_SPEC_SR(52, 0xdf0, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(53, 0xd50, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(54, 0xd80, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(55, 0xe00, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(56, 0xd40, 2, 1, 0),

	MTK_PIN_PUPD_SPEC_SR(63, 0xc80, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(64, 0xdb0, 14, 13, 12),
	MTK_PIN_PUPD_SPEC_SR(65, 0xdb0, 6, 5, 4),
	MTK_PIN_PUPD_SPEC_SR(66, 0xdb0, 10, 9, 8),
	MTK_PIN_PUPD_SPEC_SR(67, 0xcd0, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(68, 0xdb0, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(69, 0xc90, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(70, 0xcc0, 2, 1, 0),

	MTK_PIN_PUPD_SPEC_SR(89, 0xce0, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(90, 0xdd0, 14, 13, 12),
	MTK_PIN_PUPD_SPEC_SR(91, 0xdd0, 10, 9, 8),
	MTK_PIN_PUPD_SPEC_SR(92, 0xdd0, 6, 5, 4),
	MTK_PIN_PUPD_SPEC_SR(93, 0xdd0, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(94, 0xd20, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(95, 0xcf0, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(96, 0xd30, 2, 1, 0),

	MTK_PIN_PUPD_SPEC_SR(135, 0xe50, 11, 10, 9),
	MTK_PIN_PUPD_SPEC_SR(136, 0xe50, 14, 13, 12),
	MTK_PIN_PUPD_SPEC_SR(137, 0xe70, 5, 4, 3),
	MTK_PIN_PUPD_SPEC_SR(138, 0xe70, 8, 7, 6),
	MTK_PIN_PUPD_SPEC_SR(139, 0xe70, 11, 10, 9),
	MTK_PIN_PUPD_SPEC_SR(140, 0xe70, 14, 13, 12),
	MTK_PIN_PUPD_SPEC_SR(141, 0xe60, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(142, 0xe60, 5, 4, 3)
};

static int mt2712_spec_pull_set(struct regmap *regmap,
				unsigned int pin,
				unsigned char align,
				bool isup,
				unsigned int r1r0)
{
	return mtk_pctrl_spec_pull_set_samereg(regmap, mt2712_spec_pupd,
		ARRAY_SIZE(mt2712_spec_pupd), pin, align, isup, r1r0);
}

static const struct mtk_pin_ies_smt_set mt2712_smt_set[] = {
	MTK_PIN_IES_SMT_SPEC(0, 3, 0x900, 2),
	MTK_PIN_IES_SMT_SPEC(4, 7, 0x900, 0),
	MTK_PIN_IES_SMT_SPEC(8, 11, 0x900, 1),
	MTK_PIN_IES_SMT_SPEC(12, 12, 0x8d0, 6),
	MTK_PIN_IES_SMT_SPEC(13, 13, 0x8d0, 7),
	MTK_PIN_IES_SMT_SPEC(14, 14, 0x8d0, 6),
	MTK_PIN_IES_SMT_SPEC(15, 15, 0x8d0, 7),
	MTK_PIN_IES_SMT_SPEC(18, 23, 0x8d0, 1),
	MTK_PIN_IES_SMT_SPEC(24, 25, 0x8d0, 2),
	MTK_PIN_IES_SMT_SPEC(26, 26, 0x8d0, 3),
	MTK_PIN_IES_SMT_SPEC(27, 27, 0x8d0, 4),
	MTK_PIN_IES_SMT_SPEC(28, 29, 0x8d0, 3),
	MTK_PIN_IES_SMT_SPEC(30, 36, 0xf50, 13),
	MTK_PIN_IES_SMT_SPEC(37, 37, 0xc40, 13),
	MTK_PIN_IES_SMT_SPEC(38, 45, 0xc60, 13),
	MTK_PIN_IES_SMT_SPEC(46, 46, 0xc50, 13),
	MTK_PIN_IES_SMT_SPEC(47, 47, 0xda0, 13),
	MTK_PIN_IES_SMT_SPEC(48, 48, 0xd90, 13),
	MTK_PIN_IES_SMT_SPEC(49, 52, 0xd60, 13),
	MTK_PIN_IES_SMT_SPEC(53, 53, 0xd50, 13),
	MTK_PIN_IES_SMT_SPEC(54, 54, 0xd80, 13),
	MTK_PIN_IES_SMT_SPEC(55, 55, 0xe00, 13),
	MTK_PIN_IES_SMT_SPEC(56, 56, 0xd40, 13),
	MTK_PIN_IES_SMT_SPEC(57, 62, 0x900, 3),
	MTK_PIN_IES_SMT_SPEC(63, 63, 0xc80, 13),
	MTK_PIN_IES_SMT_SPEC(64, 66, 0xca0, 13),
	MTK_PIN_IES_SMT_SPEC(67, 67, 0xc80, 13),
	MTK_PIN_IES_SMT_SPEC(68, 68, 0xca0, 13),
	MTK_PIN_IES_SMT_SPEC(69, 69, 0xc90, 13),
	MTK_PIN_IES_SMT_SPEC(70, 70, 0xc80, 13),
	MTK_PIN_IES_SMT_SPEC(71, 74, 0x8d0, 8),
	MTK_PIN_IES_SMT_SPEC(75, 77, 0x8d0, 9),
	MTK_PIN_IES_SMT_SPEC(78, 81, 0x8d0, 10),
	MTK_PIN_IES_SMT_SPEC(82, 88, 0x8d0, 9),
	MTK_PIN_IES_SMT_SPEC(89, 89, 0xce0, 13),
	MTK_PIN_IES_SMT_SPEC(90, 93, 0xd00, 13),
	MTK_PIN_IES_SMT_SPEC(94, 94, 0xce0, 13),
	MTK_PIN_IES_SMT_SPEC(95, 96, 0xcf0, 13),
	MTK_PIN_IES_SMT_SPEC(97, 100, 0x8d0, 11),
	MTK_PIN_IES_SMT_SPEC(101, 104, 0x8d0, 12),
	MTK_PIN_IES_SMT_SPEC(105, 105, 0x8d0, 13),
	MTK_PIN_IES_SMT_SPEC(106, 106, 0x8d0, 14),
	MTK_PIN_IES_SMT_SPEC(107, 107, 0x8d0, 15),
	MTK_PIN_IES_SMT_SPEC(108, 108, 0x8e0, 0),
	MTK_PIN_IES_SMT_SPEC(109, 109, 0x8e0, 1),
	MTK_PIN_IES_SMT_SPEC(110, 110, 0x8e0, 2),
	MTK_PIN_IES_SMT_SPEC(111, 111, 0x8d0, 13),
	MTK_PIN_IES_SMT_SPEC(112, 112, 0x8d0, 14),
	MTK_PIN_IES_SMT_SPEC(113, 113, 0x8d0, 15),
	MTK_PIN_IES_SMT_SPEC(114, 114, 0x8e0, 0),
	MTK_PIN_IES_SMT_SPEC(115, 115, 0x8e0, 1),
	MTK_PIN_IES_SMT_SPEC(116, 116, 0x8e0, 2),
	MTK_PIN_IES_SMT_SPEC(117, 117, 0x8e0, 3),
	MTK_PIN_IES_SMT_SPEC(118, 118, 0x8e0, 4),
	MTK_PIN_IES_SMT_SPEC(119, 119, 0x8e0, 5),
	MTK_PIN_IES_SMT_SPEC(120, 120, 0x8e0, 3),
	MTK_PIN_IES_SMT_SPEC(121, 121, 0x8e0, 4),
	MTK_PIN_IES_SMT_SPEC(122, 122, 0x8e0, 5),
	MTK_PIN_IES_SMT_SPEC(123, 126, 0x8e0, 6),
	MTK_PIN_IES_SMT_SPEC(127, 130, 0x8e0, 7),
	MTK_PIN_IES_SMT_SPEC(131, 134, 0x8e0, 8),
	MTK_PIN_IES_SMT_SPEC(135, 142, 0x8d0, 1),
	MTK_PIN_IES_SMT_SPEC(143, 147, 0x8e0, 9),
	MTK_PIN_IES_SMT_SPEC(148, 152, 0x8e0, 10),
	MTK_PIN_IES_SMT_SPEC(153, 156, 0x8e0, 11),
	MTK_PIN_IES_SMT_SPEC(157, 160, 0x8e0, 12),
	MTK_PIN_IES_SMT_SPEC(161, 164, 0x8e0, 13),
	MTK_PIN_IES_SMT_SPEC(165, 168, 0x8e0, 14),
	MTK_PIN_IES_SMT_SPEC(169, 170, 0x8e0, 15),
	MTK_PIN_IES_SMT_SPEC(171, 172, 0x8f0, 0),
	MTK_PIN_IES_SMT_SPEC(173, 173, 0x8f0, 1),
	MTK_PIN_IES_SMT_SPEC(174, 175, 0x8f0, 2),
	MTK_PIN_IES_SMT_SPEC(176, 176, 0x8f0, 1),
	MTK_PIN_IES_SMT_SPEC(177, 177, 0x8f0, 3),
	MTK_PIN_IES_SMT_SPEC(178, 178, 0x8f0, 4),
	MTK_PIN_IES_SMT_SPEC(179, 179, 0x8f0, 3),
	MTK_PIN_IES_SMT_SPEC(180, 180, 0x8f0, 4),
	MTK_PIN_IES_SMT_SPEC(181, 181, 0x8f0, 5),
	MTK_PIN_IES_SMT_SPEC(182, 182, 0x8f0, 6),
	MTK_PIN_IES_SMT_SPEC(183, 183, 0x8f0, 5),
	MTK_PIN_IES_SMT_SPEC(184, 184, 0x8f0, 6),
	MTK_PIN_IES_SMT_SPEC(185, 186, 0x8f0, 7),
	MTK_PIN_IES_SMT_SPEC(187, 187, 0x8f0, 8),
	MTK_PIN_IES_SMT_SPEC(188, 188, 0x8f0, 9),
	MTK_PIN_IES_SMT_SPEC(189, 189, 0x8f0, 8),
	MTK_PIN_IES_SMT_SPEC(190, 190, 0x8f0, 9),
	MTK_PIN_IES_SMT_SPEC(191, 191, 0x8f0, 10),
	MTK_PIN_IES_SMT_SPEC(192, 192, 0x8f0, 11),
	MTK_PIN_IES_SMT_SPEC(193, 194, 0x8f0, 10),
	MTK_PIN_IES_SMT_SPEC(195, 195, 0x8f0, 11),
	MTK_PIN_IES_SMT_SPEC(196, 199, 0x8f0, 12),
	MTK_PIN_IES_SMT_SPEC(200, 203, 0x8f0, 13),
	MTK_PIN_IES_SMT_SPEC(204, 206, 0x8f0, 14),
	MTK_PIN_IES_SMT_SPEC(207, 209, 0x8f0, 15)
};

static const struct mtk_pin_ies_smt_set mt2712_ies_set[] = {
	MTK_PIN_IES_SMT_SPEC(0, 3, 0x8c0, 2),
	MTK_PIN_IES_SMT_SPEC(4, 7, 0x8c0, 0),
	MTK_PIN_IES_SMT_SPEC(8, 9, 0x8c0, 1),
	MTK_PIN_IES_SMT_SPEC(10, 11, 0x8c0, 4),
	MTK_PIN_IES_SMT_SPEC(12, 12, 0x890, 6),
	MTK_PIN_IES_SMT_SPEC(13, 13, 0x890, 7),
	MTK_PIN_IES_SMT_SPEC(14, 14, 0x890, 6),
	MTK_PIN_IES_SMT_SPEC(15, 15, 0x890, 7),
	MTK_PIN_IES_SMT_SPEC(18, 23, 0x890, 1),
	MTK_PIN_IES_SMT_SPEC(24, 25, 0x890, 2),
	MTK_PIN_IES_SMT_SPEC(26, 26, 0x890, 3),
	MTK_PIN_IES_SMT_SPEC(27, 27, 0x890, 4),
	MTK_PIN_IES_SMT_SPEC(28, 29, 0x890, 3),
	MTK_PIN_IES_SMT_SPEC(30, 36, 0xf50, 14),
	MTK_PIN_IES_SMT_SPEC(37, 37, 0xc40, 14),
	MTK_PIN_IES_SMT_SPEC(38, 45, 0xc60, 14),
	MTK_PIN_IES_SMT_SPEC(46, 46, 0xc50, 14),
	MTK_PIN_IES_SMT_SPEC(47, 47, 0xda0, 14),
	MTK_PIN_IES_SMT_SPEC(48, 48, 0xd90, 14),
	MTK_PIN_IES_SMT_SPEC(49, 52, 0xd60, 14),
	MTK_PIN_IES_SMT_SPEC(53, 53, 0xd50, 14),
	MTK_PIN_IES_SMT_SPEC(54, 54, 0xd80, 14),
	MTK_PIN_IES_SMT_SPEC(55, 55, 0xe00, 14),
	MTK_PIN_IES_SMT_SPEC(56, 56, 0xd40, 14),
	MTK_PIN_IES_SMT_SPEC(57, 62, 0x8c0, 3),
	MTK_PIN_IES_SMT_SPEC(63, 63, 0xc80, 14),
	MTK_PIN_IES_SMT_SPEC(64, 66, 0xca0, 14),
	MTK_PIN_IES_SMT_SPEC(67, 68, 0xc80, 14),
	MTK_PIN_IES_SMT_SPEC(69, 69, 0xc90, 14),
	MTK_PIN_IES_SMT_SPEC(70, 70, 0xc80, 14),
	MTK_PIN_IES_SMT_SPEC(71, 74, 0x890, 8),
	MTK_PIN_IES_SMT_SPEC(75, 77, 0x890, 9),
	MTK_PIN_IES_SMT_SPEC(78, 81, 0x890, 10),
	MTK_PIN_IES_SMT_SPEC(82, 88, 0x890, 9),
	MTK_PIN_IES_SMT_SPEC(89, 89, 0xce0, 14),
	MTK_PIN_IES_SMT_SPEC(90, 93, 0xd00, 14),
	MTK_PIN_IES_SMT_SPEC(94, 94, 0xce0, 14),
	MTK_PIN_IES_SMT_SPEC(95, 96, 0xcf0, 14),
	MTK_PIN_IES_SMT_SPEC(97, 100, 0x890, 11),
	MTK_PIN_IES_SMT_SPEC(101, 104, 0x890, 12),
	MTK_PIN_IES_SMT_SPEC(105, 105, 0x890, 13),
	MTK_PIN_IES_SMT_SPEC(106, 106, 0x890, 14),
	MTK_PIN_IES_SMT_SPEC(107, 107, 0x890, 15),
	MTK_PIN_IES_SMT_SPEC(108, 108, 0x8a0, 0),
	MTK_PIN_IES_SMT_SPEC(109, 109, 0x8a0, 1),
	MTK_PIN_IES_SMT_SPEC(110, 110, 0x8a0, 2),
	MTK_PIN_IES_SMT_SPEC(111, 111, 0x890, 13),
	MTK_PIN_IES_SMT_SPEC(112, 112, 0x890, 14),
	MTK_PIN_IES_SMT_SPEC(113, 113, 0x890, 15),
	MTK_PIN_IES_SMT_SPEC(114, 114, 0x8a0, 0),
	MTK_PIN_IES_SMT_SPEC(115, 115, 0x8a0, 1),
	MTK_PIN_IES_SMT_SPEC(116, 116, 0x8a0, 2),
	MTK_PIN_IES_SMT_SPEC(117, 117, 0x8a0, 3),
	MTK_PIN_IES_SMT_SPEC(118, 118, 0x8a0, 4),
	MTK_PIN_IES_SMT_SPEC(119, 119, 0x8a0, 5),
	MTK_PIN_IES_SMT_SPEC(120, 120, 0x8a0, 3),
	MTK_PIN_IES_SMT_SPEC(121, 121, 0x8a0, 4),
	MTK_PIN_IES_SMT_SPEC(122, 122, 0x8a0, 5),
	MTK_PIN_IES_SMT_SPEC(123, 126, 0x8a0, 6),
	MTK_PIN_IES_SMT_SPEC(127, 130, 0x8a0, 7),
	MTK_PIN_IES_SMT_SPEC(131, 135, 0x8a0, 8),
	MTK_PIN_IES_SMT_SPEC(136, 142, 0x890, 1),
	MTK_PIN_IES_SMT_SPEC(143, 147, 0x8a0, 9),
	MTK_PIN_IES_SMT_SPEC(148, 152, 0x8a0, 10),
	MTK_PIN_IES_SMT_SPEC(153, 156, 0x8a0, 11),
	MTK_PIN_IES_SMT_SPEC(157, 160, 0x8a0, 12),
	MTK_PIN_IES_SMT_SPEC(161, 164, 0x8a0, 13),
	MTK_PIN_IES_SMT_SPEC(165, 168, 0x8a0, 14),
	MTK_PIN_IES_SMT_SPEC(169, 170, 0x8a0, 15),
	MTK_PIN_IES_SMT_SPEC(171, 172, 0x8b0, 0),
	MTK_PIN_IES_SMT_SPEC(173, 173, 0x8b0, 1),
	MTK_PIN_IES_SMT_SPEC(174, 175, 0x8b0, 2),
	MTK_PIN_IES_SMT_SPEC(176, 176, 0x8b0, 1),
	MTK_PIN_IES_SMT_SPEC(177, 177, 0x8b0, 3),
	MTK_PIN_IES_SMT_SPEC(178, 178, 0x8b0, 4),
	MTK_PIN_IES_SMT_SPEC(179, 179, 0x8b0, 3),
	MTK_PIN_IES_SMT_SPEC(180, 180, 0x8b0, 4),
	MTK_PIN_IES_SMT_SPEC(181, 181, 0x8b0, 5),
	MTK_PIN_IES_SMT_SPEC(182, 182, 0x8b0, 6),
	MTK_PIN_IES_SMT_SPEC(183, 183, 0x8b0, 5),
	MTK_PIN_IES_SMT_SPEC(184, 184, 0x8b0, 6),
	MTK_PIN_IES_SMT_SPEC(185, 186, 0x8b0, 7),
	MTK_PIN_IES_SMT_SPEC(187, 187, 0x8b0, 8),
	MTK_PIN_IES_SMT_SPEC(188, 188, 0x8b0, 9),
	MTK_PIN_IES_SMT_SPEC(189, 189, 0x8b0, 8),
	MTK_PIN_IES_SMT_SPEC(190, 190, 0x8b0, 9),
	MTK_PIN_IES_SMT_SPEC(191, 191, 0x8b0, 10),
	MTK_PIN_IES_SMT_SPEC(192, 192, 0x8b0, 11),
	MTK_PIN_IES_SMT_SPEC(193, 194, 0x8b0, 10),
	MTK_PIN_IES_SMT_SPEC(195, 195, 0x8b0, 11),
	MTK_PIN_IES_SMT_SPEC(196, 199, 0x8b0, 12),
	MTK_PIN_IES_SMT_SPEC(200, 203, 0x8b0, 13),
	MTK_PIN_IES_SMT_SPEC(204, 206, 0x8b0, 14),
	MTK_PIN_IES_SMT_SPEC(207, 209, 0x8b0, 15)
};

static int mt2712_ies_smt_set(struct regmap *regmap, unsigned int pin,
			      unsigned char align,
			      int value, enum pin_config_param arg)
{
	if (arg == PIN_CONFIG_INPUT_ENABLE)
		return mtk_pconf_spec_set_ies_smt_range(regmap, mt2712_ies_set,
			ARRAY_SIZE(mt2712_ies_set), pin, align, value);
	if (arg == PIN_CONFIG_INPUT_SCHMITT_ENABLE)
		return mtk_pconf_spec_set_ies_smt_range(regmap, mt2712_smt_set,
			ARRAY_SIZE(mt2712_smt_set), pin, align, value);
	return -EINVAL;
}

static const struct mtk_drv_group_desc mt2712_drv_grp[] =  {
	/* 0E4E8SR 4/8/12/16 */
	MTK_DRV_GRP(4, 16, 1, 2, 4),
	/* 0E2E4SR  2/4/6/8 */
	MTK_DRV_GRP(2, 8, 1, 2, 2),
	/* E8E4E2  2/4/6/8/10/12/14/16 */
	MTK_DRV_GRP(2, 16, 0, 2, 2)
};

static const struct mtk_pin_drv_grp mt2712_pin_drv[] = {
	MTK_PIN_DRV_GRP(0, 0xc10, 4, 0),
	MTK_PIN_DRV_GRP(1, 0xc10, 4, 0),
	MTK_PIN_DRV_GRP(2, 0xc10, 4, 0),
	MTK_PIN_DRV_GRP(3, 0xc10, 4, 0),

	MTK_PIN_DRV_GRP(4, 0xc00, 12, 0),
	MTK_PIN_DRV_GRP(5, 0xc00, 12, 0),
	MTK_PIN_DRV_GRP(6, 0xc00, 12, 0),
	MTK_PIN_DRV_GRP(7, 0xc00, 12, 0),

	MTK_PIN_DRV_GRP(8, 0xc10, 0, 0),
	MTK_PIN_DRV_GRP(9, 0xc10, 0, 0),
	MTK_PIN_DRV_GRP(10, 0xc10, 0, 0),
	MTK_PIN_DRV_GRP(11, 0xc10, 0, 0),

	MTK_PIN_DRV_GRP(12, 0xb60, 0, 0),

	MTK_PIN_DRV_GRP(13, 0xb60, 4, 0),

	MTK_PIN_DRV_GRP(14, 0xb60, 0, 0),

	MTK_PIN_DRV_GRP(15, 0xb60, 4, 0),

	MTK_PIN_DRV_GRP(18, 0xb40, 0, 1),
	MTK_PIN_DRV_GRP(19, 0xb40, 0, 1),
	MTK_PIN_DRV_GRP(20, 0xb40, 0, 1),
	MTK_PIN_DRV_GRP(21, 0xb40, 0, 1),
	MTK_PIN_DRV_GRP(22, 0xb40, 0, 1),
	MTK_PIN_DRV_GRP(23, 0xb40, 0, 1),

	MTK_PIN_DRV_GRP(24, 0xb40, 4, 0),

	MTK_PIN_DRV_GRP(25, 0xb40, 8, 0),

	MTK_PIN_DRV_GRP(26, 0xb40, 12, 0),

	MTK_PIN_DRV_GRP(27, 0xb50, 0, 0),

	MTK_PIN_DRV_GRP(28, 0xb40, 12, 0),
	MTK_PIN_DRV_GRP(29, 0xb40, 12, 0),

	MTK_PIN_DRV_GRP(30, 0xf50, 8, 2),
	MTK_PIN_DRV_GRP(31, 0xf50, 8, 2),
	MTK_PIN_DRV_GRP(32, 0xf50, 8, 2),
	MTK_PIN_DRV_GRP(33, 0xf50, 8, 2),
	MTK_PIN_DRV_GRP(34, 0xf50, 8, 2),
	MTK_PIN_DRV_GRP(35, 0xf50, 8, 2),
	MTK_PIN_DRV_GRP(36, 0xf50, 8, 2),

	MTK_PIN_DRV_GRP(37, 0xc40, 8, 2),

	MTK_PIN_DRV_GRP(38, 0xc60, 8, 2),
	MTK_PIN_DRV_GRP(39, 0xc60, 8, 2),
	MTK_PIN_DRV_GRP(40, 0xc60, 8, 2),
	MTK_PIN_DRV_GRP(41, 0xc60, 8, 2),
	MTK_PIN_DRV_GRP(42, 0xc60, 8, 2),
	MTK_PIN_DRV_GRP(43, 0xc60, 8, 2),
	MTK_PIN_DRV_GRP(44, 0xc60, 8, 2),
	MTK_PIN_DRV_GRP(45, 0xc60, 8, 2),

	MTK_PIN_DRV_GRP(46, 0xc50, 8, 2),

	MTK_PIN_DRV_GRP(47, 0xda0, 8, 2),

	MTK_PIN_DRV_GRP(48, 0xd90, 8, 2),

	MTK_PIN_DRV_GRP(49, 0xd60, 8, 2),
	MTK_PIN_DRV_GRP(50, 0xd60, 8, 2),
	MTK_PIN_DRV_GRP(51, 0xd60, 8, 2),
	MTK_PIN_DRV_GRP(52, 0xd60, 8, 2),

	MTK_PIN_DRV_GRP(53, 0xd50, 8, 2),

	MTK_PIN_DRV_GRP(54, 0xd80, 8, 2),

	MTK_PIN_DRV_GRP(55, 0xe00, 8, 2),

	MTK_PIN_DRV_GRP(56, 0xd40, 8, 2),

	MTK_PIN_DRV_GRP(63, 0xc80, 8, 2),

	MTK_PIN_DRV_GRP(64, 0xca0, 8, 2),
	MTK_PIN_DRV_GRP(65, 0xca0, 8, 2),
	MTK_PIN_DRV_GRP(66, 0xca0, 8, 2),

	MTK_PIN_DRV_GRP(67, 0xcd0, 8, 2),

	MTK_PIN_DRV_GRP(68, 0xca0, 8, 2),

	MTK_PIN_DRV_GRP(69, 0xc90, 8, 2),

	MTK_PIN_DRV_GRP(70, 0xcc0, 8, 2),

	MTK_PIN_DRV_GRP(71, 0xb60, 8, 1),
	MTK_PIN_DRV_GRP(72, 0xb60, 8, 1),
	MTK_PIN_DRV_GRP(73, 0xb60, 8, 1),
	MTK_PIN_DRV_GRP(74, 0xb60, 8, 1),

	MTK_PIN_DRV_GRP(75, 0xb60, 12, 1),
	MTK_PIN_DRV_GRP(76, 0xb60, 12, 1),
	MTK_PIN_DRV_GRP(77, 0xb60, 12, 1),

	MTK_PIN_DRV_GRP(78, 0xb70, 0, 1),
	MTK_PIN_DRV_GRP(79, 0xb70, 0, 1),
	MTK_PIN_DRV_GRP(80, 0xb70, 0, 1),
	MTK_PIN_DRV_GRP(81, 0xb70, 0, 1),

	MTK_PIN_DRV_GRP(82, 0xb60, 12, 1),
	MTK_PIN_DRV_GRP(83, 0xb60, 12, 1),
	MTK_PIN_DRV_GRP(84, 0xb60, 12, 1),
	MTK_PIN_DRV_GRP(85, 0xb60, 12, 1),
	MTK_PIN_DRV_GRP(86, 0xb60, 12, 1),
	MTK_PIN_DRV_GRP(87, 0xb60, 12, 1),
	MTK_PIN_DRV_GRP(88, 0xb60, 12, 1),

	MTK_PIN_DRV_GRP(89, 0xce0, 8, 2),

	MTK_PIN_DRV_GRP(90, 0xd00, 8, 2),
	MTK_PIN_DRV_GRP(91, 0xd00, 8, 2),
	MTK_PIN_DRV_GRP(92, 0xd00, 8, 2),
	MTK_PIN_DRV_GRP(93, 0xd00, 8, 2),

	MTK_PIN_DRV_GRP(94, 0xd20, 8, 2),

	MTK_PIN_DRV_GRP(95, 0xcf0, 8, 2),

	MTK_PIN_DRV_GRP(96, 0xd30, 8, 2),

	MTK_PIN_DRV_GRP(97, 0xb70, 4, 0),
	MTK_PIN_DRV_GRP(98, 0xb70, 4, 0),
	MTK_PIN_DRV_GRP(99, 0xb70, 4, 0),
	MTK_PIN_DRV_GRP(100, 0xb70, 4, 0),

	MTK_PIN_DRV_GRP(101, 0xb70, 8, 0),
	MTK_PIN_DRV_GRP(102, 0xb70, 8, 0),
	MTK_PIN_DRV_GRP(103, 0xb70, 8, 0),
	MTK_PIN_DRV_GRP(104, 0xb70, 8, 0),

	MTK_PIN_DRV_GRP(135, 0xb40, 0, 1),
	MTK_PIN_DRV_GRP(136, 0xb40, 0, 1),
	MTK_PIN_DRV_GRP(137, 0xb40, 0, 1),
	MTK_PIN_DRV_GRP(138, 0xb40, 0, 1),
	MTK_PIN_DRV_GRP(139, 0xb40, 0, 1),
	MTK_PIN_DRV_GRP(140, 0xb40, 0, 1),
	MTK_PIN_DRV_GRP(141, 0xb40, 0, 1),
	MTK_PIN_DRV_GRP(142, 0xb40, 0, 1),

	MTK_PIN_DRV_GRP(143, 0xba0, 12, 0),
	MTK_PIN_DRV_GRP(144, 0xba0, 12, 0),
	MTK_PIN_DRV_GRP(145, 0xba0, 12, 0),
	MTK_PIN_DRV_GRP(146, 0xba0, 12, 0),
	MTK_PIN_DRV_GRP(147, 0xba0, 12, 0),

	MTK_PIN_DRV_GRP(148, 0xbb0, 0, 0),
	MTK_PIN_DRV_GRP(149, 0xbb0, 0, 0),
	MTK_PIN_DRV_GRP(150, 0xbb0, 0, 0),
	MTK_PIN_DRV_GRP(151, 0xbb0, 0, 0),
	MTK_PIN_DRV_GRP(152, 0xbb0, 0, 0),

	MTK_PIN_DRV_GRP(153, 0xbb0, 4, 0),
	MTK_PIN_DRV_GRP(154, 0xbb0, 4, 0),
	MTK_PIN_DRV_GRP(155, 0xbb0, 4, 0),
	MTK_PIN_DRV_GRP(156, 0xbb0, 4, 0),

	MTK_PIN_DRV_GRP(157, 0xbb0, 8, 0),
	MTK_PIN_DRV_GRP(158, 0xbb0, 8, 0),
	MTK_PIN_DRV_GRP(159, 0xbb0, 8, 0),
	MTK_PIN_DRV_GRP(160, 0xbb0, 8, 0),

	MTK_PIN_DRV_GRP(161, 0xbb0, 12, 0),
	MTK_PIN_DRV_GRP(162, 0xbb0, 12, 0),
	MTK_PIN_DRV_GRP(163, 0xbb0, 12, 0),
	MTK_PIN_DRV_GRP(164, 0xbb0, 12, 0),

	MTK_PIN_DRV_GRP(165, 0xbc0, 0, 0),
	MTK_PIN_DRV_GRP(166, 0xbc0, 0, 0),
	MTK_PIN_DRV_GRP(167, 0xbc0, 0, 0),
	MTK_PIN_DRV_GRP(168, 0xbc0, 0, 0),

	MTK_PIN_DRV_GRP(169, 0xbc0, 4, 0),
	MTK_PIN_DRV_GRP(170, 0xbc0, 4, 0),

	MTK_PIN_DRV_GRP(171, 0xbc0, 8, 0),
	MTK_PIN_DRV_GRP(172, 0xbc0, 8, 0),

	MTK_PIN_DRV_GRP(173, 0xbc0, 12, 0),

	MTK_PIN_DRV_GRP(174, 0xbd0, 0, 0),
	MTK_PIN_DRV_GRP(175, 0xbd0, 0, 0),

	MTK_PIN_DRV_GRP(176, 0xbc0, 12, 0),

	MTK_PIN_DRV_GRP(177, 0xbd0, 4, 0),

	MTK_PIN_DRV_GRP(178, 0xbd0, 8, 0),

	MTK_PIN_DRV_GRP(179, 0xbd0, 4, 0),

	MTK_PIN_DRV_GRP(180, 0xbd0, 8, 0),

	MTK_PIN_DRV_GRP(181, 0xbd0, 12, 0),

	MTK_PIN_DRV_GRP(182, 0xbe0, 0, 0),

	MTK_PIN_DRV_GRP(183, 0xbd0, 12, 0),

	MTK_PIN_DRV_GRP(184, 0xbe0, 0, 0),

	MTK_PIN_DRV_GRP(185, 0xbe0, 4, 0),

	MTK_PIN_DRV_GRP(186, 0xbe0, 8, 0),

	MTK_PIN_DRV_GRP(187, 0xbe0, 12, 0),

	MTK_PIN_DRV_GRP(188, 0xbf0, 0, 0),

	MTK_PIN_DRV_GRP(189, 0xbe0, 12, 0),

	MTK_PIN_DRV_GRP(190, 0xbf0, 0, 0),

	MTK_PIN_DRV_GRP(191, 0xbf0, 4, 0),

	MTK_PIN_DRV_GRP(192, 0xbf0, 8, 0),

	MTK_PIN_DRV_GRP(193, 0xbf0, 4, 0),
	MTK_PIN_DRV_GRP(194, 0xbf0, 4, 0),

	MTK_PIN_DRV_GRP(195, 0xbf0, 8, 0),

	MTK_PIN_DRV_GRP(196, 0xbf0, 12, 0),
	MTK_PIN_DRV_GRP(197, 0xbf0, 12, 0),
	MTK_PIN_DRV_GRP(198, 0xbf0, 12, 0),
	MTK_PIN_DRV_GRP(199, 0xbf0, 12, 0),

	MTK_PIN_DRV_GRP(200, 0xc00, 0, 0),
	MTK_PIN_DRV_GRP(201, 0xc00, 0, 0),
	MTK_PIN_DRV_GRP(202, 0xc00, 0, 0),
	MTK_PIN_DRV_GRP(203, 0xc00, 0, 0),

	MTK_PIN_DRV_GRP(204, 0xc00, 4, 0),
	MTK_PIN_DRV_GRP(205, 0xc00, 4, 0),
	MTK_PIN_DRV_GRP(206, 0xc00, 4, 0),

	MTK_PIN_DRV_GRP(207, 0xc00, 8, 0),
	MTK_PIN_DRV_GRP(208, 0xc00, 8, 0),
	MTK_PIN_DRV_GRP(209, 0xc00, 8, 0),
};

static const struct mtk_pinctrl_devdata mt2712_pinctrl_data = {
	.pins = mtk_pins_mt2712,
	.npins = ARRAY_SIZE(mtk_pins_mt2712),
	.grp_desc = mt2712_drv_grp,
	.n_grp_cls = ARRAY_SIZE(mt2712_drv_grp),
	.pin_drv_grp = mt2712_pin_drv,
	.n_pin_drv_grps = ARRAY_SIZE(mt2712_pin_drv),
	.spec_pull_set = mt2712_spec_pull_set,
	.spec_ies_smt_set = mt2712_ies_smt_set,
	.dir_offset = 0x0000,
	.pullen_offset = 0x0100,
	.pullsel_offset = 0x0200,
	.dout_offset = 0x0300,
	.din_offset = 0x0400,
	.pinmux_offset = 0x0500,
	.type1_start = 210,
	.type1_end = 210,
	.port_shf = 4,
	.port_mask = 0xf,
	.port_align = 4,
	.mode_mask = 0xf,
	.mode_per_reg = 5,
	.mode_shf = 4,
	.eint_hw = {
		.port_mask = 0xf,
		.ports     = 8,
		.ap_num    = 229,
		.db_cnt    = 40,
		.db_time   = debounce_time_mt2701,
	},
};

static int mt2712_pinctrl_probe(struct platform_device *pdev)
{
	return mtk_pctrl_init(pdev, &mt2712_pinctrl_data, NULL);
}

static const struct of_device_id mt2712_pctrl_match[] = {
	{
		.compatible = "mediatek,mt2712-pinctrl",
	},
	{ }
};
MODULE_DEVICE_TABLE(of, mt2712_pctrl_match);

static struct platform_driver mtk_pinctrl_driver = {
	.probe = mt2712_pinctrl_probe,
	.driver = {
		.name = "mediatek-mt2712-pinctrl",
		.of_match_table = mt2712_pctrl_match,
		.pm = &mtk_eint_pm_ops,
	},
};

static int __init mtk_pinctrl_init(void)
{
	return platform_driver_register(&mtk_pinctrl_driver);
}

arch_initcall(mtk_pinctrl_init);
