// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2021 MediaTek Inc.
 * Author: Zhiyong Tao <zhiyong.tao@mediatek.com>
 */

#include <dt-bindings/pinctrl/mt65xx.h>
#include <linux/of.h>
#include <linux/of_device.h>
#include <linux/module.h>
#include <linux/pinctrl/pinctrl.h>
#include <linux/platform_device.h>
#include <linux/regmap.h>

#include "pinctrl-mtk-common.h"
#include "pinctrl-mtk-mt8365.h"

static const struct mtk_drv_group_desc mt8365_drv_grp[] = {
	/* 0E4E8SR 4/8/12/16 */
	MTK_DRV_GRP(4, 16, 1, 2, 4),
	/* 0E2E4SR  2/4/6/8 */
	MTK_DRV_GRP(2, 8, 1, 2, 2),
	/* E8E4E2  2/4/6/8/10/12/14/16 */
	MTK_DRV_GRP(2, 16, 0, 2, 2)
};

static const struct mtk_pin_drv_grp mt8365_pin_drv[] = {

	MTK_PIN_DRV_GRP(0, 0x710, 0, 2),
	MTK_PIN_DRV_GRP(1, 0x710, 0, 2),
	MTK_PIN_DRV_GRP(2, 0x710, 0, 2),
	MTK_PIN_DRV_GRP(3, 0x710, 0, 2),
	MTK_PIN_DRV_GRP(4, 0x710, 4, 2),
	MTK_PIN_DRV_GRP(5, 0x710, 4, 2),
	MTK_PIN_DRV_GRP(6, 0x710, 4, 2),
	MTK_PIN_DRV_GRP(7, 0x710, 4, 2),
	MTK_PIN_DRV_GRP(8, 0x710, 8, 2),
	MTK_PIN_DRV_GRP(9, 0x710, 8, 2),
	MTK_PIN_DRV_GRP(10, 0x710, 8, 2),
	MTK_PIN_DRV_GRP(11, 0x710, 8, 2),
	MTK_PIN_DRV_GRP(12, 0x710, 12, 2),
	MTK_PIN_DRV_GRP(13, 0x710, 12, 2),
	MTK_PIN_DRV_GRP(14, 0x710, 12, 2),
	MTK_PIN_DRV_GRP(15, 0x710, 12, 2),
	MTK_PIN_DRV_GRP(16, 0x710, 16, 2),
	MTK_PIN_DRV_GRP(17, 0x710, 16, 2),
	MTK_PIN_DRV_GRP(18, 0x710, 16, 2),
	MTK_PIN_DRV_GRP(19, 0x710, 20, 2),
	MTK_PIN_DRV_GRP(20, 0x710, 24, 2),
	MTK_PIN_DRV_GRP(21, 0x710, 24, 2),
	MTK_PIN_DRV_GRP(22, 0x710, 28, 2),
	MTK_PIN_DRV_GRP(23, 0x720, 0, 2),
	MTK_PIN_DRV_GRP(24, 0x720, 0, 2),
	MTK_PIN_DRV_GRP(25, 0x720, 0, 2),
	MTK_PIN_DRV_GRP(26, 0x720, 4, 2),
	MTK_PIN_DRV_GRP(27, 0x720, 4, 2),
	MTK_PIN_DRV_GRP(28, 0x720, 4, 2),
	MTK_PIN_DRV_GRP(29, 0x720, 4, 2),
	MTK_PIN_DRV_GRP(30, 0x720, 8, 2),
	MTK_PIN_DRV_GRP(31, 0x720, 8, 2),
	MTK_PIN_DRV_GRP(32, 0x720, 8, 2),
	MTK_PIN_DRV_GRP(33, 0x720, 8, 2),
	MTK_PIN_DRV_GRP(34, 0x720, 8, 2),
	MTK_PIN_DRV_GRP(35, 0x720, 12, 2),
	MTK_PIN_DRV_GRP(36, 0x720, 12, 2),
	MTK_PIN_DRV_GRP(37, 0x720, 12, 2),
	MTK_PIN_DRV_GRP(38, 0x720, 12, 2),
	MTK_PIN_DRV_GRP(39, 0x720, 12, 2),
	MTK_PIN_DRV_GRP(40, 0x720, 12, 2),
	MTK_PIN_DRV_GRP(41, 0x720, 16, 2),
	MTK_PIN_DRV_GRP(42, 0x720, 16, 2),
	MTK_PIN_DRV_GRP(43, 0x720, 16, 2),
	MTK_PIN_DRV_GRP(44, 0x720, 16, 2),
	MTK_PIN_DRV_GRP(45, 0x720, 20, 2),
	MTK_PIN_DRV_GRP(46, 0x720, 20, 2),
	MTK_PIN_DRV_GRP(47, 0x720, 20, 2),
	MTK_PIN_DRV_GRP(48, 0x720, 20, 2),
	MTK_PIN_DRV_GRP(49, 0x720, 24, 2),
	MTK_PIN_DRV_GRP(50, 0x720, 24, 2),
	MTK_PIN_DRV_GRP(51, 0x720, 24, 2),
	MTK_PIN_DRV_GRP(52, 0x720, 24, 2),
	MTK_PIN_DRV_GRP(53, 0x720, 24, 2),
	MTK_PIN_DRV_GRP(54, 0x720, 24, 2),
	MTK_PIN_DRV_GRP(55, 0x720, 24, 2),
	MTK_PIN_DRV_GRP(56, 0x720, 24, 2),
	MTK_PIN_DRV_GRP(57, 0x720, 28, 2),
	MTK_PIN_DRV_GRP(58, 0x720, 28, 2),
	MTK_PIN_DRV_GRP(59, 0x730, 0, 2),
	MTK_PIN_DRV_GRP(60, 0x730, 0, 2),
	MTK_PIN_DRV_GRP(61, 0x730, 4, 2),
	MTK_PIN_DRV_GRP(62, 0x730, 4, 2),
	MTK_PIN_DRV_GRP(63, 0x730, 8, 2),
	MTK_PIN_DRV_GRP(64, 0x730, 8, 2),
	MTK_PIN_DRV_GRP(65, 0x730, 12, 2),
	MTK_PIN_DRV_GRP(66, 0x730, 12, 2),
	MTK_PIN_DRV_GRP(67, 0x730, 12, 2),
	MTK_PIN_DRV_GRP(68, 0x730, 12, 2),
	MTK_PIN_DRV_GRP(69, 0x730, 12, 2),
	MTK_PIN_DRV_GRP(70, 0x730, 12, 2),
	MTK_PIN_DRV_GRP(71, 0x730, 16, 2),
	MTK_PIN_DRV_GRP(72, 0x730, 16, 2),
	MTK_PIN_DRV_GRP(73, 0x730, 16, 2),
	MTK_PIN_DRV_GRP(74, 0x730, 16, 2),
	MTK_PIN_DRV_GRP(75, 0x730, 16, 2),
	MTK_PIN_DRV_GRP(76, 0x730, 16, 2),
	MTK_PIN_DRV_GRP(77, 0x730, 16, 2),
	MTK_PIN_DRV_GRP(78, 0x730, 16, 2),
	MTK_PIN_DRV_GRP(79, 0x730, 16, 2),
	MTK_PIN_DRV_GRP(80, 0x730, 20, 2),
	MTK_PIN_DRV_GRP(81, 0x730, 24, 2),
	MTK_PIN_DRV_GRP(82, 0x730, 28, 2),
	MTK_PIN_DRV_GRP(83, 0x730, 28, 2),
	MTK_PIN_DRV_GRP(84, 0x730, 28, 2),
	MTK_PIN_DRV_GRP(85, 0x730, 28, 2),
	MTK_PIN_DRV_GRP(86, 0x740, 12, 2),
	MTK_PIN_DRV_GRP(87, 0x740, 16, 2),
	MTK_PIN_DRV_GRP(88, 0x740, 20, 2),
	MTK_PIN_DRV_GRP(89, 0x740, 24, 2),
	MTK_PIN_DRV_GRP(90, 0x740, 24, 2),
	MTK_PIN_DRV_GRP(91, 0x740, 24, 2),
	MTK_PIN_DRV_GRP(92, 0x740, 24, 2),
	MTK_PIN_DRV_GRP(93, 0x750, 8, 2),
	MTK_PIN_DRV_GRP(94, 0x750, 8, 2),
	MTK_PIN_DRV_GRP(95, 0x750, 8, 2),
	MTK_PIN_DRV_GRP(96, 0x750, 8, 2),
	MTK_PIN_DRV_GRP(97, 0x750, 24, 2),
	MTK_PIN_DRV_GRP(98, 0x750, 28, 2),
	MTK_PIN_DRV_GRP(99, 0x760, 0, 2),
	MTK_PIN_DRV_GRP(100, 0x750, 8, 2),
	MTK_PIN_DRV_GRP(101, 0x750, 8, 2),
	MTK_PIN_DRV_GRP(102, 0x750, 8, 2),
	MTK_PIN_DRV_GRP(103, 0x750, 8, 2),
	MTK_PIN_DRV_GRP(104, 0x760, 20, 2),
	MTK_PIN_DRV_GRP(105, 0x760, 24, 2),
	MTK_PIN_DRV_GRP(106, 0x760, 24, 2),
	MTK_PIN_DRV_GRP(107, 0x760, 24, 2),
	MTK_PIN_DRV_GRP(108, 0x760, 24, 2),
	MTK_PIN_DRV_GRP(109, 0x760, 24, 2),
	MTK_PIN_DRV_GRP(110, 0x760, 28, 2),
	MTK_PIN_DRV_GRP(111, 0x760, 28, 2),
	MTK_PIN_DRV_GRP(112, 0x760, 28, 2),
	MTK_PIN_DRV_GRP(113, 0x760, 28, 2),
	MTK_PIN_DRV_GRP(114, 0x770, 0, 2),
	MTK_PIN_DRV_GRP(115, 0x770, 0, 2),
	MTK_PIN_DRV_GRP(116, 0x770, 0, 2),
	MTK_PIN_DRV_GRP(117, 0x770, 4, 2),
	MTK_PIN_DRV_GRP(118, 0x770, 4, 2),
	MTK_PIN_DRV_GRP(119, 0x770, 4, 2),
	MTK_PIN_DRV_GRP(120, 0x770, 8, 2),
	MTK_PIN_DRV_GRP(121, 0x770, 8, 2),
	MTK_PIN_DRV_GRP(122, 0x770, 8, 2),
	MTK_PIN_DRV_GRP(123, 0x770, 12, 2),
	MTK_PIN_DRV_GRP(124, 0x770, 12, 2),
	MTK_PIN_DRV_GRP(125, 0x770, 12, 2),
	MTK_PIN_DRV_GRP(126, 0x770, 16, 2),
	MTK_PIN_DRV_GRP(127, 0x770, 16, 2),
	MTK_PIN_DRV_GRP(128, 0x770, 16, 2),
	MTK_PIN_DRV_GRP(129, 0x770, 20, 2),
	MTK_PIN_DRV_GRP(130, 0x770, 20, 2),
	MTK_PIN_DRV_GRP(131, 0x770, 20, 2),
	MTK_PIN_DRV_GRP(132, 0x770, 20, 2),
	MTK_PIN_DRV_GRP(133, 0x770, 20, 2),
	MTK_PIN_DRV_GRP(134, 0x770, 20, 2),
	MTK_PIN_DRV_GRP(135, 0x770, 20, 2),
	MTK_PIN_DRV_GRP(136, 0x770, 24, 2),
	MTK_PIN_DRV_GRP(137, 0x770, 24, 2),
	MTK_PIN_DRV_GRP(138, 0x770, 24, 2),
	MTK_PIN_DRV_GRP(139, 0x770, 24, 2),
	MTK_PIN_DRV_GRP(140, 0x770, 24, 2),
	MTK_PIN_DRV_GRP(141, 0x770, 24, 2),
	MTK_PIN_DRV_GRP(142, 0x770, 24, 2),
	MTK_PIN_DRV_GRP(143, 0x770, 24, 2),
	MTK_PIN_DRV_GRP(144, 0x770, 24, 2),
};

static const struct mtk_pin_spec_pupd_set_samereg mt8365_spec_pupd[] = {
	MTK_PIN_PUPD_SPEC_SR(22, 0x070, 0, 2, 1),
	MTK_PIN_PUPD_SPEC_SR(23, 0x070, 3, 5, 4),
	MTK_PIN_PUPD_SPEC_SR(24, 0x070, 6, 8, 7),
	MTK_PIN_PUPD_SPEC_SR(25, 0x070, 9, 11, 10),
	MTK_PIN_PUPD_SPEC_SR(80, 0x070, 14, 13, 12),
	MTK_PIN_PUPD_SPEC_SR(81, 0x070, 17, 16, 15),
	MTK_PIN_PUPD_SPEC_SR(82, 0x070, 20, 19, 18),
	MTK_PIN_PUPD_SPEC_SR(83, 0x070, 23, 22, 21),
	MTK_PIN_PUPD_SPEC_SR(84, 0x070, 26, 25, 24),
	MTK_PIN_PUPD_SPEC_SR(85, 0x070, 29, 28, 27),
	MTK_PIN_PUPD_SPEC_SR(86, 0x080, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(87, 0x080, 5, 4, 3),
	MTK_PIN_PUPD_SPEC_SR(88, 0x080, 8, 7, 6),
	MTK_PIN_PUPD_SPEC_SR(89, 0x080, 11, 10, 9),
	MTK_PIN_PUPD_SPEC_SR(90, 0x080, 14, 13, 12),
	MTK_PIN_PUPD_SPEC_SR(91, 0x080, 17, 16, 15),
	MTK_PIN_PUPD_SPEC_SR(92, 0x080, 20, 19, 18),
	MTK_PIN_PUPD_SPEC_SR(93, 0x080, 23, 22, 21),
	MTK_PIN_PUPD_SPEC_SR(94, 0x080, 26, 25, 24),
	MTK_PIN_PUPD_SPEC_SR(95, 0x080, 29, 28, 27),
	MTK_PIN_PUPD_SPEC_SR(96, 0x090, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(97, 0x090, 5, 4, 3),
	MTK_PIN_PUPD_SPEC_SR(98, 0x090, 8, 7, 6),
	MTK_PIN_PUPD_SPEC_SR(99, 0x090, 11, 10, 9),
	MTK_PIN_PUPD_SPEC_SR(100, 0x090, 14, 13, 12),
	MTK_PIN_PUPD_SPEC_SR(101, 0x090, 17, 16, 15),
	MTK_PIN_PUPD_SPEC_SR(102, 0x090, 20, 19, 18),
	MTK_PIN_PUPD_SPEC_SR(103, 0x090, 23, 22, 21),
	MTK_PIN_PUPD_SPEC_SR(104, 0x090, 26, 25, 24),
	MTK_PIN_PUPD_SPEC_SR(105, 0x090, 29, 28, 27),
	MTK_PIN_PUPD_SPEC_SR(106, 0x0F0, 2, 1, 0),
	MTK_PIN_PUPD_SPEC_SR(107, 0x0F0, 5, 4, 3),
	MTK_PIN_PUPD_SPEC_SR(108, 0x0F0, 8, 7, 6),
	MTK_PIN_PUPD_SPEC_SR(109, 0x0F0, 11, 10, 9),
};

static const struct mtk_pin_ies_smt_set mt8365_ies_set[] = {
	MTK_PIN_IES_SMT_SPEC(0, 3, 0x410, 0),
	MTK_PIN_IES_SMT_SPEC(4, 7, 0x410, 1),
	MTK_PIN_IES_SMT_SPEC(8, 11, 0x410, 2),
	MTK_PIN_IES_SMT_SPEC(12, 15, 0x410, 3),
	MTK_PIN_IES_SMT_SPEC(16, 18, 0x410, 4),
	MTK_PIN_IES_SMT_SPEC(19, 19, 0x410, 5),
	MTK_PIN_IES_SMT_SPEC(20, 21, 0x410, 6),
	MTK_PIN_IES_SMT_SPEC(22, 22, 0x410, 7),
	MTK_PIN_IES_SMT_SPEC(23, 25, 0x410, 8),
	MTK_PIN_IES_SMT_SPEC(26, 29, 0x410, 9),
	MTK_PIN_IES_SMT_SPEC(30, 34, 0x410, 10),
	MTK_PIN_IES_SMT_SPEC(35, 40, 0x410, 11),
	MTK_PIN_IES_SMT_SPEC(41, 44, 0x410, 12),
	MTK_PIN_IES_SMT_SPEC(45, 48, 0x410, 13),
	MTK_PIN_IES_SMT_SPEC(49, 56, 0x410, 14),
	MTK_PIN_IES_SMT_SPEC(57, 58, 0x410, 15),
	MTK_PIN_IES_SMT_SPEC(59, 60, 0x410, 16),
	MTK_PIN_IES_SMT_SPEC(61, 62, 0x410, 17),
	MTK_PIN_IES_SMT_SPEC(63, 64, 0x410, 18),
	MTK_PIN_IES_SMT_SPEC(65, 70, 0x410, 19),
	MTK_PIN_IES_SMT_SPEC(71, 79, 0x410, 20),
	MTK_PIN_IES_SMT_SPEC(80, 80, 0x410, 21),
	MTK_PIN_IES_SMT_SPEC(81, 81, 0x410, 22),
	MTK_PIN_IES_SMT_SPEC(82, 82, 0x410, 23),
	MTK_PIN_IES_SMT_SPEC(83, 83, 0x410, 24),
	MTK_PIN_IES_SMT_SPEC(84, 84, 0x410, 25),
	MTK_PIN_IES_SMT_SPEC(85, 85, 0x410, 26),
	MTK_PIN_IES_SMT_SPEC(86, 86, 0x410, 27),
	MTK_PIN_IES_SMT_SPEC(87, 87, 0x410, 28),
	MTK_PIN_IES_SMT_SPEC(88, 88, 0x410, 29),
	MTK_PIN_IES_SMT_SPEC(89, 89, 0x410, 30),
	MTK_PIN_IES_SMT_SPEC(90, 90, 0x410, 31),
	MTK_PIN_IES_SMT_SPEC(91, 91, 0x420, 0),
	MTK_PIN_IES_SMT_SPEC(92, 92, 0x420, 1),
	MTK_PIN_IES_SMT_SPEC(93, 93, 0x420, 2),
	MTK_PIN_IES_SMT_SPEC(94, 94, 0x420, 3),
	MTK_PIN_IES_SMT_SPEC(95, 95, 0x420, 4),
	MTK_PIN_IES_SMT_SPEC(96, 96, 0x420, 5),
	MTK_PIN_IES_SMT_SPEC(97, 97, 0x420, 6),
	MTK_PIN_IES_SMT_SPEC(98, 98, 0x420, 7),
	MTK_PIN_IES_SMT_SPEC(99, 99, 0x420, 8),
	MTK_PIN_IES_SMT_SPEC(100, 100, 0x420, 9),
	MTK_PIN_IES_SMT_SPEC(101, 101, 0x420, 10),
	MTK_PIN_IES_SMT_SPEC(102, 102, 0x420, 11),
	MTK_PIN_IES_SMT_SPEC(103, 103, 0x420, 12),
	MTK_PIN_IES_SMT_SPEC(104, 104, 0x420, 13),
	MTK_PIN_IES_SMT_SPEC(105, 109, 0x420, 14),
	MTK_PIN_IES_SMT_SPEC(110, 113, 0x420, 15),
	MTK_PIN_IES_SMT_SPEC(114, 116, 0x420, 16),
	MTK_PIN_IES_SMT_SPEC(117, 119, 0x420, 17),
	MTK_PIN_IES_SMT_SPEC(120, 122, 0x420, 18),
	MTK_PIN_IES_SMT_SPEC(123, 125, 0x420, 19),
	MTK_PIN_IES_SMT_SPEC(126, 128, 0x420, 20),
	MTK_PIN_IES_SMT_SPEC(129, 135, 0x420, 21),
	MTK_PIN_IES_SMT_SPEC(136, 144, 0x420, 22),
};

static const struct mtk_pin_ies_smt_set mt8365_smt_set[] = {
	MTK_PIN_IES_SMT_SPEC(0, 0, 0x470, 0),
	MTK_PIN_IES_SMT_SPEC(1, 1, 0x470, 0),
	MTK_PIN_IES_SMT_SPEC(2, 2, 0x470, 0),
	MTK_PIN_IES_SMT_SPEC(3, 3, 0x470, 0),
	MTK_PIN_IES_SMT_SPEC(4, 4, 0x470, 1),
	MTK_PIN_IES_SMT_SPEC(5, 5, 0x470, 1),
	MTK_PIN_IES_SMT_SPEC(6, 6, 0x470, 1),
	MTK_PIN_IES_SMT_SPEC(7, 7, 0x470, 1),
	MTK_PIN_IES_SMT_SPEC(8, 8, 0x470, 2),
	MTK_PIN_IES_SMT_SPEC(9, 9, 0x470, 2),
	MTK_PIN_IES_SMT_SPEC(10, 10, 0x470, 2),
	MTK_PIN_IES_SMT_SPEC(11, 11, 0x470, 2),
	MTK_PIN_IES_SMT_SPEC(12, 12, 0x470, 3),
	MTK_PIN_IES_SMT_SPEC(13, 13, 0x470, 3),
	MTK_PIN_IES_SMT_SPEC(14, 14, 0x470, 3),
	MTK_PIN_IES_SMT_SPEC(15, 15, 0x470, 3),
	MTK_PIN_IES_SMT_SPEC(16, 16, 0x470, 4),
	MTK_PIN_IES_SMT_SPEC(17, 17, 0x470, 4),
	MTK_PIN_IES_SMT_SPEC(18, 18, 0x470, 4),
	MTK_PIN_IES_SMT_SPEC(19, 19, 0x470, 5),
	MTK_PIN_IES_SMT_SPEC(20, 20, 0x470, 6),
	MTK_PIN_IES_SMT_SPEC(21, 21, 0x470, 6),
	MTK_PIN_IES_SMT_SPEC(22, 22, 0x470, 7),
	MTK_PIN_IES_SMT_SPEC(23, 23, 0x470, 8),
	MTK_PIN_IES_SMT_SPEC(24, 24, 0x470, 8),
	MTK_PIN_IES_SMT_SPEC(25, 25, 0x470, 8),
	MTK_PIN_IES_SMT_SPEC(26, 26, 0x470, 9),
	MTK_PIN_IES_SMT_SPEC(27, 27, 0x470, 9),
	MTK_PIN_IES_SMT_SPEC(28, 28, 0x470, 9),
	MTK_PIN_IES_SMT_SPEC(29, 29, 0x470, 9),
	MTK_PIN_IES_SMT_SPEC(30, 30, 0x470, 10),
	MTK_PIN_IES_SMT_SPEC(31, 31, 0x470, 10),
	MTK_PIN_IES_SMT_SPEC(32, 32, 0x470, 10),
	MTK_PIN_IES_SMT_SPEC(33, 33, 0x470, 10),
	MTK_PIN_IES_SMT_SPEC(34, 34, 0x470, 10),
	MTK_PIN_IES_SMT_SPEC(35, 35, 0x470, 11),
	MTK_PIN_IES_SMT_SPEC(36, 36, 0x470, 11),
	MTK_PIN_IES_SMT_SPEC(37, 37, 0x470, 11),
	MTK_PIN_IES_SMT_SPEC(38, 38, 0x470, 11),
	MTK_PIN_IES_SMT_SPEC(39, 39, 0x470, 11),
	MTK_PIN_IES_SMT_SPEC(40, 40, 0x470, 11),
	MTK_PIN_IES_SMT_SPEC(41, 41, 0x470, 12),
	MTK_PIN_IES_SMT_SPEC(42, 42, 0x470, 12),
	MTK_PIN_IES_SMT_SPEC(43, 43, 0x470, 12),
	MTK_PIN_IES_SMT_SPEC(44, 44, 0x470, 12),
	MTK_PIN_IES_SMT_SPEC(45, 45, 0x470, 13),
	MTK_PIN_IES_SMT_SPEC(46, 46, 0x470, 13),
	MTK_PIN_IES_SMT_SPEC(47, 47, 0x470, 13),
	MTK_PIN_IES_SMT_SPEC(48, 48, 0x470, 13),
	MTK_PIN_IES_SMT_SPEC(49, 49, 0x470, 14),
	MTK_PIN_IES_SMT_SPEC(50, 50, 0x470, 14),
	MTK_PIN_IES_SMT_SPEC(51, 51, 0x470, 14),
	MTK_PIN_IES_SMT_SPEC(52, 52, 0x470, 14),
	MTK_PIN_IES_SMT_SPEC(53, 53, 0x470, 14),
	MTK_PIN_IES_SMT_SPEC(54, 54, 0x470, 14),
	MTK_PIN_IES_SMT_SPEC(55, 55, 0x470, 14),
	MTK_PIN_IES_SMT_SPEC(56, 56, 0x470, 14),
	MTK_PIN_IES_SMT_SPEC(57, 57, 0x470, 15),
	MTK_PIN_IES_SMT_SPEC(58, 58, 0x470, 15),
	MTK_PIN_IES_SMT_SPEC(59, 59, 0x470, 16),
	MTK_PIN_IES_SMT_SPEC(60, 60, 0x470, 16),
	MTK_PIN_IES_SMT_SPEC(61, 61, 0x470, 17),
	MTK_PIN_IES_SMT_SPEC(62, 62, 0x470, 17),
	MTK_PIN_IES_SMT_SPEC(63, 63, 0x470, 18),
	MTK_PIN_IES_SMT_SPEC(64, 64, 0x470, 18),
	MTK_PIN_IES_SMT_SPEC(65, 65, 0x470, 19),
	MTK_PIN_IES_SMT_SPEC(66, 66, 0x470, 19),
	MTK_PIN_IES_SMT_SPEC(67, 67, 0x470, 19),
	MTK_PIN_IES_SMT_SPEC(68, 68, 0x470, 19),
	MTK_PIN_IES_SMT_SPEC(69, 69, 0x470, 19),
	MTK_PIN_IES_SMT_SPEC(70, 70, 0x470, 19),
	MTK_PIN_IES_SMT_SPEC(71, 71, 0x470, 20),
	MTK_PIN_IES_SMT_SPEC(72, 72, 0x470, 20),
	MTK_PIN_IES_SMT_SPEC(73, 73, 0x470, 20),
	MTK_PIN_IES_SMT_SPEC(74, 74, 0x470, 20),
	MTK_PIN_IES_SMT_SPEC(75, 75, 0x470, 20),
	MTK_PIN_IES_SMT_SPEC(76, 76, 0x470, 20),
	MTK_PIN_IES_SMT_SPEC(77, 77, 0x470, 20),
	MTK_PIN_IES_SMT_SPEC(78, 78, 0x470, 20),
	MTK_PIN_IES_SMT_SPEC(79, 79, 0x470, 20),
	MTK_PIN_IES_SMT_SPEC(80, 80, 0x470, 21),
	MTK_PIN_IES_SMT_SPEC(81, 81, 0x470, 22),
	MTK_PIN_IES_SMT_SPEC(82, 82, 0x470, 23),
	MTK_PIN_IES_SMT_SPEC(83, 83, 0x470, 24),
	MTK_PIN_IES_SMT_SPEC(84, 84, 0x470, 25),
	MTK_PIN_IES_SMT_SPEC(85, 85, 0x470, 26),
	MTK_PIN_IES_SMT_SPEC(86, 86, 0x470, 27),
	MTK_PIN_IES_SMT_SPEC(87, 87, 0x470, 28),
	MTK_PIN_IES_SMT_SPEC(88, 88, 0x470, 29),
	MTK_PIN_IES_SMT_SPEC(89, 89, 0x470, 30),
	MTK_PIN_IES_SMT_SPEC(90, 90, 0x470, 31),
	MTK_PIN_IES_SMT_SPEC(91, 91, 0x480, 0),
	MTK_PIN_IES_SMT_SPEC(92, 92, 0x480, 1),
	MTK_PIN_IES_SMT_SPEC(93, 93, 0x480, 2),
	MTK_PIN_IES_SMT_SPEC(94, 94, 0x480, 3),
	MTK_PIN_IES_SMT_SPEC(95, 95, 0x480, 4),
	MTK_PIN_IES_SMT_SPEC(96, 96, 0x480, 5),
	MTK_PIN_IES_SMT_SPEC(97, 97, 0x480, 6),
	MTK_PIN_IES_SMT_SPEC(98, 98, 0x480, 7),
	MTK_PIN_IES_SMT_SPEC(99, 99, 0x480, 8),
	MTK_PIN_IES_SMT_SPEC(100, 100, 0x480, 9),
	MTK_PIN_IES_SMT_SPEC(101, 101, 0x480, 10),
	MTK_PIN_IES_SMT_SPEC(102, 102, 0x480, 11),
	MTK_PIN_IES_SMT_SPEC(103, 103, 0x480, 12),
	MTK_PIN_IES_SMT_SPEC(104, 104, 0x480, 13),
	MTK_PIN_IES_SMT_SPEC(105, 105, 0x480, 14),
	MTK_PIN_IES_SMT_SPEC(106, 106, 0x480, 14),
	MTK_PIN_IES_SMT_SPEC(107, 107, 0x480, 14),
	MTK_PIN_IES_SMT_SPEC(108, 108, 0x480, 14),
	MTK_PIN_IES_SMT_SPEC(109, 109, 0x480, 14),
	MTK_PIN_IES_SMT_SPEC(110, 110, 0x480, 15),
	MTK_PIN_IES_SMT_SPEC(111, 111, 0x480, 15),
	MTK_PIN_IES_SMT_SPEC(112, 112, 0x480, 15),
	MTK_PIN_IES_SMT_SPEC(113, 113, 0x480, 15),
	MTK_PIN_IES_SMT_SPEC(114, 114, 0x480, 16),
	MTK_PIN_IES_SMT_SPEC(115, 115, 0x480, 16),
	MTK_PIN_IES_SMT_SPEC(116, 116, 0x480, 16),
	MTK_PIN_IES_SMT_SPEC(117, 117, 0x480, 17),
	MTK_PIN_IES_SMT_SPEC(118, 118, 0x480, 17),
	MTK_PIN_IES_SMT_SPEC(119, 119, 0x480, 17),
	MTK_PIN_IES_SMT_SPEC(120, 120, 0x480, 18),
	MTK_PIN_IES_SMT_SPEC(121, 121, 0x480, 18),
	MTK_PIN_IES_SMT_SPEC(122, 122, 0x480, 18),
	MTK_PIN_IES_SMT_SPEC(123, 123, 0x480, 19),
	MTK_PIN_IES_SMT_SPEC(124, 124, 0x480, 19),
	MTK_PIN_IES_SMT_SPEC(125, 125, 0x480, 19),
	MTK_PIN_IES_SMT_SPEC(126, 126, 0x480, 20),
	MTK_PIN_IES_SMT_SPEC(127, 127, 0x480, 20),
	MTK_PIN_IES_SMT_SPEC(128, 128, 0x480, 20),
	MTK_PIN_IES_SMT_SPEC(129, 129, 0x480, 21),
	MTK_PIN_IES_SMT_SPEC(130, 130, 0x480, 21),
	MTK_PIN_IES_SMT_SPEC(131, 131, 0x480, 21),
	MTK_PIN_IES_SMT_SPEC(132, 132, 0x480, 21),
	MTK_PIN_IES_SMT_SPEC(133, 133, 0x480, 21),
	MTK_PIN_IES_SMT_SPEC(134, 134, 0x480, 21),
	MTK_PIN_IES_SMT_SPEC(135, 135, 0x480, 21),
	MTK_PIN_IES_SMT_SPEC(136, 136, 0x480, 22),
	MTK_PIN_IES_SMT_SPEC(137, 137, 0x480, 22),
	MTK_PIN_IES_SMT_SPEC(138, 138, 0x480, 22),
	MTK_PIN_IES_SMT_SPEC(139, 139, 0x480, 22),
	MTK_PIN_IES_SMT_SPEC(140, 140, 0x480, 22),
	MTK_PIN_IES_SMT_SPEC(141, 141, 0x480, 22),
	MTK_PIN_IES_SMT_SPEC(142, 142, 0x480, 22),
	MTK_PIN_IES_SMT_SPEC(143, 143, 0x480, 22),
	MTK_PIN_IES_SMT_SPEC(144, 144, 0x480, 22),
};

static int mt8365_spec_pull_set(struct regmap *regmap, unsigned int pin,
			unsigned char align, bool isup, unsigned int r1r0)
{
	return mtk_pctrl_spec_pull_set_samereg(regmap, mt8365_spec_pupd,
		ARRAY_SIZE(mt8365_spec_pupd), pin, align, isup, r1r0);
}

static int mt8365_ies_smt_set(struct regmap *regmap, unsigned int pin,
		unsigned char align, int value, enum pin_config_param arg)
{
	if (arg == PIN_CONFIG_INPUT_ENABLE)
		return mtk_pconf_spec_set_ies_smt_range(regmap, mt8365_ies_set,
			ARRAY_SIZE(mt8365_ies_set), pin, align, value);
	else if (arg == PIN_CONFIG_INPUT_SCHMITT_ENABLE)
		return mtk_pconf_spec_set_ies_smt_range(regmap, mt8365_smt_set,
			ARRAY_SIZE(mt8365_smt_set), pin, align, value);
	return -EINVAL;
}

static const struct mtk_pinctrl_devdata mt8365_pinctrl_data = {
	.pins = mtk_pins_mt8365,
	.npins = ARRAY_SIZE(mtk_pins_mt8365),
	.grp_desc = mt8365_drv_grp,
	.n_grp_cls = ARRAY_SIZE(mt8365_drv_grp),
	.pin_drv_grp = mt8365_pin_drv,
	.n_pin_drv_grps = ARRAY_SIZE(mt8365_pin_drv),
	.spec_pull_set = mt8365_spec_pull_set,
	.spec_ies_smt_set = mt8365_ies_smt_set,
	.dir_offset = 0x0140,
	.dout_offset = 0x00A0,
	.din_offset = 0x0000,
	.pinmux_offset = 0x01E0,
	.ies_offset = 0x0410,
	.smt_offset = 0x0470,
	.pullen_offset = 0x0860,
	.pullsel_offset = 0x0900,
	.drv_offset = 0x0710,
	.type1_start = 145,
	.type1_end = 145,
	.port_shf = 4,
	.port_mask = 0x1f,
	.port_align = 4,
	.mode_mask = 0x1f,
	.mode_per_reg = 10,
	.mode_shf = 5,
	.eint_hw = {
		.port_mask = 7,
		.ports     = 5,
		.ap_num = 160,
		.db_cnt = 160,
		.db_time   = debounce_time_mt6765,
	},
};

static int mtk_pinctrl_probe(struct platform_device *pdev)
{
	return mtk_pctrl_init(pdev, &mt8365_pinctrl_data, NULL);
}

static const struct of_device_id mt8365_pctrl_match[] = {
	{
		.compatible = "mediatek,mt8365-pinctrl",
	},
	{}
};

static struct platform_driver mtk_pinctrl_driver = {
	.probe = mtk_pinctrl_probe,
	.driver = {
		.name = "mediatek-mt8365-pinctrl",
		.of_match_table = mt8365_pctrl_match,
		.pm = &mtk_eint_pm_ops,
	},
};

static int __init mtk_pinctrl_init(void)
{
	return platform_driver_register(&mtk_pinctrl_driver);
}
arch_initcall(mtk_pinctrl_init);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("MediaTek MT8365 Pinctrl Driver");
MODULE_AUTHOR("Zhiyong Tao <zhiyong.tao@mediatek.com>");
