/* Generated automatically by the program `genattrtab'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "options.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "insn-attr.h"
#include "memmodel.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "toplev.h"
#include "flags.h"
#include "emit-rtl.h"

#define operands recog_data.operand

int
insn_default_latency (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_mul32 cached_mul32 ATTRIBUTE_UNUSED;
  enum attr_widen_mul64 cached_widen_mul64 ATTRIBUTE_UNUSED;
  enum attr_cortex_a53_advsimd_type cached_cortex_a53_advsimd_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a57_neon_type cached_cortex_a57_neon_type ATTRIBUTE_UNUSED;
  enum attr_predicated cached_predicated ATTRIBUTE_UNUSED;
  enum attr_exynos_m1_neon_type cached_exynos_m1_neon_type ATTRIBUTE_UNUSED;
  enum attr_tsv110_neon_type cached_tsv110_neon_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 3839:  /* aarch64_st1_x4_v8bf */
    case 3838:  /* aarch64_st1_x4_v2df */
    case 3837:  /* aarch64_st1_x4_v4sf */
    case 3836:  /* aarch64_st1_x4_v8hf */
    case 3835:  /* aarch64_st1_x4_v2di */
    case 3834:  /* aarch64_st1_x4_v4si */
    case 3833:  /* aarch64_st1_x4_v8hi */
    case 3832:  /* aarch64_st1_x4_v16qi */
      if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))))
        {
	  return 0;
        }
      else if (((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1))))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 3823:  /* aarch64_st1_x3_v8bf */
    case 3822:  /* aarch64_st1_x3_v2df */
    case 3821:  /* aarch64_st1_x3_v4sf */
    case 3820:  /* aarch64_st1_x3_v8hf */
    case 3819:  /* aarch64_st1_x3_v2di */
    case 3818:  /* aarch64_st1_x3_v4si */
    case 3817:  /* aarch64_st1_x3_v8hi */
    case 3816:  /* aarch64_st1_x3_v16qi */
      if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))))
        {
	  return 0;
        }
      else if (((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 4304:  /* truncv2div2si2 */
    case 4303:  /* truncv4siv4hi2 */
    case 4302:  /* truncv8hiv8qi2 */
    case 1918:  /* aarch64_xtn2v2di_insn_be */
    case 1917:  /* aarch64_xtn2v4si_insn_be */
    case 1916:  /* aarch64_xtn2v8hi_insn_be */
    case 1915:  /* aarch64_xtn2v2di_insn_le */
    case 1914:  /* aarch64_xtn2v4si_insn_le */
    case 1913:  /* aarch64_xtn2v8hi_insn_le */
    case 1912:  /* aarch64_xtnv2di_insn_be */
    case 1911:  /* aarch64_xtnv4si_insn_be */
    case 1910:  /* aarch64_xtnv8hi_insn_be */
    case 1909:  /* aarch64_xtnv2di_insn_le */
    case 1908:  /* aarch64_xtnv4si_insn_le */
    case 1907:  /* aarch64_xtnv8hi_insn_le */
      if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))))
        {
	  return 4;
        }
      else if (((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110))))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 4310:  /* aarch64_bfdot_laneqv4sf */
    case 4309:  /* aarch64_bfdot_lanev4sf */
    case 4308:  /* aarch64_bfdot_laneqv2sf */
    case 4307:  /* aarch64_bfdot_lanev2sf */
    case 4306:  /* aarch64_bfdotv4sf */
    case 4305:  /* aarch64_bfdotv2sf */
    case 1539:  /* aarch64_sudot_laneqv16qi */
    case 1538:  /* aarch64_usdot_laneqv16qi */
    case 1537:  /* aarch64_sudot_laneqv8qi */
    case 1536:  /* aarch64_usdot_laneqv8qi */
    case 1535:  /* aarch64_sudot_lanev16qi */
    case 1534:  /* aarch64_usdot_lanev16qi */
    case 1533:  /* aarch64_sudot_lanev8qi */
    case 1532:  /* aarch64_usdot_lanev8qi */
    case 1531:  /* aarch64_udot_laneqv16qi */
    case 1530:  /* aarch64_sdot_laneqv16qi */
    case 1529:  /* aarch64_udot_laneqv8qi */
    case 1528:  /* aarch64_sdot_laneqv8qi */
    case 1527:  /* aarch64_udot_lanev16qi */
    case 1526:  /* aarch64_sdot_lanev16qi */
    case 1525:  /* aarch64_udot_lanev8qi */
    case 1524:  /* aarch64_sdot_lanev8qi */
    case 1523:  /* usdot_prodv16qi */
    case 1522:  /* usdot_prodv8qi */
    case 1521:  /* udot_prodv16qi */
    case 1520:  /* sdot_prodv16qi */
    case 1519:  /* udot_prodv8qi */
    case 1518:  /* sdot_prodv8qi */
      if (((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57))))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 9966:  /* aarch64_sve2_sm4ekey */
    case 9965:  /* aarch64_sve2_sm4e */
    case 9964:  /* aarch64_sve2_rax1 */
    case 4646:  /* aarch64_update_ffrt */
    case 4639:  /* aarch64_copy_ffr_to_ffrt */
    case 4638:  /* aarch64_update_ffr_for_load */
    case 4269:  /* aarch64_sm4ekeyqv4si */
    case 4268:  /* aarch64_sm4eqv4si */
    case 4267:  /* aarch64_sm3partw2qv4si */
    case 4266:  /* aarch64_sm3partw1qv4si */
    case 4265:  /* aarch64_sm3tt2bqv4si */
    case 4264:  /* aarch64_sm3tt2aqv4si */
    case 4263:  /* aarch64_sm3tt1bqv4si */
    case 4262:  /* aarch64_sm3tt1aqv4si */
    case 4261:  /* aarch64_sm3ss1qv4si */
    case 4260:  /* bcaxqv2di4 */
    case 4259:  /* bcaxqv4si4 */
    case 4258:  /* bcaxqv8hi4 */
    case 4257:  /* bcaxqv16qi4 */
    case 4256:  /* aarch64_xarqv2di */
    case 4255:  /* aarch64_rax1qv2di */
    case 4254:  /* eor3qv2di4 */
    case 4253:  /* eor3qv4si4 */
    case 4252:  /* eor3qv8hi4 */
    case 4251:  /* eor3qv16qi4 */
    case 4250:  /* aarch64_crypto_sha512su1qv2di */
    case 4249:  /* aarch64_crypto_sha512su0qv2di */
    case 4248:  /* aarch64_crypto_sha512h2qv2di */
    case 4247:  /* aarch64_crypto_sha512hqv2di */
    case 1517:  /* aarch64_fcmlaq_lane270v4sf */
    case 1516:  /* aarch64_fcmlaq_lane180v4sf */
    case 1515:  /* aarch64_fcmlaq_lane90v4sf */
    case 1514:  /* aarch64_fcmlaq_lane0v4sf */
    case 1513:  /* aarch64_fcmlaq_lane270v8hf */
    case 1512:  /* aarch64_fcmlaq_lane180v8hf */
    case 1511:  /* aarch64_fcmlaq_lane90v8hf */
    case 1510:  /* aarch64_fcmlaq_lane0v8hf */
    case 1509:  /* aarch64_fcmla_laneq270v4hf */
    case 1508:  /* aarch64_fcmla_laneq180v4hf */
    case 1507:  /* aarch64_fcmla_laneq90v4hf */
    case 1506:  /* aarch64_fcmla_laneq0v4hf */
    case 1505:  /* aarch64_fcmla_lane270v2df */
    case 1504:  /* aarch64_fcmla_lane180v2df */
    case 1503:  /* aarch64_fcmla_lane90v2df */
    case 1502:  /* aarch64_fcmla_lane0v2df */
    case 1501:  /* aarch64_fcmla_lane270v4sf */
    case 1500:  /* aarch64_fcmla_lane180v4sf */
    case 1499:  /* aarch64_fcmla_lane90v4sf */
    case 1498:  /* aarch64_fcmla_lane0v4sf */
    case 1497:  /* aarch64_fcmla_lane270v2sf */
    case 1496:  /* aarch64_fcmla_lane180v2sf */
    case 1495:  /* aarch64_fcmla_lane90v2sf */
    case 1494:  /* aarch64_fcmla_lane0v2sf */
    case 1493:  /* aarch64_fcmla_lane270v8hf */
    case 1492:  /* aarch64_fcmla_lane180v8hf */
    case 1491:  /* aarch64_fcmla_lane90v8hf */
    case 1490:  /* aarch64_fcmla_lane0v8hf */
    case 1489:  /* aarch64_fcmla_lane270v4hf */
    case 1488:  /* aarch64_fcmla_lane180v4hf */
    case 1487:  /* aarch64_fcmla_lane90v4hf */
    case 1486:  /* aarch64_fcmla_lane0v4hf */
    case 1485:  /* aarch64_fcmla270v2df */
    case 1484:  /* aarch64_fcmla180v2df */
    case 1483:  /* aarch64_fcmla90v2df */
    case 1482:  /* aarch64_fcmla0v2df */
    case 1481:  /* aarch64_fcmla270v4sf */
    case 1480:  /* aarch64_fcmla180v4sf */
    case 1479:  /* aarch64_fcmla90v4sf */
    case 1478:  /* aarch64_fcmla0v4sf */
    case 1477:  /* aarch64_fcmla270v2sf */
    case 1476:  /* aarch64_fcmla180v2sf */
    case 1475:  /* aarch64_fcmla90v2sf */
    case 1474:  /* aarch64_fcmla0v2sf */
    case 1473:  /* aarch64_fcmla270v8hf */
    case 1472:  /* aarch64_fcmla180v8hf */
    case 1471:  /* aarch64_fcmla90v8hf */
    case 1470:  /* aarch64_fcmla0v8hf */
    case 1469:  /* aarch64_fcmla270v4hf */
    case 1468:  /* aarch64_fcmla180v4hf */
    case 1467:  /* aarch64_fcmla90v4hf */
    case 1466:  /* aarch64_fcmla0v4hf */
    case 1465:  /* aarch64_fcadd270v2df */
    case 1464:  /* aarch64_fcadd90v2df */
    case 1463:  /* aarch64_fcadd270v4sf */
    case 1462:  /* aarch64_fcadd90v4sf */
    case 1461:  /* aarch64_fcadd270v2sf */
    case 1460:  /* aarch64_fcadd90v2sf */
    case 1459:  /* aarch64_fcadd270v8hf */
    case 1458:  /* aarch64_fcadd90v8hf */
    case 1457:  /* aarch64_fcadd270v4hf */
    case 1456:  /* aarch64_fcadd90v4hf */
    case 1135:  /* st64bv0 */
    case 1134:  /* st64bv */
    case 1133:  /* st64b */
    case 1132:  /* ld64b */
    case 1131:  /* stg */
    case 1130:  /* ldg */
    case 1129:  /* subp */
    case 1128:  /* addg */
    case 1127:  /* gmi */
    case 1126:  /* irg */
    case 1123:  /* tcancel */
    case 1122:  /* tcommit */
    case 1121:  /* ttest */
    case 1120:  /* tstart */
    case 1088:  /* bti_jc */
    case 1087:  /* bti_j */
    case 1086:  /* bti_c */
    case 1085:  /* bti_noarg */
    case 25:  /* nop */
      return 0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    case 1:  /* indirect_jump */
    case 2:  /* jump */
    case 3:  /* ccmpccsi */
    case 4:  /* ccmpccdi */
    case 5:  /* ccmpccfpsf */
    case 6:  /* ccmpccfpdf */
    case 7:  /* ccmpccfpesf */
    case 8:  /* ccmpccfpedf */
    case 9:  /* ccmpccsi_rev */
    case 10:  /* ccmpccdi_rev */
    case 11:  /* ccmpccfpsf_rev */
    case 12:  /* ccmpccfpdf_rev */
    case 13:  /* ccmpccfpesf_rev */
    case 14:  /* ccmpccfpedf_rev */
    case 15:  /* condjump */
    case 24:  /* *casesi_dispatch */
    case 26:  /* prefetch */
    case 27:  /* trap */
    case 28:  /* *do_return */
    case 29:  /* simple_return */
    case 30:  /* *cbeqsi1 */
    case 31:  /* *cbnesi1 */
    case 32:  /* *cbeqdi1 */
    case 33:  /* *cbnedi1 */
    case 34:  /* *tbeqsi1 */
    case 35:  /* *tbnesi1 */
    case 36:  /* *tbeqdi1 */
    case 37:  /* *tbnedi1 */
    case 38:  /* *cbltqi1 */
    case 39:  /* *cbgeqi1 */
    case 40:  /* *cblthi1 */
    case 41:  /* *cbgehi1 */
    case 42:  /* *cbltsi1 */
    case 43:  /* *cbgesi1 */
    case 44:  /* *cbltdi1 */
    case 45:  /* *cbgedi1 */
    case 46:  /* *call_insn */
    case 47:  /* *call_value_insn */
    case 48:  /* *sibcall_insn */
    case 49:  /* *sibcall_value_insn */
    case 50:  /* *movqi_aarch64 */
    case 51:  /* *movhi_aarch64 */
    case 52:  /* *movsi_aarch64 */
    case 53:  /* *movdi_aarch64 */
    case 54:  /* insv_immsi */
    case 55:  /* insv_immdi */
    case 56:  /* aarch64_movksi */
    case 57:  /* aarch64_movkdi */
    case 58:  /* *movti_aarch64 */
    case 59:  /* *movhf_aarch64 */
    case 60:  /* *movbf_aarch64 */
    case 61:  /* *movsf_aarch64 */
    case 62:  /* *movdf_aarch64 */
    case 63:  /* *movtf_aarch64 */
    case 67:  /* load_pair_sw_sisi */
    case 68:  /* load_pair_sw_sfsi */
    case 69:  /* load_pair_sw_sisf */
    case 70:  /* load_pair_sw_sfsf */
    case 71:  /* load_pair_dw_didi */
    case 72:  /* load_pair_dw_didf */
    case 73:  /* load_pair_dw_dfdi */
    case 74:  /* load_pair_dw_dfdf */
    case 75:  /* load_pair_dw_tftf */
    case 76:  /* store_pair_sw_sisi */
    case 77:  /* store_pair_sw_sfsi */
    case 78:  /* store_pair_sw_sisf */
    case 79:  /* store_pair_sw_sfsf */
    case 80:  /* store_pair_dw_didi */
    case 81:  /* store_pair_dw_didf */
    case 82:  /* store_pair_dw_dfdi */
    case 83:  /* store_pair_dw_dfdf */
    case 84:  /* store_pair_dw_tftf */
    case 85:  /* loadwb_pairsi_si */
    case 86:  /* loadwb_pairsi_di */
    case 87:  /* loadwb_pairdi_si */
    case 88:  /* loadwb_pairdi_di */
    case 89:  /* loadwb_pairsf_si */
    case 90:  /* loadwb_pairdf_si */
    case 91:  /* loadwb_pairsf_di */
    case 92:  /* loadwb_pairdf_di */
    case 93:  /* loadwb_pairti_si */
    case 94:  /* loadwb_pairtf_si */
    case 95:  /* loadwb_pairti_di */
    case 96:  /* loadwb_pairtf_di */
    case 97:  /* storewb_pairsi_si */
    case 98:  /* storewb_pairsi_di */
    case 99:  /* storewb_pairdi_si */
    case 100:  /* storewb_pairdi_di */
    case 101:  /* storewb_pairsf_si */
    case 102:  /* storewb_pairdf_si */
    case 103:  /* storewb_pairsf_di */
    case 104:  /* storewb_pairdf_di */
    case 105:  /* storewb_pairti_si */
    case 106:  /* storewb_pairtf_si */
    case 107:  /* storewb_pairti_di */
    case 108:  /* storewb_pairtf_di */
    case 109:  /* *extendsidi2_aarch64 */
    case 110:  /* *load_pair_extendsidi2_aarch64 */
    case 111:  /* *zero_extendsidi2_aarch64 */
    case 112:  /* *load_pair_zero_extendsidi2_aarch64 */
    case 113:  /* *extendqisi2_aarch64 */
    case 114:  /* *extendhisi2_aarch64 */
    case 115:  /* *extendqidi2_aarch64 */
    case 116:  /* *extendhidi2_aarch64 */
    case 117:  /* *zero_extendqisi2_aarch64 */
    case 118:  /* *zero_extendhisi2_aarch64 */
    case 119:  /* *zero_extendqidi2_aarch64 */
    case 120:  /* *zero_extendhidi2_aarch64 */
    case 121:  /* *extendqihi2_aarch64 */
    case 122:  /* *zero_extendqihi2_aarch64 */
    case 123:  /* *addsi3_aarch64 */
    case 124:  /* *adddi3_aarch64 */
    case 125:  /* *addsi3_aarch64_uxtw */
    case 126:  /* *addsi3_poly_1 */
    case 127:  /* *adddi3_poly_1 */
    case 128:  /* addsi3_compare0 */
    case 129:  /* adddi3_compare0 */
    case 130:  /* *addsi3_compare0_uxtw */
    case 131:  /* *addsi3_compareC_cconly */
    case 132:  /* *adddi3_compareC_cconly */
    case 133:  /* addsi3_compareC */
    case 134:  /* adddi3_compareC */
    case 135:  /* *addsi3_compareV_cconly_imm */
    case 136:  /* *adddi3_compareV_cconly_imm */
    case 137:  /* *addsi3_compareV_cconly */
    case 138:  /* *adddi3_compareV_cconly */
    case 139:  /* addsi3_compareV_imm */
    case 140:  /* adddi3_compareV_imm */
    case 141:  /* addsi3_compareV */
    case 142:  /* adddi3_compareV */
    case 143:  /* *adds_shift_imm_si */
    case 144:  /* *adds_shift_imm_si */
    case 145:  /* *adds_shift_imm_si */
    case 146:  /* *adds_shift_imm_di */
    case 147:  /* *adds_shift_imm_di */
    case 148:  /* *adds_shift_imm_di */
    case 149:  /* *subs_shift_imm_si */
    case 150:  /* *subs_shift_imm_si */
    case 151:  /* *subs_shift_imm_si */
    case 152:  /* *subs_shift_imm_di */
    case 153:  /* *subs_shift_imm_di */
    case 154:  /* *subs_shift_imm_di */
    case 155:  /* *adds_extendqi_si */
    case 156:  /* *adds_zero_extendqi_si */
    case 157:  /* *adds_extendqi_di */
    case 158:  /* *adds_zero_extendqi_di */
    case 159:  /* *adds_extendhi_si */
    case 160:  /* *adds_zero_extendhi_si */
    case 161:  /* *adds_extendhi_di */
    case 162:  /* *adds_zero_extendhi_di */
    case 163:  /* *adds_extendsi_si */
    case 164:  /* *adds_zero_extendsi_si */
    case 165:  /* *adds_extendsi_di */
    case 166:  /* *adds_zero_extendsi_di */
    case 167:  /* *subs_extendqi_si */
    case 168:  /* *subs_zero_extendqi_si */
    case 169:  /* *subs_extendqi_di */
    case 170:  /* *subs_zero_extendqi_di */
    case 171:  /* *subs_extendhi_si */
    case 172:  /* *subs_zero_extendhi_si */
    case 173:  /* *subs_extendhi_di */
    case 174:  /* *subs_zero_extendhi_di */
    case 175:  /* *subs_extendsi_si */
    case 176:  /* *subs_zero_extendsi_si */
    case 177:  /* *subs_extendsi_di */
    case 178:  /* *subs_zero_extendsi_di */
    case 179:  /* *adds_extendqi_shift_si */
    case 180:  /* *adds_zero_extendqi_shift_si */
    case 181:  /* *adds_extendqi_shift_di */
    case 182:  /* *adds_zero_extendqi_shift_di */
    case 183:  /* *adds_extendhi_shift_si */
    case 184:  /* *adds_zero_extendhi_shift_si */
    case 185:  /* *adds_extendhi_shift_di */
    case 186:  /* *adds_zero_extendhi_shift_di */
    case 187:  /* *adds_extendsi_shift_si */
    case 188:  /* *adds_zero_extendsi_shift_si */
    case 189:  /* *adds_extendsi_shift_di */
    case 190:  /* *adds_zero_extendsi_shift_di */
    case 191:  /* *subs_extendqi_shift_si */
    case 192:  /* *subs_zero_extendqi_shift_si */
    case 193:  /* *subs_extendqi_shift_di */
    case 194:  /* *subs_zero_extendqi_shift_di */
    case 195:  /* *subs_extendhi_shift_si */
    case 196:  /* *subs_zero_extendhi_shift_si */
    case 197:  /* *subs_extendhi_shift_di */
    case 198:  /* *subs_zero_extendhi_shift_di */
    case 199:  /* *subs_extendsi_shift_si */
    case 200:  /* *subs_zero_extendsi_shift_si */
    case 201:  /* *subs_extendsi_shift_di */
    case 202:  /* *subs_zero_extendsi_shift_di */
    case 203:  /* *addsi3nr_compare0 */
    case 204:  /* *adddi3nr_compare0 */
    case 205:  /* aarch64_subsi_compare0 */
    case 206:  /* aarch64_subdi_compare0 */
    case 207:  /* *compare_negsi */
    case 208:  /* *compare_negdi */
    case 209:  /* *add_lsl_si */
    case 210:  /* *add_asr_si */
    case 211:  /* *add_lsr_si */
    case 212:  /* *add_lsl_di */
    case 213:  /* *add_asr_di */
    case 214:  /* *add_lsr_di */
    case 215:  /* *add_lsl_si_uxtw */
    case 216:  /* *add_asr_si_uxtw */
    case 217:  /* *add_lsr_si_uxtw */
    case 218:  /* *add_extendqi_si */
    case 219:  /* *add_zero_extendqi_si */
    case 220:  /* *add_extendqi_di */
    case 221:  /* *add_zero_extendqi_di */
    case 222:  /* *add_extendhi_si */
    case 223:  /* *add_zero_extendhi_si */
    case 224:  /* *add_extendhi_di */
    case 225:  /* *add_zero_extendhi_di */
    case 226:  /* *add_extendsi_si */
    case 227:  /* *add_zero_extendsi_si */
    case 228:  /* *add_extendsi_di */
    case 229:  /* *add_zero_extendsi_di */
    case 230:  /* *add_extendqi_si_uxtw */
    case 231:  /* *add_zero_extendqi_si_uxtw */
    case 232:  /* *add_extendhi_si_uxtw */
    case 233:  /* *add_zero_extendhi_si_uxtw */
    case 234:  /* *add_extendqi_si_uxtw */
    case 235:  /* *add_zero_extendqi_si_uxtw */
    case 236:  /* *add_extendhi_si_uxtw */
    case 237:  /* *add_zero_extendhi_si_uxtw */
    case 238:  /* *add_extendqi_shft_si */
    case 239:  /* *add_zero_extendqi_shft_si */
    case 240:  /* *add_extendqi_shft_di */
    case 241:  /* *add_zero_extendqi_shft_di */
    case 242:  /* *add_extendhi_shft_si */
    case 243:  /* *add_zero_extendhi_shft_si */
    case 244:  /* *add_extendhi_shft_di */
    case 245:  /* *add_zero_extendhi_shft_di */
    case 246:  /* *add_extendsi_shft_si */
    case 247:  /* *add_zero_extendsi_shft_si */
    case 248:  /* *add_extendsi_shft_di */
    case 249:  /* *add_zero_extendsi_shft_di */
    case 250:  /* *add_extendqi_shft_si_uxtw */
    case 251:  /* *add_zero_extendqi_shft_si_uxtw */
    case 252:  /* *add_extendhi_shft_si_uxtw */
    case 253:  /* *add_zero_extendhi_shft_si_uxtw */
    case 254:  /* *addsi3_carryin */
    case 255:  /* *adddi3_carryin */
    case 256:  /* *addsi3_carryin_uxtw */
    case 257:  /* *addsi3_carryinC_zero */
    case 258:  /* *adddi3_carryinC_zero */
    case 259:  /* *addsi3_carryinC */
    case 260:  /* *adddi3_carryinC */
    case 261:  /* *addsi3_carryinV_zero */
    case 262:  /* *adddi3_carryinV_zero */
    case 263:  /* *addsi3_carryinV */
    case 264:  /* *adddi3_carryinV */
    case 265:  /* *add_uxtsi_shift2 */
    case 266:  /* *add_uxtdi_shift2 */
    case 267:  /* *add_uxtsi_shift2_uxtw */
    case 268:  /* subsi3 */
    case 269:  /* *subsi3_uxtw */
    case 270:  /* subdi3 */
    case 271:  /* subvsi_insn */
    case 272:  /* subvdi_insn */
    case 273:  /* subvsi_imm */
    case 274:  /* subvdi_imm */
    case 275:  /* negvsi_insn */
    case 276:  /* negvdi_insn */
    case 277:  /* negvsi_cmp_only */
    case 278:  /* negvdi_cmp_only */
    case 279:  /* *cmpvsi_insn */
    case 280:  /* *cmpvdi_insn */
    case 281:  /* negdi_carryout */
    case 282:  /* negvdi_carryinV */
    case 283:  /* *subsi3_compare0 */
    case 284:  /* *subdi3_compare0 */
    case 285:  /* *subsi3_compare0_uxtw */
    case 286:  /* subsi3_compare1_imm */
    case 287:  /* subdi3_compare1_imm */
    case 288:  /* subsi3_compare1 */
    case 289:  /* subdi3_compare1 */
    case 290:  /* *sub_lsl_si */
    case 291:  /* *sub_asr_si */
    case 292:  /* *sub_lsr_si */
    case 293:  /* *sub_lsl_di */
    case 294:  /* *sub_asr_di */
    case 295:  /* *sub_lsr_di */
    case 296:  /* *sub_lsl_si_uxtw */
    case 297:  /* *sub_asr_si_uxtw */
    case 298:  /* *sub_lsr_si_uxtw */
    case 299:  /* *sub_extendqi_si */
    case 300:  /* *sub_zero_extendqi_si */
    case 301:  /* *sub_extendqi_di */
    case 302:  /* *sub_zero_extendqi_di */
    case 303:  /* *sub_extendhi_si */
    case 304:  /* *sub_zero_extendhi_si */
    case 305:  /* *sub_extendhi_di */
    case 306:  /* *sub_zero_extendhi_di */
    case 307:  /* *sub_extendsi_si */
    case 308:  /* *sub_zero_extendsi_si */
    case 309:  /* *sub_extendsi_di */
    case 310:  /* *sub_zero_extendsi_di */
    case 311:  /* *sub_extendqi_si_uxtw */
    case 312:  /* *sub_zero_extendqi_si_uxtw */
    case 313:  /* *sub_extendhi_si_uxtw */
    case 314:  /* *sub_zero_extendhi_si_uxtw */
    case 315:  /* *sub_extendqi_shft_si */
    case 316:  /* *sub_zero_extendqi_shft_si */
    case 317:  /* *sub_extendqi_shft_di */
    case 318:  /* *sub_zero_extendqi_shft_di */
    case 319:  /* *sub_extendhi_shft_si */
    case 320:  /* *sub_zero_extendhi_shft_si */
    case 321:  /* *sub_extendhi_shft_di */
    case 322:  /* *sub_zero_extendhi_shft_di */
    case 323:  /* *sub_extendsi_shft_si */
    case 324:  /* *sub_zero_extendsi_shft_si */
    case 325:  /* *sub_extendsi_shft_di */
    case 326:  /* *sub_zero_extendsi_shft_di */
    case 327:  /* *sub_extendqi_shft_si_uxtw */
    case 328:  /* *sub_zero_extendqi_shft_si_uxtw */
    case 329:  /* *sub_extendhi_shft_si_uxtw */
    case 330:  /* *sub_zero_extendhi_shft_si_uxtw */
    case 331:  /* *subsi3_carryin0 */
    case 332:  /* *subdi3_carryin0 */
    case 333:  /* *subsi3_carryin_uxtw */
    case 334:  /* *subsi3_carryin */
    case 335:  /* *subdi3_carryin */
    case 336:  /* *subsi3_carryin_uxtw */
    case 337:  /* *subsi3_carryin_alt */
    case 338:  /* *subdi3_carryin_alt */
    case 339:  /* *subsi3_carryin_alt_uxtw */
    case 340:  /* *usubsi3_carryinC_z1 */
    case 341:  /* *usubdi3_carryinC_z1 */
    case 342:  /* *usubsi3_carryinC_z2 */
    case 343:  /* *usubdi3_carryinC_z2 */
    case 344:  /* *usubsi3_carryinC */
    case 345:  /* *usubdi3_carryinC */
    case 346:  /* *subsi3_carryinV_z2 */
    case 347:  /* *subdi3_carryinV_z2 */
    case 348:  /* *subsi3_carryinV */
    case 349:  /* *subdi3_carryinV */
    case 350:  /* *sub_uxtsi_shift2 */
    case 351:  /* *sub_uxtdi_shift2 */
    case 352:  /* *sub_uxtsi_shift2_uxtw */
    case 353:  /* negsi2 */
    case 354:  /* negdi2 */
    case 355:  /* *negsi2_uxtw */
    case 356:  /* *ngcsi */
    case 357:  /* *ngcdi */
    case 358:  /* *ngcsi_uxtw */
    case 359:  /* negsi2_compare0 */
    case 360:  /* negdi2_compare0 */
    case 361:  /* *negsi2_compare0_uxtw */
    case 362:  /* *neg_lslsi3_compare0 */
    case 363:  /* *neg_asrsi3_compare0 */
    case 364:  /* *neg_lsrsi3_compare0 */
    case 365:  /* *neg_lsldi3_compare0 */
    case 366:  /* *neg_asrdi3_compare0 */
    case 367:  /* *neg_lsrdi3_compare0 */
    case 368:  /* *neg_lsl_si2 */
    case 369:  /* *neg_asr_si2 */
    case 370:  /* *neg_lsr_si2 */
    case 371:  /* *neg_lsl_di2 */
    case 372:  /* *neg_asr_di2 */
    case 373:  /* *neg_lsr_di2 */
    case 374:  /* *neg_lsl_si2_uxtw */
    case 375:  /* *neg_asr_si2_uxtw */
    case 376:  /* *neg_lsr_si2_uxtw */
    case 377:  /* *neg_asr_si2_extr */
    case 378:  /* mulsi3 */
    case 379:  /* muldi3 */
    case 380:  /* *mulsi3_uxtw */
    case 381:  /* maddsi */
    case 382:  /* madddi */
    case 383:  /* *maddsi_uxtw */
    case 384:  /* *msubsi */
    case 385:  /* *msubdi */
    case 386:  /* *msubsi_uxtw */
    case 387:  /* *mulsi_neg */
    case 388:  /* *muldi_neg */
    case 389:  /* *mulsi_neg_uxtw */
    case 390:  /* mulsidi3 */
    case 391:  /* umulsidi3 */
    case 392:  /* maddsidi4 */
    case 393:  /* umaddsidi4 */
    case 394:  /* msubsidi4 */
    case 395:  /* umsubsidi4 */
    case 396:  /* *mulsidi_neg */
    case 397:  /* *umulsidi_neg */
    case 398:  /* smuldi3_highpart */
    case 399:  /* umuldi3_highpart */
    case 400:  /* divsi3 */
    case 401:  /* udivsi3 */
    case 402:  /* divdi3 */
    case 403:  /* udivdi3 */
    case 404:  /* *divsi3_uxtw */
    case 405:  /* *udivsi3_uxtw */
    case 406:  /* cmpsi */
    case 407:  /* cmpdi */
    case 408:  /* fcmpsf */
    case 409:  /* fcmpdf */
    case 410:  /* fcmpesf */
    case 411:  /* fcmpedf */
    case 412:  /* *cmp_swp_lsl_regsi */
    case 413:  /* *cmp_swp_asr_regsi */
    case 414:  /* *cmp_swp_lsr_regsi */
    case 415:  /* *cmp_swp_lsl_regdi */
    case 416:  /* *cmp_swp_asr_regdi */
    case 417:  /* *cmp_swp_lsr_regdi */
    case 418:  /* *cmp_swp_extendqi_regsi */
    case 419:  /* *cmp_swp_zero_extendqi_regsi */
    case 420:  /* *cmp_swp_extendqi_regdi */
    case 421:  /* *cmp_swp_zero_extendqi_regdi */
    case 422:  /* *cmp_swp_extendhi_regsi */
    case 423:  /* *cmp_swp_zero_extendhi_regsi */
    case 424:  /* *cmp_swp_extendhi_regdi */
    case 425:  /* *cmp_swp_zero_extendhi_regdi */
    case 426:  /* *cmp_swp_extendsi_regsi */
    case 427:  /* *cmp_swp_zero_extendsi_regsi */
    case 428:  /* *cmp_swp_extendsi_regdi */
    case 429:  /* *cmp_swp_zero_extendsi_regdi */
    case 430:  /* *cmp_swp_extendqi_shft_si */
    case 431:  /* *cmp_swp_zero_extendqi_shft_si */
    case 432:  /* *cmp_swp_extendqi_shft_di */
    case 433:  /* *cmp_swp_zero_extendqi_shft_di */
    case 434:  /* *cmp_swp_extendhi_shft_si */
    case 435:  /* *cmp_swp_zero_extendhi_shft_si */
    case 436:  /* *cmp_swp_extendhi_shft_di */
    case 437:  /* *cmp_swp_zero_extendhi_shft_di */
    case 438:  /* *cmp_swp_extendsi_shft_si */
    case 439:  /* *cmp_swp_zero_extendsi_shft_si */
    case 440:  /* *cmp_swp_extendsi_shft_di */
    case 441:  /* *cmp_swp_zero_extendsi_shft_di */
    case 442:  /* aarch64_cstoreqi */
    case 443:  /* aarch64_cstorehi */
    case 444:  /* aarch64_cstoresi */
    case 445:  /* aarch64_cstoredi */
    case 446:  /* *compare_cstoresi_insn */
    case 447:  /* *compare_cstoresi_insn */
    case 448:  /* *compare_cstoredi_insn */
    case 449:  /* *compare_cstoredi_insn */
    case 450:  /* *cstoresi_insn_uxtw */
    case 451:  /* cstoreqi_neg */
    case 452:  /* cstorehi_neg */
    case 453:  /* cstoresi_neg */
    case 454:  /* cstoredi_neg */
    case 455:  /* *cstoresi_neg_uxtw */
    case 456:  /* *cmovqi_insn */
    case 457:  /* *cmovhi_insn */
    case 458:  /* *cmovsi_insn */
    case 459:  /* *cmovdi_insn */
    case 460:  /* *cmovsi_insn_uxtw */
    case 461:  /* *cmovdi_insn_uxtw */
    case 462:  /* *cmovsf_insn */
    case 463:  /* *cmovdf_insn */
    case 464:  /* aarch64_crc32b */
    case 465:  /* aarch64_crc32h */
    case 466:  /* aarch64_crc32w */
    case 467:  /* aarch64_crc32x */
    case 468:  /* aarch64_crc32cb */
    case 469:  /* aarch64_crc32ch */
    case 470:  /* aarch64_crc32cw */
    case 471:  /* aarch64_crc32cx */
    case 472:  /* *csinc2si_insn */
    case 473:  /* *csinc2di_insn */
    case 474:  /* csinc3si_insn */
    case 475:  /* csinc3di_insn */
    case 476:  /* *csinv3si_insn */
    case 477:  /* *csinv3di_insn */
    case 478:  /* *csneg3_uxtw_insn4 */
    case 479:  /* *csinv3_uxtw_insn4 */
    case 480:  /* csneg3si_insn */
    case 481:  /* csneg3di_insn */
    case 482:  /* *csinv3_uxtw_insn1 */
    case 483:  /* *csinv3_uxtw_insn1 */
    case 484:  /* *csinv3_uxtw_insn2 */
    case 485:  /* *csinv3_uxtw_insn2 */
    case 486:  /* *csinv3_uxtw_insn3 */
    case 487:  /* *csinv3_uxtw_insn3 */
    case 500:  /* andsi3 */
    case 501:  /* iorsi3 */
    case 502:  /* xorsi3 */
    case 503:  /* anddi3 */
    case 504:  /* iordi3 */
    case 505:  /* xordi3 */
    case 506:  /* *andsi3_uxtw */
    case 507:  /* *iorsi3_uxtw */
    case 508:  /* *xorsi3_uxtw */
    case 509:  /* *andsi3_compare0 */
    case 510:  /* *anddi3_compare0 */
    case 511:  /* *andsi3_compare0_uxtw */
    case 512:  /* *and_ashlsi3_compare0 */
    case 513:  /* *and_ashrsi3_compare0 */
    case 514:  /* *and_lshrsi3_compare0 */
    case 515:  /* *and_rotrsi3_compare0 */
    case 516:  /* *and_ashldi3_compare0 */
    case 517:  /* *and_ashrdi3_compare0 */
    case 518:  /* *and_lshrdi3_compare0 */
    case 519:  /* *and_rotrdi3_compare0 */
    case 520:  /* *and_ashlsi3_compare0_uxtw */
    case 521:  /* *and_ashrsi3_compare0_uxtw */
    case 522:  /* *and_lshrsi3_compare0_uxtw */
    case 523:  /* *and_rotrsi3_compare0_uxtw */
    case 524:  /* *and_ashlsi3 */
    case 525:  /* *ior_ashlsi3 */
    case 526:  /* *xor_ashlsi3 */
    case 527:  /* *and_ashrsi3 */
    case 528:  /* *ior_ashrsi3 */
    case 529:  /* *xor_ashrsi3 */
    case 530:  /* *and_lshrsi3 */
    case 531:  /* *ior_lshrsi3 */
    case 532:  /* *xor_lshrsi3 */
    case 533:  /* *and_rotrsi3 */
    case 534:  /* *ior_rotrsi3 */
    case 535:  /* *xor_rotrsi3 */
    case 536:  /* *and_ashldi3 */
    case 537:  /* *ior_ashldi3 */
    case 538:  /* *xor_ashldi3 */
    case 539:  /* *and_ashrdi3 */
    case 540:  /* *ior_ashrdi3 */
    case 541:  /* *xor_ashrdi3 */
    case 542:  /* *and_lshrdi3 */
    case 543:  /* *ior_lshrdi3 */
    case 544:  /* *xor_lshrdi3 */
    case 545:  /* *and_rotrdi3 */
    case 546:  /* *ior_rotrdi3 */
    case 547:  /* *xor_rotrdi3 */
    case 548:  /* *and_rolsi3 */
    case 549:  /* *ior_rolsi3 */
    case 550:  /* *xor_rolsi3 */
    case 551:  /* *and_roldi3 */
    case 552:  /* *ior_roldi3 */
    case 553:  /* *xor_roldi3 */
    case 554:  /* *and_ashlsi3_uxtw */
    case 555:  /* *ior_ashlsi3_uxtw */
    case 556:  /* *xor_ashlsi3_uxtw */
    case 557:  /* *and_ashrsi3_uxtw */
    case 558:  /* *ior_ashrsi3_uxtw */
    case 559:  /* *xor_ashrsi3_uxtw */
    case 560:  /* *and_lshrsi3_uxtw */
    case 561:  /* *ior_lshrsi3_uxtw */
    case 562:  /* *xor_lshrsi3_uxtw */
    case 563:  /* *and_rotrsi3_uxtw */
    case 564:  /* *ior_rotrsi3_uxtw */
    case 565:  /* *xor_rotrsi3_uxtw */
    case 566:  /* *and_rolsi3_uxtw */
    case 567:  /* *ior_rolsi3_uxtw */
    case 568:  /* *xor_rolsi3_uxtw */
    case 569:  /* one_cmplsi2 */
    case 570:  /* one_cmpldi2 */
    case 571:  /* *one_cmpl_zero_extend */
    case 572:  /* *one_cmpl_ashlsi2 */
    case 573:  /* *one_cmpl_ashrsi2 */
    case 574:  /* *one_cmpl_lshrsi2 */
    case 575:  /* *one_cmpl_rotrsi2 */
    case 576:  /* *one_cmpl_ashldi2 */
    case 577:  /* *one_cmpl_ashrdi2 */
    case 578:  /* *one_cmpl_lshrdi2 */
    case 579:  /* *one_cmpl_rotrdi2 */
    case 580:  /* *and_one_cmplsi3 */
    case 581:  /* *ior_one_cmplsi3 */
    case 582:  /* *and_one_cmpldi3 */
    case 583:  /* *ior_one_cmpldi3 */
    case 584:  /* *and_one_cmplsidi3_ze */
    case 585:  /* *ior_one_cmplsidi3_ze */
    case 586:  /* *xor_one_cmplsidi3_ze */
    case 587:  /* *xor_one_cmplsi3 */
    case 588:  /* *xor_one_cmpldi3 */
    case 589:  /* *and_one_cmplsi3_compare0 */
    case 590:  /* *and_one_cmpldi3_compare0 */
    case 591:  /* *and_one_cmplsi3_compare0_uxtw */
    case 592:  /* *and_one_cmplsi3_compare0_no_reuse */
    case 593:  /* *and_one_cmpldi3_compare0_no_reuse */
    case 594:  /* and_one_cmpl_ashlsi3 */
    case 595:  /* ior_one_cmpl_ashlsi3 */
    case 596:  /* xor_one_cmpl_ashlsi3 */
    case 597:  /* and_one_cmpl_ashrsi3 */
    case 598:  /* ior_one_cmpl_ashrsi3 */
    case 599:  /* xor_one_cmpl_ashrsi3 */
    case 600:  /* and_one_cmpl_lshrsi3 */
    case 601:  /* ior_one_cmpl_lshrsi3 */
    case 602:  /* xor_one_cmpl_lshrsi3 */
    case 603:  /* and_one_cmpl_rotrsi3 */
    case 604:  /* ior_one_cmpl_rotrsi3 */
    case 605:  /* xor_one_cmpl_rotrsi3 */
    case 606:  /* and_one_cmpl_ashldi3 */
    case 607:  /* ior_one_cmpl_ashldi3 */
    case 608:  /* xor_one_cmpl_ashldi3 */
    case 609:  /* and_one_cmpl_ashrdi3 */
    case 610:  /* ior_one_cmpl_ashrdi3 */
    case 611:  /* xor_one_cmpl_ashrdi3 */
    case 612:  /* and_one_cmpl_lshrdi3 */
    case 613:  /* ior_one_cmpl_lshrdi3 */
    case 614:  /* xor_one_cmpl_lshrdi3 */
    case 615:  /* and_one_cmpl_rotrdi3 */
    case 616:  /* ior_one_cmpl_rotrdi3 */
    case 617:  /* xor_one_cmpl_rotrdi3 */
    case 618:  /* *eor_one_cmpl_ashlsi3_alt */
    case 619:  /* *eor_one_cmpl_ashrsi3_alt */
    case 620:  /* *eor_one_cmpl_lshrsi3_alt */
    case 621:  /* *eor_one_cmpl_rotrsi3_alt */
    case 622:  /* *eor_one_cmpl_ashldi3_alt */
    case 623:  /* *eor_one_cmpl_ashrdi3_alt */
    case 624:  /* *eor_one_cmpl_lshrdi3_alt */
    case 625:  /* *eor_one_cmpl_rotrdi3_alt */
    case 626:  /* *eor_one_cmpl_ashlsidi3_alt_ze */
    case 627:  /* *eor_one_cmpl_ashrsidi3_alt_ze */
    case 628:  /* *eor_one_cmpl_lshrsidi3_alt_ze */
    case 629:  /* *eor_one_cmpl_rotrsidi3_alt_ze */
    case 630:  /* *and_one_cmpl_ashlsi3_compare0 */
    case 631:  /* *and_one_cmpl_ashrsi3_compare0 */
    case 632:  /* *and_one_cmpl_lshrsi3_compare0 */
    case 633:  /* *and_one_cmpl_rotrsi3_compare0 */
    case 634:  /* *and_one_cmpl_ashldi3_compare0 */
    case 635:  /* *and_one_cmpl_ashrdi3_compare0 */
    case 636:  /* *and_one_cmpl_lshrdi3_compare0 */
    case 637:  /* *and_one_cmpl_rotrdi3_compare0 */
    case 638:  /* *and_one_cmpl_ashlsi3_compare0_uxtw */
    case 639:  /* *and_one_cmpl_ashrsi3_compare0_uxtw */
    case 640:  /* *and_one_cmpl_lshrsi3_compare0_uxtw */
    case 641:  /* *and_one_cmpl_rotrsi3_compare0_uxtw */
    case 642:  /* *and_one_cmpl_ashlsi3_compare0_no_reuse */
    case 643:  /* *and_one_cmpl_ashrsi3_compare0_no_reuse */
    case 644:  /* *and_one_cmpl_lshrsi3_compare0_no_reuse */
    case 645:  /* *and_one_cmpl_rotrsi3_compare0_no_reuse */
    case 646:  /* *and_one_cmpl_ashldi3_compare0_no_reuse */
    case 647:  /* *and_one_cmpl_ashrdi3_compare0_no_reuse */
    case 648:  /* *and_one_cmpl_lshrdi3_compare0_no_reuse */
    case 649:  /* *and_one_cmpl_rotrdi3_compare0_no_reuse */
    case 650:  /* clzsi2 */
    case 651:  /* clzdi2 */
    case 652:  /* clrsbsi2 */
    case 653:  /* clrsbdi2 */
    case 654:  /* aarch64_rbitsi */
    case 655:  /* aarch64_rbitdi */
    case 658:  /* *andqi_compare0 */
    case 659:  /* *andhi_compare0 */
    case 660:  /* *andssi_compare0 */
    case 661:  /* *andssi_compare0 */
    case 662:  /* *andsdi_compare0 */
    case 663:  /* *andsdi_compare0 */
    case 664:  /* *andsi3nr_compare0 */
    case 665:  /* *anddi3nr_compare0 */
    case 666:  /* *andsi3nr_compare0_zextract */
    case 667:  /* *anddi3nr_compare0_zextract */
    case 668:  /* *and_ashlsi3nr_compare0 */
    case 669:  /* *and_ashrsi3nr_compare0 */
    case 670:  /* *and_lshrsi3nr_compare0 */
    case 671:  /* *and_rotrsi3nr_compare0 */
    case 672:  /* *and_ashldi3nr_compare0 */
    case 673:  /* *and_ashrdi3nr_compare0 */
    case 674:  /* *and_lshrdi3nr_compare0 */
    case 675:  /* *and_rotrdi3nr_compare0 */
    case 676:  /* *aarch64_ashl_reg_si3_mask1 */
    case 677:  /* *aarch64_ashr_reg_si3_mask1 */
    case 678:  /* *aarch64_lshr_reg_si3_mask1 */
    case 679:  /* *aarch64_rotr_reg_si3_mask1 */
    case 680:  /* *aarch64_ashl_reg_di3_mask1 */
    case 681:  /* *aarch64_ashr_reg_di3_mask1 */
    case 682:  /* *aarch64_lshr_reg_di3_mask1 */
    case 683:  /* *aarch64_rotr_reg_di3_mask1 */
    case 694:  /* *aarch64_ashl_reg_di3_mask2 */
    case 695:  /* *aarch64_ashr_reg_di3_mask2 */
    case 696:  /* *aarch64_lshr_reg_di3_mask2 */
    case 697:  /* *aarch64_rotr_reg_di3_mask2 */
    case 704:  /* *aarch64_ashl_sisd_or_int_si3 */
    case 705:  /* *aarch64_ashl_sisd_or_int_di3 */
    case 706:  /* *aarch64_lshr_sisd_or_int_si3 */
    case 707:  /* *aarch64_lshr_sisd_or_int_di3 */
    case 708:  /* *aarch64_ashr_sisd_or_int_si3 */
    case 709:  /* *aarch64_ashr_sisd_or_int_di3 */
    case 710:  /* *aarch64_sisd_ushl */
    case 711:  /* *aarch64_ushl_2s */
    case 712:  /* *aarch64_sisd_sshl */
    case 713:  /* *aarch64_sshl_2s */
    case 714:  /* *aarch64_sisd_neg_qi */
    case 715:  /* *rorsi3_insn */
    case 716:  /* *rordi3_insn */
    case 717:  /* *ashlsi3_insn_uxtw */
    case 718:  /* *ashrsi3_insn_uxtw */
    case 719:  /* *lshrsi3_insn_uxtw */
    case 720:  /* *rotrsi3_insn_uxtw */
    case 721:  /* *ashlqi3_insn */
    case 722:  /* *ashrqi3_insn */
    case 723:  /* *lshrqi3_insn */
    case 724:  /* *ashlhi3_insn */
    case 725:  /* *ashrhi3_insn */
    case 726:  /* *lshrhi3_insn */
    case 727:  /* *extrsi5_insn */
    case 728:  /* *extrdi5_insn */
    case 729:  /* *extrsi5_insn_alt */
    case 730:  /* *extrdi5_insn_alt */
    case 731:  /* *extrsi5_insn_uxtw */
    case 732:  /* *extrsi5_insn_uxtw_alt */
    case 733:  /* *extrsi5_insn_di */
    case 734:  /* *rorsi3_insn */
    case 735:  /* *rordi3_insn */
    case 736:  /* *rorsi3_insn_uxtw */
    case 737:  /* *extendsi_ashlqi */
    case 738:  /* *zero_extendsi_ashlqi */
    case 739:  /* *extendsi_ashlhi */
    case 740:  /* *zero_extendsi_ashlhi */
    case 741:  /* *extenddi_ashlqi */
    case 742:  /* *zero_extenddi_ashlqi */
    case 743:  /* *extenddi_ashlhi */
    case 744:  /* *zero_extenddi_ashlhi */
    case 745:  /* *zero_extendsi_lshrqi */
    case 746:  /* *zero_extendsi_lshrhi */
    case 747:  /* *zero_extenddi_lshrqi */
    case 748:  /* *zero_extenddi_lshrhi */
    case 749:  /* *extendsi_ashrqi */
    case 750:  /* *extendsi_ashrhi */
    case 751:  /* *extenddi_ashrqi */
    case 752:  /* *extenddi_ashrhi */
    case 753:  /* *extvsi */
    case 754:  /* *extzvsi */
    case 755:  /* *extvdi */
    case 756:  /* *extzvdi */
    case 757:  /* *insv_regsi */
    case 758:  /* *insv_regdi */
    case 759:  /* *aarch64_bfisiqi4 */
    case 760:  /* *aarch64_bfidiqi4 */
    case 761:  /* *aarch64_bfisihi4 */
    case 762:  /* *aarch64_bfidihi4 */
    case 763:  /* *aarch64_bfisisi4 */
    case 764:  /* *aarch64_bfidisi4 */
    case 765:  /* *aarch64_bfisi5_shift */
    case 766:  /* *aarch64_bfidi5_shift */
    case 767:  /* *aarch64_bfisi5_shift_alt */
    case 768:  /* *aarch64_bfidi5_shift_alt */
    case 769:  /* *aarch64_bfisi4_noand */
    case 770:  /* *aarch64_bfidi4_noand */
    case 771:  /* *aarch64_bfisi4_noand_alt */
    case 772:  /* *aarch64_bfidi4_noand_alt */
    case 773:  /* *aarch64_bfisi4_noshift */
    case 774:  /* *aarch64_bfidi4_noshift */
    case 775:  /* *aarch64_bfisi4_noshift_alt */
    case 776:  /* *aarch64_bfidi4_noshift_alt */
    case 777:  /* *aarch64_bfxilsi_extr */
    case 778:  /* *aarch64_bfxildi_extr */
    case 779:  /* *aarch64_bfxilsi_extrdi */
    case 780:  /* *extr_insv_lower_regsi */
    case 781:  /* *extr_insv_lower_regdi */
    case 782:  /* *extendqi_shft_si */
    case 783:  /* *zero_extendqi_shft_si */
    case 784:  /* *extendqi_shft_di */
    case 785:  /* *zero_extendqi_shft_di */
    case 786:  /* *extendhi_shft_si */
    case 787:  /* *zero_extendhi_shft_si */
    case 788:  /* *extendhi_shft_di */
    case 789:  /* *zero_extendhi_shft_di */
    case 790:  /* *extendsi_shft_si */
    case 791:  /* *zero_extendsi_shft_si */
    case 792:  /* *extendsi_shft_di */
    case 793:  /* *zero_extendsi_shft_di */
    case 794:  /* *andim_ashiftsi_bfiz */
    case 795:  /* *andim_ashiftdi_bfiz */
    case 796:  /* *ashiftsi_extv_bfiz */
    case 797:  /* *ashiftdi_extv_bfiz */
    case 798:  /* *ashiftsi_extvdi_bfiz */
    case 799:  /* bswapsi2 */
    case 800:  /* bswapdi2 */
    case 801:  /* bswaphi2 */
    case 802:  /* aarch64_rev16si */
    case 803:  /* aarch64_rev16di */
    case 804:  /* *aarch64_bfxilsi */
    case 805:  /* *aarch64_bfxildi */
    case 806:  /* *aarch64_bfxilsi_uxtw */
    case 807:  /* rev16si2 */
    case 808:  /* rev16di2 */
    case 809:  /* rev16si2_alt */
    case 810:  /* rev16di2_alt */
    case 811:  /* *bswapsi2_uxtw */
    case 812:  /* btrunchf2 */
    case 813:  /* ceilhf2 */
    case 814:  /* floorhf2 */
    case 815:  /* roundevenhf2 */
    case 816:  /* nearbyinthf2 */
    case 817:  /* rinthf2 */
    case 818:  /* roundhf2 */
    case 819:  /* btruncsf2 */
    case 820:  /* ceilsf2 */
    case 821:  /* floorsf2 */
    case 822:  /* roundevensf2 */
    case 823:  /* nearbyintsf2 */
    case 824:  /* rintsf2 */
    case 825:  /* roundsf2 */
    case 826:  /* btruncdf2 */
    case 827:  /* ceildf2 */
    case 828:  /* floordf2 */
    case 829:  /* roundevendf2 */
    case 830:  /* nearbyintdf2 */
    case 831:  /* rintdf2 */
    case 832:  /* rounddf2 */
    case 833:  /* lbtrunchfsi2 */
    case 834:  /* lceilhfsi2 */
    case 835:  /* lfloorhfsi2 */
    case 836:  /* lroundhfsi2 */
    case 837:  /* lfrintnhfsi2 */
    case 838:  /* lbtruncuhfsi2 */
    case 839:  /* lceiluhfsi2 */
    case 840:  /* lflooruhfsi2 */
    case 841:  /* lrounduhfsi2 */
    case 842:  /* lfrintnuhfsi2 */
    case 843:  /* lbtruncsfsi2 */
    case 844:  /* lceilsfsi2 */
    case 845:  /* lfloorsfsi2 */
    case 846:  /* lroundsfsi2 */
    case 847:  /* lfrintnsfsi2 */
    case 848:  /* lbtruncusfsi2 */
    case 849:  /* lceilusfsi2 */
    case 850:  /* lfloorusfsi2 */
    case 851:  /* lroundusfsi2 */
    case 852:  /* lfrintnusfsi2 */
    case 853:  /* lbtruncdfsi2 */
    case 854:  /* lceildfsi2 */
    case 855:  /* lfloordfsi2 */
    case 856:  /* lrounddfsi2 */
    case 857:  /* lfrintndfsi2 */
    case 858:  /* lbtruncudfsi2 */
    case 859:  /* lceiludfsi2 */
    case 860:  /* lfloorudfsi2 */
    case 861:  /* lroundudfsi2 */
    case 862:  /* lfrintnudfsi2 */
    case 863:  /* lbtrunchfdi2 */
    case 864:  /* lceilhfdi2 */
    case 865:  /* lfloorhfdi2 */
    case 866:  /* lroundhfdi2 */
    case 867:  /* lfrintnhfdi2 */
    case 868:  /* lbtruncuhfdi2 */
    case 869:  /* lceiluhfdi2 */
    case 870:  /* lflooruhfdi2 */
    case 871:  /* lrounduhfdi2 */
    case 872:  /* lfrintnuhfdi2 */
    case 873:  /* lbtruncsfdi2 */
    case 874:  /* lceilsfdi2 */
    case 875:  /* lfloorsfdi2 */
    case 876:  /* lroundsfdi2 */
    case 877:  /* lfrintnsfdi2 */
    case 878:  /* lbtruncusfdi2 */
    case 879:  /* lceilusfdi2 */
    case 880:  /* lfloorusfdi2 */
    case 881:  /* lroundusfdi2 */
    case 882:  /* lfrintnusfdi2 */
    case 883:  /* lbtruncdfdi2 */
    case 884:  /* lceildfdi2 */
    case 885:  /* lfloordfdi2 */
    case 886:  /* lrounddfdi2 */
    case 887:  /* lfrintndfdi2 */
    case 888:  /* lbtruncudfdi2 */
    case 889:  /* lceiludfdi2 */
    case 890:  /* lfloorudfdi2 */
    case 891:  /* lroundudfdi2 */
    case 892:  /* lfrintnudfdi2 */
    case 893:  /* *aarch64_fcvtsfsi2_mult */
    case 894:  /* *aarch64_fcvtusfsi2_mult */
    case 895:  /* *aarch64_fcvtdfsi2_mult */
    case 896:  /* *aarch64_fcvtudfsi2_mult */
    case 897:  /* *aarch64_fcvtsfdi2_mult */
    case 898:  /* *aarch64_fcvtusfdi2_mult */
    case 899:  /* *aarch64_fcvtdfdi2_mult */
    case 900:  /* *aarch64_fcvtudfdi2_mult */
    case 901:  /* *aarch64_fmahf4 */
    case 902:  /* *aarch64_fmasf4 */
    case 903:  /* *aarch64_fmadf4 */
    case 904:  /* *aarch64_fnmahf4 */
    case 905:  /* *aarch64_fnmasf4 */
    case 906:  /* *aarch64_fnmadf4 */
    case 907:  /* *aarch64_fmssf4 */
    case 908:  /* *aarch64_fmsdf4 */
    case 909:  /* *aarch64_fnmssf4 */
    case 910:  /* *aarch64_fnmsdf4 */
    case 911:  /* *aarch64_fnmaddsf4 */
    case 912:  /* *aarch64_fnmadddf4 */
    case 913:  /* extendsfdf2 */
    case 914:  /* extendhfsf2 */
    case 915:  /* extendhfdf2 */
    case 916:  /* truncdfsf2 */
    case 917:  /* truncsfhf2 */
    case 918:  /* truncdfhf2 */
    case 919:  /* fix_truncsfsi2 */
    case 920:  /* fixuns_truncsfsi2 */
    case 921:  /* fix_truncdfdi2 */
    case 922:  /* fixuns_truncdfdi2 */
    case 923:  /* fix_trunchfsi2 */
    case 924:  /* fixuns_trunchfsi2 */
    case 925:  /* fix_trunchfdi2 */
    case 926:  /* fixuns_trunchfdi2 */
    case 927:  /* fix_truncdfsi2 */
    case 928:  /* fixuns_truncdfsi2 */
    case 929:  /* fix_truncsfdi2 */
    case 930:  /* fixuns_truncsfdi2 */
    case 931:  /* *fix_to_zero_extendsfdi2 */
    case 932:  /* *fix_to_zero_extenddfdi2 */
    case 933:  /* *aarch64_scvtfsisf2_mult */
    case 934:  /* *aarch64_ucvtfsisf2_mult */
    case 935:  /* *aarch64_scvtfdidf2_mult */
    case 936:  /* *aarch64_ucvtfdidf2_mult */
    case 937:  /* *aarch64_scvtfdisf2_mult */
    case 938:  /* *aarch64_ucvtfdisf2_mult */
    case 939:  /* *aarch64_scvtfsidf2_mult */
    case 940:  /* *aarch64_ucvtfsidf2_mult */
    case 941:  /* floatsisf2 */
    case 942:  /* floatunssisf2 */
    case 943:  /* floatdidf2 */
    case 944:  /* floatunsdidf2 */
    case 945:  /* floatdisf2 */
    case 946:  /* floatunsdisf2 */
    case 947:  /* floatsidf2 */
    case 948:  /* floatunssidf2 */
    case 949:  /* aarch64_fp16_floatsihf2 */
    case 950:  /* aarch64_fp16_floatunssihf2 */
    case 951:  /* aarch64_fp16_floatdihf2 */
    case 952:  /* aarch64_fp16_floatunsdihf2 */
    case 953:  /* fcvtzssf3 */
    case 954:  /* fcvtzusf3 */
    case 955:  /* fcvtzsdf3 */
    case 956:  /* fcvtzudf3 */
    case 957:  /* scvtfsi3 */
    case 958:  /* ucvtfsi3 */
    case 959:  /* scvtfdi3 */
    case 960:  /* ucvtfdi3 */
    case 961:  /* fcvtzshfsi3 */
    case 962:  /* fcvtzuhfsi3 */
    case 963:  /* fcvtzshfdi3 */
    case 964:  /* fcvtzuhfdi3 */
    case 965:  /* scvtfsihf3 */
    case 966:  /* ucvtfsihf3 */
    case 967:  /* scvtfdihf3 */
    case 968:  /* ucvtfdihf3 */
    case 969:  /* fcvtzshf3 */
    case 970:  /* fcvtzuhf3 */
    case 971:  /* scvtfhi3 */
    case 972:  /* ucvtfhi3 */
    case 973:  /* addhf3 */
    case 974:  /* addsf3 */
    case 975:  /* adddf3 */
    case 976:  /* subhf3 */
    case 977:  /* subsf3 */
    case 978:  /* subdf3 */
    case 979:  /* mulhf3 */
    case 980:  /* mulsf3 */
    case 981:  /* muldf3 */
    case 982:  /* *fnmulsf3 */
    case 983:  /* *fnmuldf3 */
    case 984:  /* *fnmulsf3 */
    case 985:  /* *fnmuldf3 */
    case 986:  /* *divhf3 */
    case 987:  /* *divsf3 */
    case 988:  /* *divdf3 */
    case 989:  /* neghf2 */
    case 990:  /* negsf2 */
    case 991:  /* negdf2 */
    case 992:  /* *sqrthf2 */
    case 993:  /* *sqrtsf2 */
    case 994:  /* *sqrtdf2 */
    case 995:  /* abshf2 */
    case 996:  /* abssf2 */
    case 997:  /* absdf2 */
    case 998:  /* smaxsf3 */
    case 999:  /* smaxdf3 */
    case 1000:  /* sminsf3 */
    case 1001:  /* smindf3 */
    case 1002:  /* fmax_nanhf3 */
    case 1003:  /* fmin_nanhf3 */
    case 1004:  /* fmaxhf3 */
    case 1005:  /* fminhf3 */
    case 1006:  /* fmax_nansf3 */
    case 1007:  /* fmin_nansf3 */
    case 1008:  /* fmaxsf3 */
    case 1009:  /* fminsf3 */
    case 1010:  /* fmax_nandf3 */
    case 1011:  /* fmin_nandf3 */
    case 1012:  /* fmaxdf3 */
    case 1013:  /* fmindf3 */
    case 1014:  /* copysignsf3_insn */
    case 1015:  /* copysigndf3_insn */
    case 1016:  /* aarch64_movdi_tilow */
    case 1017:  /* aarch64_movdi_tflow */
    case 1018:  /* aarch64_movdi_tihigh */
    case 1019:  /* aarch64_movdi_tfhigh */
    case 1020:  /* aarch64_movtihigh_di */
    case 1021:  /* aarch64_movtfhigh_di */
    case 1022:  /* aarch64_movtilow_di */
    case 1023:  /* aarch64_movtflow_di */
    case 1024:  /* aarch64_movtilow_tilow */
    case 1025:  /* add_losym_si */
    case 1026:  /* add_losym_di */
    case 1027:  /* ldr_got_small_28k_si */
    case 1028:  /* ldr_got_small_28k_di */
    case 1029:  /* ldr_got_small_28k_sidi */
    case 1030:  /* ldr_got_tiny_si */
    case 1031:  /* ldr_got_tiny_di */
    case 1032:  /* ldr_got_tiny_sidi */
    case 1033:  /* aarch64_load_tp_hard */
    case 1034:  /* *tlsgd_small_si */
    case 1035:  /* *tlsgd_small_di */
    case 1036:  /* tlsie_small_si */
    case 1037:  /* tlsie_small_di */
    case 1038:  /* tlsie_small_sidi */
    case 1039:  /* tlsie_tiny_si */
    case 1040:  /* tlsie_tiny_di */
    case 1041:  /* tlsie_tiny_sidi */
    case 1042:  /* tlsle12_si */
    case 1043:  /* tlsle12_di */
    case 1044:  /* tlsle24_si */
    case 1045:  /* tlsle24_di */
    case 1046:  /* tlsle32_si */
    case 1047:  /* tlsle32_di */
    case 1048:  /* tlsle48_si */
    case 1049:  /* tlsle48_di */
    case 1050:  /* tlsdesc_small_advsimd_si */
    case 1051:  /* tlsdesc_small_advsimd_di */
    case 1052:  /* tlsdesc_small_sve_si */
    case 1053:  /* tlsdesc_small_sve_di */
    case 1055:  /* aarch64_fjcvtzs */
    case 1065:  /* blockage */
    case 1069:  /* reg_stack_protect_address_si */
    case 1070:  /* reg_stack_protect_address_di */
    case 1071:  /* stack_protect_set_si */
    case 1072:  /* stack_protect_set_di */
    case 1073:  /* stack_protect_test_si */
    case 1074:  /* stack_protect_test_di */
    case 1075:  /* aarch64_set_fpsrsi */
    case 1076:  /* aarch64_set_fpcrsi */
    case 1077:  /* aarch64_set_fpsrdi */
    case 1078:  /* aarch64_set_fpcrdi */
    case 1079:  /* aarch64_get_fpsrsi */
    case 1080:  /* aarch64_get_fpcrsi */
    case 1081:  /* aarch64_get_fpsrdi */
    case 1082:  /* aarch64_get_fpcrdi */
    case 1083:  /* speculation_tracker */
    case 1084:  /* speculation_tracker_rev */
    case 1089:  /* speculation_barrier */
    case 1090:  /* *despeculate_copyqi_insn */
    case 1091:  /* *despeculate_copyhi_insn */
    case 1092:  /* *despeculate_copysi_insn */
    case 1093:  /* *despeculate_copydi_insn */
    case 1094:  /* *despeculate_copyti_insn */
    case 1095:  /* despeculate_simpleqi */
    case 1096:  /* despeculate_simplehi */
    case 1097:  /* despeculate_simplesi */
    case 1098:  /* despeculate_simpledi */
    case 1099:  /* despeculate_simpleti */
    case 1100:  /* aarch64_frint32zv2sf */
    case 1101:  /* aarch64_frint32xv2sf */
    case 1102:  /* aarch64_frint64zv2sf */
    case 1103:  /* aarch64_frint64xv2sf */
    case 1104:  /* aarch64_frint32zv4sf */
    case 1105:  /* aarch64_frint32xv4sf */
    case 1106:  /* aarch64_frint64zv4sf */
    case 1107:  /* aarch64_frint64xv4sf */
    case 1108:  /* aarch64_frint32zv2df */
    case 1109:  /* aarch64_frint32xv2df */
    case 1110:  /* aarch64_frint64zv2df */
    case 1111:  /* aarch64_frint64xv2df */
    case 1112:  /* aarch64_frint32zdf */
    case 1113:  /* aarch64_frint32xdf */
    case 1114:  /* aarch64_frint64zdf */
    case 1115:  /* aarch64_frint64xdf */
    case 1116:  /* aarch64_frint32zsf */
    case 1117:  /* aarch64_frint32xsf */
    case 1118:  /* aarch64_frint64zsf */
    case 1119:  /* aarch64_frint64xsf */
    case 1124:  /* aarch64_rndr */
    case 1125:  /* aarch64_rndrrs */
    case 1137:  /* aarch64_simd_dupv8qi */
    case 1138:  /* aarch64_simd_dupv16qi */
    case 1139:  /* aarch64_simd_dupv4hi */
    case 1140:  /* aarch64_simd_dupv8hi */
    case 1141:  /* aarch64_simd_dupv2si */
    case 1142:  /* aarch64_simd_dupv4si */
    case 1143:  /* aarch64_simd_dupv2di */
    case 1144:  /* aarch64_simd_dupv4hf */
    case 1145:  /* aarch64_simd_dupv8hf */
    case 1146:  /* aarch64_simd_dupv2sf */
    case 1147:  /* aarch64_simd_dupv4sf */
    case 1148:  /* aarch64_simd_dupv2df */
    case 1149:  /* aarch64_simd_dupv4bf */
    case 1150:  /* aarch64_simd_dupv8bf */
    case 1151:  /* aarch64_dup_lanev8qi */
    case 1152:  /* aarch64_dup_lanev16qi */
    case 1153:  /* aarch64_dup_lanev4hi */
    case 1154:  /* aarch64_dup_lanev8hi */
    case 1155:  /* aarch64_dup_lanev2si */
    case 1156:  /* aarch64_dup_lanev4si */
    case 1157:  /* aarch64_dup_lanev2di */
    case 1158:  /* aarch64_dup_lanev4hf */
    case 1159:  /* aarch64_dup_lanev8hf */
    case 1160:  /* aarch64_dup_lanev4bf */
    case 1161:  /* aarch64_dup_lanev8bf */
    case 1162:  /* aarch64_dup_lanev2sf */
    case 1163:  /* aarch64_dup_lanev4sf */
    case 1164:  /* aarch64_dup_lanev2df */
    case 1165:  /* aarch64_dup_lane_to_128v8qi */
    case 1166:  /* aarch64_dup_lane_to_64v16qi */
    case 1167:  /* aarch64_dup_lane_to_128v4hi */
    case 1168:  /* aarch64_dup_lane_to_64v8hi */
    case 1169:  /* aarch64_dup_lane_to_128v2si */
    case 1170:  /* aarch64_dup_lane_to_64v4si */
    case 1171:  /* aarch64_dup_lane_to_128v4hf */
    case 1172:  /* aarch64_dup_lane_to_64v8hf */
    case 1173:  /* aarch64_dup_lane_to_128v2sf */
    case 1174:  /* aarch64_dup_lane_to_64v4sf */
    case 1175:  /* *aarch64_simd_movv8qi */
    case 1176:  /* *aarch64_simd_movv4hi */
    case 1177:  /* *aarch64_simd_movv4hf */
    case 1178:  /* *aarch64_simd_movv4bf */
    case 1179:  /* *aarch64_simd_movv2si */
    case 1180:  /* *aarch64_simd_movv2sf */
    case 1181:  /* *aarch64_simd_movv16qi */
    case 1182:  /* *aarch64_simd_movv8hi */
    case 1183:  /* *aarch64_simd_movv4si */
    case 1184:  /* *aarch64_simd_movv2di */
    case 1185:  /* *aarch64_simd_movv8hf */
    case 1186:  /* *aarch64_simd_movv8bf */
    case 1187:  /* *aarch64_simd_movv4sf */
    case 1188:  /* *aarch64_simd_movv2df */
    case 1189:  /* aarch64_store_lane0v8qi */
    case 1190:  /* aarch64_store_lane0v16qi */
    case 1191:  /* aarch64_store_lane0v4hi */
    case 1192:  /* aarch64_store_lane0v8hi */
    case 1193:  /* aarch64_store_lane0v2si */
    case 1194:  /* aarch64_store_lane0v4si */
    case 1195:  /* aarch64_store_lane0v2di */
    case 1196:  /* aarch64_store_lane0v4hf */
    case 1197:  /* aarch64_store_lane0v8hf */
    case 1198:  /* aarch64_store_lane0v4bf */
    case 1199:  /* aarch64_store_lane0v8bf */
    case 1200:  /* aarch64_store_lane0v2sf */
    case 1201:  /* aarch64_store_lane0v4sf */
    case 1202:  /* aarch64_store_lane0v2df */
    case 1203:  /* load_pairv8qiv8qi */
    case 1204:  /* load_pairv4hiv8qi */
    case 1205:  /* load_pairv4hfv8qi */
    case 1206:  /* load_pairv2siv8qi */
    case 1207:  /* load_pairv2sfv8qi */
    case 1208:  /* load_pairdfv8qi */
    case 1209:  /* load_pairv8qiv4hi */
    case 1210:  /* load_pairv4hiv4hi */
    case 1211:  /* load_pairv4hfv4hi */
    case 1212:  /* load_pairv2siv4hi */
    case 1213:  /* load_pairv2sfv4hi */
    case 1214:  /* load_pairdfv4hi */
    case 1215:  /* load_pairv8qiv4hf */
    case 1216:  /* load_pairv4hiv4hf */
    case 1217:  /* load_pairv4hfv4hf */
    case 1218:  /* load_pairv2siv4hf */
    case 1219:  /* load_pairv2sfv4hf */
    case 1220:  /* load_pairdfv4hf */
    case 1221:  /* load_pairv8qiv2si */
    case 1222:  /* load_pairv4hiv2si */
    case 1223:  /* load_pairv4hfv2si */
    case 1224:  /* load_pairv2siv2si */
    case 1225:  /* load_pairv2sfv2si */
    case 1226:  /* load_pairdfv2si */
    case 1227:  /* load_pairv8qiv2sf */
    case 1228:  /* load_pairv4hiv2sf */
    case 1229:  /* load_pairv4hfv2sf */
    case 1230:  /* load_pairv2siv2sf */
    case 1231:  /* load_pairv2sfv2sf */
    case 1232:  /* load_pairdfv2sf */
    case 1233:  /* load_pairv8qidf */
    case 1234:  /* load_pairv4hidf */
    case 1235:  /* load_pairv4hfdf */
    case 1236:  /* load_pairv2sidf */
    case 1237:  /* load_pairv2sfdf */
    case 1238:  /* load_pairdfdf */
    case 1239:  /* vec_store_pairv8qiv8qi */
    case 1240:  /* vec_store_pairv4hiv8qi */
    case 1241:  /* vec_store_pairv4hfv8qi */
    case 1242:  /* vec_store_pairv2siv8qi */
    case 1243:  /* vec_store_pairv2sfv8qi */
    case 1244:  /* vec_store_pairdfv8qi */
    case 1245:  /* vec_store_pairv8qiv4hi */
    case 1246:  /* vec_store_pairv4hiv4hi */
    case 1247:  /* vec_store_pairv4hfv4hi */
    case 1248:  /* vec_store_pairv2siv4hi */
    case 1249:  /* vec_store_pairv2sfv4hi */
    case 1250:  /* vec_store_pairdfv4hi */
    case 1251:  /* vec_store_pairv8qiv4hf */
    case 1252:  /* vec_store_pairv4hiv4hf */
    case 1253:  /* vec_store_pairv4hfv4hf */
    case 1254:  /* vec_store_pairv2siv4hf */
    case 1255:  /* vec_store_pairv2sfv4hf */
    case 1256:  /* vec_store_pairdfv4hf */
    case 1257:  /* vec_store_pairv8qiv2si */
    case 1258:  /* vec_store_pairv4hiv2si */
    case 1259:  /* vec_store_pairv4hfv2si */
    case 1260:  /* vec_store_pairv2siv2si */
    case 1261:  /* vec_store_pairv2sfv2si */
    case 1262:  /* vec_store_pairdfv2si */
    case 1263:  /* vec_store_pairv8qiv2sf */
    case 1264:  /* vec_store_pairv4hiv2sf */
    case 1265:  /* vec_store_pairv4hfv2sf */
    case 1266:  /* vec_store_pairv2siv2sf */
    case 1267:  /* vec_store_pairv2sfv2sf */
    case 1268:  /* vec_store_pairdfv2sf */
    case 1269:  /* vec_store_pairv8qidf */
    case 1270:  /* vec_store_pairv4hidf */
    case 1271:  /* vec_store_pairv4hfdf */
    case 1272:  /* vec_store_pairv2sidf */
    case 1273:  /* vec_store_pairv2sfdf */
    case 1274:  /* vec_store_pairdfdf */
    case 1275:  /* load_pairv16qiv16qi */
    case 1276:  /* load_pairv16qiv8hi */
    case 1277:  /* load_pairv16qiv4si */
    case 1278:  /* load_pairv16qiv2di */
    case 1279:  /* load_pairv16qiv8hf */
    case 1280:  /* load_pairv16qiv8bf */
    case 1281:  /* load_pairv16qiv4sf */
    case 1282:  /* load_pairv16qiv2df */
    case 1283:  /* load_pairv8hiv16qi */
    case 1284:  /* load_pairv8hiv8hi */
    case 1285:  /* load_pairv8hiv4si */
    case 1286:  /* load_pairv8hiv2di */
    case 1287:  /* load_pairv8hiv8hf */
    case 1288:  /* load_pairv8hiv8bf */
    case 1289:  /* load_pairv8hiv4sf */
    case 1290:  /* load_pairv8hiv2df */
    case 1291:  /* load_pairv4siv16qi */
    case 1292:  /* load_pairv4siv8hi */
    case 1293:  /* load_pairv4siv4si */
    case 1294:  /* load_pairv4siv2di */
    case 1295:  /* load_pairv4siv8hf */
    case 1296:  /* load_pairv4siv8bf */
    case 1297:  /* load_pairv4siv4sf */
    case 1298:  /* load_pairv4siv2df */
    case 1299:  /* load_pairv2div16qi */
    case 1300:  /* load_pairv2div8hi */
    case 1301:  /* load_pairv2div4si */
    case 1302:  /* load_pairv2div2di */
    case 1303:  /* load_pairv2div8hf */
    case 1304:  /* load_pairv2div8bf */
    case 1305:  /* load_pairv2div4sf */
    case 1306:  /* load_pairv2div2df */
    case 1307:  /* load_pairv8hfv16qi */
    case 1308:  /* load_pairv8hfv8hi */
    case 1309:  /* load_pairv8hfv4si */
    case 1310:  /* load_pairv8hfv2di */
    case 1311:  /* load_pairv8hfv8hf */
    case 1312:  /* load_pairv8hfv8bf */
    case 1313:  /* load_pairv8hfv4sf */
    case 1314:  /* load_pairv8hfv2df */
    case 1315:  /* load_pairv4sfv16qi */
    case 1316:  /* load_pairv4sfv8hi */
    case 1317:  /* load_pairv4sfv4si */
    case 1318:  /* load_pairv4sfv2di */
    case 1319:  /* load_pairv4sfv8hf */
    case 1320:  /* load_pairv4sfv8bf */
    case 1321:  /* load_pairv4sfv4sf */
    case 1322:  /* load_pairv4sfv2df */
    case 1323:  /* load_pairv2dfv16qi */
    case 1324:  /* load_pairv2dfv8hi */
    case 1325:  /* load_pairv2dfv4si */
    case 1326:  /* load_pairv2dfv2di */
    case 1327:  /* load_pairv2dfv8hf */
    case 1328:  /* load_pairv2dfv8bf */
    case 1329:  /* load_pairv2dfv4sf */
    case 1330:  /* load_pairv2dfv2df */
    case 1331:  /* load_pairv8bfv16qi */
    case 1332:  /* load_pairv8bfv8hi */
    case 1333:  /* load_pairv8bfv4si */
    case 1334:  /* load_pairv8bfv2di */
    case 1335:  /* load_pairv8bfv8hf */
    case 1336:  /* load_pairv8bfv8bf */
    case 1337:  /* load_pairv8bfv4sf */
    case 1338:  /* load_pairv8bfv2df */
    case 1339:  /* vec_store_pairv16qiv16qi */
    case 1340:  /* vec_store_pairv16qiv8hi */
    case 1341:  /* vec_store_pairv16qiv4si */
    case 1342:  /* vec_store_pairv16qiv2di */
    case 1343:  /* vec_store_pairv16qiv8hf */
    case 1344:  /* vec_store_pairv16qiv8bf */
    case 1345:  /* vec_store_pairv16qiv4sf */
    case 1346:  /* vec_store_pairv16qiv2df */
    case 1347:  /* vec_store_pairv8hiv16qi */
    case 1348:  /* vec_store_pairv8hiv8hi */
    case 1349:  /* vec_store_pairv8hiv4si */
    case 1350:  /* vec_store_pairv8hiv2di */
    case 1351:  /* vec_store_pairv8hiv8hf */
    case 1352:  /* vec_store_pairv8hiv8bf */
    case 1353:  /* vec_store_pairv8hiv4sf */
    case 1354:  /* vec_store_pairv8hiv2df */
    case 1355:  /* vec_store_pairv4siv16qi */
    case 1356:  /* vec_store_pairv4siv8hi */
    case 1357:  /* vec_store_pairv4siv4si */
    case 1358:  /* vec_store_pairv4siv2di */
    case 1359:  /* vec_store_pairv4siv8hf */
    case 1360:  /* vec_store_pairv4siv8bf */
    case 1361:  /* vec_store_pairv4siv4sf */
    case 1362:  /* vec_store_pairv4siv2df */
    case 1363:  /* vec_store_pairv2div16qi */
    case 1364:  /* vec_store_pairv2div8hi */
    case 1365:  /* vec_store_pairv2div4si */
    case 1366:  /* vec_store_pairv2div2di */
    case 1367:  /* vec_store_pairv2div8hf */
    case 1368:  /* vec_store_pairv2div8bf */
    case 1369:  /* vec_store_pairv2div4sf */
    case 1370:  /* vec_store_pairv2div2df */
    case 1371:  /* vec_store_pairv8hfv16qi */
    case 1372:  /* vec_store_pairv8hfv8hi */
    case 1373:  /* vec_store_pairv8hfv4si */
    case 1374:  /* vec_store_pairv8hfv2di */
    case 1375:  /* vec_store_pairv8hfv8hf */
    case 1376:  /* vec_store_pairv8hfv8bf */
    case 1377:  /* vec_store_pairv8hfv4sf */
    case 1378:  /* vec_store_pairv8hfv2df */
    case 1379:  /* vec_store_pairv4sfv16qi */
    case 1380:  /* vec_store_pairv4sfv8hi */
    case 1381:  /* vec_store_pairv4sfv4si */
    case 1382:  /* vec_store_pairv4sfv2di */
    case 1383:  /* vec_store_pairv4sfv8hf */
    case 1384:  /* vec_store_pairv4sfv8bf */
    case 1385:  /* vec_store_pairv4sfv4sf */
    case 1386:  /* vec_store_pairv4sfv2df */
    case 1387:  /* vec_store_pairv2dfv16qi */
    case 1388:  /* vec_store_pairv2dfv8hi */
    case 1389:  /* vec_store_pairv2dfv4si */
    case 1390:  /* vec_store_pairv2dfv2di */
    case 1391:  /* vec_store_pairv2dfv8hf */
    case 1392:  /* vec_store_pairv2dfv8bf */
    case 1393:  /* vec_store_pairv2dfv4sf */
    case 1394:  /* vec_store_pairv2dfv2df */
    case 1395:  /* vec_store_pairv8bfv16qi */
    case 1396:  /* vec_store_pairv8bfv8hi */
    case 1397:  /* vec_store_pairv8bfv4si */
    case 1398:  /* vec_store_pairv8bfv2di */
    case 1399:  /* vec_store_pairv8bfv8hf */
    case 1400:  /* vec_store_pairv8bfv8bf */
    case 1401:  /* vec_store_pairv8bfv4sf */
    case 1402:  /* vec_store_pairv8bfv2df */
    case 1403:  /* aarch64_simd_mov_from_v16qilow */
    case 1404:  /* aarch64_simd_mov_from_v8hilow */
    case 1405:  /* aarch64_simd_mov_from_v4silow */
    case 1406:  /* aarch64_simd_mov_from_v8hflow */
    case 1407:  /* aarch64_simd_mov_from_v8bflow */
    case 1408:  /* aarch64_simd_mov_from_v4sflow */
    case 1409:  /* aarch64_simd_mov_from_v16qihigh */
    case 1410:  /* aarch64_simd_mov_from_v8hihigh */
    case 1411:  /* aarch64_simd_mov_from_v4sihigh */
    case 1412:  /* aarch64_simd_mov_from_v8hfhigh */
    case 1413:  /* aarch64_simd_mov_from_v8bfhigh */
    case 1414:  /* aarch64_simd_mov_from_v4sfhigh */
    case 1415:  /* ornv8qi3 */
    case 1416:  /* ornv16qi3 */
    case 1417:  /* ornv4hi3 */
    case 1418:  /* ornv8hi3 */
    case 1419:  /* ornv2si3 */
    case 1420:  /* ornv4si3 */
    case 1421:  /* ornv2di3 */
    case 1422:  /* bicv8qi3 */
    case 1423:  /* bicv16qi3 */
    case 1424:  /* bicv4hi3 */
    case 1425:  /* bicv8hi3 */
    case 1426:  /* bicv2si3 */
    case 1427:  /* bicv4si3 */
    case 1428:  /* bicv2di3 */
    case 1429:  /* addv8qi3 */
    case 1430:  /* addv16qi3 */
    case 1431:  /* addv4hi3 */
    case 1432:  /* addv8hi3 */
    case 1433:  /* addv2si3 */
    case 1434:  /* addv4si3 */
    case 1435:  /* addv2di3 */
    case 1436:  /* subv8qi3 */
    case 1437:  /* subv16qi3 */
    case 1438:  /* subv4hi3 */
    case 1439:  /* subv8hi3 */
    case 1440:  /* subv2si3 */
    case 1441:  /* subv4si3 */
    case 1442:  /* subv2di3 */
    case 1443:  /* mulv8qi3 */
    case 1444:  /* mulv16qi3 */
    case 1445:  /* mulv4hi3 */
    case 1446:  /* mulv8hi3 */
    case 1447:  /* mulv2si3 */
    case 1448:  /* mulv4si3 */
    case 1449:  /* bswapv4hi2 */
    case 1450:  /* bswapv8hi2 */
    case 1451:  /* bswapv2si2 */
    case 1452:  /* bswapv4si2 */
    case 1453:  /* bswapv2di2 */
    case 1454:  /* aarch64_rbitv8qi */
    case 1455:  /* aarch64_rbitv16qi */
    case 1540:  /* mul_lanev4hi3 */
    case 1541:  /* mul_lanev8hi3 */
    case 1542:  /* mul_lanev2si3 */
    case 1543:  /* mul_lanev4si3 */
    case 1544:  /* mul_lanev4hf3 */
    case 1545:  /* mul_lanev8hf3 */
    case 1546:  /* mul_lanev2sf3 */
    case 1547:  /* mul_lanev4sf3 */
    case 1548:  /* mul_laneqv4hi3 */
    case 1549:  /* mul_laneqv8hi3 */
    case 1550:  /* mul_laneqv2si3 */
    case 1551:  /* mul_laneqv4si3 */
    case 1552:  /* mul_laneqv4hf3 */
    case 1553:  /* mul_laneqv8hf3 */
    case 1554:  /* mul_laneqv2sf3 */
    case 1555:  /* mul_laneqv4sf3 */
    case 1556:  /* mul_laneqv2df3 */
    case 1557:  /* mul_nv4hi3 */
    case 1558:  /* mul_nv8hi3 */
    case 1559:  /* mul_nv2si3 */
    case 1560:  /* mul_nv4si3 */
    case 1561:  /* mul_nv4hf3 */
    case 1562:  /* mul_nv8hf3 */
    case 1563:  /* mul_nv2sf3 */
    case 1564:  /* mul_nv4sf3 */
    case 1565:  /* mul_nv2df3 */
    case 1566:  /* aarch64_rsqrtev4hf */
    case 1567:  /* aarch64_rsqrtev8hf */
    case 1568:  /* aarch64_rsqrtev2sf */
    case 1569:  /* aarch64_rsqrtev4sf */
    case 1570:  /* aarch64_rsqrtev2df */
    case 1571:  /* aarch64_rsqrtehf */
    case 1572:  /* aarch64_rsqrtesf */
    case 1573:  /* aarch64_rsqrtedf */
    case 1574:  /* aarch64_rsqrtsv4hf */
    case 1575:  /* aarch64_rsqrtsv8hf */
    case 1576:  /* aarch64_rsqrtsv2sf */
    case 1577:  /* aarch64_rsqrtsv4sf */
    case 1578:  /* aarch64_rsqrtsv2df */
    case 1579:  /* aarch64_rsqrtshf */
    case 1580:  /* aarch64_rsqrtssf */
    case 1581:  /* aarch64_rsqrtsdf */
    case 1582:  /* aarch64_ursqrtev2si */
    case 1583:  /* aarch64_ursqrtev4si */
    case 1584:  /* *aarch64_mul3_elt_to_64v2df */
    case 1585:  /* negv8qi2 */
    case 1586:  /* negv16qi2 */
    case 1587:  /* negv4hi2 */
    case 1588:  /* negv8hi2 */
    case 1589:  /* negv2si2 */
    case 1590:  /* negv4si2 */
    case 1591:  /* negv2di2 */
    case 1592:  /* absv8qi2 */
    case 1593:  /* absv16qi2 */
    case 1594:  /* absv4hi2 */
    case 1595:  /* absv8hi2 */
    case 1596:  /* absv2si2 */
    case 1597:  /* absv4si2 */
    case 1598:  /* absv2di2 */
    case 1599:  /* aarch64_absv8qi */
    case 1600:  /* aarch64_absv16qi */
    case 1601:  /* aarch64_absv4hi */
    case 1602:  /* aarch64_absv8hi */
    case 1603:  /* aarch64_absv2si */
    case 1604:  /* aarch64_absv4si */
    case 1605:  /* aarch64_absv2di */
    case 1606:  /* aarch64_absdi */
    case 1607:  /* aarch64_sabdv8qi */
    case 1608:  /* aarch64_uabdv8qi */
    case 1609:  /* aarch64_sabdv16qi */
    case 1610:  /* aarch64_uabdv16qi */
    case 1611:  /* aarch64_sabdv4hi */
    case 1612:  /* aarch64_uabdv4hi */
    case 1613:  /* aarch64_sabdv8hi */
    case 1614:  /* aarch64_uabdv8hi */
    case 1615:  /* aarch64_sabdv2si */
    case 1616:  /* aarch64_uabdv2si */
    case 1617:  /* aarch64_sabdv4si */
    case 1618:  /* aarch64_uabdv4si */
    case 1619:  /* aarch64_sabdlv8qi */
    case 1620:  /* aarch64_uabdlv8qi */
    case 1621:  /* aarch64_sabdlv4hi */
    case 1622:  /* aarch64_uabdlv4hi */
    case 1623:  /* aarch64_sabdlv2si */
    case 1624:  /* aarch64_uabdlv2si */
    case 1625:  /* aarch64_sabdl2v16qi */
    case 1626:  /* aarch64_uabdl2v16qi */
    case 1627:  /* aarch64_sabdl2v8hi */
    case 1628:  /* aarch64_uabdl2v8hi */
    case 1629:  /* aarch64_sabdl2v4si */
    case 1630:  /* aarch64_uabdl2v4si */
    case 1631:  /* aarch64_sabalv8qi */
    case 1632:  /* aarch64_uabalv8qi */
    case 1633:  /* aarch64_sabalv4hi */
    case 1634:  /* aarch64_uabalv4hi */
    case 1635:  /* aarch64_sabalv2si */
    case 1636:  /* aarch64_uabalv2si */
    case 1637:  /* aarch64_sabal2v16qi */
    case 1638:  /* aarch64_uabal2v16qi */
    case 1639:  /* aarch64_sabal2v8hi */
    case 1640:  /* aarch64_uabal2v8hi */
    case 1641:  /* aarch64_sabal2v4si */
    case 1642:  /* aarch64_uabal2v4si */
    case 1643:  /* aarch64_sadalpv8qi */
    case 1644:  /* aarch64_uadalpv8qi */
    case 1645:  /* aarch64_sadalpv16qi */
    case 1646:  /* aarch64_uadalpv16qi */
    case 1647:  /* aarch64_sadalpv4hi */
    case 1648:  /* aarch64_uadalpv4hi */
    case 1649:  /* aarch64_sadalpv8hi */
    case 1650:  /* aarch64_uadalpv8hi */
    case 1651:  /* aarch64_sadalpv4si */
    case 1652:  /* aarch64_uadalpv4si */
    case 1653:  /* aarch64_sadalpv2si */
    case 1654:  /* aarch64_uadalpv2si */
    case 1655:  /* aarch64_sabav8qi */
    case 1656:  /* aarch64_uabav8qi */
    case 1657:  /* aarch64_sabav16qi */
    case 1658:  /* aarch64_uabav16qi */
    case 1659:  /* aarch64_sabav4hi */
    case 1660:  /* aarch64_uabav4hi */
    case 1661:  /* aarch64_sabav8hi */
    case 1662:  /* aarch64_uabav8hi */
    case 1663:  /* aarch64_sabav2si */
    case 1664:  /* aarch64_uabav2si */
    case 1665:  /* aarch64_sabav4si */
    case 1666:  /* aarch64_uabav4si */
    case 1667:  /* fabdv4hf3 */
    case 1668:  /* fabdv8hf3 */
    case 1669:  /* fabdv2sf3 */
    case 1670:  /* fabdv4sf3 */
    case 1671:  /* fabdv2df3 */
    case 1672:  /* fabdhf3 */
    case 1673:  /* fabdsf3 */
    case 1674:  /* fabddf3 */
    case 1675:  /* andv8qi3 */
    case 1676:  /* andv16qi3 */
    case 1677:  /* andv4hi3 */
    case 1678:  /* andv8hi3 */
    case 1679:  /* andv2si3 */
    case 1680:  /* andv4si3 */
    case 1681:  /* andv2di3 */
    case 1682:  /* iorv8qi3 */
    case 1683:  /* iorv16qi3 */
    case 1684:  /* iorv4hi3 */
    case 1685:  /* iorv8hi3 */
    case 1686:  /* iorv2si3 */
    case 1687:  /* iorv4si3 */
    case 1688:  /* iorv2di3 */
    case 1689:  /* xorv8qi3 */
    case 1690:  /* xorv16qi3 */
    case 1691:  /* xorv4hi3 */
    case 1692:  /* xorv8hi3 */
    case 1693:  /* xorv2si3 */
    case 1694:  /* xorv4si3 */
    case 1695:  /* xorv2di3 */
    case 1696:  /* one_cmplv8qi2 */
    case 1697:  /* one_cmplv16qi2 */
    case 1698:  /* one_cmplv4hi2 */
    case 1699:  /* one_cmplv8hi2 */
    case 1700:  /* one_cmplv2si2 */
    case 1701:  /* one_cmplv4si2 */
    case 1702:  /* one_cmplv2di2 */
    case 1703:  /* aarch64_simd_vec_setv8qi */
    case 1704:  /* aarch64_simd_vec_setv16qi */
    case 1705:  /* aarch64_simd_vec_setv4hi */
    case 1706:  /* aarch64_simd_vec_setv8hi */
    case 1707:  /* aarch64_simd_vec_setv2si */
    case 1708:  /* aarch64_simd_vec_setv4si */
    case 1709:  /* aarch64_simd_vec_setv2di */
    case 1710:  /* aarch64_simd_vec_setv4hf */
    case 1711:  /* aarch64_simd_vec_setv8hf */
    case 1712:  /* aarch64_simd_vec_setv4bf */
    case 1713:  /* aarch64_simd_vec_setv8bf */
    case 1714:  /* aarch64_simd_vec_setv2sf */
    case 1715:  /* aarch64_simd_vec_setv4sf */
    case 1716:  /* aarch64_simd_vec_setv2df */
    case 1717:  /* aarch64_simd_vec_copy_lanev8qi */
    case 1718:  /* aarch64_simd_vec_copy_lanev16qi */
    case 1719:  /* aarch64_simd_vec_copy_lanev4hi */
    case 1720:  /* aarch64_simd_vec_copy_lanev8hi */
    case 1721:  /* aarch64_simd_vec_copy_lanev2si */
    case 1722:  /* aarch64_simd_vec_copy_lanev4si */
    case 1723:  /* aarch64_simd_vec_copy_lanev2di */
    case 1724:  /* aarch64_simd_vec_copy_lanev4hf */
    case 1725:  /* aarch64_simd_vec_copy_lanev8hf */
    case 1726:  /* aarch64_simd_vec_copy_lanev4bf */
    case 1727:  /* aarch64_simd_vec_copy_lanev8bf */
    case 1728:  /* aarch64_simd_vec_copy_lanev2sf */
    case 1729:  /* aarch64_simd_vec_copy_lanev4sf */
    case 1730:  /* aarch64_simd_vec_copy_lanev2df */
    case 1731:  /* *aarch64_simd_vec_copy_lane_to_128v8qi */
    case 1732:  /* *aarch64_simd_vec_copy_lane_to_64v16qi */
    case 1733:  /* *aarch64_simd_vec_copy_lane_to_128v4hi */
    case 1734:  /* *aarch64_simd_vec_copy_lane_to_64v8hi */
    case 1735:  /* *aarch64_simd_vec_copy_lane_to_128v2si */
    case 1736:  /* *aarch64_simd_vec_copy_lane_to_64v4si */
    case 1737:  /* *aarch64_simd_vec_copy_lane_to_128v4hf */
    case 1738:  /* *aarch64_simd_vec_copy_lane_to_64v8hf */
    case 1739:  /* *aarch64_simd_vec_copy_lane_to_128v2sf */
    case 1740:  /* *aarch64_simd_vec_copy_lane_to_64v4sf */
    case 1741:  /* aarch64_simd_lshrv8qi */
    case 1742:  /* aarch64_simd_lshrv16qi */
    case 1743:  /* aarch64_simd_lshrv4hi */
    case 1744:  /* aarch64_simd_lshrv8hi */
    case 1745:  /* aarch64_simd_lshrv2si */
    case 1746:  /* aarch64_simd_lshrv4si */
    case 1747:  /* aarch64_simd_lshrv2di */
    case 1748:  /* aarch64_simd_ashrv8qi */
    case 1749:  /* aarch64_simd_ashrv16qi */
    case 1750:  /* aarch64_simd_ashrv4hi */
    case 1751:  /* aarch64_simd_ashrv8hi */
    case 1752:  /* aarch64_simd_ashrv2si */
    case 1753:  /* aarch64_simd_ashrv4si */
    case 1754:  /* aarch64_simd_ashrv2di */
    case 1755:  /* *aarch64_simd_srav8qi */
    case 1756:  /* *aarch64_simd_srav8qi */
    case 1757:  /* *aarch64_simd_srav16qi */
    case 1758:  /* *aarch64_simd_srav16qi */
    case 1759:  /* *aarch64_simd_srav4hi */
    case 1760:  /* *aarch64_simd_srav4hi */
    case 1761:  /* *aarch64_simd_srav8hi */
    case 1762:  /* *aarch64_simd_srav8hi */
    case 1763:  /* *aarch64_simd_srav2si */
    case 1764:  /* *aarch64_simd_srav2si */
    case 1765:  /* *aarch64_simd_srav4si */
    case 1766:  /* *aarch64_simd_srav4si */
    case 1767:  /* *aarch64_simd_srav2di */
    case 1768:  /* *aarch64_simd_srav2di */
    case 1769:  /* aarch64_simd_imm_shlv8qi */
    case 1770:  /* aarch64_simd_imm_shlv16qi */
    case 1771:  /* aarch64_simd_imm_shlv4hi */
    case 1772:  /* aarch64_simd_imm_shlv8hi */
    case 1773:  /* aarch64_simd_imm_shlv2si */
    case 1774:  /* aarch64_simd_imm_shlv4si */
    case 1775:  /* aarch64_simd_imm_shlv2di */
    case 1776:  /* aarch64_simd_reg_sshlv8qi */
    case 1777:  /* aarch64_simd_reg_sshlv16qi */
    case 1778:  /* aarch64_simd_reg_sshlv4hi */
    case 1779:  /* aarch64_simd_reg_sshlv8hi */
    case 1780:  /* aarch64_simd_reg_sshlv2si */
    case 1781:  /* aarch64_simd_reg_sshlv4si */
    case 1782:  /* aarch64_simd_reg_sshlv2di */
    case 1783:  /* aarch64_simd_reg_shlv8qi_unsigned */
    case 1784:  /* aarch64_simd_reg_shlv16qi_unsigned */
    case 1785:  /* aarch64_simd_reg_shlv4hi_unsigned */
    case 1786:  /* aarch64_simd_reg_shlv8hi_unsigned */
    case 1787:  /* aarch64_simd_reg_shlv2si_unsigned */
    case 1788:  /* aarch64_simd_reg_shlv4si_unsigned */
    case 1789:  /* aarch64_simd_reg_shlv2di_unsigned */
    case 1790:  /* aarch64_simd_reg_shlv8qi_signed */
    case 1791:  /* aarch64_simd_reg_shlv16qi_signed */
    case 1792:  /* aarch64_simd_reg_shlv4hi_signed */
    case 1793:  /* aarch64_simd_reg_shlv8hi_signed */
    case 1794:  /* aarch64_simd_reg_shlv2si_signed */
    case 1795:  /* aarch64_simd_reg_shlv4si_signed */
    case 1796:  /* aarch64_simd_reg_shlv2di_signed */
    case 1797:  /* vec_shr_v8qi */
    case 1798:  /* vec_shr_v4hi */
    case 1799:  /* vec_shr_v4hf */
    case 1800:  /* vec_shr_v2si */
    case 1801:  /* vec_shr_v2sf */
    case 1802:  /* vec_shr_v4bf */
    case 1803:  /* aarch64_mlav8qi */
    case 1804:  /* aarch64_mlav16qi */
    case 1805:  /* aarch64_mlav4hi */
    case 1806:  /* aarch64_mlav8hi */
    case 1807:  /* aarch64_mlav2si */
    case 1808:  /* aarch64_mlav4si */
    case 1809:  /* *aarch64_mla_eltv4hi */
    case 1810:  /* *aarch64_mla_eltv8hi */
    case 1811:  /* *aarch64_mla_eltv2si */
    case 1812:  /* *aarch64_mla_eltv4si */
    case 1813:  /* *aarch64_mla_elt_to_128v4hi */
    case 1814:  /* *aarch64_mla_elt_to_64v8hi */
    case 1815:  /* *aarch64_mla_elt_to_128v2si */
    case 1816:  /* *aarch64_mla_elt_to_64v4si */
    case 1817:  /* aarch64_mla_nv4hi */
    case 1818:  /* aarch64_mla_nv8hi */
    case 1819:  /* aarch64_mla_nv2si */
    case 1820:  /* aarch64_mla_nv4si */
    case 1821:  /* aarch64_mlsv8qi */
    case 1822:  /* aarch64_mlsv16qi */
    case 1823:  /* aarch64_mlsv4hi */
    case 1824:  /* aarch64_mlsv8hi */
    case 1825:  /* aarch64_mlsv2si */
    case 1826:  /* aarch64_mlsv4si */
    case 1827:  /* *aarch64_mls_eltv4hi */
    case 1828:  /* *aarch64_mls_eltv8hi */
    case 1829:  /* *aarch64_mls_eltv2si */
    case 1830:  /* *aarch64_mls_eltv4si */
    case 1831:  /* *aarch64_mls_elt_to_128v4hi */
    case 1832:  /* *aarch64_mls_elt_to_64v8hi */
    case 1833:  /* *aarch64_mls_elt_to_128v2si */
    case 1834:  /* *aarch64_mls_elt_to_64v4si */
    case 1835:  /* aarch64_mls_nv4hi */
    case 1836:  /* aarch64_mls_nv8hi */
    case 1837:  /* aarch64_mls_nv2si */
    case 1838:  /* aarch64_mls_nv4si */
    case 1839:  /* smaxv8qi3 */
    case 1840:  /* sminv8qi3 */
    case 1841:  /* umaxv8qi3 */
    case 1842:  /* uminv8qi3 */
    case 1843:  /* smaxv16qi3 */
    case 1844:  /* sminv16qi3 */
    case 1845:  /* umaxv16qi3 */
    case 1846:  /* uminv16qi3 */
    case 1847:  /* smaxv4hi3 */
    case 1848:  /* sminv4hi3 */
    case 1849:  /* umaxv4hi3 */
    case 1850:  /* uminv4hi3 */
    case 1851:  /* smaxv8hi3 */
    case 1852:  /* sminv8hi3 */
    case 1853:  /* umaxv8hi3 */
    case 1854:  /* uminv8hi3 */
    case 1855:  /* smaxv2si3 */
    case 1856:  /* sminv2si3 */
    case 1857:  /* umaxv2si3 */
    case 1858:  /* uminv2si3 */
    case 1859:  /* smaxv4si3 */
    case 1860:  /* sminv4si3 */
    case 1861:  /* umaxv4si3 */
    case 1862:  /* uminv4si3 */
    case 1863:  /* aarch64_umaxpv8qi */
    case 1864:  /* aarch64_uminpv8qi */
    case 1865:  /* aarch64_smaxpv8qi */
    case 1866:  /* aarch64_sminpv8qi */
    case 1867:  /* aarch64_umaxpv16qi */
    case 1868:  /* aarch64_uminpv16qi */
    case 1869:  /* aarch64_smaxpv16qi */
    case 1870:  /* aarch64_sminpv16qi */
    case 1871:  /* aarch64_umaxpv4hi */
    case 1872:  /* aarch64_uminpv4hi */
    case 1873:  /* aarch64_smaxpv4hi */
    case 1874:  /* aarch64_sminpv4hi */
    case 1875:  /* aarch64_umaxpv8hi */
    case 1876:  /* aarch64_uminpv8hi */
    case 1877:  /* aarch64_smaxpv8hi */
    case 1878:  /* aarch64_sminpv8hi */
    case 1879:  /* aarch64_umaxpv2si */
    case 1880:  /* aarch64_uminpv2si */
    case 1881:  /* aarch64_smaxpv2si */
    case 1882:  /* aarch64_sminpv2si */
    case 1883:  /* aarch64_umaxpv4si */
    case 1884:  /* aarch64_uminpv4si */
    case 1885:  /* aarch64_smaxpv4si */
    case 1886:  /* aarch64_sminpv4si */
    case 1887:  /* aarch64_smax_nanpv4hf */
    case 1888:  /* aarch64_smin_nanpv4hf */
    case 1889:  /* aarch64_smaxpv4hf */
    case 1890:  /* aarch64_sminpv4hf */
    case 1891:  /* aarch64_smax_nanpv8hf */
    case 1892:  /* aarch64_smin_nanpv8hf */
    case 1893:  /* aarch64_smaxpv8hf */
    case 1894:  /* aarch64_sminpv8hf */
    case 1895:  /* aarch64_smax_nanpv2sf */
    case 1896:  /* aarch64_smin_nanpv2sf */
    case 1897:  /* aarch64_smaxpv2sf */
    case 1898:  /* aarch64_sminpv2sf */
    case 1899:  /* aarch64_smax_nanpv4sf */
    case 1900:  /* aarch64_smin_nanpv4sf */
    case 1901:  /* aarch64_smaxpv4sf */
    case 1902:  /* aarch64_sminpv4sf */
    case 1903:  /* aarch64_smax_nanpv2df */
    case 1904:  /* aarch64_smin_nanpv2df */
    case 1905:  /* aarch64_smaxpv2df */
    case 1906:  /* aarch64_sminpv2df */
    case 1919:  /* *aarch64_narrow_truncv8hi */
    case 1920:  /* *aarch64_narrow_truncv4si */
    case 1921:  /* *aarch64_narrow_truncv2di */
    case 1922:  /* aarch64_shrnv8hi_insn_le */
    case 1923:  /* aarch64_shrnv4si_insn_le */
    case 1924:  /* aarch64_shrnv2di_insn_le */
    case 1925:  /* aarch64_shrnv8hi_insn_be */
    case 1926:  /* aarch64_shrnv4si_insn_be */
    case 1927:  /* aarch64_shrnv2di_insn_be */
    case 1928:  /* *aarch64_rshrnv8hi_vect */
    case 1929:  /* *aarch64_shrnv8hi_vect */
    case 1930:  /* *aarch64_rshrnv4si_vect */
    case 1931:  /* *aarch64_shrnv4si_vect */
    case 1932:  /* *aarch64_rshrnv2di_vect */
    case 1933:  /* *aarch64_shrnv2di_vect */
    case 1934:  /* *aarch64_rshrnv8hi2_vect_le */
    case 1935:  /* *aarch64_shrnv8hi2_vect_le */
    case 1936:  /* *aarch64_rshrnv4si2_vect_le */
    case 1937:  /* *aarch64_shrnv4si2_vect_le */
    case 1938:  /* *aarch64_rshrnv2di2_vect_le */
    case 1939:  /* *aarch64_shrnv2di2_vect_le */
    case 1940:  /* *aarch64_rshrnv8hi2_vect_be */
    case 1941:  /* *aarch64_shrnv8hi2_vect_be */
    case 1942:  /* *aarch64_rshrnv4si2_vect_be */
    case 1943:  /* *aarch64_shrnv4si2_vect_be */
    case 1944:  /* *aarch64_rshrnv2di2_vect_be */
    case 1945:  /* *aarch64_shrnv2di2_vect_be */
    case 1946:  /* *aarch64_rtopbits_shufflev8hi_le */
    case 1947:  /* *aarch64_topbits_shufflev8hi_le */
    case 1948:  /* *aarch64_rtopbits_shufflev4si_le */
    case 1949:  /* *aarch64_topbits_shufflev4si_le */
    case 1950:  /* *aarch64_rtopbits_shufflev2di_le */
    case 1951:  /* *aarch64_topbits_shufflev2di_le */
    case 1952:  /* *aarch64_rtopbits_shufflev8hi_be */
    case 1953:  /* *aarch64_topbits_shufflev8hi_be */
    case 1954:  /* *aarch64_rtopbits_shufflev4si_be */
    case 1955:  /* *aarch64_topbits_shufflev4si_be */
    case 1956:  /* *aarch64_rtopbits_shufflev2di_be */
    case 1957:  /* *aarch64_topbits_shufflev2di_be */
    case 1958:  /* aarch64_rshrnv8hi_insn_le */
    case 1959:  /* aarch64_rshrnv4si_insn_le */
    case 1960:  /* aarch64_rshrnv2di_insn_le */
    case 1961:  /* aarch64_rshrnv8hi_insn_be */
    case 1962:  /* aarch64_rshrnv4si_insn_be */
    case 1963:  /* aarch64_rshrnv2di_insn_be */
    case 1964:  /* aarch64_shrn2v8hi_insn_le */
    case 1965:  /* aarch64_shrn2v4si_insn_le */
    case 1966:  /* aarch64_shrn2v2di_insn_le */
    case 1967:  /* aarch64_shrn2v8hi_insn_be */
    case 1968:  /* aarch64_shrn2v4si_insn_be */
    case 1969:  /* aarch64_shrn2v2di_insn_be */
    case 1970:  /* aarch64_rshrn2v8hi_insn_le */
    case 1971:  /* aarch64_rshrn2v4si_insn_le */
    case 1972:  /* aarch64_rshrn2v2di_insn_le */
    case 1973:  /* aarch64_rshrn2v8hi_insn_be */
    case 1974:  /* aarch64_rshrn2v4si_insn_be */
    case 1975:  /* aarch64_rshrn2v2di_insn_be */
    case 1976:  /* aarch64_simd_vec_unpacks_lo_v16qi */
    case 1977:  /* aarch64_simd_vec_unpacku_lo_v16qi */
    case 1978:  /* aarch64_simd_vec_unpacks_lo_v8hi */
    case 1979:  /* aarch64_simd_vec_unpacku_lo_v8hi */
    case 1980:  /* aarch64_simd_vec_unpacks_lo_v4si */
    case 1981:  /* aarch64_simd_vec_unpacku_lo_v4si */
    case 1982:  /* aarch64_simd_vec_unpacks_hi_v16qi */
    case 1983:  /* aarch64_simd_vec_unpacku_hi_v16qi */
    case 1984:  /* aarch64_simd_vec_unpacks_hi_v8hi */
    case 1985:  /* aarch64_simd_vec_unpacku_hi_v8hi */
    case 1986:  /* aarch64_simd_vec_unpacks_hi_v4si */
    case 1987:  /* aarch64_simd_vec_unpacku_hi_v4si */
    case 1988:  /* *aarch64_smlal_lov16qi */
    case 1989:  /* *aarch64_umlal_lov16qi */
    case 1990:  /* *aarch64_smlal_lov8hi */
    case 1991:  /* *aarch64_umlal_lov8hi */
    case 1992:  /* *aarch64_smlal_lov4si */
    case 1993:  /* *aarch64_umlal_lov4si */
    case 1994:  /* aarch64_smlal_hiv16qi_insn */
    case 1995:  /* aarch64_umlal_hiv16qi_insn */
    case 1996:  /* aarch64_smlal_hiv8hi_insn */
    case 1997:  /* aarch64_umlal_hiv8hi_insn */
    case 1998:  /* aarch64_smlal_hiv4si_insn */
    case 1999:  /* aarch64_umlal_hiv4si_insn */
    case 2000:  /* aarch64_smlal_hi_nv8hi_insn */
    case 2001:  /* aarch64_umlal_hi_nv8hi_insn */
    case 2002:  /* aarch64_smlal_hi_nv4si_insn */
    case 2003:  /* aarch64_umlal_hi_nv4si_insn */
    case 2004:  /* *aarch64_smlsl_lov16qi */
    case 2005:  /* *aarch64_umlsl_lov16qi */
    case 2006:  /* *aarch64_smlsl_lov8hi */
    case 2007:  /* *aarch64_umlsl_lov8hi */
    case 2008:  /* *aarch64_smlsl_lov4si */
    case 2009:  /* *aarch64_umlsl_lov4si */
    case 2010:  /* aarch64_smlsl_hiv16qi_insn */
    case 2011:  /* aarch64_umlsl_hiv16qi_insn */
    case 2012:  /* aarch64_smlsl_hiv8hi_insn */
    case 2013:  /* aarch64_umlsl_hiv8hi_insn */
    case 2014:  /* aarch64_smlsl_hiv4si_insn */
    case 2015:  /* aarch64_umlsl_hiv4si_insn */
    case 2016:  /* aarch64_smlsl_hi_nv8hi_insn */
    case 2017:  /* aarch64_umlsl_hi_nv8hi_insn */
    case 2018:  /* aarch64_smlsl_hi_nv4si_insn */
    case 2019:  /* aarch64_umlsl_hi_nv4si_insn */
    case 2020:  /* aarch64_smlalv8qi */
    case 2021:  /* aarch64_umlalv8qi */
    case 2022:  /* aarch64_smlalv4hi */
    case 2023:  /* aarch64_umlalv4hi */
    case 2024:  /* aarch64_smlalv2si */
    case 2025:  /* aarch64_umlalv2si */
    case 2026:  /* aarch64_smlal_nv4hi */
    case 2027:  /* aarch64_umlal_nv4hi */
    case 2028:  /* aarch64_smlal_nv2si */
    case 2029:  /* aarch64_umlal_nv2si */
    case 2030:  /* aarch64_smlslv8qi */
    case 2031:  /* aarch64_umlslv8qi */
    case 2032:  /* aarch64_smlslv4hi */
    case 2033:  /* aarch64_umlslv4hi */
    case 2034:  /* aarch64_smlslv2si */
    case 2035:  /* aarch64_umlslv2si */
    case 2036:  /* aarch64_smlsl_nv4hi */
    case 2037:  /* aarch64_umlsl_nv4hi */
    case 2038:  /* aarch64_smlsl_nv2si */
    case 2039:  /* aarch64_umlsl_nv2si */
    case 2040:  /* aarch64_simd_vec_smult_lo_v16qi */
    case 2041:  /* aarch64_simd_vec_umult_lo_v16qi */
    case 2042:  /* aarch64_simd_vec_smult_lo_v8hi */
    case 2043:  /* aarch64_simd_vec_umult_lo_v8hi */
    case 2044:  /* aarch64_simd_vec_smult_lo_v4si */
    case 2045:  /* aarch64_simd_vec_umult_lo_v4si */
    case 2046:  /* aarch64_intrinsic_vec_smult_lo_v8qi */
    case 2047:  /* aarch64_intrinsic_vec_umult_lo_v8qi */
    case 2048:  /* aarch64_intrinsic_vec_smult_lo_v4hi */
    case 2049:  /* aarch64_intrinsic_vec_umult_lo_v4hi */
    case 2050:  /* aarch64_intrinsic_vec_smult_lo_v2si */
    case 2051:  /* aarch64_intrinsic_vec_umult_lo_v2si */
    case 2052:  /* aarch64_simd_vec_smult_hi_v16qi */
    case 2053:  /* aarch64_simd_vec_umult_hi_v16qi */
    case 2054:  /* aarch64_simd_vec_smult_hi_v8hi */
    case 2055:  /* aarch64_simd_vec_umult_hi_v8hi */
    case 2056:  /* aarch64_simd_vec_smult_hi_v4si */
    case 2057:  /* aarch64_simd_vec_umult_hi_v4si */
    case 2058:  /* aarch64_vec_smult_lane_v4hi */
    case 2059:  /* aarch64_vec_umult_lane_v4hi */
    case 2060:  /* aarch64_vec_smult_laneq_v4hi */
    case 2061:  /* aarch64_vec_umult_laneq_v4hi */
    case 2062:  /* aarch64_vec_smult_lane_v2si */
    case 2063:  /* aarch64_vec_umult_lane_v2si */
    case 2064:  /* aarch64_vec_smult_laneq_v2si */
    case 2065:  /* aarch64_vec_umult_laneq_v2si */
    case 2066:  /* aarch64_smull_hi_lanev8hi_insn */
    case 2067:  /* aarch64_umull_hi_lanev8hi_insn */
    case 2068:  /* aarch64_smull_hi_lanev4si_insn */
    case 2069:  /* aarch64_umull_hi_lanev4si_insn */
    case 2070:  /* aarch64_smull_hi_laneqv8hi_insn */
    case 2071:  /* aarch64_umull_hi_laneqv8hi_insn */
    case 2072:  /* aarch64_smull_hi_laneqv4si_insn */
    case 2073:  /* aarch64_umull_hi_laneqv4si_insn */
    case 2074:  /* aarch64_smull_nv4hi */
    case 2075:  /* aarch64_umull_nv4hi */
    case 2076:  /* aarch64_smull_nv2si */
    case 2077:  /* aarch64_umull_nv2si */
    case 2078:  /* aarch64_smull_hi_nv8hi_insn */
    case 2079:  /* aarch64_umull_hi_nv8hi_insn */
    case 2080:  /* aarch64_smull_hi_nv4si_insn */
    case 2081:  /* aarch64_umull_hi_nv4si_insn */
    case 2082:  /* aarch64_vec_smlal_lane_v4hi */
    case 2083:  /* aarch64_vec_umlal_lane_v4hi */
    case 2084:  /* aarch64_vec_smlal_laneq_v4hi */
    case 2085:  /* aarch64_vec_umlal_laneq_v4hi */
    case 2086:  /* aarch64_vec_smlal_lane_v2si */
    case 2087:  /* aarch64_vec_umlal_lane_v2si */
    case 2088:  /* aarch64_vec_smlal_laneq_v2si */
    case 2089:  /* aarch64_vec_umlal_laneq_v2si */
    case 2090:  /* aarch64_smlal_hi_lanev8hi_insn */
    case 2091:  /* aarch64_umlal_hi_lanev8hi_insn */
    case 2092:  /* aarch64_smlal_hi_lanev4si_insn */
    case 2093:  /* aarch64_umlal_hi_lanev4si_insn */
    case 2094:  /* aarch64_smlal_hi_laneqv8hi_insn */
    case 2095:  /* aarch64_umlal_hi_laneqv8hi_insn */
    case 2096:  /* aarch64_smlal_hi_laneqv4si_insn */
    case 2097:  /* aarch64_umlal_hi_laneqv4si_insn */
    case 2098:  /* aarch64_vec_smlsl_lane_v4hi */
    case 2099:  /* aarch64_vec_umlsl_lane_v4hi */
    case 2100:  /* aarch64_vec_smlsl_laneq_v4hi */
    case 2101:  /* aarch64_vec_umlsl_laneq_v4hi */
    case 2102:  /* aarch64_vec_smlsl_lane_v2si */
    case 2103:  /* aarch64_vec_umlsl_lane_v2si */
    case 2104:  /* aarch64_vec_smlsl_laneq_v2si */
    case 2105:  /* aarch64_vec_umlsl_laneq_v2si */
    case 2106:  /* aarch64_smlsl_hi_lanev8hi_insn */
    case 2107:  /* aarch64_umlsl_hi_lanev8hi_insn */
    case 2108:  /* aarch64_smlsl_hi_lanev4si_insn */
    case 2109:  /* aarch64_umlsl_hi_lanev4si_insn */
    case 2110:  /* aarch64_smlsl_hi_laneqv8hi_insn */
    case 2111:  /* aarch64_umlsl_hi_laneqv8hi_insn */
    case 2112:  /* aarch64_smlsl_hi_laneqv4si_insn */
    case 2113:  /* aarch64_umlsl_hi_laneqv4si_insn */
    case 2114:  /* addv4hf3 */
    case 2115:  /* addv8hf3 */
    case 2116:  /* addv2sf3 */
    case 2117:  /* addv4sf3 */
    case 2118:  /* addv2df3 */
    case 2119:  /* subv4hf3 */
    case 2120:  /* subv8hf3 */
    case 2121:  /* subv2sf3 */
    case 2122:  /* subv4sf3 */
    case 2123:  /* subv2df3 */
    case 2124:  /* mulv4hf3 */
    case 2125:  /* mulv8hf3 */
    case 2126:  /* mulv2sf3 */
    case 2127:  /* mulv4sf3 */
    case 2128:  /* mulv2df3 */
    case 2129:  /* *divv4hf3 */
    case 2130:  /* *divv8hf3 */
    case 2131:  /* *divv2sf3 */
    case 2132:  /* *divv4sf3 */
    case 2133:  /* *divv2df3 */
    case 2134:  /* negv4hf2 */
    case 2135:  /* negv8hf2 */
    case 2136:  /* negv2sf2 */
    case 2137:  /* negv4sf2 */
    case 2138:  /* negv2df2 */
    case 2139:  /* absv4hf2 */
    case 2140:  /* absv8hf2 */
    case 2141:  /* absv2sf2 */
    case 2142:  /* absv4sf2 */
    case 2143:  /* absv2df2 */
    case 2144:  /* fmav4hf4 */
    case 2145:  /* fmav8hf4 */
    case 2146:  /* fmav2sf4 */
    case 2147:  /* fmav4sf4 */
    case 2148:  /* fmav2df4 */
    case 2149:  /* *aarch64_fma4_eltv2sf */
    case 2150:  /* *aarch64_fma4_eltv4sf */
    case 2151:  /* *aarch64_fma4_eltv2df */
    case 2152:  /* *aarch64_fma4_elt_to_128v2sf */
    case 2153:  /* *aarch64_fma4_elt_to_64v4sf */
    case 2154:  /* *aarch64_fma4_elt_from_dupv4hi */
    case 2155:  /* *aarch64_fma4_elt_from_dupv8hi */
    case 2156:  /* *aarch64_fma4_elt_from_dupv2si */
    case 2157:  /* *aarch64_fma4_elt_from_dupv4si */
    case 2158:  /* *aarch64_fma4_elt_from_dupv4hf */
    case 2159:  /* *aarch64_fma4_elt_from_dupv8hf */
    case 2160:  /* *aarch64_fma4_elt_from_dupv2sf */
    case 2161:  /* *aarch64_fma4_elt_from_dupv4sf */
    case 2162:  /* *aarch64_fma4_elt_from_dupv2df */
    case 2163:  /* *aarch64_fma4_elt_to_64v2df */
    case 2164:  /* fnmav4hf4 */
    case 2165:  /* fnmav8hf4 */
    case 2166:  /* fnmav2sf4 */
    case 2167:  /* fnmav4sf4 */
    case 2168:  /* fnmav2df4 */
    case 2169:  /* *aarch64_fnma4_eltv2sf */
    case 2170:  /* *aarch64_fnma4_eltv4sf */
    case 2171:  /* *aarch64_fnma4_eltv2df */
    case 2172:  /* *aarch64_fnma4_elt_to_128v2sf */
    case 2173:  /* *aarch64_fnma4_elt_to_64v4sf */
    case 2174:  /* *aarch64_fnma4_elt_from_dupv4hi */
    case 2175:  /* *aarch64_fnma4_elt_from_dupv8hi */
    case 2176:  /* *aarch64_fnma4_elt_from_dupv2si */
    case 2177:  /* *aarch64_fnma4_elt_from_dupv4si */
    case 2178:  /* *aarch64_fnma4_elt_from_dupv4hf */
    case 2179:  /* *aarch64_fnma4_elt_from_dupv8hf */
    case 2180:  /* *aarch64_fnma4_elt_from_dupv2sf */
    case 2181:  /* *aarch64_fnma4_elt_from_dupv4sf */
    case 2182:  /* *aarch64_fnma4_elt_from_dupv2df */
    case 2183:  /* *aarch64_fnma4_elt_to_64v2df */
    case 2184:  /* btruncv4hf2 */
    case 2185:  /* ceilv4hf2 */
    case 2186:  /* floorv4hf2 */
    case 2187:  /* roundevenv4hf2 */
    case 2188:  /* nearbyintv4hf2 */
    case 2189:  /* rintv4hf2 */
    case 2190:  /* roundv4hf2 */
    case 2191:  /* btruncv8hf2 */
    case 2192:  /* ceilv8hf2 */
    case 2193:  /* floorv8hf2 */
    case 2194:  /* roundevenv8hf2 */
    case 2195:  /* nearbyintv8hf2 */
    case 2196:  /* rintv8hf2 */
    case 2197:  /* roundv8hf2 */
    case 2198:  /* btruncv2sf2 */
    case 2199:  /* ceilv2sf2 */
    case 2200:  /* floorv2sf2 */
    case 2201:  /* roundevenv2sf2 */
    case 2202:  /* nearbyintv2sf2 */
    case 2203:  /* rintv2sf2 */
    case 2204:  /* roundv2sf2 */
    case 2205:  /* btruncv4sf2 */
    case 2206:  /* ceilv4sf2 */
    case 2207:  /* floorv4sf2 */
    case 2208:  /* roundevenv4sf2 */
    case 2209:  /* nearbyintv4sf2 */
    case 2210:  /* rintv4sf2 */
    case 2211:  /* roundv4sf2 */
    case 2212:  /* btruncv2df2 */
    case 2213:  /* ceilv2df2 */
    case 2214:  /* floorv2df2 */
    case 2215:  /* roundevenv2df2 */
    case 2216:  /* nearbyintv2df2 */
    case 2217:  /* rintv2df2 */
    case 2218:  /* roundv2df2 */
    case 2219:  /* lbtruncv4hfv4hi2 */
    case 2220:  /* lceilv4hfv4hi2 */
    case 2221:  /* lfloorv4hfv4hi2 */
    case 2222:  /* lroundv4hfv4hi2 */
    case 2223:  /* lfrintnv4hfv4hi2 */
    case 2224:  /* lbtruncuv4hfv4hi2 */
    case 2225:  /* lceiluv4hfv4hi2 */
    case 2226:  /* lflooruv4hfv4hi2 */
    case 2227:  /* lrounduv4hfv4hi2 */
    case 2228:  /* lfrintnuv4hfv4hi2 */
    case 2229:  /* lbtruncv8hfv8hi2 */
    case 2230:  /* lceilv8hfv8hi2 */
    case 2231:  /* lfloorv8hfv8hi2 */
    case 2232:  /* lroundv8hfv8hi2 */
    case 2233:  /* lfrintnv8hfv8hi2 */
    case 2234:  /* lbtruncuv8hfv8hi2 */
    case 2235:  /* lceiluv8hfv8hi2 */
    case 2236:  /* lflooruv8hfv8hi2 */
    case 2237:  /* lrounduv8hfv8hi2 */
    case 2238:  /* lfrintnuv8hfv8hi2 */
    case 2239:  /* lbtruncv2sfv2si2 */
    case 2240:  /* lceilv2sfv2si2 */
    case 2241:  /* lfloorv2sfv2si2 */
    case 2242:  /* lroundv2sfv2si2 */
    case 2243:  /* lfrintnv2sfv2si2 */
    case 2244:  /* lbtruncuv2sfv2si2 */
    case 2245:  /* lceiluv2sfv2si2 */
    case 2246:  /* lflooruv2sfv2si2 */
    case 2247:  /* lrounduv2sfv2si2 */
    case 2248:  /* lfrintnuv2sfv2si2 */
    case 2249:  /* lbtruncv4sfv4si2 */
    case 2250:  /* lceilv4sfv4si2 */
    case 2251:  /* lfloorv4sfv4si2 */
    case 2252:  /* lroundv4sfv4si2 */
    case 2253:  /* lfrintnv4sfv4si2 */
    case 2254:  /* lbtruncuv4sfv4si2 */
    case 2255:  /* lceiluv4sfv4si2 */
    case 2256:  /* lflooruv4sfv4si2 */
    case 2257:  /* lrounduv4sfv4si2 */
    case 2258:  /* lfrintnuv4sfv4si2 */
    case 2259:  /* lbtruncv2dfv2di2 */
    case 2260:  /* lceilv2dfv2di2 */
    case 2261:  /* lfloorv2dfv2di2 */
    case 2262:  /* lroundv2dfv2di2 */
    case 2263:  /* lfrintnv2dfv2di2 */
    case 2264:  /* lbtruncuv2dfv2di2 */
    case 2265:  /* lceiluv2dfv2di2 */
    case 2266:  /* lflooruv2dfv2di2 */
    case 2267:  /* lrounduv2dfv2di2 */
    case 2268:  /* lfrintnuv2dfv2di2 */
    case 2269:  /* lbtrunchfhi2 */
    case 2270:  /* lceilhfhi2 */
    case 2271:  /* lfloorhfhi2 */
    case 2272:  /* lroundhfhi2 */
    case 2273:  /* lfrintnhfhi2 */
    case 2274:  /* lbtruncuhfhi2 */
    case 2275:  /* lceiluhfhi2 */
    case 2276:  /* lflooruhfhi2 */
    case 2277:  /* lrounduhfhi2 */
    case 2278:  /* lfrintnuhfhi2 */
    case 2279:  /* fix_trunchfhi2 */
    case 2280:  /* fixuns_trunchfhi2 */
    case 2281:  /* floathihf2 */
    case 2282:  /* floatunshihf2 */
    case 2283:  /* *aarch64_fcvtv2sfv2si2_mult */
    case 2284:  /* *aarch64_fcvtuv2sfv2si2_mult */
    case 2285:  /* *aarch64_fcvtv4sfv4si2_mult */
    case 2286:  /* *aarch64_fcvtuv4sfv4si2_mult */
    case 2287:  /* *aarch64_fcvtv2dfv2di2_mult */
    case 2288:  /* *aarch64_fcvtuv2dfv2di2_mult */
    case 2289:  /* floatv4hiv4hf2 */
    case 2290:  /* floatunsv4hiv4hf2 */
    case 2291:  /* floatv8hiv8hf2 */
    case 2292:  /* floatunsv8hiv8hf2 */
    case 2293:  /* floatv2siv2sf2 */
    case 2294:  /* floatunsv2siv2sf2 */
    case 2295:  /* floatv4siv4sf2 */
    case 2296:  /* floatunsv4siv4sf2 */
    case 2297:  /* floatv2div2df2 */
    case 2298:  /* floatunsv2div2df2 */
    case 2299:  /* aarch64_simd_vec_unpacks_lo_v8hf */
    case 2300:  /* aarch64_simd_vec_unpacks_lo_v4sf */
    case 2301:  /* fcvtzsv4hf3 */
    case 2302:  /* fcvtzuv4hf3 */
    case 2303:  /* fcvtzsv8hf3 */
    case 2304:  /* fcvtzuv8hf3 */
    case 2305:  /* fcvtzsv2sf3 */
    case 2306:  /* fcvtzuv2sf3 */
    case 2307:  /* fcvtzsv4sf3 */
    case 2308:  /* fcvtzuv4sf3 */
    case 2309:  /* fcvtzsv2df3 */
    case 2310:  /* fcvtzuv2df3 */
    case 2311:  /* scvtfv4hi3 */
    case 2312:  /* ucvtfv4hi3 */
    case 2313:  /* scvtfv8hi3 */
    case 2314:  /* ucvtfv8hi3 */
    case 2315:  /* scvtfv2si3 */
    case 2316:  /* ucvtfv2si3 */
    case 2317:  /* scvtfv4si3 */
    case 2318:  /* ucvtfv4si3 */
    case 2319:  /* scvtfv2di3 */
    case 2320:  /* ucvtfv2di3 */
    case 2321:  /* aarch64_simd_vec_unpacks_hi_v8hf */
    case 2322:  /* aarch64_simd_vec_unpacks_hi_v4sf */
    case 2323:  /* aarch64_float_extend_lo_v2df */
    case 2324:  /* aarch64_float_extend_lo_v4sf */
    case 2325:  /* aarch64_float_trunc_rodd_df */
    case 2326:  /* aarch64_float_trunc_rodd_lo_v2sf */
    case 2327:  /* aarch64_float_trunc_rodd_hi_v4sf_le */
    case 2328:  /* aarch64_float_trunc_rodd_hi_v4sf_be */
    case 2329:  /* aarch64_float_truncate_lo_v2sf */
    case 2330:  /* aarch64_float_truncate_lo_v4hf */
    case 2331:  /* aarch64_float_truncate_hi_v4sf_le */
    case 2332:  /* aarch64_float_truncate_hi_v8hf_le */
    case 2333:  /* aarch64_float_truncate_hi_v4sf_be */
    case 2334:  /* aarch64_float_truncate_hi_v8hf_be */
    case 2335:  /* smaxv4hf3 */
    case 2336:  /* sminv4hf3 */
    case 2337:  /* smaxv8hf3 */
    case 2338:  /* sminv8hf3 */
    case 2339:  /* smaxv2sf3 */
    case 2340:  /* sminv2sf3 */
    case 2341:  /* smaxv4sf3 */
    case 2342:  /* sminv4sf3 */
    case 2343:  /* smaxv2df3 */
    case 2344:  /* sminv2df3 */
    case 2345:  /* fmax_nanv4hf3 */
    case 2346:  /* fmin_nanv4hf3 */
    case 2347:  /* fmaxv4hf3 */
    case 2348:  /* fminv4hf3 */
    case 2349:  /* fmax_nanv8hf3 */
    case 2350:  /* fmin_nanv8hf3 */
    case 2351:  /* fmaxv8hf3 */
    case 2352:  /* fminv8hf3 */
    case 2353:  /* fmax_nanv2sf3 */
    case 2354:  /* fmin_nanv2sf3 */
    case 2355:  /* fmaxv2sf3 */
    case 2356:  /* fminv2sf3 */
    case 2357:  /* fmax_nanv4sf3 */
    case 2358:  /* fmin_nanv4sf3 */
    case 2359:  /* fmaxv4sf3 */
    case 2360:  /* fminv4sf3 */
    case 2361:  /* fmax_nanv2df3 */
    case 2362:  /* fmin_nanv2df3 */
    case 2363:  /* fmaxv2df3 */
    case 2364:  /* fminv2df3 */
    case 2365:  /* aarch64_faddpv4hf */
    case 2366:  /* aarch64_faddpv8hf */
    case 2367:  /* aarch64_faddpv2sf */
    case 2368:  /* aarch64_faddpv4sf */
    case 2369:  /* aarch64_faddpv2df */
    case 2370:  /* reduc_plus_scal_v8qi */
    case 2371:  /* reduc_plus_scal_v16qi */
    case 2372:  /* reduc_plus_scal_v4hi */
    case 2373:  /* reduc_plus_scal_v8hi */
    case 2374:  /* reduc_plus_scal_v4si */
    case 2375:  /* reduc_plus_scal_v2di */
    case 2376:  /* reduc_plus_scal_v2si */
    case 2377:  /* aarch64_zero_extendsi_reduc_plus_v8qi */
    case 2378:  /* aarch64_zero_extenddi_reduc_plus_v8qi */
    case 2379:  /* aarch64_zero_extendsi_reduc_plus_v16qi */
    case 2380:  /* aarch64_zero_extenddi_reduc_plus_v16qi */
    case 2381:  /* aarch64_zero_extendsi_reduc_plus_v4hi */
    case 2382:  /* aarch64_zero_extenddi_reduc_plus_v4hi */
    case 2383:  /* aarch64_zero_extendsi_reduc_plus_v8hi */
    case 2384:  /* aarch64_zero_extenddi_reduc_plus_v8hi */
    case 2385:  /* reduc_plus_scal_v2sf */
    case 2386:  /* reduc_plus_scal_v2df */
    case 2387:  /* aarch64_saddlvv8qi */
    case 2388:  /* aarch64_uaddlvv8qi */
    case 2389:  /* aarch64_saddlvv16qi */
    case 2390:  /* aarch64_uaddlvv16qi */
    case 2391:  /* aarch64_saddlvv4hi */
    case 2392:  /* aarch64_uaddlvv4hi */
    case 2393:  /* aarch64_saddlvv8hi */
    case 2394:  /* aarch64_uaddlvv8hi */
    case 2395:  /* aarch64_saddlvv4si */
    case 2396:  /* aarch64_uaddlvv4si */
    case 2397:  /* aarch64_saddlvv2si */
    case 2398:  /* aarch64_uaddlvv2si */
    case 2399:  /* aarch64_saddlpv8qi */
    case 2400:  /* aarch64_uaddlpv8qi */
    case 2401:  /* aarch64_saddlpv16qi */
    case 2402:  /* aarch64_uaddlpv16qi */
    case 2403:  /* aarch64_saddlpv4hi */
    case 2404:  /* aarch64_uaddlpv4hi */
    case 2405:  /* aarch64_saddlpv8hi */
    case 2406:  /* aarch64_uaddlpv8hi */
    case 2407:  /* aarch64_saddlpv4si */
    case 2408:  /* aarch64_uaddlpv4si */
    case 2409:  /* aarch64_saddlpv2si */
    case 2410:  /* aarch64_uaddlpv2si */
    case 2411:  /* clrsbv8qi2 */
    case 2412:  /* clrsbv16qi2 */
    case 2413:  /* clrsbv4hi2 */
    case 2414:  /* clrsbv8hi2 */
    case 2415:  /* clrsbv2si2 */
    case 2416:  /* clrsbv4si2 */
    case 2417:  /* clzv8qi2 */
    case 2418:  /* clzv16qi2 */
    case 2419:  /* clzv4hi2 */
    case 2420:  /* clzv8hi2 */
    case 2421:  /* clzv2si2 */
    case 2422:  /* clzv4si2 */
    case 2423:  /* popcountv8qi2 */
    case 2424:  /* popcountv16qi2 */
    case 2425:  /* aarch64_reduc_umax_internalv8qi */
    case 2426:  /* aarch64_reduc_umin_internalv8qi */
    case 2427:  /* aarch64_reduc_smax_internalv8qi */
    case 2428:  /* aarch64_reduc_smin_internalv8qi */
    case 2429:  /* aarch64_reduc_umax_internalv16qi */
    case 2430:  /* aarch64_reduc_umin_internalv16qi */
    case 2431:  /* aarch64_reduc_smax_internalv16qi */
    case 2432:  /* aarch64_reduc_smin_internalv16qi */
    case 2433:  /* aarch64_reduc_umax_internalv4hi */
    case 2434:  /* aarch64_reduc_umin_internalv4hi */
    case 2435:  /* aarch64_reduc_smax_internalv4hi */
    case 2436:  /* aarch64_reduc_smin_internalv4hi */
    case 2437:  /* aarch64_reduc_umax_internalv8hi */
    case 2438:  /* aarch64_reduc_umin_internalv8hi */
    case 2439:  /* aarch64_reduc_smax_internalv8hi */
    case 2440:  /* aarch64_reduc_smin_internalv8hi */
    case 2441:  /* aarch64_reduc_umax_internalv4si */
    case 2442:  /* aarch64_reduc_umin_internalv4si */
    case 2443:  /* aarch64_reduc_smax_internalv4si */
    case 2444:  /* aarch64_reduc_smin_internalv4si */
    case 2445:  /* aarch64_reduc_umax_internalv2si */
    case 2446:  /* aarch64_reduc_umin_internalv2si */
    case 2447:  /* aarch64_reduc_smax_internalv2si */
    case 2448:  /* aarch64_reduc_smin_internalv2si */
    case 2449:  /* aarch64_reduc_smax_nan_internalv4hf */
    case 2450:  /* aarch64_reduc_smin_nan_internalv4hf */
    case 2451:  /* aarch64_reduc_smax_internalv4hf */
    case 2452:  /* aarch64_reduc_smin_internalv4hf */
    case 2453:  /* aarch64_reduc_smax_nan_internalv8hf */
    case 2454:  /* aarch64_reduc_smin_nan_internalv8hf */
    case 2455:  /* aarch64_reduc_smax_internalv8hf */
    case 2456:  /* aarch64_reduc_smin_internalv8hf */
    case 2457:  /* aarch64_reduc_smax_nan_internalv2sf */
    case 2458:  /* aarch64_reduc_smin_nan_internalv2sf */
    case 2459:  /* aarch64_reduc_smax_internalv2sf */
    case 2460:  /* aarch64_reduc_smin_internalv2sf */
    case 2461:  /* aarch64_reduc_smax_nan_internalv4sf */
    case 2462:  /* aarch64_reduc_smin_nan_internalv4sf */
    case 2463:  /* aarch64_reduc_smax_internalv4sf */
    case 2464:  /* aarch64_reduc_smin_internalv4sf */
    case 2465:  /* aarch64_reduc_smax_nan_internalv2df */
    case 2466:  /* aarch64_reduc_smin_nan_internalv2df */
    case 2467:  /* aarch64_reduc_smax_internalv2df */
    case 2468:  /* aarch64_reduc_smin_internalv2df */
    case 2469:  /* aarch64_simd_bslv8qi_internal */
    case 2470:  /* aarch64_simd_bslv16qi_internal */
    case 2471:  /* aarch64_simd_bslv4hi_internal */
    case 2472:  /* aarch64_simd_bslv8hi_internal */
    case 2473:  /* aarch64_simd_bslv2si_internal */
    case 2474:  /* aarch64_simd_bslv4si_internal */
    case 2475:  /* aarch64_simd_bslv2di_internal */
    case 2476:  /* *aarch64_simd_bslv8qi_alt */
    case 2477:  /* *aarch64_simd_bslv16qi_alt */
    case 2478:  /* *aarch64_simd_bslv4hi_alt */
    case 2479:  /* *aarch64_simd_bslv8hi_alt */
    case 2480:  /* *aarch64_simd_bslv2si_alt */
    case 2481:  /* *aarch64_simd_bslv4si_alt */
    case 2482:  /* *aarch64_simd_bslv2di_alt */
    case 2483:  /* aarch64_simd_bsldi_internal */
    case 2484:  /* aarch64_simd_bsldi_alt */
    case 2485:  /* *aarch64_get_lane_extendsiv8qi */
    case 2486:  /* *aarch64_get_lane_extenddiv8qi */
    case 2487:  /* *aarch64_get_lane_extendsiv16qi */
    case 2488:  /* *aarch64_get_lane_extenddiv16qi */
    case 2489:  /* *aarch64_get_lane_extendsiv4hi */
    case 2490:  /* *aarch64_get_lane_extenddiv4hi */
    case 2491:  /* *aarch64_get_lane_extendsiv8hi */
    case 2492:  /* *aarch64_get_lane_extenddiv8hi */
    case 2493:  /* *aarch64_get_lane_zero_extendsiv8qi */
    case 2494:  /* *aarch64_get_lane_zero_extenddiv8qi */
    case 2495:  /* *aarch64_get_lane_zero_extendsiv16qi */
    case 2496:  /* *aarch64_get_lane_zero_extenddiv16qi */
    case 2497:  /* *aarch64_get_lane_zero_extendsiv4hi */
    case 2498:  /* *aarch64_get_lane_zero_extenddiv4hi */
    case 2499:  /* *aarch64_get_lane_zero_extendsiv8hi */
    case 2500:  /* *aarch64_get_lane_zero_extenddiv8hi */
    case 2501:  /* aarch64_get_lanev8qi */
    case 2502:  /* aarch64_get_lanev16qi */
    case 2503:  /* aarch64_get_lanev4hi */
    case 2504:  /* aarch64_get_lanev8hi */
    case 2505:  /* aarch64_get_lanev2si */
    case 2506:  /* aarch64_get_lanev4si */
    case 2507:  /* aarch64_get_lanev2di */
    case 2508:  /* aarch64_get_lanev4hf */
    case 2509:  /* aarch64_get_lanev8hf */
    case 2510:  /* aarch64_get_lanev4bf */
    case 2511:  /* aarch64_get_lanev8bf */
    case 2512:  /* aarch64_get_lanev2sf */
    case 2513:  /* aarch64_get_lanev4sf */
    case 2514:  /* aarch64_get_lanev2df */
    case 2515:  /* load_pair_lanesv8qi */
    case 2516:  /* load_pair_lanesv4hi */
    case 2517:  /* load_pair_lanesv4bf */
    case 2518:  /* load_pair_lanesv4hf */
    case 2519:  /* load_pair_lanesv2si */
    case 2520:  /* load_pair_lanesv2sf */
    case 2521:  /* load_pair_lanessi */
    case 2522:  /* load_pair_lanessf */
    case 2523:  /* load_pair_lanesdi */
    case 2524:  /* load_pair_lanesdf */
    case 2525:  /* store_pair_lanesv8qi */
    case 2526:  /* store_pair_lanesv4hi */
    case 2527:  /* store_pair_lanesv4bf */
    case 2528:  /* store_pair_lanesv4hf */
    case 2529:  /* store_pair_lanesv2si */
    case 2530:  /* store_pair_lanesv2sf */
    case 2531:  /* store_pair_lanessi */
    case 2532:  /* store_pair_lanessf */
    case 2533:  /* store_pair_lanesdi */
    case 2534:  /* store_pair_lanesdf */
    case 2535:  /* *aarch64_combine_internalv8qi */
    case 2536:  /* *aarch64_combine_internalv4hi */
    case 2537:  /* *aarch64_combine_internalv4bf */
    case 2538:  /* *aarch64_combine_internalv4hf */
    case 2539:  /* *aarch64_combine_internalv2si */
    case 2540:  /* *aarch64_combine_internalv2sf */
    case 2541:  /* *aarch64_combine_internalsi */
    case 2542:  /* *aarch64_combine_internalsf */
    case 2543:  /* *aarch64_combine_internaldi */
    case 2544:  /* *aarch64_combine_internaldf */
    case 2545:  /* *aarch64_combine_internal_bev8qi */
    case 2546:  /* *aarch64_combine_internal_bev4hi */
    case 2547:  /* *aarch64_combine_internal_bev4bf */
    case 2548:  /* *aarch64_combine_internal_bev4hf */
    case 2549:  /* *aarch64_combine_internal_bev2si */
    case 2550:  /* *aarch64_combine_internal_bev2sf */
    case 2551:  /* *aarch64_combine_internal_besi */
    case 2552:  /* *aarch64_combine_internal_besf */
    case 2553:  /* *aarch64_combine_internal_bedi */
    case 2554:  /* *aarch64_combine_internal_bedf */
    case 2555:  /* *aarch64_combinezv8qi */
    case 2556:  /* *aarch64_combinezv4hi */
    case 2557:  /* *aarch64_combinezv4bf */
    case 2558:  /* *aarch64_combinezv4hf */
    case 2559:  /* *aarch64_combinezv2si */
    case 2560:  /* *aarch64_combinezv2sf */
    case 2561:  /* *aarch64_combinezsi */
    case 2562:  /* *aarch64_combinezsf */
    case 2563:  /* *aarch64_combinezdi */
    case 2564:  /* *aarch64_combinezdf */
    case 2565:  /* *aarch64_combinez_bev8qi */
    case 2566:  /* *aarch64_combinez_bev4hi */
    case 2567:  /* *aarch64_combinez_bev4bf */
    case 2568:  /* *aarch64_combinez_bev4hf */
    case 2569:  /* *aarch64_combinez_bev2si */
    case 2570:  /* *aarch64_combinez_bev2sf */
    case 2571:  /* *aarch64_combinez_besi */
    case 2572:  /* *aarch64_combinez_besf */
    case 2573:  /* *aarch64_combinez_bedi */
    case 2574:  /* *aarch64_combinez_bedf */
    case 2575:  /* aarch64_saddlv16qi_hi_internal */
    case 2576:  /* aarch64_ssublv16qi_hi_internal */
    case 2577:  /* aarch64_uaddlv16qi_hi_internal */
    case 2578:  /* aarch64_usublv16qi_hi_internal */
    case 2579:  /* aarch64_saddlv8hi_hi_internal */
    case 2580:  /* aarch64_ssublv8hi_hi_internal */
    case 2581:  /* aarch64_uaddlv8hi_hi_internal */
    case 2582:  /* aarch64_usublv8hi_hi_internal */
    case 2583:  /* aarch64_saddlv4si_hi_internal */
    case 2584:  /* aarch64_ssublv4si_hi_internal */
    case 2585:  /* aarch64_uaddlv4si_hi_internal */
    case 2586:  /* aarch64_usublv4si_hi_internal */
    case 2587:  /* aarch64_saddlv16qi_lo_internal */
    case 2588:  /* aarch64_ssublv16qi_lo_internal */
    case 2589:  /* aarch64_uaddlv16qi_lo_internal */
    case 2590:  /* aarch64_usublv16qi_lo_internal */
    case 2591:  /* aarch64_saddlv8hi_lo_internal */
    case 2592:  /* aarch64_ssublv8hi_lo_internal */
    case 2593:  /* aarch64_uaddlv8hi_lo_internal */
    case 2594:  /* aarch64_usublv8hi_lo_internal */
    case 2595:  /* aarch64_saddlv4si_lo_internal */
    case 2596:  /* aarch64_ssublv4si_lo_internal */
    case 2597:  /* aarch64_uaddlv4si_lo_internal */
    case 2598:  /* aarch64_usublv4si_lo_internal */
    case 2599:  /* aarch64_saddlv8qi */
    case 2600:  /* aarch64_ssublv8qi */
    case 2601:  /* aarch64_uaddlv8qi */
    case 2602:  /* aarch64_usublv8qi */
    case 2603:  /* aarch64_saddlv4hi */
    case 2604:  /* aarch64_ssublv4hi */
    case 2605:  /* aarch64_uaddlv4hi */
    case 2606:  /* aarch64_usublv4hi */
    case 2607:  /* aarch64_saddlv2si */
    case 2608:  /* aarch64_ssublv2si */
    case 2609:  /* aarch64_uaddlv2si */
    case 2610:  /* aarch64_usublv2si */
    case 2611:  /* aarch64_ssubwv8qi */
    case 2612:  /* aarch64_usubwv8qi */
    case 2613:  /* aarch64_ssubwv4hi */
    case 2614:  /* aarch64_usubwv4hi */
    case 2615:  /* aarch64_ssubwv2si */
    case 2616:  /* aarch64_usubwv2si */
    case 2617:  /* aarch64_ssubwv16qi_internal */
    case 2618:  /* aarch64_usubwv16qi_internal */
    case 2619:  /* aarch64_ssubwv8hi_internal */
    case 2620:  /* aarch64_usubwv8hi_internal */
    case 2621:  /* aarch64_ssubwv4si_internal */
    case 2622:  /* aarch64_usubwv4si_internal */
    case 2623:  /* aarch64_ssubw2v16qi_internal */
    case 2624:  /* aarch64_usubw2v16qi_internal */
    case 2625:  /* aarch64_ssubw2v8hi_internal */
    case 2626:  /* aarch64_usubw2v8hi_internal */
    case 2627:  /* aarch64_ssubw2v4si_internal */
    case 2628:  /* aarch64_usubw2v4si_internal */
    case 2629:  /* aarch64_saddwv8qi */
    case 2630:  /* aarch64_uaddwv8qi */
    case 2631:  /* aarch64_saddwv4hi */
    case 2632:  /* aarch64_uaddwv4hi */
    case 2633:  /* aarch64_saddwv2si */
    case 2634:  /* aarch64_uaddwv2si */
    case 2635:  /* aarch64_saddwv16qi_internal */
    case 2636:  /* aarch64_uaddwv16qi_internal */
    case 2637:  /* aarch64_saddwv8hi_internal */
    case 2638:  /* aarch64_uaddwv8hi_internal */
    case 2639:  /* aarch64_saddwv4si_internal */
    case 2640:  /* aarch64_uaddwv4si_internal */
    case 2641:  /* aarch64_saddw2v16qi_internal */
    case 2642:  /* aarch64_uaddw2v16qi_internal */
    case 2643:  /* aarch64_saddw2v8hi_internal */
    case 2644:  /* aarch64_uaddw2v8hi_internal */
    case 2645:  /* aarch64_saddw2v4si_internal */
    case 2646:  /* aarch64_uaddw2v4si_internal */
    case 2647:  /* aarch64_shaddv8qi */
    case 2648:  /* aarch64_uhaddv8qi */
    case 2649:  /* aarch64_srhaddv8qi */
    case 2650:  /* aarch64_urhaddv8qi */
    case 2651:  /* aarch64_shsubv8qi */
    case 2652:  /* aarch64_uhsubv8qi */
    case 2653:  /* aarch64_shaddv16qi */
    case 2654:  /* aarch64_uhaddv16qi */
    case 2655:  /* aarch64_srhaddv16qi */
    case 2656:  /* aarch64_urhaddv16qi */
    case 2657:  /* aarch64_shsubv16qi */
    case 2658:  /* aarch64_uhsubv16qi */
    case 2659:  /* aarch64_shaddv4hi */
    case 2660:  /* aarch64_uhaddv4hi */
    case 2661:  /* aarch64_srhaddv4hi */
    case 2662:  /* aarch64_urhaddv4hi */
    case 2663:  /* aarch64_shsubv4hi */
    case 2664:  /* aarch64_uhsubv4hi */
    case 2665:  /* aarch64_shaddv8hi */
    case 2666:  /* aarch64_uhaddv8hi */
    case 2667:  /* aarch64_srhaddv8hi */
    case 2668:  /* aarch64_urhaddv8hi */
    case 2669:  /* aarch64_shsubv8hi */
    case 2670:  /* aarch64_uhsubv8hi */
    case 2671:  /* aarch64_shaddv2si */
    case 2672:  /* aarch64_uhaddv2si */
    case 2673:  /* aarch64_srhaddv2si */
    case 2674:  /* aarch64_urhaddv2si */
    case 2675:  /* aarch64_shsubv2si */
    case 2676:  /* aarch64_uhsubv2si */
    case 2677:  /* aarch64_shaddv4si */
    case 2678:  /* aarch64_uhaddv4si */
    case 2679:  /* aarch64_srhaddv4si */
    case 2680:  /* aarch64_urhaddv4si */
    case 2681:  /* aarch64_shsubv4si */
    case 2682:  /* aarch64_uhsubv4si */
    case 2683:  /* aarch64_addhnv8hi_insn_le */
    case 2684:  /* aarch64_raddhnv8hi_insn_le */
    case 2685:  /* aarch64_subhnv8hi_insn_le */
    case 2686:  /* aarch64_rsubhnv8hi_insn_le */
    case 2687:  /* aarch64_addhnv4si_insn_le */
    case 2688:  /* aarch64_raddhnv4si_insn_le */
    case 2689:  /* aarch64_subhnv4si_insn_le */
    case 2690:  /* aarch64_rsubhnv4si_insn_le */
    case 2691:  /* aarch64_addhnv2di_insn_le */
    case 2692:  /* aarch64_raddhnv2di_insn_le */
    case 2693:  /* aarch64_subhnv2di_insn_le */
    case 2694:  /* aarch64_rsubhnv2di_insn_le */
    case 2695:  /* aarch64_addhnv8hi_insn_be */
    case 2696:  /* aarch64_raddhnv8hi_insn_be */
    case 2697:  /* aarch64_subhnv8hi_insn_be */
    case 2698:  /* aarch64_rsubhnv8hi_insn_be */
    case 2699:  /* aarch64_addhnv4si_insn_be */
    case 2700:  /* aarch64_raddhnv4si_insn_be */
    case 2701:  /* aarch64_subhnv4si_insn_be */
    case 2702:  /* aarch64_rsubhnv4si_insn_be */
    case 2703:  /* aarch64_addhnv2di_insn_be */
    case 2704:  /* aarch64_raddhnv2di_insn_be */
    case 2705:  /* aarch64_subhnv2di_insn_be */
    case 2706:  /* aarch64_rsubhnv2di_insn_be */
    case 2707:  /* aarch64_addhn2v8hi_insn_le */
    case 2708:  /* aarch64_raddhn2v8hi_insn_le */
    case 2709:  /* aarch64_subhn2v8hi_insn_le */
    case 2710:  /* aarch64_rsubhn2v8hi_insn_le */
    case 2711:  /* aarch64_addhn2v4si_insn_le */
    case 2712:  /* aarch64_raddhn2v4si_insn_le */
    case 2713:  /* aarch64_subhn2v4si_insn_le */
    case 2714:  /* aarch64_rsubhn2v4si_insn_le */
    case 2715:  /* aarch64_addhn2v2di_insn_le */
    case 2716:  /* aarch64_raddhn2v2di_insn_le */
    case 2717:  /* aarch64_subhn2v2di_insn_le */
    case 2718:  /* aarch64_rsubhn2v2di_insn_le */
    case 2719:  /* aarch64_addhn2v8hi_insn_be */
    case 2720:  /* aarch64_raddhn2v8hi_insn_be */
    case 2721:  /* aarch64_subhn2v8hi_insn_be */
    case 2722:  /* aarch64_rsubhn2v8hi_insn_be */
    case 2723:  /* aarch64_addhn2v4si_insn_be */
    case 2724:  /* aarch64_raddhn2v4si_insn_be */
    case 2725:  /* aarch64_subhn2v4si_insn_be */
    case 2726:  /* aarch64_rsubhn2v4si_insn_be */
    case 2727:  /* aarch64_addhn2v2di_insn_be */
    case 2728:  /* aarch64_raddhn2v2di_insn_be */
    case 2729:  /* aarch64_subhn2v2di_insn_be */
    case 2730:  /* aarch64_rsubhn2v2di_insn_be */
    case 2731:  /* aarch64_pmulv8qi */
    case 2732:  /* aarch64_pmulv16qi */
    case 2733:  /* aarch64_pmullv8qi */
    case 2734:  /* aarch64_pmull_hiv16qi_insn */
    case 2735:  /* aarch64_fmulxv4hf */
    case 2736:  /* aarch64_fmulxv8hf */
    case 2737:  /* aarch64_fmulxv2sf */
    case 2738:  /* aarch64_fmulxv4sf */
    case 2739:  /* aarch64_fmulxv2df */
    case 2740:  /* aarch64_fmulxhf */
    case 2741:  /* aarch64_fmulxsf */
    case 2742:  /* aarch64_fmulxdf */
    case 2743:  /* *aarch64_mulx_elt_to_128v2sf */
    case 2744:  /* *aarch64_mulx_elt_to_64v4sf */
    case 2745:  /* *aarch64_mulx_eltv2sf */
    case 2746:  /* *aarch64_mulx_eltv4sf */
    case 2747:  /* *aarch64_mulx_eltv2df */
    case 2748:  /* *aarch64_mulx_elt_from_dupv4hf */
    case 2749:  /* *aarch64_mulx_elt_from_dupv8hf */
    case 2750:  /* *aarch64_mulx_elt_from_dupv2sf */
    case 2751:  /* *aarch64_mulx_elt_from_dupv4sf */
    case 2752:  /* *aarch64_mulx_elt_from_dupv2df */
    case 2753:  /* *aarch64_vgetfmulxv2sf */
    case 2754:  /* *aarch64_vgetfmulxv4sf */
    case 2755:  /* *aarch64_vgetfmulxv2df */
    case 2756:  /* aarch64_sqaddv8qi */
    case 2757:  /* aarch64_uqaddv8qi */
    case 2758:  /* aarch64_sqsubv8qi */
    case 2759:  /* aarch64_uqsubv8qi */
    case 2760:  /* aarch64_sqaddv16qi */
    case 2761:  /* aarch64_uqaddv16qi */
    case 2762:  /* aarch64_sqsubv16qi */
    case 2763:  /* aarch64_uqsubv16qi */
    case 2764:  /* aarch64_sqaddv4hi */
    case 2765:  /* aarch64_uqaddv4hi */
    case 2766:  /* aarch64_sqsubv4hi */
    case 2767:  /* aarch64_uqsubv4hi */
    case 2768:  /* aarch64_sqaddv8hi */
    case 2769:  /* aarch64_uqaddv8hi */
    case 2770:  /* aarch64_sqsubv8hi */
    case 2771:  /* aarch64_uqsubv8hi */
    case 2772:  /* aarch64_sqaddv2si */
    case 2773:  /* aarch64_uqaddv2si */
    case 2774:  /* aarch64_sqsubv2si */
    case 2775:  /* aarch64_uqsubv2si */
    case 2776:  /* aarch64_sqaddv4si */
    case 2777:  /* aarch64_uqaddv4si */
    case 2778:  /* aarch64_sqsubv4si */
    case 2779:  /* aarch64_uqsubv4si */
    case 2780:  /* aarch64_sqaddv2di */
    case 2781:  /* aarch64_uqaddv2di */
    case 2782:  /* aarch64_sqsubv2di */
    case 2783:  /* aarch64_uqsubv2di */
    case 2784:  /* aarch64_sqaddqi */
    case 2785:  /* aarch64_uqaddqi */
    case 2786:  /* aarch64_sqsubqi */
    case 2787:  /* aarch64_uqsubqi */
    case 2788:  /* aarch64_sqaddhi */
    case 2789:  /* aarch64_uqaddhi */
    case 2790:  /* aarch64_sqsubhi */
    case 2791:  /* aarch64_uqsubhi */
    case 2792:  /* aarch64_sqaddsi */
    case 2793:  /* aarch64_uqaddsi */
    case 2794:  /* aarch64_sqsubsi */
    case 2795:  /* aarch64_uqsubsi */
    case 2796:  /* aarch64_sqadddi */
    case 2797:  /* aarch64_uqadddi */
    case 2798:  /* aarch64_sqsubdi */
    case 2799:  /* aarch64_uqsubdi */
    case 2800:  /* aarch64_suqaddv8qi */
    case 2801:  /* aarch64_usqaddv8qi */
    case 2802:  /* aarch64_suqaddv16qi */
    case 2803:  /* aarch64_usqaddv16qi */
    case 2804:  /* aarch64_suqaddv4hi */
    case 2805:  /* aarch64_usqaddv4hi */
    case 2806:  /* aarch64_suqaddv8hi */
    case 2807:  /* aarch64_usqaddv8hi */
    case 2808:  /* aarch64_suqaddv2si */
    case 2809:  /* aarch64_usqaddv2si */
    case 2810:  /* aarch64_suqaddv4si */
    case 2811:  /* aarch64_usqaddv4si */
    case 2812:  /* aarch64_suqaddv2di */
    case 2813:  /* aarch64_usqaddv2di */
    case 2814:  /* aarch64_suqaddqi */
    case 2815:  /* aarch64_usqaddqi */
    case 2816:  /* aarch64_suqaddhi */
    case 2817:  /* aarch64_usqaddhi */
    case 2818:  /* aarch64_suqaddsi */
    case 2819:  /* aarch64_usqaddsi */
    case 2820:  /* aarch64_suqadddi */
    case 2821:  /* aarch64_usqadddi */
    case 2822:  /* aarch64_sqmovnhi */
    case 2823:  /* aarch64_uqmovnhi */
    case 2824:  /* aarch64_sqmovnsi */
    case 2825:  /* aarch64_uqmovnsi */
    case 2826:  /* aarch64_sqmovndi */
    case 2827:  /* aarch64_uqmovndi */
    case 2828:  /* aarch64_sqmovnv8hi_insn_le */
    case 2829:  /* aarch64_uqmovnv8hi_insn_le */
    case 2830:  /* aarch64_sqmovnv4si_insn_le */
    case 2831:  /* aarch64_uqmovnv4si_insn_le */
    case 2832:  /* aarch64_sqmovnv2di_insn_le */
    case 2833:  /* aarch64_uqmovnv2di_insn_le */
    case 2834:  /* aarch64_sqmovnv8hi_insn_be */
    case 2835:  /* aarch64_uqmovnv8hi_insn_be */
    case 2836:  /* aarch64_sqmovnv4si_insn_be */
    case 2837:  /* aarch64_uqmovnv4si_insn_be */
    case 2838:  /* aarch64_sqmovnv2di_insn_be */
    case 2839:  /* aarch64_uqmovnv2di_insn_be */
    case 2840:  /* aarch64_sqxtn2v8hi_le */
    case 2841:  /* aarch64_uqxtn2v8hi_le */
    case 2842:  /* aarch64_sqxtn2v4si_le */
    case 2843:  /* aarch64_uqxtn2v4si_le */
    case 2844:  /* aarch64_sqxtn2v2di_le */
    case 2845:  /* aarch64_uqxtn2v2di_le */
    case 2846:  /* aarch64_sqxtn2v8hi_be */
    case 2847:  /* aarch64_uqxtn2v8hi_be */
    case 2848:  /* aarch64_sqxtn2v4si_be */
    case 2849:  /* aarch64_uqxtn2v4si_be */
    case 2850:  /* aarch64_sqxtn2v2di_be */
    case 2851:  /* aarch64_uqxtn2v2di_be */
    case 2852:  /* aarch64_sqmovunhi */
    case 2853:  /* aarch64_sqmovunsi */
    case 2854:  /* aarch64_sqmovundi */
    case 2855:  /* aarch64_sqmovunv8hi_insn_le */
    case 2856:  /* aarch64_sqmovunv4si_insn_le */
    case 2857:  /* aarch64_sqmovunv2di_insn_le */
    case 2858:  /* aarch64_sqmovunv8hi_insn_be */
    case 2859:  /* aarch64_sqmovunv4si_insn_be */
    case 2860:  /* aarch64_sqmovunv2di_insn_be */
    case 2861:  /* aarch64_sqxtun2v8hi_le */
    case 2862:  /* aarch64_sqxtun2v4si_le */
    case 2863:  /* aarch64_sqxtun2v2di_le */
    case 2864:  /* aarch64_sqxtun2v8hi_be */
    case 2865:  /* aarch64_sqxtun2v4si_be */
    case 2866:  /* aarch64_sqxtun2v2di_be */
    case 2867:  /* aarch64_sqnegv8qi */
    case 2868:  /* aarch64_sqabsv8qi */
    case 2869:  /* aarch64_sqnegv16qi */
    case 2870:  /* aarch64_sqabsv16qi */
    case 2871:  /* aarch64_sqnegv4hi */
    case 2872:  /* aarch64_sqabsv4hi */
    case 2873:  /* aarch64_sqnegv8hi */
    case 2874:  /* aarch64_sqabsv8hi */
    case 2875:  /* aarch64_sqnegv2si */
    case 2876:  /* aarch64_sqabsv2si */
    case 2877:  /* aarch64_sqnegv4si */
    case 2878:  /* aarch64_sqabsv4si */
    case 2879:  /* aarch64_sqnegv2di */
    case 2880:  /* aarch64_sqabsv2di */
    case 2881:  /* aarch64_sqnegqi */
    case 2882:  /* aarch64_sqabsqi */
    case 2883:  /* aarch64_sqneghi */
    case 2884:  /* aarch64_sqabshi */
    case 2885:  /* aarch64_sqnegsi */
    case 2886:  /* aarch64_sqabssi */
    case 2887:  /* aarch64_sqnegdi */
    case 2888:  /* aarch64_sqabsdi */
    case 2889:  /* aarch64_sqdmulhv4hi */
    case 2890:  /* aarch64_sqrdmulhv4hi */
    case 2891:  /* aarch64_sqdmulhv8hi */
    case 2892:  /* aarch64_sqrdmulhv8hi */
    case 2893:  /* aarch64_sqdmulhv2si */
    case 2894:  /* aarch64_sqrdmulhv2si */
    case 2895:  /* aarch64_sqdmulhv4si */
    case 2896:  /* aarch64_sqrdmulhv4si */
    case 2897:  /* aarch64_sqdmulhhi */
    case 2898:  /* aarch64_sqrdmulhhi */
    case 2899:  /* aarch64_sqdmulhsi */
    case 2900:  /* aarch64_sqrdmulhsi */
    case 2901:  /* aarch64_sqdmulh_nv4hi */
    case 2902:  /* aarch64_sqrdmulh_nv4hi */
    case 2903:  /* aarch64_sqdmulh_nv8hi */
    case 2904:  /* aarch64_sqrdmulh_nv8hi */
    case 2905:  /* aarch64_sqdmulh_nv2si */
    case 2906:  /* aarch64_sqrdmulh_nv2si */
    case 2907:  /* aarch64_sqdmulh_nv4si */
    case 2908:  /* aarch64_sqrdmulh_nv4si */
    case 2909:  /* aarch64_sqdmulh_lanev4hi */
    case 2910:  /* aarch64_sqrdmulh_lanev4hi */
    case 2911:  /* aarch64_sqdmulh_lanev8hi */
    case 2912:  /* aarch64_sqrdmulh_lanev8hi */
    case 2913:  /* aarch64_sqdmulh_lanev2si */
    case 2914:  /* aarch64_sqrdmulh_lanev2si */
    case 2915:  /* aarch64_sqdmulh_lanev4si */
    case 2916:  /* aarch64_sqrdmulh_lanev4si */
    case 2917:  /* aarch64_sqdmulh_laneqv4hi */
    case 2918:  /* aarch64_sqrdmulh_laneqv4hi */
    case 2919:  /* aarch64_sqdmulh_laneqv8hi */
    case 2920:  /* aarch64_sqrdmulh_laneqv8hi */
    case 2921:  /* aarch64_sqdmulh_laneqv2si */
    case 2922:  /* aarch64_sqrdmulh_laneqv2si */
    case 2923:  /* aarch64_sqdmulh_laneqv4si */
    case 2924:  /* aarch64_sqrdmulh_laneqv4si */
    case 2925:  /* aarch64_sqdmulh_lanehi */
    case 2926:  /* aarch64_sqrdmulh_lanehi */
    case 2927:  /* aarch64_sqdmulh_lanesi */
    case 2928:  /* aarch64_sqrdmulh_lanesi */
    case 2929:  /* aarch64_sqdmulh_laneqhi */
    case 2930:  /* aarch64_sqrdmulh_laneqhi */
    case 2931:  /* aarch64_sqdmulh_laneqsi */
    case 2932:  /* aarch64_sqrdmulh_laneqsi */
    case 2933:  /* aarch64_sqrdmlahv4hi */
    case 2934:  /* aarch64_sqrdmlshv4hi */
    case 2935:  /* aarch64_sqrdmlahv8hi */
    case 2936:  /* aarch64_sqrdmlshv8hi */
    case 2937:  /* aarch64_sqrdmlahv2si */
    case 2938:  /* aarch64_sqrdmlshv2si */
    case 2939:  /* aarch64_sqrdmlahv4si */
    case 2940:  /* aarch64_sqrdmlshv4si */
    case 2941:  /* aarch64_sqrdmlahhi */
    case 2942:  /* aarch64_sqrdmlshhi */
    case 2943:  /* aarch64_sqrdmlahsi */
    case 2944:  /* aarch64_sqrdmlshsi */
    case 2945:  /* aarch64_sqrdmlah_lanev4hi */
    case 2946:  /* aarch64_sqrdmlsh_lanev4hi */
    case 2947:  /* aarch64_sqrdmlah_lanev8hi */
    case 2948:  /* aarch64_sqrdmlsh_lanev8hi */
    case 2949:  /* aarch64_sqrdmlah_lanev2si */
    case 2950:  /* aarch64_sqrdmlsh_lanev2si */
    case 2951:  /* aarch64_sqrdmlah_lanev4si */
    case 2952:  /* aarch64_sqrdmlsh_lanev4si */
    case 2953:  /* aarch64_sqrdmlah_lanehi */
    case 2954:  /* aarch64_sqrdmlsh_lanehi */
    case 2955:  /* aarch64_sqrdmlah_lanesi */
    case 2956:  /* aarch64_sqrdmlsh_lanesi */
    case 2957:  /* aarch64_sqrdmlah_laneqv4hi */
    case 2958:  /* aarch64_sqrdmlsh_laneqv4hi */
    case 2959:  /* aarch64_sqrdmlah_laneqv8hi */
    case 2960:  /* aarch64_sqrdmlsh_laneqv8hi */
    case 2961:  /* aarch64_sqrdmlah_laneqv2si */
    case 2962:  /* aarch64_sqrdmlsh_laneqv2si */
    case 2963:  /* aarch64_sqrdmlah_laneqv4si */
    case 2964:  /* aarch64_sqrdmlsh_laneqv4si */
    case 2965:  /* aarch64_sqrdmlah_laneqhi */
    case 2966:  /* aarch64_sqrdmlsh_laneqhi */
    case 2967:  /* aarch64_sqrdmlah_laneqsi */
    case 2968:  /* aarch64_sqrdmlsh_laneqsi */
    case 2969:  /* aarch64_sqdmlalv4hi */
    case 2970:  /* aarch64_sqdmlalv2si */
    case 2971:  /* aarch64_sqdmlalhi */
    case 2972:  /* aarch64_sqdmlalsi */
    case 2973:  /* aarch64_sqdmlslv4hi */
    case 2974:  /* aarch64_sqdmlslv2si */
    case 2975:  /* aarch64_sqdmlslhi */
    case 2976:  /* aarch64_sqdmlslsi */
    case 2977:  /* aarch64_sqdmlal_lanev4hi */
    case 2978:  /* aarch64_sqdmlal_lanev2si */
    case 2979:  /* aarch64_sqdmlsl_lanev4hi */
    case 2980:  /* aarch64_sqdmlsl_lanev2si */
    case 2981:  /* aarch64_sqdmlsl_laneqv4hi */
    case 2982:  /* aarch64_sqdmlsl_laneqv2si */
    case 2983:  /* aarch64_sqdmlal_laneqv4hi */
    case 2984:  /* aarch64_sqdmlal_laneqv2si */
    case 2985:  /* aarch64_sqdmlal_lanehi */
    case 2986:  /* aarch64_sqdmlal_lanesi */
    case 2987:  /* aarch64_sqdmlsl_lanehi */
    case 2988:  /* aarch64_sqdmlsl_lanesi */
    case 2989:  /* aarch64_sqdmlal_laneqhi */
    case 2990:  /* aarch64_sqdmlal_laneqsi */
    case 2991:  /* aarch64_sqdmlsl_laneqhi */
    case 2992:  /* aarch64_sqdmlsl_laneqsi */
    case 2993:  /* aarch64_sqdmlsl_nv4hi */
    case 2994:  /* aarch64_sqdmlsl_nv2si */
    case 2995:  /* aarch64_sqdmlal_nv4hi */
    case 2996:  /* aarch64_sqdmlal_nv2si */
    case 2997:  /* aarch64_sqdmlal2v8hi_internal */
    case 2998:  /* aarch64_sqdmlal2v4si_internal */
    case 2999:  /* aarch64_sqdmlsl2v8hi_internal */
    case 3000:  /* aarch64_sqdmlsl2v4si_internal */
    case 3001:  /* aarch64_sqdmlsl2_lanev8hi_internal */
    case 3002:  /* aarch64_sqdmlsl2_lanev4si_internal */
    case 3003:  /* aarch64_sqdmlal2_lanev8hi_internal */
    case 3004:  /* aarch64_sqdmlal2_lanev4si_internal */
    case 3005:  /* aarch64_sqdmlsl2_laneqv8hi_internal */
    case 3006:  /* aarch64_sqdmlsl2_laneqv4si_internal */
    case 3007:  /* aarch64_sqdmlal2_laneqv8hi_internal */
    case 3008:  /* aarch64_sqdmlal2_laneqv4si_internal */
    case 3009:  /* aarch64_sqdmlsl2_nv8hi_internal */
    case 3010:  /* aarch64_sqdmlsl2_nv4si_internal */
    case 3011:  /* aarch64_sqdmlal2_nv8hi_internal */
    case 3012:  /* aarch64_sqdmlal2_nv4si_internal */
    case 3013:  /* aarch64_sqdmullv4hi */
    case 3014:  /* aarch64_sqdmullv2si */
    case 3015:  /* aarch64_sqdmullhi */
    case 3016:  /* aarch64_sqdmullsi */
    case 3017:  /* aarch64_sqdmull_lanev4hi */
    case 3018:  /* aarch64_sqdmull_lanev2si */
    case 3019:  /* aarch64_sqdmull_laneqv4hi */
    case 3020:  /* aarch64_sqdmull_laneqv2si */
    case 3021:  /* aarch64_sqdmull_lanehi */
    case 3022:  /* aarch64_sqdmull_lanesi */
    case 3023:  /* aarch64_sqdmull_laneqhi */
    case 3024:  /* aarch64_sqdmull_laneqsi */
    case 3025:  /* aarch64_sqdmull_nv4hi */
    case 3026:  /* aarch64_sqdmull_nv2si */
    case 3027:  /* aarch64_sqdmull2v8hi_internal */
    case 3028:  /* aarch64_sqdmull2v4si_internal */
    case 3029:  /* aarch64_sqdmull2_lanev8hi_internal */
    case 3030:  /* aarch64_sqdmull2_lanev4si_internal */
    case 3031:  /* aarch64_sqdmull2_laneqv8hi_internal */
    case 3032:  /* aarch64_sqdmull2_laneqv4si_internal */
    case 3033:  /* aarch64_sqdmull2_nv8hi_internal */
    case 3034:  /* aarch64_sqdmull2_nv4si_internal */
    case 3035:  /* aarch64_sshlv8qi */
    case 3036:  /* aarch64_ushlv8qi */
    case 3037:  /* aarch64_srshlv8qi */
    case 3038:  /* aarch64_urshlv8qi */
    case 3039:  /* aarch64_sshlv16qi */
    case 3040:  /* aarch64_ushlv16qi */
    case 3041:  /* aarch64_srshlv16qi */
    case 3042:  /* aarch64_urshlv16qi */
    case 3043:  /* aarch64_sshlv4hi */
    case 3044:  /* aarch64_ushlv4hi */
    case 3045:  /* aarch64_srshlv4hi */
    case 3046:  /* aarch64_urshlv4hi */
    case 3047:  /* aarch64_sshlv8hi */
    case 3048:  /* aarch64_ushlv8hi */
    case 3049:  /* aarch64_srshlv8hi */
    case 3050:  /* aarch64_urshlv8hi */
    case 3051:  /* aarch64_sshlv2si */
    case 3052:  /* aarch64_ushlv2si */
    case 3053:  /* aarch64_srshlv2si */
    case 3054:  /* aarch64_urshlv2si */
    case 3055:  /* aarch64_sshlv4si */
    case 3056:  /* aarch64_ushlv4si */
    case 3057:  /* aarch64_srshlv4si */
    case 3058:  /* aarch64_urshlv4si */
    case 3059:  /* aarch64_sshlv2di */
    case 3060:  /* aarch64_ushlv2di */
    case 3061:  /* aarch64_srshlv2di */
    case 3062:  /* aarch64_urshlv2di */
    case 3063:  /* aarch64_sshldi */
    case 3064:  /* aarch64_ushldi */
    case 3065:  /* aarch64_srshldi */
    case 3066:  /* aarch64_urshldi */
    case 3067:  /* aarch64_sqshlv8qi */
    case 3068:  /* aarch64_uqshlv8qi */
    case 3069:  /* aarch64_sqrshlv8qi */
    case 3070:  /* aarch64_uqrshlv8qi */
    case 3071:  /* aarch64_sqshlv16qi */
    case 3072:  /* aarch64_uqshlv16qi */
    case 3073:  /* aarch64_sqrshlv16qi */
    case 3074:  /* aarch64_uqrshlv16qi */
    case 3075:  /* aarch64_sqshlv4hi */
    case 3076:  /* aarch64_uqshlv4hi */
    case 3077:  /* aarch64_sqrshlv4hi */
    case 3078:  /* aarch64_uqrshlv4hi */
    case 3079:  /* aarch64_sqshlv8hi */
    case 3080:  /* aarch64_uqshlv8hi */
    case 3081:  /* aarch64_sqrshlv8hi */
    case 3082:  /* aarch64_uqrshlv8hi */
    case 3083:  /* aarch64_sqshlv2si */
    case 3084:  /* aarch64_uqshlv2si */
    case 3085:  /* aarch64_sqrshlv2si */
    case 3086:  /* aarch64_uqrshlv2si */
    case 3087:  /* aarch64_sqshlv4si */
    case 3088:  /* aarch64_uqshlv4si */
    case 3089:  /* aarch64_sqrshlv4si */
    case 3090:  /* aarch64_uqrshlv4si */
    case 3091:  /* aarch64_sqshlv2di */
    case 3092:  /* aarch64_uqshlv2di */
    case 3093:  /* aarch64_sqrshlv2di */
    case 3094:  /* aarch64_uqrshlv2di */
    case 3095:  /* aarch64_sqshlqi */
    case 3096:  /* aarch64_uqshlqi */
    case 3097:  /* aarch64_sqrshlqi */
    case 3098:  /* aarch64_uqrshlqi */
    case 3099:  /* aarch64_sqshlhi */
    case 3100:  /* aarch64_uqshlhi */
    case 3101:  /* aarch64_sqrshlhi */
    case 3102:  /* aarch64_uqrshlhi */
    case 3103:  /* aarch64_sqshlsi */
    case 3104:  /* aarch64_uqshlsi */
    case 3105:  /* aarch64_sqrshlsi */
    case 3106:  /* aarch64_uqrshlsi */
    case 3107:  /* aarch64_sqshldi */
    case 3108:  /* aarch64_uqshldi */
    case 3109:  /* aarch64_sqrshldi */
    case 3110:  /* aarch64_uqrshldi */
    case 3111:  /* aarch64_sshllv16qi_internal */
    case 3112:  /* aarch64_ushllv16qi_internal */
    case 3113:  /* aarch64_sshllv8hi_internal */
    case 3114:  /* aarch64_ushllv8hi_internal */
    case 3115:  /* aarch64_sshllv4si_internal */
    case 3116:  /* aarch64_ushllv4si_internal */
    case 3117:  /* aarch64_sshll2v16qi_internal */
    case 3118:  /* aarch64_ushll2v16qi_internal */
    case 3119:  /* aarch64_sshll2v8hi_internal */
    case 3120:  /* aarch64_ushll2v8hi_internal */
    case 3121:  /* aarch64_sshll2v4si_internal */
    case 3122:  /* aarch64_ushll2v4si_internal */
    case 3123:  /* aarch64_sshll_nv8qi */
    case 3124:  /* aarch64_ushll_nv8qi */
    case 3125:  /* aarch64_sshll_nv4hi */
    case 3126:  /* aarch64_ushll_nv4hi */
    case 3127:  /* aarch64_sshll_nv2si */
    case 3128:  /* aarch64_ushll_nv2si */
    case 3129:  /* aarch64_sshll2_nv16qi */
    case 3130:  /* aarch64_ushll2_nv16qi */
    case 3131:  /* aarch64_sshll2_nv8hi */
    case 3132:  /* aarch64_ushll2_nv8hi */
    case 3133:  /* aarch64_sshll2_nv4si */
    case 3134:  /* aarch64_ushll2_nv4si */
    case 3135:  /* aarch64_srshr_nv8qi */
    case 3136:  /* aarch64_urshr_nv8qi */
    case 3137:  /* aarch64_srshr_nv16qi */
    case 3138:  /* aarch64_urshr_nv16qi */
    case 3139:  /* aarch64_srshr_nv4hi */
    case 3140:  /* aarch64_urshr_nv4hi */
    case 3141:  /* aarch64_srshr_nv8hi */
    case 3142:  /* aarch64_urshr_nv8hi */
    case 3143:  /* aarch64_srshr_nv2si */
    case 3144:  /* aarch64_urshr_nv2si */
    case 3145:  /* aarch64_srshr_nv4si */
    case 3146:  /* aarch64_urshr_nv4si */
    case 3147:  /* aarch64_srshr_nv2di */
    case 3148:  /* aarch64_urshr_nv2di */
    case 3149:  /* aarch64_srshr_ndi */
    case 3150:  /* aarch64_urshr_ndi */
    case 3151:  /* aarch64_ssra_nv8qi */
    case 3152:  /* aarch64_usra_nv8qi */
    case 3153:  /* aarch64_srsra_nv8qi */
    case 3154:  /* aarch64_ursra_nv8qi */
    case 3155:  /* aarch64_ssra_nv16qi */
    case 3156:  /* aarch64_usra_nv16qi */
    case 3157:  /* aarch64_srsra_nv16qi */
    case 3158:  /* aarch64_ursra_nv16qi */
    case 3159:  /* aarch64_ssra_nv4hi */
    case 3160:  /* aarch64_usra_nv4hi */
    case 3161:  /* aarch64_srsra_nv4hi */
    case 3162:  /* aarch64_ursra_nv4hi */
    case 3163:  /* aarch64_ssra_nv8hi */
    case 3164:  /* aarch64_usra_nv8hi */
    case 3165:  /* aarch64_srsra_nv8hi */
    case 3166:  /* aarch64_ursra_nv8hi */
    case 3167:  /* aarch64_ssra_nv2si */
    case 3168:  /* aarch64_usra_nv2si */
    case 3169:  /* aarch64_srsra_nv2si */
    case 3170:  /* aarch64_ursra_nv2si */
    case 3171:  /* aarch64_ssra_nv4si */
    case 3172:  /* aarch64_usra_nv4si */
    case 3173:  /* aarch64_srsra_nv4si */
    case 3174:  /* aarch64_ursra_nv4si */
    case 3175:  /* aarch64_ssra_nv2di */
    case 3176:  /* aarch64_usra_nv2di */
    case 3177:  /* aarch64_srsra_nv2di */
    case 3178:  /* aarch64_ursra_nv2di */
    case 3179:  /* aarch64_ssra_ndi */
    case 3180:  /* aarch64_usra_ndi */
    case 3181:  /* aarch64_srsra_ndi */
    case 3182:  /* aarch64_ursra_ndi */
    case 3183:  /* aarch64_ssli_nv8qi */
    case 3184:  /* aarch64_usli_nv8qi */
    case 3185:  /* aarch64_ssri_nv8qi */
    case 3186:  /* aarch64_usri_nv8qi */
    case 3187:  /* aarch64_ssli_nv16qi */
    case 3188:  /* aarch64_usli_nv16qi */
    case 3189:  /* aarch64_ssri_nv16qi */
    case 3190:  /* aarch64_usri_nv16qi */
    case 3191:  /* aarch64_ssli_nv4hi */
    case 3192:  /* aarch64_usli_nv4hi */
    case 3193:  /* aarch64_ssri_nv4hi */
    case 3194:  /* aarch64_usri_nv4hi */
    case 3195:  /* aarch64_ssli_nv8hi */
    case 3196:  /* aarch64_usli_nv8hi */
    case 3197:  /* aarch64_ssri_nv8hi */
    case 3198:  /* aarch64_usri_nv8hi */
    case 3199:  /* aarch64_ssli_nv2si */
    case 3200:  /* aarch64_usli_nv2si */
    case 3201:  /* aarch64_ssri_nv2si */
    case 3202:  /* aarch64_usri_nv2si */
    case 3203:  /* aarch64_ssli_nv4si */
    case 3204:  /* aarch64_usli_nv4si */
    case 3205:  /* aarch64_ssri_nv4si */
    case 3206:  /* aarch64_usri_nv4si */
    case 3207:  /* aarch64_ssli_nv2di */
    case 3208:  /* aarch64_usli_nv2di */
    case 3209:  /* aarch64_ssri_nv2di */
    case 3210:  /* aarch64_usri_nv2di */
    case 3211:  /* aarch64_ssli_ndi */
    case 3212:  /* aarch64_usli_ndi */
    case 3213:  /* aarch64_ssri_ndi */
    case 3214:  /* aarch64_usri_ndi */
    case 3215:  /* aarch64_sqshlu_nv8qi */
    case 3216:  /* aarch64_sqshl_nv8qi */
    case 3217:  /* aarch64_uqshl_nv8qi */
    case 3218:  /* aarch64_sqshlu_nv16qi */
    case 3219:  /* aarch64_sqshl_nv16qi */
    case 3220:  /* aarch64_uqshl_nv16qi */
    case 3221:  /* aarch64_sqshlu_nv4hi */
    case 3222:  /* aarch64_sqshl_nv4hi */
    case 3223:  /* aarch64_uqshl_nv4hi */
    case 3224:  /* aarch64_sqshlu_nv8hi */
    case 3225:  /* aarch64_sqshl_nv8hi */
    case 3226:  /* aarch64_uqshl_nv8hi */
    case 3227:  /* aarch64_sqshlu_nv2si */
    case 3228:  /* aarch64_sqshl_nv2si */
    case 3229:  /* aarch64_uqshl_nv2si */
    case 3230:  /* aarch64_sqshlu_nv4si */
    case 3231:  /* aarch64_sqshl_nv4si */
    case 3232:  /* aarch64_uqshl_nv4si */
    case 3233:  /* aarch64_sqshlu_nv2di */
    case 3234:  /* aarch64_sqshl_nv2di */
    case 3235:  /* aarch64_uqshl_nv2di */
    case 3236:  /* aarch64_sqshlu_nqi */
    case 3237:  /* aarch64_sqshl_nqi */
    case 3238:  /* aarch64_uqshl_nqi */
    case 3239:  /* aarch64_sqshlu_nhi */
    case 3240:  /* aarch64_sqshl_nhi */
    case 3241:  /* aarch64_uqshl_nhi */
    case 3242:  /* aarch64_sqshlu_nsi */
    case 3243:  /* aarch64_sqshl_nsi */
    case 3244:  /* aarch64_uqshl_nsi */
    case 3245:  /* aarch64_sqshlu_ndi */
    case 3246:  /* aarch64_sqshl_ndi */
    case 3247:  /* aarch64_uqshl_ndi */
    case 3248:  /* aarch64_sqshrun_nhi */
    case 3249:  /* aarch64_sqrshrun_nhi */
    case 3250:  /* aarch64_sqshrn_nhi */
    case 3251:  /* aarch64_uqshrn_nhi */
    case 3252:  /* aarch64_sqrshrn_nhi */
    case 3253:  /* aarch64_uqrshrn_nhi */
    case 3254:  /* aarch64_sqshrun_nsi */
    case 3255:  /* aarch64_sqrshrun_nsi */
    case 3256:  /* aarch64_sqshrn_nsi */
    case 3257:  /* aarch64_uqshrn_nsi */
    case 3258:  /* aarch64_sqrshrn_nsi */
    case 3259:  /* aarch64_uqrshrn_nsi */
    case 3260:  /* aarch64_sqshrun_ndi */
    case 3261:  /* aarch64_sqrshrun_ndi */
    case 3262:  /* aarch64_sqshrn_ndi */
    case 3263:  /* aarch64_uqshrn_ndi */
    case 3264:  /* aarch64_sqrshrn_ndi */
    case 3265:  /* aarch64_uqrshrn_ndi */
    case 3266:  /* aarch64_sqshrun_nv8hi_insn_le */
    case 3267:  /* aarch64_sqrshrun_nv8hi_insn_le */
    case 3268:  /* aarch64_sqshrn_nv8hi_insn_le */
    case 3269:  /* aarch64_uqshrn_nv8hi_insn_le */
    case 3270:  /* aarch64_sqrshrn_nv8hi_insn_le */
    case 3271:  /* aarch64_uqrshrn_nv8hi_insn_le */
    case 3272:  /* aarch64_sqshrun_nv4si_insn_le */
    case 3273:  /* aarch64_sqrshrun_nv4si_insn_le */
    case 3274:  /* aarch64_sqshrn_nv4si_insn_le */
    case 3275:  /* aarch64_uqshrn_nv4si_insn_le */
    case 3276:  /* aarch64_sqrshrn_nv4si_insn_le */
    case 3277:  /* aarch64_uqrshrn_nv4si_insn_le */
    case 3278:  /* aarch64_sqshrun_nv2di_insn_le */
    case 3279:  /* aarch64_sqrshrun_nv2di_insn_le */
    case 3280:  /* aarch64_sqshrn_nv2di_insn_le */
    case 3281:  /* aarch64_uqshrn_nv2di_insn_le */
    case 3282:  /* aarch64_sqrshrn_nv2di_insn_le */
    case 3283:  /* aarch64_uqrshrn_nv2di_insn_le */
    case 3284:  /* aarch64_sqshrun_nv8hi_insn_be */
    case 3285:  /* aarch64_sqrshrun_nv8hi_insn_be */
    case 3286:  /* aarch64_sqshrn_nv8hi_insn_be */
    case 3287:  /* aarch64_uqshrn_nv8hi_insn_be */
    case 3288:  /* aarch64_sqrshrn_nv8hi_insn_be */
    case 3289:  /* aarch64_uqrshrn_nv8hi_insn_be */
    case 3290:  /* aarch64_sqshrun_nv4si_insn_be */
    case 3291:  /* aarch64_sqrshrun_nv4si_insn_be */
    case 3292:  /* aarch64_sqshrn_nv4si_insn_be */
    case 3293:  /* aarch64_uqshrn_nv4si_insn_be */
    case 3294:  /* aarch64_sqrshrn_nv4si_insn_be */
    case 3295:  /* aarch64_uqrshrn_nv4si_insn_be */
    case 3296:  /* aarch64_sqshrun_nv2di_insn_be */
    case 3297:  /* aarch64_sqrshrun_nv2di_insn_be */
    case 3298:  /* aarch64_sqshrn_nv2di_insn_be */
    case 3299:  /* aarch64_uqshrn_nv2di_insn_be */
    case 3300:  /* aarch64_sqrshrn_nv2di_insn_be */
    case 3301:  /* aarch64_uqrshrn_nv2di_insn_be */
    case 3302:  /* aarch64_sqshrun2_nv8hi_insn_le */
    case 3303:  /* aarch64_sqrshrun2_nv8hi_insn_le */
    case 3304:  /* aarch64_sqshrn2_nv8hi_insn_le */
    case 3305:  /* aarch64_uqshrn2_nv8hi_insn_le */
    case 3306:  /* aarch64_sqrshrn2_nv8hi_insn_le */
    case 3307:  /* aarch64_uqrshrn2_nv8hi_insn_le */
    case 3308:  /* aarch64_sqshrun2_nv4si_insn_le */
    case 3309:  /* aarch64_sqrshrun2_nv4si_insn_le */
    case 3310:  /* aarch64_sqshrn2_nv4si_insn_le */
    case 3311:  /* aarch64_uqshrn2_nv4si_insn_le */
    case 3312:  /* aarch64_sqrshrn2_nv4si_insn_le */
    case 3313:  /* aarch64_uqrshrn2_nv4si_insn_le */
    case 3314:  /* aarch64_sqshrun2_nv2di_insn_le */
    case 3315:  /* aarch64_sqrshrun2_nv2di_insn_le */
    case 3316:  /* aarch64_sqshrn2_nv2di_insn_le */
    case 3317:  /* aarch64_uqshrn2_nv2di_insn_le */
    case 3318:  /* aarch64_sqrshrn2_nv2di_insn_le */
    case 3319:  /* aarch64_uqrshrn2_nv2di_insn_le */
    case 3320:  /* aarch64_sqshrun2_nv8hi_insn_be */
    case 3321:  /* aarch64_sqrshrun2_nv8hi_insn_be */
    case 3322:  /* aarch64_sqshrn2_nv8hi_insn_be */
    case 3323:  /* aarch64_uqshrn2_nv8hi_insn_be */
    case 3324:  /* aarch64_sqrshrn2_nv8hi_insn_be */
    case 3325:  /* aarch64_uqrshrn2_nv8hi_insn_be */
    case 3326:  /* aarch64_sqshrun2_nv4si_insn_be */
    case 3327:  /* aarch64_sqrshrun2_nv4si_insn_be */
    case 3328:  /* aarch64_sqshrn2_nv4si_insn_be */
    case 3329:  /* aarch64_uqshrn2_nv4si_insn_be */
    case 3330:  /* aarch64_sqrshrn2_nv4si_insn_be */
    case 3331:  /* aarch64_uqrshrn2_nv4si_insn_be */
    case 3332:  /* aarch64_sqshrun2_nv2di_insn_be */
    case 3333:  /* aarch64_sqrshrun2_nv2di_insn_be */
    case 3334:  /* aarch64_sqshrn2_nv2di_insn_be */
    case 3335:  /* aarch64_uqshrn2_nv2di_insn_be */
    case 3336:  /* aarch64_sqrshrn2_nv2di_insn_be */
    case 3337:  /* aarch64_uqrshrn2_nv2di_insn_be */
    case 3338:  /* aarch64_cmltv8qi */
    case 3339:  /* aarch64_cmlev8qi */
    case 3340:  /* aarch64_cmeqv8qi */
    case 3341:  /* aarch64_cmgev8qi */
    case 3342:  /* aarch64_cmgtv8qi */
    case 3343:  /* aarch64_cmltv16qi */
    case 3344:  /* aarch64_cmlev16qi */
    case 3345:  /* aarch64_cmeqv16qi */
    case 3346:  /* aarch64_cmgev16qi */
    case 3347:  /* aarch64_cmgtv16qi */
    case 3348:  /* aarch64_cmltv4hi */
    case 3349:  /* aarch64_cmlev4hi */
    case 3350:  /* aarch64_cmeqv4hi */
    case 3351:  /* aarch64_cmgev4hi */
    case 3352:  /* aarch64_cmgtv4hi */
    case 3353:  /* aarch64_cmltv8hi */
    case 3354:  /* aarch64_cmlev8hi */
    case 3355:  /* aarch64_cmeqv8hi */
    case 3356:  /* aarch64_cmgev8hi */
    case 3357:  /* aarch64_cmgtv8hi */
    case 3358:  /* aarch64_cmltv2si */
    case 3359:  /* aarch64_cmlev2si */
    case 3360:  /* aarch64_cmeqv2si */
    case 3361:  /* aarch64_cmgev2si */
    case 3362:  /* aarch64_cmgtv2si */
    case 3363:  /* aarch64_cmltv4si */
    case 3364:  /* aarch64_cmlev4si */
    case 3365:  /* aarch64_cmeqv4si */
    case 3366:  /* aarch64_cmgev4si */
    case 3367:  /* aarch64_cmgtv4si */
    case 3368:  /* aarch64_cmltv2di */
    case 3369:  /* aarch64_cmlev2di */
    case 3370:  /* aarch64_cmeqv2di */
    case 3371:  /* aarch64_cmgev2di */
    case 3372:  /* aarch64_cmgtv2di */
    case 3373:  /* aarch64_cmltdi */
    case 3374:  /* aarch64_cmledi */
    case 3375:  /* aarch64_cmeqdi */
    case 3376:  /* aarch64_cmgedi */
    case 3377:  /* aarch64_cmgtdi */
    case 3378:  /* *aarch64_cmltdi */
    case 3379:  /* *aarch64_cmledi */
    case 3380:  /* *aarch64_cmeqdi */
    case 3381:  /* *aarch64_cmgedi */
    case 3382:  /* *aarch64_cmgtdi */
    case 3383:  /* aarch64_cmltuv8qi */
    case 3384:  /* aarch64_cmleuv8qi */
    case 3385:  /* aarch64_cmgeuv8qi */
    case 3386:  /* aarch64_cmgtuv8qi */
    case 3387:  /* aarch64_cmltuv16qi */
    case 3388:  /* aarch64_cmleuv16qi */
    case 3389:  /* aarch64_cmgeuv16qi */
    case 3390:  /* aarch64_cmgtuv16qi */
    case 3391:  /* aarch64_cmltuv4hi */
    case 3392:  /* aarch64_cmleuv4hi */
    case 3393:  /* aarch64_cmgeuv4hi */
    case 3394:  /* aarch64_cmgtuv4hi */
    case 3395:  /* aarch64_cmltuv8hi */
    case 3396:  /* aarch64_cmleuv8hi */
    case 3397:  /* aarch64_cmgeuv8hi */
    case 3398:  /* aarch64_cmgtuv8hi */
    case 3399:  /* aarch64_cmltuv2si */
    case 3400:  /* aarch64_cmleuv2si */
    case 3401:  /* aarch64_cmgeuv2si */
    case 3402:  /* aarch64_cmgtuv2si */
    case 3403:  /* aarch64_cmltuv4si */
    case 3404:  /* aarch64_cmleuv4si */
    case 3405:  /* aarch64_cmgeuv4si */
    case 3406:  /* aarch64_cmgtuv4si */
    case 3407:  /* aarch64_cmltuv2di */
    case 3408:  /* aarch64_cmleuv2di */
    case 3409:  /* aarch64_cmgeuv2di */
    case 3410:  /* aarch64_cmgtuv2di */
    case 3411:  /* aarch64_cmltudi */
    case 3412:  /* aarch64_cmleudi */
    case 3413:  /* aarch64_cmgeudi */
    case 3414:  /* aarch64_cmgtudi */
    case 3415:  /* *aarch64_cmltudi */
    case 3416:  /* *aarch64_cmleudi */
    case 3417:  /* *aarch64_cmgeudi */
    case 3418:  /* *aarch64_cmgtudi */
    case 3419:  /* aarch64_cmtstv8qi */
    case 3420:  /* aarch64_cmtstv16qi */
    case 3421:  /* aarch64_cmtstv4hi */
    case 3422:  /* aarch64_cmtstv8hi */
    case 3423:  /* aarch64_cmtstv2si */
    case 3424:  /* aarch64_cmtstv4si */
    case 3425:  /* aarch64_cmtstv2di */
    case 3426:  /* *aarch64_cmtst_same_v8qi */
    case 3427:  /* *aarch64_cmtst_same_v16qi */
    case 3428:  /* *aarch64_cmtst_same_v4hi */
    case 3429:  /* *aarch64_cmtst_same_v8hi */
    case 3430:  /* *aarch64_cmtst_same_v2si */
    case 3431:  /* *aarch64_cmtst_same_v4si */
    case 3432:  /* *aarch64_cmtst_same_v2di */
    case 3433:  /* aarch64_cmtstdi */
    case 3434:  /* *aarch64_cmtstdi */
    case 3435:  /* aarch64_cmltv4hf */
    case 3436:  /* aarch64_cmlev4hf */
    case 3437:  /* aarch64_cmeqv4hf */
    case 3438:  /* aarch64_cmgev4hf */
    case 3439:  /* aarch64_cmgtv4hf */
    case 3440:  /* aarch64_cmltv8hf */
    case 3441:  /* aarch64_cmlev8hf */
    case 3442:  /* aarch64_cmeqv8hf */
    case 3443:  /* aarch64_cmgev8hf */
    case 3444:  /* aarch64_cmgtv8hf */
    case 3445:  /* aarch64_cmltv2sf */
    case 3446:  /* aarch64_cmlev2sf */
    case 3447:  /* aarch64_cmeqv2sf */
    case 3448:  /* aarch64_cmgev2sf */
    case 3449:  /* aarch64_cmgtv2sf */
    case 3450:  /* aarch64_cmltv4sf */
    case 3451:  /* aarch64_cmlev4sf */
    case 3452:  /* aarch64_cmeqv4sf */
    case 3453:  /* aarch64_cmgev4sf */
    case 3454:  /* aarch64_cmgtv4sf */
    case 3455:  /* aarch64_cmltv2df */
    case 3456:  /* aarch64_cmlev2df */
    case 3457:  /* aarch64_cmeqv2df */
    case 3458:  /* aarch64_cmgev2df */
    case 3459:  /* aarch64_cmgtv2df */
    case 3460:  /* aarch64_cmlthf */
    case 3461:  /* aarch64_cmlehf */
    case 3462:  /* aarch64_cmeqhf */
    case 3463:  /* aarch64_cmgehf */
    case 3464:  /* aarch64_cmgthf */
    case 3465:  /* aarch64_cmltsf */
    case 3466:  /* aarch64_cmlesf */
    case 3467:  /* aarch64_cmeqsf */
    case 3468:  /* aarch64_cmgesf */
    case 3469:  /* aarch64_cmgtsf */
    case 3470:  /* aarch64_cmltdf */
    case 3471:  /* aarch64_cmledf */
    case 3472:  /* aarch64_cmeqdf */
    case 3473:  /* aarch64_cmgedf */
    case 3474:  /* aarch64_cmgtdf */
    case 3475:  /* aarch64_facltv4hf */
    case 3476:  /* aarch64_faclev4hf */
    case 3477:  /* aarch64_facgev4hf */
    case 3478:  /* aarch64_facgtv4hf */
    case 3479:  /* aarch64_facltv8hf */
    case 3480:  /* aarch64_faclev8hf */
    case 3481:  /* aarch64_facgev8hf */
    case 3482:  /* aarch64_facgtv8hf */
    case 3483:  /* aarch64_facltv2sf */
    case 3484:  /* aarch64_faclev2sf */
    case 3485:  /* aarch64_facgev2sf */
    case 3486:  /* aarch64_facgtv2sf */
    case 3487:  /* aarch64_facltv4sf */
    case 3488:  /* aarch64_faclev4sf */
    case 3489:  /* aarch64_facgev4sf */
    case 3490:  /* aarch64_facgtv4sf */
    case 3491:  /* aarch64_facltv2df */
    case 3492:  /* aarch64_faclev2df */
    case 3493:  /* aarch64_facgev2df */
    case 3494:  /* aarch64_facgtv2df */
    case 3495:  /* aarch64_faclthf */
    case 3496:  /* aarch64_faclehf */
    case 3497:  /* aarch64_facgehf */
    case 3498:  /* aarch64_facgthf */
    case 3499:  /* aarch64_facltsf */
    case 3500:  /* aarch64_faclesf */
    case 3501:  /* aarch64_facgesf */
    case 3502:  /* aarch64_facgtsf */
    case 3503:  /* aarch64_facltdf */
    case 3504:  /* aarch64_facledf */
    case 3505:  /* aarch64_facgedf */
    case 3506:  /* aarch64_facgtdf */
    case 3507:  /* aarch64_addpv8qi */
    case 3508:  /* aarch64_addpv16qi */
    case 3509:  /* aarch64_addpv4hi */
    case 3510:  /* aarch64_addpv8hi */
    case 3511:  /* aarch64_addpv2si */
    case 3512:  /* aarch64_addpv4si */
    case 3513:  /* aarch64_addpv2di */
    case 3514:  /* aarch64_addpdi */
    case 3515:  /* *sqrtv4hf2 */
    case 3516:  /* *sqrtv8hf2 */
    case 3517:  /* *sqrtv2sf2 */
    case 3518:  /* *sqrtv4sf2 */
    case 3519:  /* *sqrtv2df2 */
    case 3520:  /* aarch64_simd_ld2v16qi */
    case 3521:  /* aarch64_simd_ld2v8hi */
    case 3522:  /* aarch64_simd_ld2v4si */
    case 3523:  /* aarch64_simd_ld2v2di */
    case 3524:  /* aarch64_simd_ld2v8hf */
    case 3525:  /* aarch64_simd_ld2v4sf */
    case 3526:  /* aarch64_simd_ld2v2df */
    case 3527:  /* aarch64_simd_ld2v8bf */
    case 3528:  /* aarch64_simd_ld2rv8qi */
    case 3529:  /* aarch64_simd_ld2rv4hi */
    case 3530:  /* aarch64_simd_ld2rv2si */
    case 3531:  /* aarch64_simd_ld2rdi */
    case 3532:  /* aarch64_simd_ld2rv4hf */
    case 3533:  /* aarch64_simd_ld2rv2sf */
    case 3534:  /* aarch64_simd_ld2rdf */
    case 3535:  /* aarch64_simd_ld2rv4bf */
    case 3536:  /* aarch64_simd_ld2rv16qi */
    case 3537:  /* aarch64_simd_ld2rv8hi */
    case 3538:  /* aarch64_simd_ld2rv4si */
    case 3539:  /* aarch64_simd_ld2rv2di */
    case 3540:  /* aarch64_simd_ld2rv8hf */
    case 3541:  /* aarch64_simd_ld2rv4sf */
    case 3542:  /* aarch64_simd_ld2rv2df */
    case 3543:  /* aarch64_simd_ld2rv8bf */
    case 3544:  /* aarch64_vec_load_lanesv2x8qi_lanev8qi */
    case 3545:  /* aarch64_vec_load_lanesv2x4hi_lanev4hi */
    case 3546:  /* aarch64_vec_load_lanesv2x2si_lanev2si */
    case 3547:  /* aarch64_vec_load_lanesv2x1di_lanedi */
    case 3548:  /* aarch64_vec_load_lanesv2x4hf_lanev4hf */
    case 3549:  /* aarch64_vec_load_lanesv2x2sf_lanev2sf */
    case 3550:  /* aarch64_vec_load_lanesv2x1df_lanedf */
    case 3551:  /* aarch64_vec_load_lanesv2x4bf_lanev4bf */
    case 3552:  /* aarch64_vec_load_lanesv2x16qi_lanev16qi */
    case 3553:  /* aarch64_vec_load_lanesv2x8hi_lanev8hi */
    case 3554:  /* aarch64_vec_load_lanesv2x4si_lanev4si */
    case 3555:  /* aarch64_vec_load_lanesv2x2di_lanev2di */
    case 3556:  /* aarch64_vec_load_lanesv2x8hf_lanev8hf */
    case 3557:  /* aarch64_vec_load_lanesv2x4sf_lanev4sf */
    case 3558:  /* aarch64_vec_load_lanesv2x2df_lanev2df */
    case 3559:  /* aarch64_vec_load_lanesv2x8bf_lanev8bf */
    case 3560:  /* aarch64_simd_st2v16qi */
    case 3561:  /* aarch64_simd_st2v8hi */
    case 3562:  /* aarch64_simd_st2v4si */
    case 3563:  /* aarch64_simd_st2v2di */
    case 3564:  /* aarch64_simd_st2v8hf */
    case 3565:  /* aarch64_simd_st2v4sf */
    case 3566:  /* aarch64_simd_st2v2df */
    case 3567:  /* aarch64_simd_st2v8bf */
    case 3568:  /* aarch64_vec_store_lanesv2x8qi_lanev8qi */
    case 3569:  /* aarch64_vec_store_lanesv2x4hi_lanev4hi */
    case 3570:  /* aarch64_vec_store_lanesv2x2si_lanev2si */
    case 3571:  /* aarch64_vec_store_lanesv2x1di_lanedi */
    case 3572:  /* aarch64_vec_store_lanesv2x4hf_lanev4hf */
    case 3573:  /* aarch64_vec_store_lanesv2x2sf_lanev2sf */
    case 3574:  /* aarch64_vec_store_lanesv2x1df_lanedf */
    case 3575:  /* aarch64_vec_store_lanesv2x4bf_lanev4bf */
    case 3576:  /* aarch64_vec_store_lanesv2x16qi_lanev16qi */
    case 3577:  /* aarch64_vec_store_lanesv2x8hi_lanev8hi */
    case 3578:  /* aarch64_vec_store_lanesv2x4si_lanev4si */
    case 3579:  /* aarch64_vec_store_lanesv2x2di_lanev2di */
    case 3580:  /* aarch64_vec_store_lanesv2x8hf_lanev8hf */
    case 3581:  /* aarch64_vec_store_lanesv2x4sf_lanev4sf */
    case 3582:  /* aarch64_vec_store_lanesv2x2df_lanev2df */
    case 3583:  /* aarch64_vec_store_lanesv2x8bf_lanev8bf */
    case 3584:  /* aarch64_simd_ld3v16qi */
    case 3585:  /* aarch64_simd_ld3v8hi */
    case 3586:  /* aarch64_simd_ld3v4si */
    case 3587:  /* aarch64_simd_ld3v2di */
    case 3588:  /* aarch64_simd_ld3v8hf */
    case 3589:  /* aarch64_simd_ld3v4sf */
    case 3590:  /* aarch64_simd_ld3v2df */
    case 3591:  /* aarch64_simd_ld3v8bf */
    case 3592:  /* aarch64_simd_ld3rv8qi */
    case 3593:  /* aarch64_simd_ld3rv4hi */
    case 3594:  /* aarch64_simd_ld3rv2si */
    case 3595:  /* aarch64_simd_ld3rdi */
    case 3596:  /* aarch64_simd_ld3rv4hf */
    case 3597:  /* aarch64_simd_ld3rv2sf */
    case 3598:  /* aarch64_simd_ld3rdf */
    case 3599:  /* aarch64_simd_ld3rv4bf */
    case 3600:  /* aarch64_simd_ld3rv16qi */
    case 3601:  /* aarch64_simd_ld3rv8hi */
    case 3602:  /* aarch64_simd_ld3rv4si */
    case 3603:  /* aarch64_simd_ld3rv2di */
    case 3604:  /* aarch64_simd_ld3rv8hf */
    case 3605:  /* aarch64_simd_ld3rv4sf */
    case 3606:  /* aarch64_simd_ld3rv2df */
    case 3607:  /* aarch64_simd_ld3rv8bf */
    case 3608:  /* aarch64_vec_load_lanesv3x8qi_lanev8qi */
    case 3609:  /* aarch64_vec_load_lanesv3x4hi_lanev4hi */
    case 3610:  /* aarch64_vec_load_lanesv3x2si_lanev2si */
    case 3611:  /* aarch64_vec_load_lanesv3x1di_lanedi */
    case 3612:  /* aarch64_vec_load_lanesv3x4hf_lanev4hf */
    case 3613:  /* aarch64_vec_load_lanesv3x2sf_lanev2sf */
    case 3614:  /* aarch64_vec_load_lanesv3x1df_lanedf */
    case 3615:  /* aarch64_vec_load_lanesv3x4bf_lanev4bf */
    case 3616:  /* aarch64_vec_load_lanesv3x16qi_lanev16qi */
    case 3617:  /* aarch64_vec_load_lanesv3x8hi_lanev8hi */
    case 3618:  /* aarch64_vec_load_lanesv3x4si_lanev4si */
    case 3619:  /* aarch64_vec_load_lanesv3x2di_lanev2di */
    case 3620:  /* aarch64_vec_load_lanesv3x8hf_lanev8hf */
    case 3621:  /* aarch64_vec_load_lanesv3x4sf_lanev4sf */
    case 3622:  /* aarch64_vec_load_lanesv3x2df_lanev2df */
    case 3623:  /* aarch64_vec_load_lanesv3x8bf_lanev8bf */
    case 3624:  /* aarch64_simd_st3v16qi */
    case 3625:  /* aarch64_simd_st3v8hi */
    case 3626:  /* aarch64_simd_st3v4si */
    case 3627:  /* aarch64_simd_st3v2di */
    case 3628:  /* aarch64_simd_st3v8hf */
    case 3629:  /* aarch64_simd_st3v4sf */
    case 3630:  /* aarch64_simd_st3v2df */
    case 3631:  /* aarch64_simd_st3v8bf */
    case 3632:  /* aarch64_vec_store_lanesv3x8qi_lanev8qi */
    case 3633:  /* aarch64_vec_store_lanesv3x4hi_lanev4hi */
    case 3634:  /* aarch64_vec_store_lanesv3x2si_lanev2si */
    case 3635:  /* aarch64_vec_store_lanesv3x1di_lanedi */
    case 3636:  /* aarch64_vec_store_lanesv3x4hf_lanev4hf */
    case 3637:  /* aarch64_vec_store_lanesv3x2sf_lanev2sf */
    case 3638:  /* aarch64_vec_store_lanesv3x1df_lanedf */
    case 3639:  /* aarch64_vec_store_lanesv3x4bf_lanev4bf */
    case 3640:  /* aarch64_vec_store_lanesv3x16qi_lanev16qi */
    case 3641:  /* aarch64_vec_store_lanesv3x8hi_lanev8hi */
    case 3642:  /* aarch64_vec_store_lanesv3x4si_lanev4si */
    case 3643:  /* aarch64_vec_store_lanesv3x2di_lanev2di */
    case 3644:  /* aarch64_vec_store_lanesv3x8hf_lanev8hf */
    case 3645:  /* aarch64_vec_store_lanesv3x4sf_lanev4sf */
    case 3646:  /* aarch64_vec_store_lanesv3x2df_lanev2df */
    case 3647:  /* aarch64_vec_store_lanesv3x8bf_lanev8bf */
    case 3648:  /* aarch64_simd_ld4v16qi */
    case 3649:  /* aarch64_simd_ld4v8hi */
    case 3650:  /* aarch64_simd_ld4v4si */
    case 3651:  /* aarch64_simd_ld4v2di */
    case 3652:  /* aarch64_simd_ld4v8hf */
    case 3653:  /* aarch64_simd_ld4v4sf */
    case 3654:  /* aarch64_simd_ld4v2df */
    case 3655:  /* aarch64_simd_ld4v8bf */
    case 3656:  /* aarch64_simd_ld4rv8qi */
    case 3657:  /* aarch64_simd_ld4rv4hi */
    case 3658:  /* aarch64_simd_ld4rv2si */
    case 3659:  /* aarch64_simd_ld4rdi */
    case 3660:  /* aarch64_simd_ld4rv4hf */
    case 3661:  /* aarch64_simd_ld4rv2sf */
    case 3662:  /* aarch64_simd_ld4rdf */
    case 3663:  /* aarch64_simd_ld4rv4bf */
    case 3664:  /* aarch64_simd_ld4rv16qi */
    case 3665:  /* aarch64_simd_ld4rv8hi */
    case 3666:  /* aarch64_simd_ld4rv4si */
    case 3667:  /* aarch64_simd_ld4rv2di */
    case 3668:  /* aarch64_simd_ld4rv8hf */
    case 3669:  /* aarch64_simd_ld4rv4sf */
    case 3670:  /* aarch64_simd_ld4rv2df */
    case 3671:  /* aarch64_simd_ld4rv8bf */
    case 3672:  /* aarch64_vec_load_lanesv4x8qi_lanev8qi */
    case 3673:  /* aarch64_vec_load_lanesv4x4hi_lanev4hi */
    case 3674:  /* aarch64_vec_load_lanesv4x2si_lanev2si */
    case 3675:  /* aarch64_vec_load_lanesv4x1di_lanedi */
    case 3676:  /* aarch64_vec_load_lanesv4x4hf_lanev4hf */
    case 3677:  /* aarch64_vec_load_lanesv4x2sf_lanev2sf */
    case 3678:  /* aarch64_vec_load_lanesv4x1df_lanedf */
    case 3679:  /* aarch64_vec_load_lanesv4x4bf_lanev4bf */
    case 3680:  /* aarch64_vec_load_lanesv4x16qi_lanev16qi */
    case 3681:  /* aarch64_vec_load_lanesv4x8hi_lanev8hi */
    case 3682:  /* aarch64_vec_load_lanesv4x4si_lanev4si */
    case 3683:  /* aarch64_vec_load_lanesv4x2di_lanev2di */
    case 3684:  /* aarch64_vec_load_lanesv4x8hf_lanev8hf */
    case 3685:  /* aarch64_vec_load_lanesv4x4sf_lanev4sf */
    case 3686:  /* aarch64_vec_load_lanesv4x2df_lanev2df */
    case 3687:  /* aarch64_vec_load_lanesv4x8bf_lanev8bf */
    case 3688:  /* aarch64_simd_st4v16qi */
    case 3689:  /* aarch64_simd_st4v8hi */
    case 3690:  /* aarch64_simd_st4v4si */
    case 3691:  /* aarch64_simd_st4v2di */
    case 3692:  /* aarch64_simd_st4v8hf */
    case 3693:  /* aarch64_simd_st4v4sf */
    case 3694:  /* aarch64_simd_st4v2df */
    case 3695:  /* aarch64_simd_st4v8bf */
    case 3696:  /* aarch64_vec_store_lanesv4x8qi_lanev8qi */
    case 3697:  /* aarch64_vec_store_lanesv4x4hi_lanev4hi */
    case 3698:  /* aarch64_vec_store_lanesv4x2si_lanev2si */
    case 3699:  /* aarch64_vec_store_lanesv4x1di_lanedi */
    case 3700:  /* aarch64_vec_store_lanesv4x4hf_lanev4hf */
    case 3701:  /* aarch64_vec_store_lanesv4x2sf_lanev2sf */
    case 3702:  /* aarch64_vec_store_lanesv4x1df_lanedf */
    case 3703:  /* aarch64_vec_store_lanesv4x4bf_lanev4bf */
    case 3704:  /* aarch64_vec_store_lanesv4x16qi_lanev16qi */
    case 3705:  /* aarch64_vec_store_lanesv4x8hi_lanev8hi */
    case 3706:  /* aarch64_vec_store_lanesv4x4si_lanev4si */
    case 3707:  /* aarch64_vec_store_lanesv4x2di_lanev2di */
    case 3708:  /* aarch64_vec_store_lanesv4x8hf_lanev8hf */
    case 3709:  /* aarch64_vec_store_lanesv4x4sf_lanev4sf */
    case 3710:  /* aarch64_vec_store_lanesv4x2df_lanev2df */
    case 3711:  /* aarch64_vec_store_lanesv4x8bf_lanev8bf */
    case 3712:  /* aarch64_rev_reglistv2x8qi */
    case 3713:  /* aarch64_rev_reglistv2x4hi */
    case 3714:  /* aarch64_rev_reglistv2x2si */
    case 3715:  /* aarch64_rev_reglistv2x1di */
    case 3716:  /* aarch64_rev_reglistv2x4hf */
    case 3717:  /* aarch64_rev_reglistv2x2sf */
    case 3718:  /* aarch64_rev_reglistv2x1df */
    case 3719:  /* aarch64_rev_reglistv2x4bf */
    case 3720:  /* aarch64_rev_reglistv3x8qi */
    case 3721:  /* aarch64_rev_reglistv3x4hi */
    case 3722:  /* aarch64_rev_reglistv3x2si */
    case 3723:  /* aarch64_rev_reglistv3x1di */
    case 3724:  /* aarch64_rev_reglistv3x4hf */
    case 3725:  /* aarch64_rev_reglistv3x2sf */
    case 3726:  /* aarch64_rev_reglistv3x1df */
    case 3727:  /* aarch64_rev_reglistv3x4bf */
    case 3728:  /* aarch64_rev_reglistv4x8qi */
    case 3729:  /* aarch64_rev_reglistv4x4hi */
    case 3730:  /* aarch64_rev_reglistv4x2si */
    case 3731:  /* aarch64_rev_reglistv4x1di */
    case 3732:  /* aarch64_rev_reglistv4x4hf */
    case 3733:  /* aarch64_rev_reglistv4x2sf */
    case 3734:  /* aarch64_rev_reglistv4x1df */
    case 3735:  /* aarch64_rev_reglistv4x4bf */
    case 3736:  /* aarch64_rev_reglistv2x16qi */
    case 3737:  /* aarch64_rev_reglistv2x8hi */
    case 3738:  /* aarch64_rev_reglistv2x4si */
    case 3739:  /* aarch64_rev_reglistv2x2di */
    case 3740:  /* aarch64_rev_reglistv2x8hf */
    case 3741:  /* aarch64_rev_reglistv2x4sf */
    case 3742:  /* aarch64_rev_reglistv2x2df */
    case 3743:  /* aarch64_rev_reglistv2x8bf */
    case 3744:  /* aarch64_rev_reglistv3x16qi */
    case 3745:  /* aarch64_rev_reglistv3x8hi */
    case 3746:  /* aarch64_rev_reglistv3x4si */
    case 3747:  /* aarch64_rev_reglistv3x2di */
    case 3748:  /* aarch64_rev_reglistv3x8hf */
    case 3749:  /* aarch64_rev_reglistv3x4sf */
    case 3750:  /* aarch64_rev_reglistv3x2df */
    case 3751:  /* aarch64_rev_reglistv3x8bf */
    case 3752:  /* aarch64_rev_reglistv4x16qi */
    case 3753:  /* aarch64_rev_reglistv4x8hi */
    case 3754:  /* aarch64_rev_reglistv4x4si */
    case 3755:  /* aarch64_rev_reglistv4x2di */
    case 3756:  /* aarch64_rev_reglistv4x8hf */
    case 3757:  /* aarch64_rev_reglistv4x4sf */
    case 3758:  /* aarch64_rev_reglistv4x2df */
    case 3759:  /* aarch64_rev_reglistv4x8bf */
    case 3760:  /* aarch64_ld1_x3_v8qi */
    case 3761:  /* aarch64_ld1_x3_v4hi */
    case 3762:  /* aarch64_ld1_x3_v2si */
    case 3763:  /* aarch64_ld1_x3_di */
    case 3764:  /* aarch64_ld1_x3_v4hf */
    case 3765:  /* aarch64_ld1_x3_v2sf */
    case 3766:  /* aarch64_ld1_x3_df */
    case 3767:  /* aarch64_ld1_x3_v4bf */
    case 3768:  /* aarch64_ld1_x3_v16qi */
    case 3769:  /* aarch64_ld1_x3_v8hi */
    case 3770:  /* aarch64_ld1_x3_v4si */
    case 3771:  /* aarch64_ld1_x3_v2di */
    case 3772:  /* aarch64_ld1_x3_v8hf */
    case 3773:  /* aarch64_ld1_x3_v4sf */
    case 3774:  /* aarch64_ld1_x3_v2df */
    case 3775:  /* aarch64_ld1_x3_v8bf */
    case 3776:  /* aarch64_ld1_x4_v8qi */
    case 3777:  /* aarch64_ld1_x4_v4hi */
    case 3778:  /* aarch64_ld1_x4_v2si */
    case 3779:  /* aarch64_ld1_x4_di */
    case 3780:  /* aarch64_ld1_x4_v4hf */
    case 3781:  /* aarch64_ld1_x4_v2sf */
    case 3782:  /* aarch64_ld1_x4_df */
    case 3783:  /* aarch64_ld1_x4_v4bf */
    case 3784:  /* aarch64_ld1_x4_v16qi */
    case 3785:  /* aarch64_ld1_x4_v8hi */
    case 3786:  /* aarch64_ld1_x4_v4si */
    case 3787:  /* aarch64_ld1_x4_v2di */
    case 3788:  /* aarch64_ld1_x4_v8hf */
    case 3789:  /* aarch64_ld1_x4_v4sf */
    case 3790:  /* aarch64_ld1_x4_v2df */
    case 3791:  /* aarch64_ld1_x4_v8bf */
    case 3792:  /* aarch64_st1_x2_v8qi */
    case 3793:  /* aarch64_st1_x2_v4hi */
    case 3794:  /* aarch64_st1_x2_v2si */
    case 3795:  /* aarch64_st1_x2_di */
    case 3796:  /* aarch64_st1_x2_v4hf */
    case 3797:  /* aarch64_st1_x2_v2sf */
    case 3798:  /* aarch64_st1_x2_df */
    case 3799:  /* aarch64_st1_x2_v4bf */
    case 3800:  /* aarch64_st1_x2_v16qi */
    case 3801:  /* aarch64_st1_x2_v8hi */
    case 3802:  /* aarch64_st1_x2_v4si */
    case 3803:  /* aarch64_st1_x2_v2di */
    case 3804:  /* aarch64_st1_x2_v8hf */
    case 3805:  /* aarch64_st1_x2_v4sf */
    case 3806:  /* aarch64_st1_x2_v2df */
    case 3807:  /* aarch64_st1_x2_v8bf */
    case 3808:  /* aarch64_st1_x3_v8qi */
    case 3809:  /* aarch64_st1_x3_v4hi */
    case 3810:  /* aarch64_st1_x3_v2si */
    case 3811:  /* aarch64_st1_x3_di */
    case 3812:  /* aarch64_st1_x3_v4hf */
    case 3813:  /* aarch64_st1_x3_v2sf */
    case 3814:  /* aarch64_st1_x3_df */
    case 3815:  /* aarch64_st1_x3_v4bf */
    case 3824:  /* aarch64_st1_x4_v8qi */
    case 3825:  /* aarch64_st1_x4_v4hi */
    case 3826:  /* aarch64_st1_x4_v2si */
    case 3827:  /* aarch64_st1_x4_di */
    case 3828:  /* aarch64_st1_x4_v4hf */
    case 3829:  /* aarch64_st1_x4_v2sf */
    case 3830:  /* aarch64_st1_x4_df */
    case 3831:  /* aarch64_st1_x4_v4bf */
    case 3840:  /* *aarch64_movv2x8qi */
    case 3841:  /* *aarch64_movv2x4hi */
    case 3842:  /* *aarch64_movv2x2si */
    case 3843:  /* *aarch64_movv2x1di */
    case 3844:  /* *aarch64_movv2x4hf */
    case 3845:  /* *aarch64_movv2x2sf */
    case 3846:  /* *aarch64_movv2x1df */
    case 3847:  /* *aarch64_movv2x4bf */
    case 3848:  /* *aarch64_movv3x8qi */
    case 3849:  /* *aarch64_movv3x4hi */
    case 3850:  /* *aarch64_movv3x2si */
    case 3851:  /* *aarch64_movv3x1di */
    case 3852:  /* *aarch64_movv3x4hf */
    case 3853:  /* *aarch64_movv3x2sf */
    case 3854:  /* *aarch64_movv3x1df */
    case 3855:  /* *aarch64_movv3x4bf */
    case 3856:  /* *aarch64_movv4x8qi */
    case 3857:  /* *aarch64_movv4x4hi */
    case 3858:  /* *aarch64_movv4x2si */
    case 3859:  /* *aarch64_movv4x1di */
    case 3860:  /* *aarch64_movv4x4hf */
    case 3861:  /* *aarch64_movv4x2sf */
    case 3862:  /* *aarch64_movv4x1df */
    case 3863:  /* *aarch64_movv4x4bf */
    case 3864:  /* *aarch64_movv2x16qi */
    case 3865:  /* *aarch64_movv2x8hi */
    case 3866:  /* *aarch64_movv2x4si */
    case 3867:  /* *aarch64_movv2x2di */
    case 3868:  /* *aarch64_movv2x8hf */
    case 3869:  /* *aarch64_movv2x4sf */
    case 3870:  /* *aarch64_movv2x2df */
    case 3871:  /* *aarch64_movv2x8bf */
    case 3872:  /* *aarch64_movv3x16qi */
    case 3873:  /* *aarch64_movv3x8hi */
    case 3874:  /* *aarch64_movv3x4si */
    case 3875:  /* *aarch64_movv3x2di */
    case 3876:  /* *aarch64_movv3x8hf */
    case 3877:  /* *aarch64_movv3x4sf */
    case 3878:  /* *aarch64_movv3x2df */
    case 3879:  /* *aarch64_movv3x8bf */
    case 3880:  /* *aarch64_movv4x16qi */
    case 3881:  /* *aarch64_movv4x8hi */
    case 3882:  /* *aarch64_movv4x4si */
    case 3883:  /* *aarch64_movv4x2di */
    case 3884:  /* *aarch64_movv4x8hf */
    case 3885:  /* *aarch64_movv4x4sf */
    case 3886:  /* *aarch64_movv4x2df */
    case 3887:  /* *aarch64_movv4x8bf */
    case 3888:  /* *aarch64_movoi */
    case 3889:  /* *aarch64_movci */
    case 3890:  /* *aarch64_movxi */
    case 3891:  /* *aarch64_movv8di */
    case 3892:  /* aarch64_be_ld1v8qi */
    case 3893:  /* aarch64_be_ld1v16qi */
    case 3894:  /* aarch64_be_ld1v4hi */
    case 3895:  /* aarch64_be_ld1v8hi */
    case 3896:  /* aarch64_be_ld1v2si */
    case 3897:  /* aarch64_be_ld1v4si */
    case 3898:  /* aarch64_be_ld1v2di */
    case 3899:  /* aarch64_be_ld1v4hf */
    case 3900:  /* aarch64_be_ld1v8hf */
    case 3901:  /* aarch64_be_ld1v4bf */
    case 3902:  /* aarch64_be_ld1v8bf */
    case 3903:  /* aarch64_be_ld1v2sf */
    case 3904:  /* aarch64_be_ld1v4sf */
    case 3905:  /* aarch64_be_ld1v2df */
    case 3906:  /* aarch64_be_ld1di */
    case 3907:  /* aarch64_be_st1v8qi */
    case 3908:  /* aarch64_be_st1v16qi */
    case 3909:  /* aarch64_be_st1v4hi */
    case 3910:  /* aarch64_be_st1v8hi */
    case 3911:  /* aarch64_be_st1v2si */
    case 3912:  /* aarch64_be_st1v4si */
    case 3913:  /* aarch64_be_st1v2di */
    case 3914:  /* aarch64_be_st1v4hf */
    case 3915:  /* aarch64_be_st1v8hf */
    case 3916:  /* aarch64_be_st1v4bf */
    case 3917:  /* aarch64_be_st1v8bf */
    case 3918:  /* aarch64_be_st1v2sf */
    case 3919:  /* aarch64_be_st1v4sf */
    case 3920:  /* aarch64_be_st1v2df */
    case 3921:  /* aarch64_be_st1di */
    case 3922:  /* *aarch64_be_movv2x8qi */
    case 3923:  /* *aarch64_be_movv2x4hi */
    case 3924:  /* *aarch64_be_movv2x2si */
    case 3925:  /* *aarch64_be_movv2x1di */
    case 3926:  /* *aarch64_be_movv2x4hf */
    case 3927:  /* *aarch64_be_movv2x2sf */
    case 3928:  /* *aarch64_be_movv2x1df */
    case 3929:  /* *aarch64_be_movv2x4bf */
    case 3930:  /* *aarch64_be_movv2x16qi */
    case 3931:  /* *aarch64_be_movv2x8hi */
    case 3932:  /* *aarch64_be_movv2x4si */
    case 3933:  /* *aarch64_be_movv2x2di */
    case 3934:  /* *aarch64_be_movv2x8hf */
    case 3935:  /* *aarch64_be_movv2x4sf */
    case 3936:  /* *aarch64_be_movv2x2df */
    case 3937:  /* *aarch64_be_movv2x8bf */
    case 3938:  /* *aarch64_be_movoi */
    case 3939:  /* *aarch64_be_movv3x8qi */
    case 3940:  /* *aarch64_be_movv3x4hi */
    case 3941:  /* *aarch64_be_movv3x2si */
    case 3942:  /* *aarch64_be_movv3x1di */
    case 3943:  /* *aarch64_be_movv3x4hf */
    case 3944:  /* *aarch64_be_movv3x2sf */
    case 3945:  /* *aarch64_be_movv3x1df */
    case 3946:  /* *aarch64_be_movv3x4bf */
    case 3947:  /* *aarch64_be_movv3x16qi */
    case 3948:  /* *aarch64_be_movv3x8hi */
    case 3949:  /* *aarch64_be_movv3x4si */
    case 3950:  /* *aarch64_be_movv3x2di */
    case 3951:  /* *aarch64_be_movv3x8hf */
    case 3952:  /* *aarch64_be_movv3x4sf */
    case 3953:  /* *aarch64_be_movv3x2df */
    case 3954:  /* *aarch64_be_movv3x8bf */
    case 3955:  /* *aarch64_be_movci */
    case 3956:  /* *aarch64_be_movv4x8qi */
    case 3957:  /* *aarch64_be_movv4x4hi */
    case 3958:  /* *aarch64_be_movv4x2si */
    case 3959:  /* *aarch64_be_movv4x1di */
    case 3960:  /* *aarch64_be_movv4x4hf */
    case 3961:  /* *aarch64_be_movv4x2sf */
    case 3962:  /* *aarch64_be_movv4x1df */
    case 3963:  /* *aarch64_be_movv4x4bf */
    case 3964:  /* *aarch64_be_movv4x16qi */
    case 3965:  /* *aarch64_be_movv4x8hi */
    case 3966:  /* *aarch64_be_movv4x4si */
    case 3967:  /* *aarch64_be_movv4x2di */
    case 3968:  /* *aarch64_be_movv4x8hf */
    case 3969:  /* *aarch64_be_movv4x4sf */
    case 3970:  /* *aarch64_be_movv4x2df */
    case 3971:  /* *aarch64_be_movv4x8bf */
    case 3972:  /* *aarch64_be_movxi */
    case 3973:  /* aarch64_ld2v8qi_dreg */
    case 3974:  /* aarch64_ld2v4hi_dreg */
    case 3975:  /* aarch64_ld2v2si_dreg */
    case 3976:  /* aarch64_ld2v4hf_dreg */
    case 3977:  /* aarch64_ld2v2sf_dreg */
    case 3978:  /* aarch64_ld2v4bf_dreg */
    case 3979:  /* aarch64_ld2di_dreg */
    case 3980:  /* aarch64_ld2df_dreg */
    case 3981:  /* aarch64_ld3v8qi_dreg */
    case 3982:  /* aarch64_ld3v4hi_dreg */
    case 3983:  /* aarch64_ld3v2si_dreg */
    case 3984:  /* aarch64_ld3v4hf_dreg */
    case 3985:  /* aarch64_ld3v2sf_dreg */
    case 3986:  /* aarch64_ld3v4bf_dreg */
    case 3987:  /* aarch64_ld3di_dreg */
    case 3988:  /* aarch64_ld3df_dreg */
    case 3989:  /* aarch64_ld4v8qi_dreg */
    case 3990:  /* aarch64_ld4v4hi_dreg */
    case 3991:  /* aarch64_ld4v2si_dreg */
    case 3992:  /* aarch64_ld4v4hf_dreg */
    case 3993:  /* aarch64_ld4v2sf_dreg */
    case 3994:  /* aarch64_ld4v4bf_dreg */
    case 3995:  /* aarch64_ld4di_dreg */
    case 3996:  /* aarch64_ld4df_dreg */
    case 3997:  /* aarch64_qtbl1v8qi */
    case 3998:  /* aarch64_qtbl1v16qi */
    case 3999:  /* aarch64_qtbx1v8qi */
    case 4000:  /* aarch64_qtbx1v16qi */
    case 4001:  /* aarch64_qtbl2v8qi */
    case 4002:  /* aarch64_qtbl2v16qi */
    case 4003:  /* aarch64_qtbx2v8qi */
    case 4004:  /* aarch64_qtbx2v16qi */
    case 4005:  /* aarch64_qtbl3v8qi */
    case 4006:  /* aarch64_qtbl3v16qi */
    case 4007:  /* aarch64_qtbx3v8qi */
    case 4008:  /* aarch64_qtbx3v16qi */
    case 4009:  /* aarch64_qtbl4v8qi */
    case 4010:  /* aarch64_qtbl4v16qi */
    case 4011:  /* aarch64_qtbx4v8qi */
    case 4012:  /* aarch64_qtbx4v16qi */
    case 4013:  /* aarch64_combinev16qi */
    case 4014:  /* aarch64_zip1v8qi */
    case 4015:  /* aarch64_zip2v8qi */
    case 4016:  /* aarch64_trn1v8qi */
    case 4017:  /* aarch64_trn2v8qi */
    case 4018:  /* aarch64_uzp1v8qi */
    case 4019:  /* aarch64_uzp2v8qi */
    case 4020:  /* aarch64_zip1v16qi */
    case 4021:  /* aarch64_zip2v16qi */
    case 4022:  /* aarch64_trn1v16qi */
    case 4023:  /* aarch64_trn2v16qi */
    case 4024:  /* aarch64_uzp1v16qi */
    case 4025:  /* aarch64_uzp2v16qi */
    case 4026:  /* aarch64_zip1v4hi */
    case 4027:  /* aarch64_zip2v4hi */
    case 4028:  /* aarch64_trn1v4hi */
    case 4029:  /* aarch64_trn2v4hi */
    case 4030:  /* aarch64_uzp1v4hi */
    case 4031:  /* aarch64_uzp2v4hi */
    case 4032:  /* aarch64_zip1v8hi */
    case 4033:  /* aarch64_zip2v8hi */
    case 4034:  /* aarch64_trn1v8hi */
    case 4035:  /* aarch64_trn2v8hi */
    case 4036:  /* aarch64_uzp1v8hi */
    case 4037:  /* aarch64_uzp2v8hi */
    case 4038:  /* aarch64_zip1v2si */
    case 4039:  /* aarch64_zip2v2si */
    case 4040:  /* aarch64_trn1v2si */
    case 4041:  /* aarch64_trn2v2si */
    case 4042:  /* aarch64_uzp1v2si */
    case 4043:  /* aarch64_uzp2v2si */
    case 4044:  /* aarch64_zip1v4si */
    case 4045:  /* aarch64_zip2v4si */
    case 4046:  /* aarch64_trn1v4si */
    case 4047:  /* aarch64_trn2v4si */
    case 4048:  /* aarch64_uzp1v4si */
    case 4049:  /* aarch64_uzp2v4si */
    case 4050:  /* aarch64_zip1v2di */
    case 4051:  /* aarch64_zip2v2di */
    case 4052:  /* aarch64_trn1v2di */
    case 4053:  /* aarch64_trn2v2di */
    case 4054:  /* aarch64_uzp1v2di */
    case 4055:  /* aarch64_uzp2v2di */
    case 4056:  /* aarch64_zip1v4hf */
    case 4057:  /* aarch64_zip2v4hf */
    case 4058:  /* aarch64_trn1v4hf */
    case 4059:  /* aarch64_trn2v4hf */
    case 4060:  /* aarch64_uzp1v4hf */
    case 4061:  /* aarch64_uzp2v4hf */
    case 4062:  /* aarch64_zip1v8hf */
    case 4063:  /* aarch64_zip2v8hf */
    case 4064:  /* aarch64_trn1v8hf */
    case 4065:  /* aarch64_trn2v8hf */
    case 4066:  /* aarch64_uzp1v8hf */
    case 4067:  /* aarch64_uzp2v8hf */
    case 4068:  /* aarch64_zip1v4bf */
    case 4069:  /* aarch64_zip2v4bf */
    case 4070:  /* aarch64_trn1v4bf */
    case 4071:  /* aarch64_trn2v4bf */
    case 4072:  /* aarch64_uzp1v4bf */
    case 4073:  /* aarch64_uzp2v4bf */
    case 4074:  /* aarch64_zip1v8bf */
    case 4075:  /* aarch64_zip2v8bf */
    case 4076:  /* aarch64_trn1v8bf */
    case 4077:  /* aarch64_trn2v8bf */
    case 4078:  /* aarch64_uzp1v8bf */
    case 4079:  /* aarch64_uzp2v8bf */
    case 4080:  /* aarch64_zip1v2sf */
    case 4081:  /* aarch64_zip2v2sf */
    case 4082:  /* aarch64_trn1v2sf */
    case 4083:  /* aarch64_trn2v2sf */
    case 4084:  /* aarch64_uzp1v2sf */
    case 4085:  /* aarch64_uzp2v2sf */
    case 4086:  /* aarch64_zip1v4sf */
    case 4087:  /* aarch64_zip2v4sf */
    case 4088:  /* aarch64_trn1v4sf */
    case 4089:  /* aarch64_trn2v4sf */
    case 4090:  /* aarch64_uzp1v4sf */
    case 4091:  /* aarch64_uzp2v4sf */
    case 4092:  /* aarch64_zip1v2df */
    case 4093:  /* aarch64_zip2v2df */
    case 4094:  /* aarch64_trn1v2df */
    case 4095:  /* aarch64_trn2v2df */
    case 4096:  /* aarch64_uzp1v2df */
    case 4097:  /* aarch64_uzp2v2df */
    case 4098:  /* aarch64_extv8qi */
    case 4099:  /* aarch64_extv16qi */
    case 4100:  /* aarch64_extv4hi */
    case 4101:  /* aarch64_extv8hi */
    case 4102:  /* aarch64_extv2si */
    case 4103:  /* aarch64_extv4si */
    case 4104:  /* aarch64_extv2di */
    case 4105:  /* aarch64_extv4hf */
    case 4106:  /* aarch64_extv8hf */
    case 4107:  /* aarch64_extv4bf */
    case 4108:  /* aarch64_extv8bf */
    case 4109:  /* aarch64_extv2sf */
    case 4110:  /* aarch64_extv4sf */
    case 4111:  /* aarch64_extv2df */
    case 4112:  /* aarch64_rev64v8qi */
    case 4113:  /* aarch64_rev32v8qi */
    case 4114:  /* aarch64_rev16v8qi */
    case 4115:  /* aarch64_rev64v16qi */
    case 4116:  /* aarch64_rev32v16qi */
    case 4117:  /* aarch64_rev16v16qi */
    case 4118:  /* aarch64_rev64v4hi */
    case 4119:  /* aarch64_rev32v4hi */
    case 4120:  /* aarch64_rev16v4hi */
    case 4121:  /* aarch64_rev64v8hi */
    case 4122:  /* aarch64_rev32v8hi */
    case 4123:  /* aarch64_rev16v8hi */
    case 4124:  /* aarch64_rev64v2si */
    case 4125:  /* aarch64_rev32v2si */
    case 4126:  /* aarch64_rev16v2si */
    case 4127:  /* aarch64_rev64v4si */
    case 4128:  /* aarch64_rev32v4si */
    case 4129:  /* aarch64_rev16v4si */
    case 4130:  /* aarch64_rev64v2di */
    case 4131:  /* aarch64_rev32v2di */
    case 4132:  /* aarch64_rev16v2di */
    case 4133:  /* aarch64_rev64v4hf */
    case 4134:  /* aarch64_rev32v4hf */
    case 4135:  /* aarch64_rev16v4hf */
    case 4136:  /* aarch64_rev64v8hf */
    case 4137:  /* aarch64_rev32v8hf */
    case 4138:  /* aarch64_rev16v8hf */
    case 4139:  /* aarch64_rev64v4bf */
    case 4140:  /* aarch64_rev32v4bf */
    case 4141:  /* aarch64_rev16v4bf */
    case 4142:  /* aarch64_rev64v8bf */
    case 4143:  /* aarch64_rev32v8bf */
    case 4144:  /* aarch64_rev16v8bf */
    case 4145:  /* aarch64_rev64v2sf */
    case 4146:  /* aarch64_rev32v2sf */
    case 4147:  /* aarch64_rev16v2sf */
    case 4148:  /* aarch64_rev64v4sf */
    case 4149:  /* aarch64_rev32v4sf */
    case 4150:  /* aarch64_rev16v4sf */
    case 4151:  /* aarch64_rev64v2df */
    case 4152:  /* aarch64_rev32v2df */
    case 4153:  /* aarch64_rev16v2df */
    case 4154:  /* aarch64_st2v8qi_dreg */
    case 4155:  /* aarch64_st2v4hi_dreg */
    case 4156:  /* aarch64_st2v2si_dreg */
    case 4157:  /* aarch64_st2v4hf_dreg */
    case 4158:  /* aarch64_st2v2sf_dreg */
    case 4159:  /* aarch64_st2v4bf_dreg */
    case 4160:  /* aarch64_st2di_dreg */
    case 4161:  /* aarch64_st2df_dreg */
    case 4162:  /* aarch64_st3v8qi_dreg */
    case 4163:  /* aarch64_st3v4hi_dreg */
    case 4164:  /* aarch64_st3v2si_dreg */
    case 4165:  /* aarch64_st3v4hf_dreg */
    case 4166:  /* aarch64_st3v2sf_dreg */
    case 4167:  /* aarch64_st3v4bf_dreg */
    case 4168:  /* aarch64_st3di_dreg */
    case 4169:  /* aarch64_st3df_dreg */
    case 4170:  /* aarch64_st4v8qi_dreg */
    case 4171:  /* aarch64_st4v4hi_dreg */
    case 4172:  /* aarch64_st4v2si_dreg */
    case 4173:  /* aarch64_st4v4hf_dreg */
    case 4174:  /* aarch64_st4v2sf_dreg */
    case 4175:  /* aarch64_st4v4bf_dreg */
    case 4176:  /* aarch64_st4di_dreg */
    case 4177:  /* aarch64_st4df_dreg */
    case 4178:  /* *aarch64_simd_ld1rv8qi */
    case 4179:  /* *aarch64_simd_ld1rv16qi */
    case 4180:  /* *aarch64_simd_ld1rv4hi */
    case 4181:  /* *aarch64_simd_ld1rv8hi */
    case 4182:  /* *aarch64_simd_ld1rv2si */
    case 4183:  /* *aarch64_simd_ld1rv4si */
    case 4184:  /* *aarch64_simd_ld1rv2di */
    case 4185:  /* *aarch64_simd_ld1rv4hf */
    case 4186:  /* *aarch64_simd_ld1rv8hf */
    case 4187:  /* *aarch64_simd_ld1rv4bf */
    case 4188:  /* *aarch64_simd_ld1rv8bf */
    case 4189:  /* *aarch64_simd_ld1rv2sf */
    case 4190:  /* *aarch64_simd_ld1rv4sf */
    case 4191:  /* *aarch64_simd_ld1rv2df */
    case 4192:  /* aarch64_simd_ld1v8qi_x2 */
    case 4193:  /* aarch64_simd_ld1v4hi_x2 */
    case 4194:  /* aarch64_simd_ld1v2si_x2 */
    case 4195:  /* aarch64_simd_ld1di_x2 */
    case 4196:  /* aarch64_simd_ld1v4hf_x2 */
    case 4197:  /* aarch64_simd_ld1v2sf_x2 */
    case 4198:  /* aarch64_simd_ld1df_x2 */
    case 4199:  /* aarch64_simd_ld1v4bf_x2 */
    case 4200:  /* aarch64_simd_ld1v16qi_x2 */
    case 4201:  /* aarch64_simd_ld1v8hi_x2 */
    case 4202:  /* aarch64_simd_ld1v4si_x2 */
    case 4203:  /* aarch64_simd_ld1v2di_x2 */
    case 4204:  /* aarch64_simd_ld1v8hf_x2 */
    case 4205:  /* aarch64_simd_ld1v4sf_x2 */
    case 4206:  /* aarch64_simd_ld1v2df_x2 */
    case 4207:  /* aarch64_simd_ld1v8bf_x2 */
    case 4208:  /* aarch64_frecpev4hf */
    case 4209:  /* aarch64_frecpev8hf */
    case 4210:  /* aarch64_frecpev2sf */
    case 4211:  /* aarch64_frecpev4sf */
    case 4212:  /* aarch64_frecpev2df */
    case 4213:  /* aarch64_frecpehf */
    case 4214:  /* aarch64_frecpesf */
    case 4215:  /* aarch64_frecpedf */
    case 4216:  /* aarch64_frecpxhf */
    case 4217:  /* aarch64_frecpxsf */
    case 4218:  /* aarch64_frecpxdf */
    case 4219:  /* aarch64_frecpsv4hf */
    case 4220:  /* aarch64_frecpsv8hf */
    case 4221:  /* aarch64_frecpsv2sf */
    case 4222:  /* aarch64_frecpsv4sf */
    case 4223:  /* aarch64_frecpsv2df */
    case 4224:  /* aarch64_frecpshf */
    case 4225:  /* aarch64_frecpssf */
    case 4226:  /* aarch64_frecpsdf */
    case 4227:  /* aarch64_urecpev2si */
    case 4228:  /* aarch64_urecpev4si */
    case 4229:  /* aarch64_crypto_aesev16qi */
    case 4230:  /* aarch64_crypto_aesdv16qi */
    case 4231:  /* aarch64_crypto_aesmcv16qi */
    case 4232:  /* aarch64_crypto_aesimcv16qi */
    case 4233:  /* *aarch64_crypto_aese_fused */
    case 4234:  /* *aarch64_crypto_aesd_fused */
    case 4235:  /* aarch64_crypto_sha1hsi */
    case 4236:  /* aarch64_crypto_sha1hv4si */
    case 4237:  /* aarch64_be_crypto_sha1hv4si */
    case 4238:  /* aarch64_crypto_sha1su1v4si */
    case 4239:  /* aarch64_crypto_sha1cv4si */
    case 4240:  /* aarch64_crypto_sha1mv4si */
    case 4241:  /* aarch64_crypto_sha1pv4si */
    case 4242:  /* aarch64_crypto_sha1su0v4si */
    case 4243:  /* aarch64_crypto_sha256hv4si */
    case 4244:  /* aarch64_crypto_sha256h2v4si */
    case 4245:  /* aarch64_crypto_sha256su0v4si */
    case 4246:  /* aarch64_crypto_sha256su1v4si */
    case 4270:  /* aarch64_simd_fmlal_lowv2sf */
    case 4271:  /* aarch64_simd_fmlalq_lowv4sf */
    case 4272:  /* aarch64_simd_fmlsl_lowv2sf */
    case 4273:  /* aarch64_simd_fmlslq_lowv4sf */
    case 4274:  /* aarch64_simd_fmlal_highv2sf */
    case 4275:  /* aarch64_simd_fmlalq_highv4sf */
    case 4276:  /* aarch64_simd_fmlsl_highv2sf */
    case 4277:  /* aarch64_simd_fmlslq_highv4sf */
    case 4278:  /* aarch64_simd_fmlal_lane_lowv2sf */
    case 4279:  /* aarch64_simd_fmlsl_lane_lowv2sf */
    case 4280:  /* aarch64_simd_fmlal_lane_highv2sf */
    case 4281:  /* aarch64_simd_fmlsl_lane_highv2sf */
    case 4282:  /* aarch64_simd_fmlalq_laneq_lowv4sf */
    case 4283:  /* aarch64_simd_fmlslq_laneq_lowv4sf */
    case 4284:  /* aarch64_simd_fmlalq_laneq_highv4sf */
    case 4285:  /* aarch64_simd_fmlslq_laneq_highv4sf */
    case 4286:  /* aarch64_simd_fmlal_laneq_lowv2sf */
    case 4287:  /* aarch64_simd_fmlsl_laneq_lowv2sf */
    case 4288:  /* aarch64_simd_fmlal_laneq_highv2sf */
    case 4289:  /* aarch64_simd_fmlsl_laneq_highv2sf */
    case 4290:  /* aarch64_simd_fmlalq_lane_lowv4sf */
    case 4291:  /* aarch64_simd_fmlslq_lane_lowv4sf */
    case 4292:  /* aarch64_simd_fmlalq_lane_highv4sf */
    case 4293:  /* aarch64_simd_fmlslq_lane_highv4sf */
    case 4294:  /* aarch64_crypto_pmulldi */
    case 4295:  /* aarch64_crypto_pmullv2di */
    case 4296:  /* extendv8qiv8hi2 */
    case 4297:  /* zero_extendv8qiv8hi2 */
    case 4298:  /* extendv4hiv4si2 */
    case 4299:  /* zero_extendv4hiv4si2 */
    case 4300:  /* extendv2siv2di2 */
    case 4301:  /* zero_extendv2siv2di2 */
    case 4311:  /* aarch64_bfmmlaqv4sf */
    case 4312:  /* aarch64_bfmlalbv4sf */
    case 4313:  /* aarch64_bfmlaltv4sf */
    case 4314:  /* aarch64_bfmlalb_lanev4sf */
    case 4315:  /* aarch64_bfmlalt_lanev4sf */
    case 4316:  /* aarch64_bfmlalb_lane_qv4sf */
    case 4317:  /* aarch64_bfmlalt_lane_qv4sf */
    case 4318:  /* aarch64_simd_smmlav16qi */
    case 4319:  /* aarch64_simd_ummlav16qi */
    case 4320:  /* aarch64_simd_usmmlav16qi */
    case 4321:  /* aarch64_bfcvtnv4bf */
    case 4322:  /* aarch64_bfcvtn_qv8bf */
    case 4323:  /* aarch64_bfcvtn2v8bf */
    case 4324:  /* aarch64_bfcvtbf */
    case 4325:  /* aarch64_vbfcvtv4bf */
    case 4326:  /* aarch64_vbfcvtv8bf */
    case 4327:  /* aarch64_vbfcvt_highv8bf */
    case 4328:  /* aarch64_bfcvtsf */
    case 5168:  /* *vec_extractvnx16qiqi_0 */
    case 5169:  /* *vec_extractvnx8hihi_0 */
    case 5170:  /* *vec_extractvnx4sisi_0 */
    case 5171:  /* *vec_extractvnx2didi_0 */
    case 5172:  /* *vec_extractvnx8bfbf_0 */
    case 5173:  /* *vec_extractvnx8hfhf_0 */
    case 5174:  /* *vec_extractvnx4sfsf_0 */
    case 5175:  /* *vec_extractvnx2dfdf_0 */
    case 5176:  /* *vec_extractvnx16qiqi_v128 */
    case 5177:  /* *vec_extractvnx8hihi_v128 */
    case 5178:  /* *vec_extractvnx4sisi_v128 */
    case 5179:  /* *vec_extractvnx2didi_v128 */
    case 5180:  /* *vec_extractvnx8bfbf_v128 */
    case 5181:  /* *vec_extractvnx8hfhf_v128 */
    case 5182:  /* *vec_extractvnx4sfsf_v128 */
    case 5183:  /* *vec_extractvnx2dfdf_v128 */
    case 9958:  /* aarch64_sve2_aese */
    case 9959:  /* aarch64_sve2_aesd */
    case 9960:  /* aarch64_sve2_aesmc */
    case 9961:  /* aarch64_sve2_aesimc */
    case 9962:  /* *aarch64_sve2_aese_fused */
    case 9963:  /* *aarch64_sve2_aesd_fused */
      if ((cached_type = get_attr_type (insn)) == TYPE_NO_INSN)
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_ADR) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MOV_SHIFT)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_CSEL) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_CRC) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && (cached_type == TYPE_ROTATE_IMM))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_ACQ)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_STORE_4) || (cached_type == TYPE_STORE_REL)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && (cached_type == TYPE_LOAD_8))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && (cached_type == TYPE_STORE_8))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD) || (cached_type == TYPE_FCSEL) || (cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD) || (cached_type == TYPE_F_MINMAXS) || (cached_type == TYPE_F_MINMAXD)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FFMAD)))
        {
	  return 8;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_NEON_FROM_GP) || (cached_type == TYPE_NEON_FROM_GP_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_NEON_TO_GP) || (cached_type == TYPE_NEON_TO_GP_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && (cached_type == TYPE_F_FLAG))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_64)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_128) || (cached_cortex_a53_advsimd_type == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_LOTS)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_64)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_128) || (cached_cortex_a53_advsimd_type == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_LOTS)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_ALU))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_ALU_Q))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_MUL))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_MUL_Q))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_S)))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_D)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_S_Q))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_D_Q))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && (cached_type == TYPE_CRYPTO_AESE))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && (cached_type == TYPE_CRYPTO_AESMC))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && (cached_type == TYPE_CRYPTO_SHA1_FAST))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && (cached_type == TYPE_CRYPTO_SHA256_FAST))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && (cached_type == TYPE_CRYPTO_SHA1_XOR))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFX) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_BFM) || (cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_CRC) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && (cached_type == TYPE_BLOCK))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ABD))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ABD_Q))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 8;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MLA))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MLA_Q))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_REDUCTIONS_Q))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MUL))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MLA))
        {
	  return 9;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 9;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPS_RSQRTS))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPS_RSQRTS_Q))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_BITOPS))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FROM_GP))
        {
	  return 9;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 9;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_TO_GP))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_A))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_B))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_C))
        {
	  return 9;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_D))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_E))
        {
	  return 9;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_F))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_A))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_B))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_COMPLEX))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD)))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FMOV) || (cached_type == TYPE_FCSEL)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS) || (cached_type == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_SQRT_S)))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD) || (cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_SQRT_D)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD) || (cached_type == TYPE_NEON_FP_DIV_S_Q) || (cached_type == TYPE_NEON_FP_DIV_D_Q) || (cached_type == TYPE_NEON_FP_SQRT_S_Q) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_CRYPTO_AESE) || (cached_type == TYPE_CRYPTO_AESMC) || (cached_type == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA256_FAST)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && (cached_type == TYPE_CRYPTO_SHA1_XOR))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_CORTEXA57)))) && (cached_type == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && (! ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES)) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_CSEL) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && (! ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES)) && ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES) && ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_ARITH_SIMPLE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_MULTIPLY) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_MLA) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_SAT_MLA_LONG)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_IMM_BASIC) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_REG_BASIC)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_REG_COMPLEX)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_UNARY))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ADD))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ABD))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_COMPARE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_REDUC_MINMAX))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_REDUC_ADD))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ROUND))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_CVT))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_MUL))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_MLA))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ESTIMATE))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ESTIMATEX))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_STEP))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_BITOPS))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_BITINS))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_TBL))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FROM_GP))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_TO_GP))
        {
	  return 9;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD) || (cached_type == TYPE_NEON_LDP)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_NEON_LDP_Q))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_1) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_ALL)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_2))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_3))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_4))
        {
	  return 8;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_ONE))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD2_2))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD2_ONE))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD2_ALL))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD3_3))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD3_ONE))
        {
	  return 9;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD3_ALL))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD4_4))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD4_ONE))
        {
	  return 9;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD4_ALL))
        {
	  return 8;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED) || (cached_type == TYPE_NEON_STP)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_NEON_STP_Q))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_1))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_2))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_3))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_4))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_ONE))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE2_2) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_STORE2_ONE)))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE3_3) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_STORE3_ONE)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE4_4) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_STORE4_ONE)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_F_CVTF2I))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_F_CVTI2F))
        {
	  return 9;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD)))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_FCSEL))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_FMOV))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_DIV_S_Q) || (cached_type == TYPE_FSQRTS) || (cached_type == TYPE_NEON_FP_SQRT_S) || (cached_type == TYPE_NEON_FP_SQRT_S_Q)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_DIV_D_Q) || (cached_type == TYPE_FSQRTD) || (cached_type == TYPE_NEON_FP_SQRT_D) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_F_MINMAXS) || (cached_type == TYPE_F_MINMAXD)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_CRYPTO_AESE) || (cached_type == TYPE_CRYPTO_AESMC) || (cached_type == TYPE_CRYPTO_SHA1_XOR) || (cached_type == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA256_FAST)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_NEON_MUL_B_LONG) || (cached_type == TYPE_NEON_MUL_H_LONG) || (cached_type == TYPE_NEON_MUL_S_LONG)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_NEON_MUL_D_LONG))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_CRC))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_FP_NEG_S) || (cached_type == TYPE_NEON_FP_NEG_D) || (cached_type == TYPE_NEON_FP_ABS_S) || (cached_type == TYPE_NEON_FP_ABS_D)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_FP_NEG_S_Q) || (cached_type == TYPE_NEON_FP_NEG_D_Q) || (cached_type == TYPE_NEON_FP_ABS_S_Q) || (cached_type == TYPE_NEON_FP_ABS_D_Q)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_FP_MINMAX_S) || (cached_type == TYPE_NEON_FP_MINMAX_D) || (cached_type == TYPE_NEON_FP_REDUC_MINMAX_S) || (cached_type == TYPE_NEON_FP_REDUC_MINMAX_D) || (cached_type == TYPE_NEON_FP_COMPARE_S) || (cached_type == TYPE_NEON_FP_COMPARE_D) || (cached_type == TYPE_NEON_FP_ROUND_S) || (cached_type == TYPE_NEON_FP_ROUND_D)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_FP_MINMAX_S_Q) || (cached_type == TYPE_NEON_FP_MINMAX_D_Q) || (cached_type == TYPE_NEON_FP_COMPARE_S_Q) || (cached_type == TYPE_NEON_FP_COMPARE_D_Q) || (cached_type == TYPE_NEON_FP_ROUND_S_Q) || (cached_type == TYPE_NEON_FP_ROUND_D_Q)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_FP_REDUC_MINMAX_S_Q) || (cached_type == TYPE_NEON_FP_REDUC_MINMAX_D_Q) || (cached_type == TYPE_NEON_FP_ABD_S) || (cached_type == TYPE_NEON_FP_ABD_D) || (cached_type == TYPE_NEON_FP_ADDSUB_S) || (cached_type == TYPE_NEON_FP_ADDSUB_D) || (cached_type == TYPE_NEON_FP_REDUC_ADD_S) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_FP_ABD_S_Q) || (cached_type == TYPE_NEON_FP_ABD_D_Q) || (cached_type == TYPE_NEON_FP_ADDSUB_S_Q) || (cached_type == TYPE_NEON_FP_ADDSUB_D_Q) || (cached_type == TYPE_NEON_FP_REDUC_ADD_S_Q) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D_Q)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_FP_TO_INT_S) || (cached_type == TYPE_NEON_FP_TO_INT_D) || (cached_type == TYPE_NEON_INT_TO_FP_S) || (cached_type == TYPE_NEON_INT_TO_FP_D) || (cached_type == TYPE_NEON_FP_CVT_WIDEN_H) || (cached_type == TYPE_NEON_FP_CVT_WIDEN_S)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_FP_TO_INT_S_Q) || (cached_type == TYPE_NEON_FP_TO_INT_D_Q) || (cached_type == TYPE_NEON_INT_TO_FP_S_Q) || (cached_type == TYPE_NEON_INT_TO_FP_D_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_FP_MUL_S) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_FP_MLA_S) || (cached_type == TYPE_NEON_FP_MLA_S_SCALAR)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_FP_MUL_S_Q) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_FP_MLA_S_Q) || (cached_type == TYPE_NEON_FP_MLA_S_SCALAR_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_NEON_FP_MUL_D))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_NEON_FP_MLA_D))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_FP_MUL_D_Q) || (cached_type == TYPE_NEON_FP_MUL_D_SCALAR_Q)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_FP_MLA_D_Q) || (cached_type == TYPE_NEON_FP_MLA_D_SCALAR_Q)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_FP_CVT_NARROW_S_Q) || (cached_type == TYPE_NEON_FP_CVT_NARROW_D_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_NEON_FP_DIV_S))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_NEON_FP_DIV_D))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_NEON_FP_DIV_S_Q))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_NEON_FP_DIV_D_Q))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_NEON_FP_SQRT_S))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_NEON_FP_SQRT_D))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_NEON_FP_SQRT_S_Q))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_NEON_FP_SQRT_D_Q))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_ADD) || (cached_type == TYPE_NEON_REDUC_ADD) || (cached_type == TYPE_NEON_LOGIC) || (cached_type == TYPE_NEON_NEG) || (cached_type == TYPE_NEON_SUB)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_SHIFT_IMM_LONG) || (cached_type == TYPE_NEON_ADD_Q) || (cached_type == TYPE_NEON_REDUC_ADD_Q) || (cached_type == TYPE_NEON_LOGIC_Q) || (cached_type == TYPE_NEON_NEG_Q) || (cached_type == TYPE_NEON_SUB_Q)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_ADD_LONG) || (cached_type == TYPE_NEON_SUB_LONG) || (cached_type == TYPE_NEON_ADD_HALVE) || (cached_type == TYPE_NEON_SUB_HALVE) || (cached_type == TYPE_NEON_SHIFT_IMM) || (cached_type == TYPE_NEON_SHIFT_REG) || (cached_type == TYPE_NEON_MINMAX) || (cached_type == TYPE_NEON_ABS) || (cached_type == TYPE_NEON_COMPARE) || (cached_type == TYPE_NEON_COMPARE_ZERO) || (cached_type == TYPE_NEON_TST)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_ADD_HALVE_Q) || (cached_type == TYPE_NEON_SUB_HALVE_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SHIFT_REG_Q) || (cached_type == TYPE_NEON_MINMAX_Q) || (cached_type == TYPE_NEON_ABS_Q) || (cached_type == TYPE_NEON_COMPARE_Q) || (cached_type == TYPE_NEON_COMPARE_ZERO_Q) || (cached_type == TYPE_NEON_TST_Q) || (cached_type == TYPE_NEON_REDUC_ADD_LONG)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_SHIFT_ACC) || (cached_type == TYPE_NEON_REDUC_ADD_ACC) || (cached_type == TYPE_NEON_ABD) || (cached_type == TYPE_NEON_QADD) || (cached_type == TYPE_NEON_QSUB) || (cached_type == TYPE_NEON_QABS) || (cached_type == TYPE_NEON_QNEG) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_NARROW_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_REG) || (cached_type == TYPE_NEON_REDUC_MINMAX)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_NEON_REDUC_MINMAX_Q))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_SHIFT_ACC_Q) || (cached_type == TYPE_NEON_REDUC_ADD_ACC_Q) || (cached_type == TYPE_NEON_ABD_Q) || (cached_type == TYPE_NEON_ABD_LONG) || (cached_type == TYPE_NEON_QADD_Q) || (cached_type == TYPE_NEON_QSUB_Q) || (cached_type == TYPE_NEON_QABS_Q) || (cached_type == TYPE_NEON_QNEG_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_REG_Q)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_MUL_B) || (cached_type == TYPE_NEON_MUL_H) || (cached_type == TYPE_NEON_MUL_S) || (cached_type == TYPE_NEON_MUL_H_SCALAR) || (cached_type == TYPE_NEON_MUL_S_SCALAR) || (cached_type == TYPE_NEON_SAT_MUL_B) || (cached_type == TYPE_NEON_SAT_MUL_H) || (cached_type == TYPE_NEON_SAT_MUL_S) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_MLA_B) || (cached_type == TYPE_NEON_MLA_H) || (cached_type == TYPE_NEON_MLA_S) || (cached_type == TYPE_NEON_MLA_H_SCALAR) || (cached_type == TYPE_NEON_MLA_S_SCALAR)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_MUL_B_Q) || (cached_type == TYPE_NEON_MUL_H_Q) || (cached_type == TYPE_NEON_MUL_S_Q) || (cached_type == TYPE_NEON_MUL_H_SCALAR_Q) || (cached_type == TYPE_NEON_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_B_Q) || (cached_type == TYPE_NEON_SAT_MUL_H_Q) || (cached_type == TYPE_NEON_SAT_MUL_S_Q) || (cached_type == TYPE_NEON_MUL_B_LONG) || (cached_type == TYPE_NEON_MUL_H_LONG) || (cached_type == TYPE_NEON_MUL_S_LONG) || (cached_type == TYPE_NEON_MUL_D_LONG) || (cached_type == TYPE_NEON_MUL_H_SCALAR_LONG) || (cached_type == TYPE_NEON_MUL_S_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MUL_B_LONG) || (cached_type == TYPE_NEON_SAT_MUL_H_LONG) || (cached_type == TYPE_NEON_SAT_MUL_S_LONG) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_LONG)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_MLA_B_Q) || (cached_type == TYPE_NEON_MLA_H_Q) || (cached_type == TYPE_NEON_MLA_S_Q) || (cached_type == TYPE_NEON_MLA_H_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_S_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_B_LONG) || (cached_type == TYPE_NEON_MLA_H_LONG) || (cached_type == TYPE_NEON_MLA_S_LONG) || (cached_type == TYPE_NEON_MLA_H_SCALAR_LONG) || (cached_type == TYPE_NEON_MLA_S_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MLA_B_LONG) || (cached_type == TYPE_NEON_SAT_MLA_H_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_LONG) || (cached_type == TYPE_NEON_SAT_MLA_H_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_SCALAR_LONG)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_ADD_HALVE_NARROW_Q) || (cached_type == TYPE_NEON_SUB_HALVE_NARROW_Q) || (cached_type == TYPE_NEON_ARITH_ACC)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_ADD_WIDEN) || (cached_type == TYPE_NEON_SUB_WIDEN)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_NEON_ARITH_ACC_Q))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_LOAD1_1REG) || (cached_type == TYPE_NEON_LOAD1_1REG_Q) || (cached_type == TYPE_NEON_LOAD1_ALL_LANES) || (cached_type == TYPE_NEON_LOAD2_ONE_LANE)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_LOAD1_2REG) || (cached_type == TYPE_NEON_LOAD2_2REG) || (cached_type == TYPE_NEON_LOAD2_ALL_LANES)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_LOAD1_2REG_Q) || (cached_type == TYPE_NEON_LOAD2_2REG_Q) || (cached_type == TYPE_NEON_LOAD2_ALL_LANES_Q) || (cached_type == TYPE_NEON_LOAD3_ONE_LANE) || (cached_type == TYPE_NEON_LOAD4_ONE_LANE) || (cached_type == TYPE_NEON_LDP) || (cached_type == TYPE_NEON_LDP_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_LOAD1_3REG) || (cached_type == TYPE_NEON_LOAD3_3REG) || (cached_type == TYPE_NEON_LOAD3_ALL_LANES)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_LOAD1_3REG_Q) || (cached_type == TYPE_NEON_LOAD3_3REG_Q) || (cached_type == TYPE_NEON_LOAD3_ALL_LANES_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_LOAD1_4REG) || (cached_type == TYPE_NEON_LOAD4_4REG)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_LOAD1_4REG_Q) || (cached_type == TYPE_NEON_LOAD4_4REG_Q) || (cached_type == TYPE_NEON_LOAD4_ALL_LANES) || (cached_type == TYPE_NEON_LOAD4_ALL_LANES_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_CSEL) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_MOV_REG)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_NEON_FROM_GP))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_NEON_FROM_GP_Q))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_NEON_DUP_Q))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_NEON_TO_GP))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_BSL) || (cached_type == TYPE_NEON_DUP) || (cached_type == TYPE_NEON_EXT) || (cached_type == TYPE_NEON_INS) || (cached_type == TYPE_NEON_INS_Q) || (cached_type == TYPE_NEON_MOVE) || (cached_type == TYPE_NEON_REV) || (cached_type == TYPE_NEON_TBL1) || (cached_type == TYPE_NEON_PERMUTE) || (cached_type == TYPE_NEON_SHIFT_IMM_NARROW_Q)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_BSL_Q) || (cached_type == TYPE_NEON_EXT_Q) || (cached_type == TYPE_NEON_MOVE_Q) || (cached_type == TYPE_NEON_REV_Q) || (cached_type == TYPE_NEON_TBL1_Q) || (cached_type == TYPE_NEON_PERMUTE_Q)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_CLS) || (cached_type == TYPE_NEON_CNT) || (cached_type == TYPE_NEON_RBIT)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_CLS_Q) || (cached_type == TYPE_NEON_CNT_Q) || (cached_type == TYPE_NEON_RBIT_Q) || (cached_type == TYPE_NEON_TBL2)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_FP_RECPE_S) || (cached_type == TYPE_NEON_FP_RECPE_D) || (cached_type == TYPE_NEON_FP_RSQRTE_S) || (cached_type == TYPE_NEON_FP_RSQRTE_D) || (cached_type == TYPE_NEON_FP_RECPX_S) || (cached_type == TYPE_NEON_FP_RECPX_D)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_FP_RECPE_S_Q) || (cached_type == TYPE_NEON_FP_RECPE_D_Q) || (cached_type == TYPE_NEON_FP_RSQRTE_S_Q) || (cached_type == TYPE_NEON_FP_RSQRTE_D_Q)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_NEON_FP_RECPS_S))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_NEON_FP_RECPS_S_Q))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_FP_RECPS_D) || (cached_type == TYPE_NEON_FP_RSQRTS_D)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_FP_RECPS_D_Q) || (cached_type == TYPE_NEON_FP_RSQRTS_D_Q)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_TBL2_Q) || (cached_type == TYPE_NEON_TBL3)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_TBL3_Q) || (cached_type == TYPE_NEON_TBL4)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_NEON_TBL4_Q))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_STORE1_1REG) || (cached_type == TYPE_NEON_STORE1_1REG_Q) || (cached_type == TYPE_NEON_STORE1_ONE_LANE) || (cached_type == TYPE_NEON_STORE1_ONE_LANE_Q) || (cached_type == TYPE_NEON_STORE1_2REG) || (cached_type == TYPE_NEON_STORE2_2REG) || (cached_type == TYPE_NEON_STORE2_ONE_LANE) || (cached_type == TYPE_NEON_STORE2_ONE_LANE_Q) || (cached_type == TYPE_NEON_STP)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_STORE1_2REG_Q) || (cached_type == TYPE_NEON_STORE1_3REG) || (cached_type == TYPE_NEON_STORE1_4REG) || (cached_type == TYPE_NEON_STORE2_2REG_Q) || (cached_type == TYPE_NEON_STORE3_3REG) || (cached_type == TYPE_NEON_STORE4_4REG) || (cached_type == TYPE_NEON_STORE3_ONE_LANE) || (cached_type == TYPE_NEON_STORE3_ONE_LANE_Q) || (cached_type == TYPE_NEON_STORE4_ONE_LANE) || (cached_type == TYPE_NEON_STORE4_ONE_LANE_Q) || (cached_type == TYPE_NEON_STP_Q)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_STORE1_3REG_Q) || (cached_type == TYPE_NEON_STORE3_3REG_Q)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_NEON_STORE1_4REG_Q) || (cached_type == TYPE_NEON_STORE4_4REG_Q)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_CALL))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_CRYPTO_SHA1_FAST))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_CRYPTO_AESMC))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_CRYPTO_SHA1_XOR) || (cached_type == TYPE_CRYPTO_SHA256_FAST) || (cached_type == TYPE_CRYPTO_PMULL)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_CRYPTO_SHA1_SLOW))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_CRYPTO_SHA256_SLOW))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_CRYPTO_AESE))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_F_CVTF2I))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCSEL)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_F_MINMAXD) || (cached_type == TYPE_F_MINMAXS) || (cached_type == TYPE_F_RINTD) || (cached_type == TYPE_F_RINTS)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_FADDD) || (cached_type == TYPE_FADDS)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_F_CVT))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_FMULS))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_FMULD))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_FDIVS))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_FDIVD))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_FSQRTS))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_FSQRTD))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_F_MRC))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_F_MCR))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_FMOV) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_F_CVTI2F))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_16)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_BFX) || (cached_type == TYPE_BFM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_SHIFT_IMM)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_CRC))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_MUL))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_MLA) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_SMULL) || (cached_type == TYPE_UMULL)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_SDIV) || (cached_type == TYPE_UDIV)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_SHIFT_REG)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_ADR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_TRAP) || (cached_type == TYPE_BLOCK)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_MRS))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && (cached_type == TYPE_MULTIPLE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_FALKOR)))) && ((cached_type == TYPE_STORE_4) || (cached_type == TYPE_STORE_8) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_FP_NEG_S) || (cached_type == TYPE_NEON_FP_NEG_D) || (cached_type == TYPE_NEON_FP_ABS_S) || (cached_type == TYPE_NEON_FP_ABS_D) || (cached_type == TYPE_NEON_FP_NEG_S_Q) || (cached_type == TYPE_NEON_FP_NEG_D_Q) || (cached_type == TYPE_NEON_FP_ABS_S_Q) || (cached_type == TYPE_NEON_FP_ABS_D_Q)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_FP_MINMAX_S) || (cached_type == TYPE_NEON_FP_MINMAX_D) || (cached_type == TYPE_NEON_FP_REDUC_MINMAX_S) || (cached_type == TYPE_NEON_FP_REDUC_MINMAX_D) || (cached_type == TYPE_NEON_FP_COMPARE_S) || (cached_type == TYPE_NEON_FP_COMPARE_D) || (cached_type == TYPE_NEON_FP_ROUND_S) || (cached_type == TYPE_NEON_FP_ROUND_D) || (cached_type == TYPE_NEON_FP_MINMAX_S_Q) || (cached_type == TYPE_NEON_FP_MINMAX_D_Q) || (cached_type == TYPE_NEON_FP_COMPARE_S_Q) || (cached_type == TYPE_NEON_FP_COMPARE_D_Q) || (cached_type == TYPE_NEON_FP_ROUND_S_Q) || (cached_type == TYPE_NEON_FP_ROUND_D_Q)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_FP_REDUC_MINMAX_S_Q) || (cached_type == TYPE_NEON_FP_REDUC_MINMAX_D_Q) || (cached_type == TYPE_NEON_FP_ABD_S) || (cached_type == TYPE_NEON_FP_ABD_D) || (cached_type == TYPE_NEON_FP_ADDSUB_S) || (cached_type == TYPE_NEON_FP_ADDSUB_D) || (cached_type == TYPE_NEON_FP_REDUC_ADD_S) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D) || (cached_type == TYPE_NEON_FP_ABD_S_Q) || (cached_type == TYPE_NEON_FP_ABD_D_Q) || (cached_type == TYPE_NEON_FP_ADDSUB_S_Q) || (cached_type == TYPE_NEON_FP_ADDSUB_D_Q) || (cached_type == TYPE_NEON_FP_REDUC_ADD_S_Q) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D_Q)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_FP_TO_INT_S) || (cached_type == TYPE_NEON_FP_TO_INT_D) || (cached_type == TYPE_NEON_INT_TO_FP_S) || (cached_type == TYPE_NEON_INT_TO_FP_D) || (cached_type == TYPE_NEON_FP_CVT_WIDEN_H) || (cached_type == TYPE_NEON_FP_CVT_WIDEN_S) || (cached_type == TYPE_NEON_FP_TO_INT_S_Q) || (cached_type == TYPE_NEON_FP_TO_INT_D_Q) || (cached_type == TYPE_NEON_INT_TO_FP_S_Q) || (cached_type == TYPE_NEON_INT_TO_FP_D_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_FP_MUL_S) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR) || (cached_type == TYPE_NEON_FP_MUL_S_Q) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_FP_MLA_S) || (cached_type == TYPE_NEON_FP_MLA_S_SCALAR) || (cached_type == TYPE_NEON_FP_MLA_S_Q) || (cached_type == TYPE_NEON_FP_MLA_S_SCALAR_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_FP_MUL_D) || (cached_type == TYPE_NEON_FP_MUL_D_Q) || (cached_type == TYPE_NEON_FP_MUL_D_SCALAR_Q)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_FP_MLA_D) || (cached_type == TYPE_NEON_FP_MLA_D_Q) || (cached_type == TYPE_NEON_FP_MLA_D_SCALAR_Q)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_FP_CVT_NARROW_S_Q) || (cached_type == TYPE_NEON_FP_CVT_NARROW_D_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_NEON_FP_DIV_S))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_NEON_FP_DIV_D))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_NEON_FP_DIV_S_Q))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_NEON_FP_DIV_D_Q))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_NEON_FP_SQRT_S))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_NEON_FP_SQRT_D))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_NEON_FP_SQRT_S_Q))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_NEON_FP_SQRT_D_Q))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_ADD) || (cached_type == TYPE_NEON_REDUC_ADD) || (cached_type == TYPE_NEON_LOGIC) || (cached_type == TYPE_NEON_NEG) || (cached_type == TYPE_NEON_SUB) || (cached_type == TYPE_NEON_ADD_Q) || (cached_type == TYPE_NEON_REDUC_ADD_Q) || (cached_type == TYPE_NEON_LOGIC_Q) || (cached_type == TYPE_NEON_NEG_Q) || (cached_type == TYPE_NEON_SUB_Q)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_ADD_LONG) || (cached_type == TYPE_NEON_SUB_LONG) || (cached_type == TYPE_NEON_ADD_HALVE) || (cached_type == TYPE_NEON_SUB_HALVE) || (cached_type == TYPE_NEON_SHIFT_IMM) || (cached_type == TYPE_NEON_SHIFT_REG) || (cached_type == TYPE_NEON_MINMAX) || (cached_type == TYPE_NEON_ABS) || (cached_type == TYPE_NEON_COMPARE) || (cached_type == TYPE_NEON_COMPARE_ZERO) || (cached_type == TYPE_NEON_TST) || (cached_type == TYPE_NEON_SHIFT_IMM_LONG) || (cached_type == TYPE_NEON_REDUC_ADD_LONG) || (cached_type == TYPE_NEON_ADD_HALVE_Q) || (cached_type == TYPE_NEON_SUB_HALVE_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SHIFT_REG_Q) || (cached_type == TYPE_NEON_MINMAX_Q) || (cached_type == TYPE_NEON_ABS_Q) || (cached_type == TYPE_NEON_COMPARE_Q) || (cached_type == TYPE_NEON_COMPARE_ZERO_Q) || (cached_type == TYPE_NEON_TST_Q)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_SHIFT_ACC) || (cached_type == TYPE_NEON_REDUC_ADD_ACC) || (cached_type == TYPE_NEON_ABD) || (cached_type == TYPE_NEON_QADD) || (cached_type == TYPE_NEON_QSUB) || (cached_type == TYPE_NEON_QABS) || (cached_type == TYPE_NEON_QNEG) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_NARROW_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_REG) || (cached_type == TYPE_NEON_SHIFT_ACC_Q) || (cached_type == TYPE_NEON_REDUC_ADD_ACC_Q) || (cached_type == TYPE_NEON_ABD_Q) || (cached_type == TYPE_NEON_ABD_LONG) || (cached_type == TYPE_NEON_QADD_Q) || (cached_type == TYPE_NEON_QSUB_Q) || (cached_type == TYPE_NEON_QABS_Q) || (cached_type == TYPE_NEON_QNEG_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_REG_Q) || (cached_type == TYPE_NEON_ADD_HALVE_NARROW_Q) || (cached_type == TYPE_NEON_SUB_HALVE_NARROW_Q)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_REDUC_MINMAX) || (cached_type == TYPE_NEON_REDUC_MINMAX_Q) || (cached_type == TYPE_NEON_ARITH_ACC) || (cached_type == TYPE_NEON_ARITH_ACC_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_MUL_B) || (cached_type == TYPE_NEON_MUL_H) || (cached_type == TYPE_NEON_MUL_S) || (cached_type == TYPE_NEON_MUL_H_SCALAR) || (cached_type == TYPE_NEON_MUL_S_SCALAR) || (cached_type == TYPE_NEON_SAT_MUL_B) || (cached_type == TYPE_NEON_SAT_MUL_H) || (cached_type == TYPE_NEON_SAT_MUL_S) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR) || (cached_type == TYPE_NEON_MUL_B_Q) || (cached_type == TYPE_NEON_MUL_H_Q) || (cached_type == TYPE_NEON_MUL_S_Q) || (cached_type == TYPE_NEON_MUL_H_SCALAR_Q) || (cached_type == TYPE_NEON_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_B_Q) || (cached_type == TYPE_NEON_SAT_MUL_H_Q) || (cached_type == TYPE_NEON_SAT_MUL_S_Q) || (cached_type == TYPE_NEON_MUL_B_LONG) || (cached_type == TYPE_NEON_MUL_H_LONG) || (cached_type == TYPE_NEON_MUL_S_LONG) || (cached_type == TYPE_NEON_MUL_D_LONG) || (cached_type == TYPE_NEON_MUL_H_SCALAR_LONG) || (cached_type == TYPE_NEON_MUL_S_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MUL_B_LONG) || (cached_type == TYPE_NEON_SAT_MUL_H_LONG) || (cached_type == TYPE_NEON_SAT_MUL_S_LONG) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_LONG)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_MLA_B) || (cached_type == TYPE_NEON_MLA_H) || (cached_type == TYPE_NEON_MLA_S) || (cached_type == TYPE_NEON_MLA_H_SCALAR) || (cached_type == TYPE_NEON_MLA_S_SCALAR) || (cached_type == TYPE_NEON_MLA_B_Q) || (cached_type == TYPE_NEON_MLA_H_Q) || (cached_type == TYPE_NEON_MLA_S_Q) || (cached_type == TYPE_NEON_MLA_H_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_S_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_B_LONG) || (cached_type == TYPE_NEON_MLA_H_LONG) || (cached_type == TYPE_NEON_MLA_S_LONG) || (cached_type == TYPE_NEON_MLA_H_SCALAR_LONG) || (cached_type == TYPE_NEON_MLA_S_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MLA_B_LONG) || (cached_type == TYPE_NEON_SAT_MLA_H_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_LONG) || (cached_type == TYPE_NEON_SAT_MLA_H_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_SCALAR_LONG)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_ADD_WIDEN) || (cached_type == TYPE_NEON_SUB_WIDEN)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_LOAD1_1REG) || (cached_type == TYPE_NEON_LOAD1_1REG_Q) || (cached_type == TYPE_NEON_LOAD1_ALL_LANES) || (cached_type == TYPE_NEON_LOAD2_ONE_LANE)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_LOAD1_2REG) || (cached_type == TYPE_NEON_LOAD2_2REG) || (cached_type == TYPE_NEON_LOAD2_ALL_LANES)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_LOAD1_2REG_Q) || (cached_type == TYPE_NEON_LOAD2_2REG_Q) || (cached_type == TYPE_NEON_LOAD2_ALL_LANES_Q) || (cached_type == TYPE_NEON_LOAD3_ONE_LANE) || (cached_type == TYPE_NEON_LOAD4_ONE_LANE) || (cached_type == TYPE_NEON_LDP) || (cached_type == TYPE_NEON_LDP_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_LOAD1_3REG) || (cached_type == TYPE_NEON_LOAD3_3REG) || (cached_type == TYPE_NEON_LOAD3_ALL_LANES)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_LOAD1_3REG_Q) || (cached_type == TYPE_NEON_LOAD3_3REG_Q) || (cached_type == TYPE_NEON_LOAD3_ALL_LANES_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_LOAD1_4REG) || (cached_type == TYPE_NEON_LOAD4_4REG)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_LOAD1_4REG_Q) || (cached_type == TYPE_NEON_LOAD4_4REG_Q) || (cached_type == TYPE_NEON_LOAD4_ALL_LANES) || (cached_type == TYPE_NEON_LOAD4_ALL_LANES_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_CSEL) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_MOV_REG)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_NEON_FROM_GP))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_NEON_FROM_GP_Q))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_NEON_DUP_Q))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_NEON_TO_GP))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_BSL) || (cached_type == TYPE_NEON_DUP) || (cached_type == TYPE_NEON_EXT) || (cached_type == TYPE_NEON_INS) || (cached_type == TYPE_NEON_INS_Q) || (cached_type == TYPE_NEON_MOVE) || (cached_type == TYPE_NEON_REV) || (cached_type == TYPE_NEON_TBL1) || (cached_type == TYPE_NEON_PERMUTE) || (cached_type == TYPE_NEON_SHIFT_IMM_NARROW_Q) || (cached_type == TYPE_NEON_BSL_Q) || (cached_type == TYPE_NEON_EXT_Q) || (cached_type == TYPE_NEON_MOVE_Q) || (cached_type == TYPE_NEON_REV_Q) || (cached_type == TYPE_NEON_TBL1_Q) || (cached_type == TYPE_NEON_PERMUTE_Q) || (cached_type == TYPE_NEON_TBL2_Q) || (cached_type == TYPE_NEON_TBL2)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_CLS) || (cached_type == TYPE_NEON_CNT) || (cached_type == TYPE_NEON_RBIT) || (cached_type == TYPE_NEON_CLS_Q) || (cached_type == TYPE_NEON_CNT_Q) || (cached_type == TYPE_NEON_RBIT_Q) || (cached_type == TYPE_NEON_TBL2) || (cached_type == TYPE_NEON_TBL3_Q) || (cached_type == TYPE_NEON_TBL3)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_FP_RECPE_S) || (cached_type == TYPE_NEON_FP_RECPE_D) || (cached_type == TYPE_NEON_FP_RSQRTE_S) || (cached_type == TYPE_NEON_FP_RSQRTE_D) || (cached_type == TYPE_NEON_FP_RECPX_S) || (cached_type == TYPE_NEON_FP_RECPX_D) || (cached_type == TYPE_NEON_FP_RECPE_S_Q) || (cached_type == TYPE_NEON_FP_RECPE_D_Q) || (cached_type == TYPE_NEON_FP_RSQRTE_S_Q) || (cached_type == TYPE_NEON_FP_RSQRTE_D_Q) || (cached_type == TYPE_NEON_TBL4_Q) || (cached_type == TYPE_NEON_TBL4)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_FP_RECPS_S) || (cached_type == TYPE_NEON_FP_RECPS_S_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_FP_RECPS_D) || (cached_type == TYPE_NEON_FP_RSQRTS_D) || (cached_type == TYPE_NEON_FP_RECPS_D_Q) || (cached_type == TYPE_NEON_FP_RSQRTS_D_Q)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_STORE1_1REG) || (cached_type == TYPE_NEON_STORE1_1REG_Q) || (cached_type == TYPE_NEON_STORE1_ONE_LANE) || (cached_type == TYPE_NEON_STORE1_ONE_LANE_Q) || (cached_type == TYPE_NEON_STORE1_2REG) || (cached_type == TYPE_NEON_STORE2_2REG) || (cached_type == TYPE_NEON_STORE2_ONE_LANE) || (cached_type == TYPE_NEON_STORE2_ONE_LANE_Q) || (cached_type == TYPE_NEON_STP)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_STORE1_2REG_Q) || (cached_type == TYPE_NEON_STORE1_3REG) || (cached_type == TYPE_NEON_STORE1_4REG) || (cached_type == TYPE_NEON_STORE2_2REG_Q) || (cached_type == TYPE_NEON_STORE3_3REG) || (cached_type == TYPE_NEON_STORE4_4REG) || (cached_type == TYPE_NEON_STORE3_ONE_LANE) || (cached_type == TYPE_NEON_STORE3_ONE_LANE_Q) || (cached_type == TYPE_NEON_STORE4_ONE_LANE) || (cached_type == TYPE_NEON_STORE4_ONE_LANE_Q) || (cached_type == TYPE_NEON_STP_Q)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_STORE1_3REG_Q) || (cached_type == TYPE_NEON_STORE3_3REG_Q)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_NEON_STORE1_4REG_Q) || (cached_type == TYPE_NEON_STORE4_4REG_Q)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_CALL))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_CRYPTO_SHA1_FAST))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_CRYPTO_AESMC))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_CRYPTO_SHA1_XOR) || (cached_type == TYPE_CRYPTO_SHA256_FAST) || (cached_type == TYPE_CRYPTO_PMULL) || (cached_type == TYPE_CRYPTO_AESE)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_CRYPTO_SHA1_SLOW))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_CRYPTO_SHA256_SLOW))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_F_CVTF2I))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCSEL)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_F_MINMAXD) || (cached_type == TYPE_F_MINMAXS) || (cached_type == TYPE_F_RINTD) || (cached_type == TYPE_F_RINTS)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_FADDD) || (cached_type == TYPE_FADDS)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_F_CVT))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_FMULS))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_FMULD))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_FDIVS))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_FDIVD))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_FSQRTS))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_FSQRTD))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_F_MRC))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_F_MCR))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_FMOV) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_F_CVTI2F))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_16)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_BFX) || (cached_type == TYPE_BFM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_SHIFT_IMM)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_CRC))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_MUL))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_MLA) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_SMULL) || (cached_type == TYPE_UMULL)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_SDIV) || (cached_type == TYPE_UDIV)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_ADR)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_TRAP) || (cached_type == TYPE_BLOCK)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_MRS))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && (cached_type == TYPE_MULTIPLE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_SAPHIRA)))) && ((cached_type == TYPE_STORE_4) || (cached_type == TYPE_STORE_8) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_IMM)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && (cached_type == TYPE_CSEL))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_MUL) || (cached_type == TYPE_MULS) || (cached_type == TYPE_MLA) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && (cached_type == TYPE_CRC))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && (cached_type == TYPE_STORE_4))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_STORE_8) || (cached_type == TYPE_STORE_16)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_16)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_TRAP) || (cached_type == TYPE_CALL)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_FADDD) || (cached_type == TYPE_FADDS)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_FMOV) || (cached_type == TYPE_F_MINMAXS) || (cached_type == TYPE_F_MINMAXD)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && (cached_type == TYPE_FCSEL))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MCR)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && (cached_type == TYPE_FDIVS))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && (cached_type == TYPE_FDIVD))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && (cached_type == TYPE_FSQRTS))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && (cached_type == TYPE_FSQRTD))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_F_LOADD) || (cached_type == TYPE_F_LOADS) || (cached_type == TYPE_NEON_LOAD1_1REG) || (cached_type == TYPE_NEON_LOAD1_1REG_Q) || (cached_type == TYPE_NEON_LOAD1_2REG)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && (cached_type == TYPE_NEON_LOAD1_2REG_Q))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_F_STORED) || (cached_type == TYPE_F_STORES) || (cached_type == TYPE_NEON_STORE1_1REG) || (cached_type == TYPE_NEON_STORE1_1REG_Q) || (cached_type == TYPE_NEON_STORE1_ONE_LANE) || (cached_type == TYPE_NEON_STORE1_ONE_LANE_Q)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && (cached_type == TYPE_NEON_STORE1_2REG))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && (cached_type == TYPE_NEON_STORE1_2REG_Q))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && (cached_type == TYPE_NEON_LOAD1_ALL_LANES))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_NEON_LOGIC) || (cached_type == TYPE_NEON_BSL) || (cached_type == TYPE_NEON_FP_COMPARE_S) || (cached_type == TYPE_NEON_FP_COMPARE_D) || (cached_type == TYPE_NEON_MOVE) || (cached_type == TYPE_NEON_DUP) || (cached_type == TYPE_NEON_INS) || (cached_type == TYPE_NEON_FROM_GP) || (cached_type == TYPE_NEON_TO_GP) || (cached_type == TYPE_NEON_ABS) || (cached_type == TYPE_NEON_NEG) || (cached_type == TYPE_NEON_FP_NEG_S) || (cached_type == TYPE_NEON_FP_ABS_S)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_NEON_LOGIC_Q) || (cached_type == TYPE_NEON_BSL_Q) || (cached_type == TYPE_NEON_FP_COMPARE_S_Q) || (cached_type == TYPE_NEON_FP_COMPARE_D_Q) || (cached_type == TYPE_NEON_MOVE_Q) || (cached_type == TYPE_NEON_DUP_Q) || (cached_type == TYPE_NEON_INS_Q) || (cached_type == TYPE_NEON_FROM_GP_Q) || (cached_type == TYPE_NEON_TO_GP_Q) || (cached_type == TYPE_NEON_ABS_Q) || (cached_type == TYPE_NEON_NEG_Q) || (cached_type == TYPE_NEON_FP_NEG_S_Q) || (cached_type == TYPE_NEON_FP_NEG_D_Q) || (cached_type == TYPE_NEON_FP_ABS_S_Q) || (cached_type == TYPE_NEON_FP_ABS_D_Q)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_NEON_REDUC_ADD) || (cached_type == TYPE_NEON_REDUC_MINMAX) || (cached_type == TYPE_NEON_FP_REDUC_ADD_S) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D) || (cached_type == TYPE_NEON_FP_TO_INT_S) || (cached_type == TYPE_NEON_FP_TO_INT_D) || (cached_type == TYPE_NEON_ADD_HALVE) || (cached_type == TYPE_NEON_SUB_HALVE) || (cached_type == TYPE_NEON_QADD) || (cached_type == TYPE_NEON_COMPARE) || (cached_type == TYPE_NEON_COMPARE_ZERO) || (cached_type == TYPE_NEON_MINMAX) || (cached_type == TYPE_NEON_ABD) || (cached_type == TYPE_NEON_ADD) || (cached_type == TYPE_NEON_SUB) || (cached_type == TYPE_NEON_FP_MINMAX_S) || (cached_type == TYPE_NEON_FP_MINMAX_D) || (cached_type == TYPE_NEON_CLS) || (cached_type == TYPE_NEON_QABS) || (cached_type == TYPE_NEON_QNEG) || (cached_type == TYPE_NEON_FP_ADDSUB_S) || (cached_type == TYPE_NEON_FP_ADDSUB_D) || (cached_type == TYPE_NEON_ARITH_ACC) || (cached_type == TYPE_NEON_REV) || (cached_type == TYPE_NEON_FP_ABD_S) || (cached_type == TYPE_NEON_FP_ABD_D) || (cached_type == TYPE_NEON_FP_REDUC_MINMAX_S)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_NEON_REDUC_ADD_Q) || (cached_type == TYPE_NEON_REDUC_MINMAX_Q) || (cached_type == TYPE_NEON_FP_REDUC_ADD_S_Q) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D_Q) || (cached_type == TYPE_NEON_FP_TO_INT_S_Q) || (cached_type == TYPE_NEON_FP_TO_INT_D_Q) || (cached_type == TYPE_NEON_ADD_HALVE_Q) || (cached_type == TYPE_NEON_SUB_HALVE_Q) || (cached_type == TYPE_NEON_QADD_Q) || (cached_type == TYPE_NEON_COMPARE_Q) || (cached_type == TYPE_NEON_COMPARE_ZERO_Q) || (cached_type == TYPE_NEON_MINMAX_Q) || (cached_type == TYPE_NEON_ABD_Q) || (cached_type == TYPE_NEON_ADD_Q) || (cached_type == TYPE_NEON_SUB_Q) || (cached_type == TYPE_NEON_FP_MINMAX_S_Q) || (cached_type == TYPE_NEON_FP_MINMAX_D_Q) || (cached_type == TYPE_NEON_CLS_Q) || (cached_type == TYPE_NEON_QABS_Q) || (cached_type == TYPE_NEON_QNEG_Q) || (cached_type == TYPE_NEON_FP_ADDSUB_S_Q) || (cached_type == TYPE_NEON_FP_ADDSUB_D_Q) || (cached_type == TYPE_NEON_ADD_LONG) || (cached_type == TYPE_NEON_SUB_LONG) || (cached_type == TYPE_NEON_FP_ABD_S_Q) || (cached_type == TYPE_NEON_FP_ABD_D_Q) || (cached_type == TYPE_NEON_ARITH_ACC_Q) || (cached_type == TYPE_NEON_REV_Q) || (cached_type == TYPE_NEON_FP_REDUC_MINMAX_S_Q) || (cached_type == TYPE_NEON_FP_REDUC_MINMAX_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_NEON_FP_MUL_S) || (cached_type == TYPE_NEON_FP_MUL_D) || (cached_type == TYPE_NEON_FP_MLA_S) || (cached_type == TYPE_NEON_FP_MLA_D) || (cached_type == TYPE_NEON_MLA_B) || (cached_type == TYPE_NEON_MLA_H) || (cached_type == TYPE_NEON_MLA_S) || (cached_type == TYPE_NEON_MLA_H_SCALAR) || (cached_type == TYPE_NEON_MLA_S_SCALAR) || (cached_type == TYPE_NEON_EXT) || (cached_type == TYPE_NEON_SHIFT_IMM) || (cached_type == TYPE_NEON_PERMUTE) || (cached_type == TYPE_NEON_INT_TO_FP_S) || (cached_type == TYPE_NEON_INT_TO_FP_D) || (cached_type == TYPE_NEON_SHIFT_REG) || (cached_type == TYPE_NEON_SAT_SHIFT_REG) || (cached_type == TYPE_NEON_SHIFT_ACC) || (cached_type == TYPE_NEON_MUL_B) || (cached_type == TYPE_NEON_MUL_H) || (cached_type == TYPE_NEON_MUL_S) || (cached_type == TYPE_NEON_MUL_H_SCALAR) || (cached_type == TYPE_NEON_MUL_S_SCALAR) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR) || (cached_type == TYPE_NEON_FP_MLA_S_SCALAR)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_NEON_FP_MUL_S_Q) || (cached_type == TYPE_NEON_FP_MUL_D_Q) || (cached_type == TYPE_NEON_FP_MLA_S_Q) || (cached_type == TYPE_NEON_FP_MLA_D_Q) || (cached_type == TYPE_NEON_MLA_B_Q) || (cached_type == TYPE_NEON_MLA_H_Q) || (cached_type == TYPE_NEON_MLA_S_Q) || (cached_type == TYPE_NEON_MLA_H_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_S_SCALAR_Q) || (cached_type == TYPE_NEON_EXT_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_PERMUTE_Q) || (cached_type == TYPE_NEON_INT_TO_FP_S_Q) || (cached_type == TYPE_NEON_INT_TO_FP_D_Q) || (cached_type == TYPE_NEON_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SHIFT_ACC_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_LONG) || (cached_type == TYPE_NEON_MUL_B_Q) || (cached_type == TYPE_NEON_MUL_H_Q) || (cached_type == TYPE_NEON_MUL_S_Q) || (cached_type == TYPE_NEON_MUL_H_SCALAR_Q) || (cached_type == TYPE_NEON_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_FP_MUL_D_SCALAR_Q) || (cached_type == TYPE_NEON_MUL_B_LONG) || (cached_type == TYPE_NEON_MUL_H_LONG) || (cached_type == TYPE_NEON_MUL_S_LONG) || (cached_type == TYPE_NEON_SHIFT_IMM_NARROW_Q) || (cached_type == TYPE_NEON_FP_CVT_WIDEN_S) || (cached_type == TYPE_NEON_FP_CVT_NARROW_D_Q) || (cached_type == TYPE_NEON_FP_MLA_S_SCALAR_Q) || (cached_type == TYPE_NEON_FP_MLA_D_SCALAR_Q)))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && (cached_type == TYPE_CRYPTO_AESE))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && (cached_type == TYPE_CRYPTO_AESMC))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && (cached_type == TYPE_NEON_TBL1))
        {
	  return 160 /* 0xa0 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && (cached_type == TYPE_NEON_TBL1_Q))
        {
	  return 320 /* 0x140 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) && ((cached_type == TYPE_UNTYPED) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_BRANCH))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_F_LOADD) || (cached_type == TYPE_F_LOADS)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_F_STORED) || (cached_type == TYPE_F_STORES)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_FMOV) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_F_MCR))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_F_MRC))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_LOAD_16))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_STORE_16))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)) && (get_attr_fp (insn) == FP_YES))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MRS)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_CSEL))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_ADR) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_SHIFT_REG))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_REV))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_LOGICS_SHIFT_IMM)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_SDIV) || (cached_type == TYPE_UDIV)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCCMPD) || (cached_type == TYPE_FCCMPS)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_FCSEL))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_BFX))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_BFM))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_F_RINTD) || (cached_type == TYPE_F_RINTS)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_F_CVT))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_F_CVTF2I))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_F_CVTI2F))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_FADDD) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FMULD) || (cached_type == TYPE_FMULS)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_FDIVD))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_FSQRTD))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FFARITHS)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_F_MINMAXD) || (cached_type == TYPE_F_MINMAXS)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_DUP) || (cached_type == TYPE_NEON_DUP_Q)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_LOAD1_1REG) || (cached_type == TYPE_NEON_LOAD1_1REG_Q)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_STORE1_1REG) || (cached_type == TYPE_NEON_STORE1_1REG_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_LOGIC) || (cached_type == TYPE_NEON_LOGIC_Q) || (cached_type == TYPE_NEON_BSL) || (cached_type == TYPE_NEON_BSL_Q) || (cached_type == TYPE_NEON_MOVE) || (cached_type == TYPE_NEON_MOVE_Q)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_TO_GP) || (cached_type == TYPE_NEON_TO_GP_Q)))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FROM_GP) || (cached_type == TYPE_NEON_FROM_GP_Q) || (cached_type == TYPE_NEON_INS) || (cached_type == TYPE_NEON_INS_Q)))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_SHIFT_IMM) || (cached_type == TYPE_NEON_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SHIFT_REG) || (cached_type == TYPE_NEON_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_LONG) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_NARROW_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_REG) || (cached_type == TYPE_NEON_SAT_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_NARROW_Q)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_ADD) || (cached_type == TYPE_NEON_ADD_Q) || (cached_type == TYPE_NEON_SUB) || (cached_type == TYPE_NEON_SUB_Q) || (cached_type == TYPE_NEON_NEG) || (cached_type == TYPE_NEON_NEG_Q) || (cached_type == TYPE_NEON_ABS) || (cached_type == TYPE_NEON_ABS_Q) || (cached_type == TYPE_NEON_ABD_Q) || (cached_type == TYPE_NEON_ARITH_ACC) || (cached_type == TYPE_NEON_ARITH_ACC_Q) || (cached_type == TYPE_NEON_REDUC_ADD) || (cached_type == TYPE_NEON_REDUC_ADD_Q) || (cached_type == TYPE_NEON_ADD_HALVE) || (cached_type == TYPE_NEON_ADD_HALVE_Q) || (cached_type == TYPE_NEON_SUB_HALVE) || (cached_type == TYPE_NEON_SUB_HALVE_Q) || (cached_type == TYPE_NEON_QADD) || (cached_type == TYPE_NEON_QADD_Q) || (cached_type == TYPE_NEON_COMPARE) || (cached_type == TYPE_NEON_COMPARE_Q) || (cached_type == TYPE_NEON_COMPARE_ZERO) || (cached_type == TYPE_NEON_COMPARE_ZERO_Q) || (cached_type == TYPE_NEON_TST) || (cached_type == TYPE_NEON_TST_Q) || (cached_type == TYPE_NEON_MINMAX) || (cached_type == TYPE_NEON_MINMAX_Q)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_ARITH_ACC) || (cached_type == TYPE_NEON_ARITH_ACC_Q)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_MUL_B) || (cached_type == TYPE_NEON_MUL_B_Q) || (cached_type == TYPE_NEON_MUL_H) || (cached_type == TYPE_NEON_MUL_H_Q) || (cached_type == TYPE_NEON_MUL_S) || (cached_type == TYPE_NEON_MUL_S_Q) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_FP_MUL_D_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_B) || (cached_type == TYPE_NEON_MLA_B_Q) || (cached_type == TYPE_NEON_MLA_H) || (cached_type == TYPE_NEON_MLA_H_Q) || (cached_type == TYPE_NEON_MLA_S) || (cached_type == TYPE_NEON_MLA_S_Q) || (cached_type == TYPE_NEON_MLA_H_SCALAR) || (cached_type == TYPE_NEON_MLA_H_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_S_SCALAR) || (cached_type == TYPE_NEON_MLA_S_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_B_LONG) || (cached_type == TYPE_NEON_MLA_H_LONG) || (cached_type == TYPE_NEON_MLA_S_LONG) || (cached_type == TYPE_NEON_FP_MUL_S) || (cached_type == TYPE_NEON_FP_MUL_S_Q) || (cached_type == TYPE_NEON_FP_MUL_D) || (cached_type == TYPE_NEON_FP_MUL_D_Q) || (cached_type == TYPE_NEON_FP_MLA_S) || (cached_type == TYPE_NEON_FP_MLA_S_Q) || (cached_type == TYPE_NEON_FP_MLA_D) || (cached_type == TYPE_NEON_FP_MLA_D_Q) || (cached_type == TYPE_NEON_FP_MLA_S_SCALAR) || (cached_type == TYPE_NEON_FP_MLA_S_SCALAR_Q) || (cached_type == TYPE_NEON_FP_MLA_D_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_B) || (cached_type == TYPE_NEON_SAT_MUL_B_Q) || (cached_type == TYPE_NEON_SAT_MUL_H) || (cached_type == TYPE_NEON_SAT_MUL_H_Q) || (cached_type == TYPE_NEON_SAT_MUL_S) || (cached_type == TYPE_NEON_SAT_MUL_S_Q) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MLA_B_LONG) || (cached_type == TYPE_NEON_SAT_MLA_H_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_LONG) || (cached_type == TYPE_NEON_SAT_MLA_H_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_SCALAR_LONG)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_ABD_S) || (cached_type == TYPE_NEON_FP_ABD_S_Q) || (cached_type == TYPE_NEON_FP_ABD_D) || (cached_type == TYPE_NEON_FP_ABD_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_ADDSUB_S) || (cached_type == TYPE_NEON_FP_ADDSUB_S_Q) || (cached_type == TYPE_NEON_FP_ADDSUB_D) || (cached_type == TYPE_NEON_FP_ADDSUB_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_DIV_S_Q) || (cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_DIV_D_Q)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_NEG_S) || (cached_type == TYPE_NEON_FP_NEG_S_Q) || (cached_type == TYPE_NEON_FP_NEG_D) || (cached_type == TYPE_NEON_FP_NEG_D_Q) || (cached_type == TYPE_NEON_FP_ABS_S) || (cached_type == TYPE_NEON_FP_ABS_S_Q) || (cached_type == TYPE_NEON_FP_ABS_D) || (cached_type == TYPE_NEON_FP_ABS_D_Q)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_ROUND_S) || (cached_type == TYPE_NEON_FP_ROUND_S_Q) || (cached_type == TYPE_NEON_FP_ROUND_D) || (cached_type == TYPE_NEON_FP_ROUND_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_INT_TO_FP_S) || (cached_type == TYPE_NEON_INT_TO_FP_S_Q) || (cached_type == TYPE_NEON_INT_TO_FP_D) || (cached_type == TYPE_NEON_INT_TO_FP_D_Q) || (cached_type == TYPE_NEON_FP_CVT_WIDEN_S) || (cached_type == TYPE_NEON_FP_CVT_NARROW_S_Q) || (cached_type == TYPE_NEON_FP_CVT_NARROW_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_REDUC_ADD_S) || (cached_type == TYPE_NEON_FP_REDUC_ADD_S_Q) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_CLS) || (cached_type == TYPE_NEON_CLS_Q)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_STORE1_ONE_LANE) || (cached_type == TYPE_NEON_STORE1_ONE_LANE_Q) || (cached_type == TYPE_NEON_STP) || (cached_type == TYPE_NEON_STP_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_SUB_HALVE_NARROW_Q) || (cached_type == TYPE_NEON_ADD_HALVE_NARROW_Q)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_SHIFT_ACC) || (cached_type == TYPE_NEON_SHIFT_ACC_Q)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_COMPARE_S) || (cached_type == TYPE_NEON_FP_COMPARE_S_Q) || (cached_type == TYPE_NEON_FP_COMPARE_D) || (cached_type == TYPE_NEON_FP_COMPARE_D_Q)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_SQRT_S) || (cached_type == TYPE_NEON_FP_SQRT_S_Q) || (cached_type == TYPE_NEON_FP_SQRT_D) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_TBL1) || (cached_type == TYPE_NEON_TBL1_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_TBL2) || (cached_type == TYPE_NEON_TBL2_Q)))
        {
	  return 8;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_PERMUTE) || (cached_type == TYPE_NEON_PERMUTE_Q)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_NEON_LOAD1_ALL_LANES))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_RECPE_S) || (cached_type == TYPE_NEON_FP_RECPE_S_Q) || (cached_type == TYPE_NEON_FP_RECPE_D) || (cached_type == TYPE_NEON_FP_RECPE_D_Q) || (cached_type == TYPE_NEON_FP_RECPX_S) || (cached_type == TYPE_NEON_FP_RECPX_S_Q) || (cached_type == TYPE_NEON_FP_RECPX_D) || (cached_type == TYPE_NEON_FP_RECPX_D_Q)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_RECPS_S) || (cached_type == TYPE_NEON_FP_RECPS_S_Q) || (cached_type == TYPE_NEON_FP_RECPS_D) || (cached_type == TYPE_NEON_FP_RECPS_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_MUL_D_LONG) || (cached_type == TYPE_CRYPTO_PMULL)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_CALL) || (cached_type == TYPE_BRANCH) || (cached_type == TYPE_TRAP)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && (cached_type == TYPE_BLOCK))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && (cached_type == TYPE_MRS))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_UNTYPED)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && (cached_type == TYPE_MOV_REG))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_CSEL) || (cached_type == TYPE_ADR) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_ROTATE_IMM)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_SDIV) || (cached_type == TYPE_UDIV)))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_MLA) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_MUL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_UMULL)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && (cached_type == TYPE_CLZ))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && (cached_type == TYPE_LOAD_4))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_16)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && (cached_type == TYPE_STORE_4))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_STORE_8) || (cached_type == TYPE_STORE_16)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_F_MINMAXS) || (cached_type == TYPE_F_MINMAXD)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_FMULS) || (cached_type == TYPE_FMULD) || (cached_type == TYPE_FMACS) || (cached_type == TYPE_FMACD)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD)))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && (cached_type == TYPE_FCSEL))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_F_MRC)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && (cached_type == TYPE_F_MCR))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_ABD) || (cached_type == TYPE_NEON_ABD_Q) || (cached_type == TYPE_NEON_ARITH_ACC) || (cached_type == TYPE_NEON_ARITH_ACC_Q) || (cached_type == TYPE_NEON_ABS) || (cached_type == TYPE_NEON_ABS_Q) || (cached_type == TYPE_NEON_ADD) || (cached_type == TYPE_NEON_ADD_Q) || (cached_type == TYPE_NEON_SUB) || (cached_type == TYPE_NEON_SUB_Q) || (cached_type == TYPE_NEON_NEG) || (cached_type == TYPE_NEON_NEG_Q) || (cached_type == TYPE_NEON_ADD_LONG) || (cached_type == TYPE_NEON_ADD_WIDEN) || (cached_type == TYPE_NEON_ADD_HALVE) || (cached_type == TYPE_NEON_ADD_HALVE_Q) || (cached_type == TYPE_NEON_SUB_LONG) || (cached_type == TYPE_NEON_SUB_WIDEN) || (cached_type == TYPE_NEON_SUB_HALVE) || (cached_type == TYPE_NEON_SUB_HALVE_Q) || (cached_type == TYPE_NEON_ADD_HALVE_NARROW_Q) || (cached_type == TYPE_NEON_SUB_HALVE_NARROW_Q) || (cached_type == TYPE_NEON_QABS) || (cached_type == TYPE_NEON_QABS_Q) || (cached_type == TYPE_NEON_QADD) || (cached_type == TYPE_NEON_QADD_Q) || (cached_type == TYPE_NEON_QNEG) || (cached_type == TYPE_NEON_QNEG_Q) || (cached_type == TYPE_NEON_QSUB) || (cached_type == TYPE_NEON_QSUB_Q) || (cached_type == TYPE_NEON_MINMAX) || (cached_type == TYPE_NEON_MINMAX_Q) || (cached_type == TYPE_NEON_REDUC_MINMAX) || (cached_type == TYPE_NEON_REDUC_MINMAX_Q) || (cached_type == TYPE_NEON_MUL_B) || (cached_type == TYPE_NEON_MUL_H) || (cached_type == TYPE_NEON_MUL_S) || (cached_type == TYPE_NEON_MUL_B_Q) || (cached_type == TYPE_NEON_MUL_H_Q) || (cached_type == TYPE_NEON_MUL_S_Q) || (cached_type == TYPE_NEON_SAT_MUL_B) || (cached_type == TYPE_NEON_SAT_MUL_H) || (cached_type == TYPE_NEON_SAT_MUL_S) || (cached_type == TYPE_NEON_SAT_MUL_B_Q) || (cached_type == TYPE_NEON_SAT_MUL_H_Q) || (cached_type == TYPE_NEON_SAT_MUL_S_Q) || (cached_type == TYPE_NEON_MLA_B) || (cached_type == TYPE_NEON_MLA_H) || (cached_type == TYPE_NEON_MLA_S) || (cached_type == TYPE_NEON_MLA_B_Q) || (cached_type == TYPE_NEON_MLA_H_Q) || (cached_type == TYPE_NEON_MLA_S_Q) || (cached_type == TYPE_NEON_MUL_B_LONG) || (cached_type == TYPE_NEON_MUL_H_LONG) || (cached_type == TYPE_NEON_MUL_S_LONG) || (cached_type == TYPE_NEON_MUL_D_LONG) || (cached_type == TYPE_NEON_SAT_MUL_B_LONG) || (cached_type == TYPE_NEON_SAT_MUL_H_LONG) || (cached_type == TYPE_NEON_SAT_MUL_S_LONG) || (cached_type == TYPE_NEON_MLA_B_LONG) || (cached_type == TYPE_NEON_MLA_H_LONG) || (cached_type == TYPE_NEON_MLA_S_LONG) || (cached_type == TYPE_NEON_SAT_MLA_B_LONG) || (cached_type == TYPE_NEON_SAT_MLA_H_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_LONG) || (cached_type == TYPE_NEON_SHIFT_ACC) || (cached_type == TYPE_NEON_SHIFT_ACC_Q) || (cached_type == TYPE_NEON_SHIFT_IMM) || (cached_type == TYPE_NEON_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SHIFT_REG) || (cached_type == TYPE_NEON_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_LONG) || (cached_type == TYPE_NEON_SHIFT_IMM_NARROW_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_REG) || (cached_type == TYPE_NEON_SAT_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_NARROW_Q)))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_REDUC_ADD) || (cached_type == TYPE_NEON_REDUC_ADD_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_COMPARE) || (cached_type == TYPE_NEON_COMPARE_Q) || (cached_type == TYPE_NEON_COMPARE_ZERO) || (cached_type == TYPE_NEON_TST) || (cached_type == TYPE_NEON_TST_Q)))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_LOGIC) || (cached_type == TYPE_NEON_LOGIC_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_FP_ABS_S) || (cached_type == TYPE_NEON_FP_ABS_D) || (cached_type == TYPE_NEON_FP_ABS_S_Q) || (cached_type == TYPE_NEON_FP_ABS_D_Q) || (cached_type == TYPE_NEON_FP_COMPARE_S) || (cached_type == TYPE_NEON_FP_COMPARE_D) || (cached_type == TYPE_NEON_FP_COMPARE_S_Q) || (cached_type == TYPE_NEON_FP_COMPARE_D_Q) || (cached_type == TYPE_NEON_FP_MINMAX_S) || (cached_type == TYPE_NEON_FP_MINMAX_D) || (cached_type == TYPE_NEON_FP_MINMAX_S_Q) || (cached_type == TYPE_NEON_FP_MINMAX_D_Q) || (cached_type == TYPE_NEON_FP_REDUC_MINMAX_S) || (cached_type == TYPE_NEON_FP_REDUC_MINMAX_D) || (cached_type == TYPE_NEON_FP_REDUC_MINMAX_S_Q) || (cached_type == TYPE_NEON_FP_REDUC_MINMAX_D_Q) || (cached_type == TYPE_NEON_FP_NEG_S) || (cached_type == TYPE_NEON_FP_NEG_D) || (cached_type == TYPE_NEON_FP_NEG_S_Q) || (cached_type == TYPE_NEON_FP_NEG_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_FP_ABD_S) || (cached_type == TYPE_NEON_FP_ABD_D) || (cached_type == TYPE_NEON_FP_ABD_S_Q) || (cached_type == TYPE_NEON_FP_ABD_D_Q) || (cached_type == TYPE_NEON_FP_ADDSUB_S) || (cached_type == TYPE_NEON_FP_ADDSUB_D) || (cached_type == TYPE_NEON_FP_ADDSUB_S_Q) || (cached_type == TYPE_NEON_FP_ADDSUB_D_Q) || (cached_type == TYPE_NEON_FP_REDUC_ADD_S) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D) || (cached_type == TYPE_NEON_FP_REDUC_ADD_S_Q) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D_Q) || (cached_type == TYPE_NEON_FP_MUL_S) || (cached_type == TYPE_NEON_FP_MUL_D) || (cached_type == TYPE_NEON_FP_MUL_S_Q) || (cached_type == TYPE_NEON_FP_MUL_D_Q) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_FP_MUL_D_SCALAR_Q) || (cached_type == TYPE_NEON_FP_MLA_S) || (cached_type == TYPE_NEON_FP_MLA_D) || (cached_type == TYPE_NEON_FP_MLA_S_Q) || (cached_type == TYPE_NEON_FP_MLA_D_Q)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_FP_CVT_WIDEN_S) || (cached_type == TYPE_NEON_FP_CVT_NARROW_D_Q) || (cached_type == TYPE_NEON_FP_TO_INT_S) || (cached_type == TYPE_NEON_FP_TO_INT_D) || (cached_type == TYPE_NEON_FP_TO_INT_S_Q) || (cached_type == TYPE_NEON_FP_TO_INT_D_Q) || (cached_type == TYPE_NEON_INT_TO_FP_S) || (cached_type == TYPE_NEON_INT_TO_FP_D) || (cached_type == TYPE_NEON_INT_TO_FP_S_Q) || (cached_type == TYPE_NEON_INT_TO_FP_D_Q) || (cached_type == TYPE_NEON_FP_ROUND_S) || (cached_type == TYPE_NEON_FP_ROUND_D) || (cached_type == TYPE_NEON_FP_ROUND_S_Q) || (cached_type == TYPE_NEON_FP_ROUND_D_Q)))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_DIV_S_Q)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_DIV_D_Q)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_RBIT) || (cached_type == TYPE_NEON_BSL) || (cached_type == TYPE_NEON_BSL_Q) || (cached_type == TYPE_NEON_CLS) || (cached_type == TYPE_NEON_CLS_Q) || (cached_type == TYPE_NEON_CNT) || (cached_type == TYPE_NEON_CNT_Q) || (cached_type == TYPE_NEON_FROM_GP) || (cached_type == TYPE_NEON_FROM_GP_Q) || (cached_type == TYPE_NEON_DUP) || (cached_type == TYPE_NEON_DUP_Q) || (cached_type == TYPE_NEON_EXT) || (cached_type == TYPE_NEON_EXT_Q) || (cached_type == TYPE_NEON_INS) || (cached_type == TYPE_NEON_INS_Q) || (cached_type == TYPE_NEON_MOVE) || (cached_type == TYPE_NEON_MOVE_Q) || (cached_type == TYPE_NEON_FP_RECPE_S) || (cached_type == TYPE_NEON_FP_RECPE_D) || (cached_type == TYPE_NEON_FP_RECPE_S_Q) || (cached_type == TYPE_NEON_FP_RECPE_D_Q) || (cached_type == TYPE_NEON_FP_RECPX_S) || (cached_type == TYPE_NEON_FP_RECPX_D) || (cached_type == TYPE_NEON_FP_RECPX_S_Q) || (cached_type == TYPE_NEON_FP_RECPX_D_Q) || (cached_type == TYPE_NEON_REV) || (cached_type == TYPE_NEON_REV_Q) || (cached_type == TYPE_NEON_PERMUTE) || (cached_type == TYPE_NEON_PERMUTE_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_FP_RECPS_S) || (cached_type == TYPE_NEON_FP_RECPS_S_Q) || (cached_type == TYPE_NEON_FP_RECPS_D) || (cached_type == TYPE_NEON_FP_RECPS_D_Q) || (cached_type == TYPE_NEON_FP_SQRT_S) || (cached_type == TYPE_NEON_FP_SQRT_S_Q) || (cached_type == TYPE_NEON_FP_SQRT_D) || (cached_type == TYPE_NEON_FP_SQRT_D_Q) || (cached_type == TYPE_NEON_FP_RSQRTE_S) || (cached_type == TYPE_NEON_FP_RSQRTE_S_Q) || (cached_type == TYPE_NEON_FP_RSQRTE_D) || (cached_type == TYPE_NEON_FP_RSQRTE_D_Q) || (cached_type == TYPE_NEON_FP_RSQRTS_S) || (cached_type == TYPE_NEON_FP_RSQRTS_S_Q) || (cached_type == TYPE_NEON_FP_RSQRTS_D) || (cached_type == TYPE_NEON_FP_RSQRTS_D_Q)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_TBL1) || (cached_type == TYPE_NEON_TBL1_Q) || (cached_type == TYPE_NEON_TBL2) || (cached_type == TYPE_NEON_TBL2_Q) || (cached_type == TYPE_NEON_TBL3) || (cached_type == TYPE_NEON_TBL3_Q) || (cached_type == TYPE_NEON_TBL4) || (cached_type == TYPE_NEON_TBL4_Q)))
        {
	  return 8;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_TO_GP) || (cached_type == TYPE_NEON_TO_GP_Q)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_LDP) || (cached_type == TYPE_NEON_LDP_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_LOAD1_1REG) || (cached_type == TYPE_NEON_LOAD1_1REG_Q) || (cached_type == TYPE_NEON_LOAD1_2REG) || (cached_type == TYPE_NEON_LOAD1_2REG_Q) || (cached_type == TYPE_NEON_LOAD1_3REG) || (cached_type == TYPE_NEON_LOAD1_3REG_Q) || (cached_type == TYPE_NEON_LOAD1_4REG) || (cached_type == TYPE_NEON_LOAD1_4REG_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_LOAD1_ONE_LANE) || (cached_type == TYPE_NEON_LOAD1_ONE_LANE_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_LOAD1_ALL_LANES) || (cached_type == TYPE_NEON_LOAD1_ALL_LANES_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_LOAD2_2REG) || (cached_type == TYPE_NEON_LOAD2_2REG_Q) || (cached_type == TYPE_NEON_LOAD2_ONE_LANE) || (cached_type == TYPE_NEON_LOAD2_ONE_LANE_Q) || (cached_type == TYPE_NEON_LOAD2_ALL_LANES) || (cached_type == TYPE_NEON_LOAD2_ALL_LANES_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_LOAD3_3REG) || (cached_type == TYPE_NEON_LOAD3_3REG_Q) || (cached_type == TYPE_NEON_LOAD3_ONE_LANE) || (cached_type == TYPE_NEON_LOAD3_ONE_LANE_Q) || (cached_type == TYPE_NEON_LOAD3_ALL_LANES) || (cached_type == TYPE_NEON_LOAD3_ALL_LANES_Q)))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_LOAD4_4REG) || (cached_type == TYPE_NEON_LOAD4_4REG_Q) || (cached_type == TYPE_NEON_LOAD4_ONE_LANE) || (cached_type == TYPE_NEON_LOAD4_ONE_LANE_Q) || (cached_type == TYPE_NEON_LOAD4_ALL_LANES) || (cached_type == TYPE_NEON_LOAD4_ALL_LANES_Q)))
        {
	  return 8;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_STP) || (cached_type == TYPE_NEON_STP_Q)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_STORE1_1REG) || (cached_type == TYPE_NEON_STORE1_1REG_Q) || (cached_type == TYPE_NEON_STORE1_2REG) || (cached_type == TYPE_NEON_STORE1_2REG_Q) || (cached_type == TYPE_NEON_STORE1_3REG) || (cached_type == TYPE_NEON_STORE1_4REG)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_STORE1_ONE_LANE) || (cached_type == TYPE_NEON_STORE1_ONE_LANE_Q)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_STORE2_2REG) || (cached_type == TYPE_NEON_STORE2_2REG_Q) || (cached_type == TYPE_NEON_STORE2_ONE_LANE) || (cached_type == TYPE_NEON_STORE2_ONE_LANE_Q)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_STORE3_3REG) || (cached_type == TYPE_NEON_STORE3_3REG_Q) || (cached_type == TYPE_NEON_STORE3_ONE_LANE) || (cached_type == TYPE_NEON_STORE3_ONE_LANE_Q)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_NEON_STORE4_4REG) || (cached_type == TYPE_NEON_STORE4_4REG_Q) || (cached_type == TYPE_NEON_STORE4_ONE_LANE) || (cached_type == TYPE_NEON_STORE4_ONE_LANE_Q)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_CRYPTO_AESE) || (cached_type == TYPE_CRYPTO_AESMC)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && ((cached_type == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA1_XOR) || (cached_type == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_FAST) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && (cached_type == TYPE_CRC))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))) && (cached_type == TYPE_CRYPTO_PMULL))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADCS_REG)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_CRC) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && (cached_type == TYPE_BLOCK))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_NEON_ABD) || (cached_type == TYPE_NEON_ARITH_ACC)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && (cached_type == TYPE_NEON_ARITH_ACC_Q))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && (cached_type == TYPE_NEON_MUL_D_LONG))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 8;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && (((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_SHIFT_ACC) || (cached_tsv110_neon_type == TSV110_NEON_TYPE_NEON_SHIFT_IMM_BASIC) || (cached_tsv110_neon_type == TSV110_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX) || (cached_tsv110_neon_type == TSV110_NEON_TYPE_NEON_SHIFT_REG_BASIC) || (cached_tsv110_neon_type == TSV110_NEON_TYPE_NEON_SHIFT_REG_COMPLEX)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && (((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q) || (cached_tsv110_neon_type == TSV110_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_NEON_FP_MINMAX_S_Q) || (cached_type == TYPE_NEON_FP_MINMAX_D_Q)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_FP_REDUCTIONS_Q))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && (((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_FP_CVT_INT) || (cached_tsv110_neon_type == TSV110_NEON_TYPE_NEON_FP_CVT_INT_Q)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_FP_MUL))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && (((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_FP_MLA) || (cached_tsv110_neon_type == TSV110_NEON_TYPE_NEON_FP_RECPS_RSQRTS)))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && (((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_FP_MLA_Q) || (cached_tsv110_neon_type == TSV110_NEON_TYPE_NEON_FP_RECPS_RSQRTS_Q)))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_BITOPS))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_NEON_FROM_GP) || (cached_type == TYPE_F_MCR)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && (cached_type == TYPE_F_MCRR))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_NEON_TO_GP) || (cached_type == TYPE_NEON_TO_GP_Q)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_NEON_LOAD1_ONE_LANE) || (cached_type == TYPE_NEON_LOAD1_ONE_LANE_Q) || (cached_type == TYPE_NEON_LOAD1_ALL_LANES) || (cached_type == TYPE_NEON_LOAD1_ALL_LANES_Q)))
        {
	  return 8;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD) || (cached_type == TYPE_NEON_LOAD1_1REG) || (cached_type == TYPE_NEON_LOAD1_1REG_Q)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_NEON_LOAD1_2REG) || (cached_type == TYPE_NEON_LOAD1_2REG_Q)))
        {
	  return 6;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_NEON_LOAD1_3REG) || (cached_type == TYPE_NEON_LOAD1_3REG_Q)))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_NEON_LOAD1_4REG) || (cached_type == TYPE_NEON_LOAD1_4REG_Q)))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_NEON_LOAD1_2REG) || (cached_type == TYPE_NEON_LOAD1_2REG_Q) || (cached_type == TYPE_NEON_LOAD2_2REG) || (cached_type == TYPE_NEON_LOAD2_2REG_Q) || (cached_type == TYPE_NEON_LOAD2_ALL_LANES) || (cached_type == TYPE_NEON_LOAD2_ALL_LANES_Q) || (cached_type == TYPE_NEON_LOAD2_ONE_LANE) || (cached_type == TYPE_NEON_LOAD2_ONE_LANE_Q)))
        {
	  return 8;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_NEON_LOAD3_3REG) || (cached_type == TYPE_NEON_LOAD3_3REG_Q) || (cached_type == TYPE_NEON_LOAD3_ONE_LANE) || (cached_type == TYPE_NEON_LOAD3_ONE_LANE_Q) || (cached_type == TYPE_NEON_LOAD3_ALL_LANES) || (cached_type == TYPE_NEON_LOAD3_ALL_LANES_Q)))
        {
	  return 9;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_NEON_LOAD4_ALL_LANES) || (cached_type == TYPE_NEON_LOAD4_ALL_LANES_Q) || (cached_type == TYPE_NEON_LOAD4_ONE_LANE) || (cached_type == TYPE_NEON_LOAD4_ONE_LANE_Q)))
        {
	  return 9;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_NEON_LOAD4_ALL_LANES) || (cached_type == TYPE_NEON_LOAD4_ALL_LANES_Q) || (cached_type == TYPE_NEON_LOAD4_ONE_LANE) || (cached_type == TYPE_NEON_LOAD4_ONE_LANE_Q)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_STORE_A))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_STORE_B))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_tsv110_neon_type = get_attr_tsv110_neon_type (insn)) == TSV110_NEON_TYPE_NEON_STORE_COMPLEX))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FMOV)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && (cached_type == TYPE_F_CVT))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && (cached_type == TYPE_F_CVTF2I))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && (cached_type == TYPE_F_CVTI2F))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_FDIVD) || (cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_DIV_S_Q) || (cached_type == TYPE_NEON_FP_DIV_D_Q)))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_FSQRTS) || (cached_type == TYPE_NEON_FP_SQRT_S) || (cached_type == TYPE_FSQRTD) || (cached_type == TYPE_NEON_FP_SQRT_D) || (cached_type == TYPE_NEON_FP_SQRT_S_Q) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_CRYPTO_AESE) || (cached_type == TYPE_CRYPTO_AESMC)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA1_XOR)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && (cached_type == TYPE_CRYPTO_SHA256_FAST))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && ((cached_type == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_TSV110)))) && (cached_type == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_CALL) || (cached_type == TYPE_BRANCH) || (cached_type == TYPE_TRAP)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && (cached_type == TYPE_BLOCK))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && (cached_type == TYPE_MRS))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && (cached_type == TYPE_MULTIPLE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && (cached_type == TYPE_MOV_REG))
        {
	  return 0;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_CSEL) || (cached_type == TYPE_ADR) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_ROTATE_IMM)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM)))
        {
	  return 2;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_SDIV) || (cached_type == TYPE_UDIV)))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_MLA) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_MUL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_UMULL)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && (cached_type == TYPE_CLZ))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && (cached_type == TYPE_LOAD_4))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_16)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && (cached_type == TYPE_STORE_4))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_STORE_8) || (cached_type == TYPE_STORE_16)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_F_MINMAXS) || (cached_type == TYPE_F_MINMAXD)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_FMULS) || (cached_type == TYPE_FMULD) || (cached_type == TYPE_FMACS) || (cached_type == TYPE_FMACD)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && (cached_type == TYPE_FCSEL))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_F_MRC)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_F_MRC)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && (cached_type == TYPE_F_MCR))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_ABD) || (cached_type == TYPE_NEON_ABD_Q) || (cached_type == TYPE_NEON_ARITH_ACC) || (cached_type == TYPE_NEON_ARITH_ACC_Q) || (cached_type == TYPE_NEON_ABS) || (cached_type == TYPE_NEON_ABS_Q) || (cached_type == TYPE_NEON_ADD) || (cached_type == TYPE_NEON_ADD_Q) || (cached_type == TYPE_NEON_SUB) || (cached_type == TYPE_NEON_SUB_Q) || (cached_type == TYPE_NEON_NEG) || (cached_type == TYPE_NEON_NEG_Q) || (cached_type == TYPE_NEON_ADD_LONG) || (cached_type == TYPE_NEON_ADD_WIDEN) || (cached_type == TYPE_NEON_ADD_HALVE) || (cached_type == TYPE_NEON_ADD_HALVE_Q) || (cached_type == TYPE_NEON_SUB_LONG) || (cached_type == TYPE_NEON_SUB_WIDEN) || (cached_type == TYPE_NEON_SUB_HALVE) || (cached_type == TYPE_NEON_SUB_HALVE_Q) || (cached_type == TYPE_NEON_ADD_HALVE_NARROW_Q) || (cached_type == TYPE_NEON_SUB_HALVE_NARROW_Q) || (cached_type == TYPE_NEON_QABS) || (cached_type == TYPE_NEON_QABS_Q) || (cached_type == TYPE_NEON_QADD) || (cached_type == TYPE_NEON_QADD_Q) || (cached_type == TYPE_NEON_QNEG) || (cached_type == TYPE_NEON_QNEG_Q) || (cached_type == TYPE_NEON_QSUB) || (cached_type == TYPE_NEON_QSUB_Q) || (cached_type == TYPE_NEON_MINMAX) || (cached_type == TYPE_NEON_MINMAX_Q) || (cached_type == TYPE_NEON_REDUC_MINMAX) || (cached_type == TYPE_NEON_REDUC_MINMAX_Q) || (cached_type == TYPE_NEON_MUL_B) || (cached_type == TYPE_NEON_MUL_H) || (cached_type == TYPE_NEON_MUL_S) || (cached_type == TYPE_NEON_MUL_B_Q) || (cached_type == TYPE_NEON_MUL_H_Q) || (cached_type == TYPE_NEON_MUL_S_Q) || (cached_type == TYPE_NEON_SAT_MUL_B) || (cached_type == TYPE_NEON_SAT_MUL_H) || (cached_type == TYPE_NEON_SAT_MUL_S) || (cached_type == TYPE_NEON_SAT_MUL_B_Q) || (cached_type == TYPE_NEON_SAT_MUL_H_Q) || (cached_type == TYPE_NEON_SAT_MUL_S_Q) || (cached_type == TYPE_NEON_MLA_B) || (cached_type == TYPE_NEON_MLA_H) || (cached_type == TYPE_NEON_MLA_S) || (cached_type == TYPE_NEON_MLA_B_Q) || (cached_type == TYPE_NEON_MLA_H_Q) || (cached_type == TYPE_NEON_MLA_S_Q) || (cached_type == TYPE_NEON_MUL_B_LONG) || (cached_type == TYPE_NEON_MUL_H_LONG) || (cached_type == TYPE_NEON_MUL_S_LONG) || (cached_type == TYPE_NEON_MUL_D_LONG) || (cached_type == TYPE_NEON_SAT_MUL_B_LONG) || (cached_type == TYPE_NEON_SAT_MUL_H_LONG) || (cached_type == TYPE_NEON_SAT_MUL_S_LONG) || (cached_type == TYPE_NEON_MLA_B_LONG) || (cached_type == TYPE_NEON_MLA_H_LONG) || (cached_type == TYPE_NEON_MLA_S_LONG) || (cached_type == TYPE_NEON_SAT_MLA_B_LONG) || (cached_type == TYPE_NEON_SAT_MLA_H_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_LONG) || (cached_type == TYPE_NEON_SHIFT_ACC) || (cached_type == TYPE_NEON_SHIFT_ACC_Q) || (cached_type == TYPE_NEON_SHIFT_IMM) || (cached_type == TYPE_NEON_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SHIFT_REG) || (cached_type == TYPE_NEON_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_LONG) || (cached_type == TYPE_NEON_SHIFT_IMM_NARROW_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_REG) || (cached_type == TYPE_NEON_SAT_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_NARROW_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_REDUC_ADD) || (cached_type == TYPE_NEON_REDUC_ADD_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_COMPARE) || (cached_type == TYPE_NEON_COMPARE_Q) || (cached_type == TYPE_NEON_COMPARE_ZERO) || (cached_type == TYPE_NEON_TST) || (cached_type == TYPE_NEON_TST_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_LOGIC) || (cached_type == TYPE_NEON_LOGIC_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_LOGIC) || (cached_type == TYPE_NEON_LOGIC_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_FP_ABS_S) || (cached_type == TYPE_NEON_FP_ABS_D) || (cached_type == TYPE_NEON_FP_ABS_S_Q) || (cached_type == TYPE_NEON_FP_ABS_D_Q) || (cached_type == TYPE_NEON_FP_COMPARE_S) || (cached_type == TYPE_NEON_FP_COMPARE_D) || (cached_type == TYPE_NEON_FP_COMPARE_S_Q) || (cached_type == TYPE_NEON_FP_COMPARE_D_Q) || (cached_type == TYPE_NEON_FP_MINMAX_S) || (cached_type == TYPE_NEON_FP_MINMAX_D) || (cached_type == TYPE_NEON_FP_MINMAX_S_Q) || (cached_type == TYPE_NEON_FP_MINMAX_D_Q) || (cached_type == TYPE_NEON_FP_REDUC_MINMAX_S) || (cached_type == TYPE_NEON_FP_REDUC_MINMAX_D) || (cached_type == TYPE_NEON_FP_REDUC_MINMAX_S_Q) || (cached_type == TYPE_NEON_FP_REDUC_MINMAX_D_Q) || (cached_type == TYPE_NEON_FP_NEG_S) || (cached_type == TYPE_NEON_FP_NEG_D) || (cached_type == TYPE_NEON_FP_NEG_S_Q) || (cached_type == TYPE_NEON_FP_NEG_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_FP_ABD_S) || (cached_type == TYPE_NEON_FP_ABD_D) || (cached_type == TYPE_NEON_FP_ABD_S_Q) || (cached_type == TYPE_NEON_FP_ABD_D_Q) || (cached_type == TYPE_NEON_FP_ADDSUB_S) || (cached_type == TYPE_NEON_FP_ADDSUB_D) || (cached_type == TYPE_NEON_FP_ADDSUB_S_Q) || (cached_type == TYPE_NEON_FP_ADDSUB_D_Q) || (cached_type == TYPE_NEON_FP_REDUC_ADD_S) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D) || (cached_type == TYPE_NEON_FP_REDUC_ADD_S_Q) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D_Q)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_FP_ABD_S) || (cached_type == TYPE_NEON_FP_ABD_D) || (cached_type == TYPE_NEON_FP_ABD_S_Q) || (cached_type == TYPE_NEON_FP_ABD_D_Q) || (cached_type == TYPE_NEON_FP_ADDSUB_S) || (cached_type == TYPE_NEON_FP_ADDSUB_D) || (cached_type == TYPE_NEON_FP_ADDSUB_S_Q) || (cached_type == TYPE_NEON_FP_ADDSUB_D_Q) || (cached_type == TYPE_NEON_FP_REDUC_ADD_S) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D) || (cached_type == TYPE_NEON_FP_REDUC_ADD_S_Q) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_FP_MUL_S) || (cached_type == TYPE_NEON_FP_MUL_D) || (cached_type == TYPE_NEON_FP_MUL_S_Q) || (cached_type == TYPE_NEON_FP_MUL_D_Q) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_FP_MUL_D_SCALAR_Q) || (cached_type == TYPE_NEON_FP_MLA_S) || (cached_type == TYPE_NEON_FP_MLA_D) || (cached_type == TYPE_NEON_FP_MLA_S_Q) || (cached_type == TYPE_NEON_FP_MLA_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_FP_CVT_WIDEN_S) || (cached_type == TYPE_NEON_FP_CVT_NARROW_D_Q) || (cached_type == TYPE_NEON_FP_TO_INT_S) || (cached_type == TYPE_NEON_FP_TO_INT_D) || (cached_type == TYPE_NEON_FP_TO_INT_S_Q) || (cached_type == TYPE_NEON_FP_TO_INT_D_Q) || (cached_type == TYPE_NEON_INT_TO_FP_S) || (cached_type == TYPE_NEON_INT_TO_FP_D) || (cached_type == TYPE_NEON_INT_TO_FP_S_Q) || (cached_type == TYPE_NEON_INT_TO_FP_D_Q) || (cached_type == TYPE_NEON_FP_ROUND_S) || (cached_type == TYPE_NEON_FP_ROUND_D) || (cached_type == TYPE_NEON_FP_ROUND_S_Q) || (cached_type == TYPE_NEON_FP_ROUND_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_DIV_S_Q)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_DIV_D_Q)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_RBIT) || (cached_type == TYPE_NEON_BSL) || (cached_type == TYPE_NEON_BSL_Q) || (cached_type == TYPE_NEON_CLS) || (cached_type == TYPE_NEON_CLS_Q) || (cached_type == TYPE_NEON_CNT) || (cached_type == TYPE_NEON_CNT_Q) || (cached_type == TYPE_NEON_MOVE) || (cached_type == TYPE_NEON_MOVE_Q)))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_RBIT) || (cached_type == TYPE_NEON_BSL) || (cached_type == TYPE_NEON_BSL_Q) || (cached_type == TYPE_NEON_CLS) || (cached_type == TYPE_NEON_CLS_Q) || (cached_type == TYPE_NEON_CNT) || (cached_type == TYPE_NEON_CNT_Q) || (cached_type == TYPE_NEON_FROM_GP) || (cached_type == TYPE_NEON_FROM_GP_Q) || (cached_type == TYPE_NEON_MOVE) || (cached_type == TYPE_NEON_MOVE_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_DUP) || (cached_type == TYPE_NEON_DUP_Q) || (cached_type == TYPE_NEON_EXT) || (cached_type == TYPE_NEON_EXT_Q) || (cached_type == TYPE_NEON_INS) || (cached_type == TYPE_NEON_INS_Q) || (cached_type == TYPE_NEON_MOVE) || (cached_type == TYPE_NEON_MOVE_Q) || (cached_type == TYPE_NEON_FP_RECPE_S) || (cached_type == TYPE_NEON_FP_RECPE_D) || (cached_type == TYPE_NEON_FP_RECPE_S_Q) || (cached_type == TYPE_NEON_FP_RECPE_D_Q) || (cached_type == TYPE_NEON_FP_RECPX_S) || (cached_type == TYPE_NEON_FP_RECPX_D) || (cached_type == TYPE_NEON_FP_RECPX_S_Q) || (cached_type == TYPE_NEON_FP_RECPX_D_Q) || (cached_type == TYPE_NEON_REV) || (cached_type == TYPE_NEON_REV_Q) || (cached_type == TYPE_NEON_PERMUTE) || (cached_type == TYPE_NEON_PERMUTE_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_FP_RECPS_S) || (cached_type == TYPE_NEON_FP_RECPS_S_Q) || (cached_type == TYPE_NEON_FP_RECPS_D) || (cached_type == TYPE_NEON_FP_RECPS_D_Q) || (cached_type == TYPE_NEON_FP_SQRT_S) || (cached_type == TYPE_NEON_FP_SQRT_S_Q) || (cached_type == TYPE_NEON_FP_SQRT_D) || (cached_type == TYPE_NEON_FP_SQRT_D_Q) || (cached_type == TYPE_NEON_FP_RSQRTE_S) || (cached_type == TYPE_NEON_FP_RSQRTE_S_Q) || (cached_type == TYPE_NEON_FP_RSQRTE_D) || (cached_type == TYPE_NEON_FP_RSQRTE_D_Q) || (cached_type == TYPE_NEON_FP_RSQRTS_S) || (cached_type == TYPE_NEON_FP_RSQRTS_S_Q) || (cached_type == TYPE_NEON_FP_RSQRTS_D) || (cached_type == TYPE_NEON_FP_RSQRTS_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_TBL1) || (cached_type == TYPE_NEON_TBL1_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_TBL2) || (cached_type == TYPE_NEON_TBL2_Q)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_TBL3) || (cached_type == TYPE_NEON_TBL3_Q)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_TBL4) || (cached_type == TYPE_NEON_TBL4_Q)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_TO_GP) || (cached_type == TYPE_NEON_TO_GP_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_LDP) || (cached_type == TYPE_NEON_LDP_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_LOAD1_1REG) || (cached_type == TYPE_NEON_LOAD1_1REG_Q) || (cached_type == TYPE_NEON_LOAD1_2REG) || (cached_type == TYPE_NEON_LOAD1_2REG_Q) || (cached_type == TYPE_NEON_LOAD1_3REG) || (cached_type == TYPE_NEON_LOAD1_3REG_Q) || (cached_type == TYPE_NEON_LOAD1_4REG) || (cached_type == TYPE_NEON_LOAD1_4REG_Q)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_LOAD1_ONE_LANE) || (cached_type == TYPE_NEON_LOAD1_ONE_LANE_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_LOAD1_ALL_LANES) || (cached_type == TYPE_NEON_LOAD1_ALL_LANES_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_LOAD2_2REG) || (cached_type == TYPE_NEON_LOAD2_2REG_Q) || (cached_type == TYPE_NEON_LOAD2_ONE_LANE) || (cached_type == TYPE_NEON_LOAD2_ONE_LANE_Q) || (cached_type == TYPE_NEON_LOAD2_ALL_LANES) || (cached_type == TYPE_NEON_LOAD2_ALL_LANES_Q)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_LOAD3_3REG) || (cached_type == TYPE_NEON_LOAD3_3REG_Q) || (cached_type == TYPE_NEON_LOAD3_ONE_LANE) || (cached_type == TYPE_NEON_LOAD3_ONE_LANE_Q) || (cached_type == TYPE_NEON_LOAD3_ALL_LANES) || (cached_type == TYPE_NEON_LOAD3_ALL_LANES_Q)))
        {
	  return 7;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_LOAD4_4REG) || (cached_type == TYPE_NEON_LOAD4_4REG_Q) || (cached_type == TYPE_NEON_LOAD4_ONE_LANE) || (cached_type == TYPE_NEON_LOAD4_ONE_LANE_Q) || (cached_type == TYPE_NEON_LOAD4_ALL_LANES) || (cached_type == TYPE_NEON_LOAD4_ALL_LANES_Q)))
        {
	  return 8;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_STP) || (cached_type == TYPE_NEON_STP_Q)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_STORE1_1REG) || (cached_type == TYPE_NEON_STORE1_1REG_Q) || (cached_type == TYPE_NEON_STORE1_2REG) || (cached_type == TYPE_NEON_STORE1_2REG_Q) || (cached_type == TYPE_NEON_STORE1_3REG) || (cached_type == TYPE_NEON_STORE1_4REG)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_STORE1_ONE_LANE) || (cached_type == TYPE_NEON_STORE1_ONE_LANE_Q)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_STORE2_2REG) || (cached_type == TYPE_NEON_STORE2_2REG_Q) || (cached_type == TYPE_NEON_STORE2_ONE_LANE) || (cached_type == TYPE_NEON_STORE2_ONE_LANE_Q)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_STORE3_3REG) || (cached_type == TYPE_NEON_STORE3_3REG_Q) || (cached_type == TYPE_NEON_STORE3_ONE_LANE) || (cached_type == TYPE_NEON_STORE3_ONE_LANE_Q)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_NEON_STORE4_4REG) || (cached_type == TYPE_NEON_STORE4_4REG_Q) || (cached_type == TYPE_NEON_STORE4_ONE_LANE) || (cached_type == TYPE_NEON_STORE4_ONE_LANE_Q)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_CRYPTO_AESE) || (cached_type == TYPE_CRYPTO_AESMC)))
        {
	  return 4;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && ((cached_type == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA1_XOR) || (cached_type == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_FAST) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 5;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && (cached_type == TYPE_CRC))
        {
	  return 3;
        }
      else if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX3T110)))) && (cached_type == TYPE_CRYPTO_PMULL))
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    default:
      if ((((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX)))) || (((
#line 5 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64-tune.md"
(((enum attr_tune) aarch64_tune))) == (
(TUNE_THUNDERX2T99)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    }
}

