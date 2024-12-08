/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/aarch64.md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "df.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "emit-rtl.h"
#include "tm-constrs.h"
#include "target.h"

bool
const_1_to_4_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 24 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/../arm/common.md"
(IN_RANGE (INTVAL (op), 1, 4)));
}

bool
const_2_4_8_16_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 29 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/../arm/common.md"
(   INTVAL (op) == 2
                     || INTVAL (op) == 4
                     || INTVAL (op) == 8
                     || INTVAL (op) == 16 ));
}

bool
alu_shift_operator_lsl_1_to_4 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == ASHIFT) && (
#line 37 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/../arm/common.md"
(const_1_to_4_operand (XEXP (op, 1), mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
alu_shift_reg_p (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 41 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/../arm/common.md"
(register_operand (XEXP (op, 1), mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
cc_register (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == REG) && ((
#line 25 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(REGNO (op) == CC_REGNUM)) && ((
#line 26 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(mode == GET_MODE (op))) || (
#line 27 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(mode == VOIDmode
			      && GET_MODE_CLASS (GET_MODE (op)) == MODE_CC))));
}

bool
aarch64_call_insn_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && (
(mode == VOIDmode || GET_MODE (op) == mode))) || (register_operand (op, mode));
}

bool
aarch64_general_reg (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
#line 37 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(REGNO_REG_CLASS (REGNO (op)) == STUB_REGS
		    || REGNO_REG_CLASS (REGNO (op)) == GENERAL_REGS));
}

bool
const0_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 43 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(op == CONST0_RTX (mode)));
}

static inline bool
const_1_to_3_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 47 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
{
  op = unwrap_const_vec_duplicate (op);
  return CONST_INT_P (op) && IN_RANGE (INTVAL (op), 1, 3);
}

bool
const_1_to_3_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
(const_1_to_3_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
subreg_lowpart_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == TRUNCATE) || ((GET_CODE (op) == SUBREG) && (
#line 55 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(subreg_lowpart_p (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_ccmp_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 59 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op), -31, 31)));
}

bool
aarch64_ccmp_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_ccmp_immediate (op, mode));
}

bool
aarch64_simd_register (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 67 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(FP_REGNUM_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_reg_or_zero (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
    case CONST_INT:
    case CONST_DOUBLE:
      break;
    default:
      return false;
    }
  return ((register_operand (op, mode)) || (
#line 72 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(op == CONST0_RTX (GET_MODE (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
aarch64_reg_or_fp_zero (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (((GET_CODE (op) == CONST_DOUBLE) && (
#line 77 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_float_const_zero_rtx_p (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

bool
aarch64_reg_zero_or_fp_zero (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (aarch64_reg_or_fp_zero (op, mode)) || (aarch64_reg_or_zero (op, mode));
}

bool
aarch64_reg_zero_or_m1_or_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
    case CONST_INT:
      break;
    default:
      return false;
    }
  return ((register_operand (op, mode)) || ((
#line 86 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(op == const0_rtx)) || ((
#line 87 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(op == constm1_rtx)) || (
#line 88 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(op == const1_rtx))))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
aarch64_reg_or_orr_imm (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (((GET_CODE (op) == CONST_VECTOR) && (
#line 93 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_simd_valid_immediate (op, NULL,
							AARCH64_CHECK_ORR)))) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

bool
aarch64_reg_or_bic_imm (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (((GET_CODE (op) == CONST_VECTOR) && (
#line 99 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_simd_valid_immediate (op, NULL,
							AARCH64_CHECK_BIC)))) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

bool
aarch64_fp_compare_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (((GET_CODE (op) == CONST_DOUBLE) && (
#line 105 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_float_const_zero_rtx_p (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

bool
aarch64_fp_pow2 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_DOUBLE) && (
#line 109 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_fpconst_pow_of_2 (op) > 0))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_fp_pow2_recip (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_DOUBLE) && (
#line 113 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_fpconst_pow2_recip (op) > 0))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_fp_vec_pow2 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 116 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_vec_fpconst_pow_of_2 (op) > 0)) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
aarch64_sve_cnt_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_POLY_INT) && (
#line 120 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_cnt_immediate_p (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sub_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 124 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_uimm12_shift (-UINTVAL (op))));
}

bool
aarch64_plus_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((
#line 128 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_uimm12_shift (INTVAL (op)))) || (
#line 129 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_uimm12_shift (-UINTVAL (op)))));
}

bool
aarch64_plus_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_plus_immediate (op, mode));
}

static inline bool
aarch64_plushi_immediate_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 137 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
{
  HOST_WIDE_INT val = INTVAL (op);
  /* The HImode value must be zero-extendable to an SImode plus_operand.  */
  return ((val & 0xfff) == val || sext_hwi (val & 0xf000, 16) == val);
}

bool
aarch64_plushi_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(aarch64_plushi_immediate_1 (op, mode)));
}

bool
aarch64_plushi_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_plushi_immediate (op, mode));
}

bool
aarch64_pluslong_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 149 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
((INTVAL (op) < 0xffffff && INTVAL (op) > -0xffffff)));
}

bool
aarch64_pluslong_strict_immedate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (aarch64_pluslong_immediate (op, mode)) && (!(aarch64_plus_immediate (op, mode)));
}

bool
aarch64_sve_scalar_inc_dec_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_POLY_INT) && (
#line 157 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_scalar_inc_dec_immediate_p (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_addvl_addpl_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_POLY_INT) && (
#line 161 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_addvl_addpl_immediate_p (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_plus_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (aarch64_sve_scalar_inc_dec_immediate (op, mode)) || (aarch64_sve_addvl_addpl_immediate (op, mode));
}

bool
aarch64_split_add_offset_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_POLY_INT) && (
#line 169 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_add_offset_temporaries (op) == 1))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_pluslong_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((aarch64_pluslong_immediate (op, mode)) || ((
#line 174 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(TARGET_SVE)) && (aarch64_sve_plus_immediate (op, mode))));
}

bool
aarch64_pluslong_or_poly_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (aarch64_pluslong_operand (op, mode)) || (aarch64_split_add_offset_immediate (op, mode));
}

bool
aarch64_logical_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 183 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_bitmask_imm (INTVAL (op), mode)));
}

bool
aarch64_logical_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_logical_immediate (op, mode));
}

bool
aarch64_mov_imm_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 191 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_move_imm (INTVAL (op), mode)));
}

bool
aarch64_logical_and_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 195 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_and_bitmask_imm (INTVAL (op), mode)));
}

bool
aarch64_shift_imm_si (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 199 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
((unsigned HOST_WIDE_INT) INTVAL (op) < 32));
}

bool
aarch64_shift_imm_di (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 203 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
((unsigned HOST_WIDE_INT) INTVAL (op) < 64));
}

bool
aarch64_shift_imm64_di (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 207 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
((unsigned HOST_WIDE_INT) INTVAL (op) <= 64));
}

bool
aarch64_reg_or_shift_imm_si (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_shift_imm_si (op, mode));
}

bool
aarch64_reg_or_shift_imm_di (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_shift_imm_di (op, mode));
}

bool
aarch64_imm3 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 221 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
((unsigned HOST_WIDE_INT) INTVAL (op) <= 4));
}

bool
aarch64_imm2 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 227 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(UINTVAL (op) <= 3));
}

bool
aarch64_lane_imm3 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 233 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(UINTVAL (op) <= 7));
}

bool
aarch64_imm24 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 238 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (UINTVAL (op), 0, 0xffffff)));
}

bool
aarch64_mem_pair_offset (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 242 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_offset_7bit_signed_scaled_p (mode, INTVAL (op))));
}

bool
aarch64_mem_pair_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 246 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_legitimate_address_p (mode, XEXP (op, 0), false,
						  ADDR_QUERY_LDP_STP)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_mem_pair_lanes_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 253 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_legitimate_address_p (GET_MODE (op), XEXP (op, 0),
						  false,
						  ADDR_QUERY_LDP_STP_N)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_reg_or_mem_pair_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_mem_pair_lanes_operand (op, mode));
}

bool
aarch64_prefetch_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 262 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_address_valid_for_prefetch_p (op, false))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline bool
aarch64_valid_symref_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 266 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
{
  return (aarch64_classify_symbolic_expression (op)
	  != SYMBOL_FORCE_TO_MEM);
}

bool
aarch64_valid_symref (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(aarch64_valid_symref_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline bool
aarch64_tls_ie_symref_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 273 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
{
  switch (GET_CODE (op))
    {
    case CONST:
      op = XEXP (op, 0);
      if (GET_CODE (op) != PLUS
	  || GET_CODE (XEXP (op, 0)) != SYMBOL_REF
	  || GET_CODE (XEXP (op, 1)) != CONST_INT)
	return false;
      op = XEXP (op, 0);
      /* FALLTHRU */

    case SYMBOL_REF:
      return SYMBOL_REF_TLS_MODEL (op) == TLS_MODEL_INITIAL_EXEC;

    default:
      gcc_unreachable ();
    }
}

bool
aarch64_tls_ie_symref (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(aarch64_tls_ie_symref_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline bool
aarch64_tls_le_symref_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 295 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
{
  switch (GET_CODE (op))
    {
    case CONST:
      op = XEXP (op, 0);
      if (GET_CODE (op) != PLUS
	  || GET_CODE (XEXP (op, 0)) != SYMBOL_REF
	  || GET_CODE (XEXP (op, 1)) != CONST_INT)
	return false;
      op = XEXP (op, 0);
      /* FALLTHRU */

    case SYMBOL_REF:
      return SYMBOL_REF_TLS_MODEL (op) == TLS_MODEL_LOCAL_EXEC;

    default:
      gcc_unreachable ();
    }
}

bool
aarch64_tls_le_symref (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(aarch64_tls_le_symref_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
aarch64_mov_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
    case MEM:
    case CONST:
    case CONST_INT:
    case SYMBOL_REF:
    case LABEL_REF:
    case HIGH:
    case CONST_POLY_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return ((register_operand (op, mode)) || ((memory_operand (op, mode)) || (
#line 320 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_mov_operand_p (op, mode))))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
aarch64_nonmemory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
    case CONST:
    case CONST_INT:
    case SYMBOL_REF:
    case LABEL_REF:
    case HIGH:
    case CONST_POLY_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return ((register_operand (op, mode)) || (
#line 326 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_mov_operand_p (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
aarch64_movti_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((memory_operand (op, mode)) || ((const_scalar_int_operand (op, mode)) && (
#line 332 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_mov128_immediate (op)))));
}

bool
aarch64_reg_or_imm (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (const_scalar_int_operand (op, mode));
}

bool
aarch64_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
    case LE:
    case LT:
    case GE:
    case GT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNLT:
    case UNLE:
    case UNGE:
    case UNGT:
      return true;
    default:
      break;
    }
  return false;
}

bool
aarch64_comparison_operator_mode (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
    case LE:
    case LT:
    case GE:
    case GT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNLT:
    case UNLE:
    case UNGE:
    case UNGT:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

static inline bool
aarch64_comparison_operation_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 353 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
{
  if (XEXP (op, 1) != const0_rtx)
    return false;
  rtx op0 = XEXP (op, 0);
  if (!REG_P (op0) || REGNO (op0) != CC_REGNUM)
    return false;
  return aarch64_get_condition_code (op) >= 0;
}

bool
aarch64_comparison_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
    case LE:
    case LT:
    case GE:
    case GT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNLT:
    case UNLE:
    case UNGE:
    case UNGT:
      break;
    default:
      return false;
    }
  return 
(aarch64_comparison_operation_1 (op, mode));
}

bool
aarch64_equality_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
      return true;
    default:
      break;
    }
  return false;
}

static inline bool
aarch64_carry_operation_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 367 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
{
  if (XEXP (op, 1) != const0_rtx)
    return false;
  rtx op0 = XEXP (op, 0);
  if (!REG_P (op0) || REGNO (op0) != CC_REGNUM)
    return false;
  machine_mode ccmode = GET_MODE (op0);
  if (ccmode == CC_Cmode)
    return GET_CODE (op) == LTU;
  if (ccmode == CC_ADCmode || ccmode == CCmode)
    return GET_CODE (op) == GEU;
  return false;
}

bool
aarch64_carry_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case LTU:
    case GEU:
      break;
    default:
      return false;
    }
  return 
(aarch64_carry_operation_1 (op, mode));
}

static inline bool
aarch64_borrow_operation_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 385 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
{
  if (XEXP (op, 1) != const0_rtx)
    return false;
  rtx op0 = XEXP (op, 0);
  if (!REG_P (op0) || REGNO (op0) != CC_REGNUM)
    return false;
  machine_mode ccmode = GET_MODE (op0);
  if (ccmode == CC_Cmode)
    return GET_CODE (op) == GEU;
  if (ccmode == CC_ADCmode || ccmode == CCmode)
    return GET_CODE (op) == LTU;
  return false;
}

bool
aarch64_borrow_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case GEU:
    case LTU:
      break;
    default:
      return false;
    }
  return 
(aarch64_borrow_operation_1 (op, mode));
}

bool
aarch64_sync_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (GET_CODE (XEXP (op, 0)) == REG);
}

static inline bool
aarch64_9bit_offset_memory_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 410 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
{
  rtx mem_op = XEXP (op, 0);

  if (REG_P (mem_op))
    return GET_MODE (mem_op) == DImode;

  rtx plus_op0 = XEXP (mem_op, 0);
  rtx plus_op1 = XEXP (mem_op, 1);

  if (GET_MODE (plus_op0) != DImode)
    return false;

  poly_int64 offset;
  if (!poly_int_rtx_p (plus_op1, &offset))
    gcc_unreachable ();

  return aarch64_offset_9bit_signed_unscaled_p (mode, offset);
}

bool
aarch64_9bit_offset_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((memory_operand (op, mode)) && ((GET_CODE (XEXP (op, 0)) == REG) || ((GET_CODE (XEXP (op, 0)) == PLUS) && ((GET_CODE (XEXP (XEXP (op, 0), 0)) == REG) && (GET_CODE (XEXP (XEXP (op, 0), 1)) == CONST_INT))))) && (
(aarch64_9bit_offset_memory_operand_1 (op, mode)));
}

bool
aarch64_rcpc_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 430 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(AARCH64_ISA_RCPC8_4)) ? (aarch64_9bit_offset_memory_operand (op, mode)) : (aarch64_sync_memory_operand (op, mode));
}

static inline bool
vect_par_cnst_hi_half_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 437 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
{
  return aarch64_simd_check_vect_par_cnst_half (op, mode, true);
}

bool
vect_par_cnst_hi_half (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(vect_par_cnst_hi_half_1 (op, mode)));
}

static inline bool
vect_par_cnst_lo_half_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 443 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
{
  return aarch64_simd_check_vect_par_cnst_half (op, mode, false);
}

bool
vect_par_cnst_lo_half (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(vect_par_cnst_lo_half_1 (op, mode)));
}

static inline bool
descending_int_parallel_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 449 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
{
  return aarch64_stepped_int_parallel_p (op, -1);
}

bool
descending_int_parallel (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(descending_int_parallel_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
ascending_int_parallel_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 455 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
{
  return aarch64_stepped_int_parallel_p (op, 1);
}

bool
ascending_int_parallel (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(ascending_int_parallel_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
aarch64_simd_lshift_imm_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 461 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
{
  return aarch64_simd_shift_imm_p (op, mode, true);
}

bool
aarch64_simd_lshift_imm (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
(aarch64_simd_lshift_imm_1 (op, mode));
}

static inline bool
aarch64_simd_rshift_imm_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 467 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
{
  return aarch64_simd_shift_imm_p (op, mode, false);
}

bool
aarch64_simd_rshift_imm (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
(aarch64_simd_rshift_imm_1 (op, mode));
}

bool
aarch64_simd_imm_zero (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 473 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(op == CONST0_RTX (GET_MODE (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_simd_imm_one (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
#line 477 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(op == CONST1_RTX (GET_MODE (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_simd_or_scalar_imm_zero (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 481 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(op == CONST0_RTX (GET_MODE (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
aarch64_simd_imm_minus_one (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 485 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(op == CONSTM1_RTX (GET_MODE (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_simd_reg_or_zero (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return ((register_operand (op, mode)) || ((
#line 490 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(op == const0_rtx)) || (aarch64_simd_or_scalar_imm_zero (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
aarch64_simd_reg_or_minus_one (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_simd_imm_minus_one (op, mode));
}

bool
aarch64_simd_struct_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 499 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(TARGET_SIMD && aarch64_simd_mem_operand_p (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_simd_general_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (general_operand (op, mode)) && (
#line 504 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(!MEM_P (op)
		    || GET_CODE (XEXP (op, 0)) == POST_INC
		    || GET_CODE (XEXP (op, 0)) == REG));
}

bool
aarch64_simd_nonimmediate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (nonimmediate_operand (op, mode)) && (
#line 511 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(!MEM_P (op)
		    || GET_CODE (XEXP (op, 0)) == POST_INC
		    || GET_CODE (XEXP (op, 0)) == REG));
}

bool
aarch64_simd_shift_imm_qi (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 522 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op), 0, 7)));
}

bool
aarch64_simd_shift_imm_hi (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 526 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op), 0, 15)));
}

bool
aarch64_simd_shift_imm_si (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 530 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op), 0, 31)));
}

bool
aarch64_simd_shift_imm_di (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 534 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op), 0, 63)));
}

bool
aarch64_simd_shift_imm_offset_qi (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 538 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op), 1, 8)));
}

bool
aarch64_simd_shift_imm_offset_hi (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 542 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op), 1, 16)));
}

bool
aarch64_simd_shift_imm_offset_si (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 546 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op), 1, 32)));
}

bool
aarch64_simd_shift_imm_offset_di (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 550 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op), 1, 64)));
}

bool
aarch64_simd_shift_imm_vec_exact_top (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
#line 554 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_const_vec_all_same_in_range_p (op,
			GET_MODE_UNIT_BITSIZE (GET_MODE (op)) / 2,
			GET_MODE_UNIT_BITSIZE (GET_MODE (op)) / 2)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_simd_shift_imm_vec_qi (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
#line 560 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_const_vec_all_same_in_range_p (op, 1, 8)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_simd_shift_imm_vec_hi (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
#line 564 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_const_vec_all_same_in_range_p (op, 1, 16)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_simd_shift_imm_vec_si (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
#line 568 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_const_vec_all_same_in_range_p (op, 1, 32)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_simd_shift_imm_vec_di (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
#line 572 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_const_vec_all_same_in_range_p (op, 1, 64)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_simd_shift_imm_bitsize_qi (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 576 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op), 0, 8)));
}

bool
aarch64_simd_shift_imm_bitsize_hi (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 580 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op), 0, 16)));
}

bool
aarch64_simd_shift_imm_bitsize_si (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 584 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op), 0, 32)));
}

bool
aarch64_simd_shift_imm_bitsize_di (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 588 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op), 0, 64)));
}

bool
aarch64_constant_pool_symref (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && (
#line 592 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(CONSTANT_POOL_ADDRESS_P (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_constant_vector_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
aarch64_sve_ld1r_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
#line 599 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_ld1r_operand_p (op)));
}

bool
aarch64_sve_ld1rq_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 603 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_ld1rq_operand_p (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_ld1ro_operand_b (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 607 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_ld1ro_operand_p (op, QImode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_ld1ro_operand_h (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 611 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_ld1ro_operand_p (op, HImode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_ld1ro_operand_w (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 615 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_ld1ro_operand_p (op, SImode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_ld1ro_operand_d (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 619 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_ld1ro_operand_p (op, DImode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_ldff1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 623 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_ldff1_operand_p (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_ldnf1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 627 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_ldnf1_operand_p (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_ldr_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 633 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_ldr_operand_p (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_prefetch_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case PLUS:
      break;
    default:
      return false;
    }
  return 
#line 637 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_prefetch_operand_p (op, mode));
}

bool
aarch64_sve_nonimmediate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_ldr_operand (op, mode));
}

bool
aarch64_sve_general_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
    case MEM:
    case CONST:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return ((register_operand (op, mode)) || ((aarch64_sve_ldr_operand (op, mode)) || (
#line 647 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_mov_operand_p (op, mode))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_struct_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 651 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_struct_memory_operand_p (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_struct_nonimmediate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_struct_memory_operand (op, mode));
}

bool
aarch64_sve_dup_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_ld1r_operand (op, mode));
}

bool
aarch64_sve_ptrue_svpattern_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST) && (
#line 665 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_ptrue_svpattern_p (op, NULL)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_arith_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 669 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_arith_immediate_p (mode, op, false))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_sub_arith_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 673 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_arith_immediate_p (mode, op, true))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_qadd_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 677 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_sqadd_sqsub_immediate_p (mode, op, false))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_qsub_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 681 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_sqadd_sqsub_immediate_p (mode, op, true))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_vector_inc_dec_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 685 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_vector_inc_dec_immediate_p (op))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_gather_immediate_b (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 689 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op), 0, 31)));
}

bool
aarch64_sve_gather_immediate_h (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((
#line 693 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op), 0, 62))) && (
#line 694 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
((INTVAL (op) & 1) == 0)));
}

bool
aarch64_sve_gather_immediate_w (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((
#line 698 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op), 0, 124))) && (
#line 699 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
((INTVAL (op) & 3) == 0)));
}

bool
aarch64_sve_gather_immediate_d (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((
#line 703 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op), 0, 248))) && (
#line 704 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
((INTVAL (op) & 7) == 0)));
}

bool
aarch64_sve_uxtb_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && ((
#line 708 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(GET_MODE_UNIT_BITSIZE (GET_MODE (op)) > 8)) && (
#line 709 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_const_vec_all_same_int_p (op, 0xff))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_uxth_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && ((
#line 713 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(GET_MODE_UNIT_BITSIZE (GET_MODE (op)) > 16)) && (
#line 714 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_const_vec_all_same_int_p (op, 0xffff))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_uxtw_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && ((
#line 718 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(GET_MODE_UNIT_BITSIZE (GET_MODE (op)) > 32)) && (
#line 719 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_const_vec_all_same_int_p (op, 0xffffffff))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_uxt_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (aarch64_sve_uxtb_immediate (op, mode)) || ((aarch64_sve_uxth_immediate (op, mode)) || (aarch64_sve_uxtw_immediate (op, mode)));
}

bool
aarch64_sve_logical_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 728 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_bitmask_immediate_p (op))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_vsb_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
#line 733 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(GET_MODE_INNER (GET_MODE (op)) == QImode
		    ? aarch64_const_vec_all_same_in_range_p (op, -128, 127)
		    : aarch64_const_vec_all_same_in_range_p (op, 0, 255)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_vsm_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 740 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_const_vec_all_same_in_range_p (op, -128, 127))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_dup_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return ((
#line 744 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_dup_immediate_p (op))) || (
#line 745 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_float_const_representable_p (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_cmp_vsc_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 749 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_cmp_immediate_p (op, true))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
aarch64_sve_cmp_vsd_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 753 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_cmp_immediate_p (op, false))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
aarch64_sve_index_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 757 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_index_immediate_p (op)));
}

bool
aarch64_sve_float_arith_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 761 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_float_arith_immediate_p (op, false))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_float_negated_arith_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 765 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_float_arith_immediate_p (op, true))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_float_arith_with_sub_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (aarch64_sve_float_arith_immediate (op, mode)) || (aarch64_sve_float_negated_arith_immediate (op, mode));
}

bool
aarch64_sve_float_mul_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 773 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(aarch64_sve_float_mul_immediate_p (op))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_float_maxmin_immediate (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && ((
#line 777 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(op == CONST0_RTX (GET_MODE (op)))) || (
#line 778 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(op == CONST1_RTX (GET_MODE (op)))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
aarch64_sve_arith_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_arith_immediate (op, mode));
}

bool
aarch64_sve_add_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (aarch64_sve_arith_operand (op, mode)) || ((aarch64_sve_sub_arith_immediate (op, mode)) || (aarch64_sve_vector_inc_dec_immediate (op, mode)));
}

bool
aarch64_sve_sqadd_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((aarch64_sve_qadd_immediate (op, mode)) || (aarch64_sve_qsub_immediate (op, mode)));
}

bool
aarch64_sve_pred_and_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_uxt_immediate (op, mode));
}

bool
aarch64_sve_logical_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_logical_immediate (op, mode));
}

bool
aarch64_sve_gather_offset_b (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_gather_immediate_b (op, mode));
}

bool
aarch64_sve_gather_offset_h (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_gather_immediate_h (op, mode));
}

bool
aarch64_sve_gather_offset_w (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_gather_immediate_w (op, mode));
}

bool
aarch64_sve_gather_offset_d (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_gather_immediate_d (op, mode));
}

bool
aarch64_sve_lshift_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((aarch64_simd_lshift_imm (op, mode)) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

bool
aarch64_sve_rshift_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((aarch64_simd_rshift_imm (op, mode)) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

bool
aarch64_sve_vsb_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_vsb_immediate (op, mode));
}

bool
aarch64_sve_vsm_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_vsm_immediate (op, mode));
}

bool
aarch64_sve_reg_or_dup_imm (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_dup_immediate (op, mode));
}

bool
aarch64_sve_cmp_vsc_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_cmp_vsc_immediate (op, mode));
}

bool
aarch64_sve_cmp_vsd_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_cmp_vsd_immediate (op, mode));
}

bool
aarch64_sve_index_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_index_immediate (op, mode));
}

bool
aarch64_sve_float_arith_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_float_arith_immediate (op, mode));
}

bool
aarch64_sve_float_arith_with_sub_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_float_arith_with_sub_immediate (op, mode));
}

bool
aarch64_sve_float_mul_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_float_mul_immediate (op, mode));
}

bool
aarch64_sve_float_maxmin_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_sve_float_maxmin_immediate (op, mode));
}

bool
aarch64_sve_vec_perm_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (aarch64_constant_vector_operand (op, mode));
}

bool
aarch64_sve_ptrue_flag (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((
#line 872 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(INTVAL (op) == SVE_MAYBE_NOT_PTRUE)) || (
#line 873 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(INTVAL (op) == SVE_KNOWN_PTRUE)));
}

bool
aarch64_sve_gp_strictness (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((
#line 877 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(INTVAL (op) == SVE_RELAXED_GP)) || (
#line 878 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(INTVAL (op) == SVE_STRICT_GP)));
}

bool
aarch64_gather_scale_operand_b (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 882 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(INTVAL (op) == 1));
}

bool
aarch64_gather_scale_operand_h (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 886 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(INTVAL (op) == 1 || INTVAL (op) == 2));
}

bool
aarch64_gather_scale_operand_w (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 890 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(INTVAL (op) == 1 || INTVAL (op) == 4));
}

bool
aarch64_gather_scale_operand_d (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 894 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(INTVAL (op) == 1 || INTVAL (op) == 8));
}

bool
aarch64_any_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return GET_CODE (op) == REG;
}

bool
aarch64_sve_any_binary_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
    case UDIV:
    case SMAX:
    case UMAX:
    case SMIN:
    case UMIN:
    case AND:
    case IOR:
    case XOR:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
aarch64_bytes_per_sve_vector_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_POLY_INT:
      break;
    default:
      return false;
    }
  return (
#line 905 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(known_eq (wi::to_poly_wide (op, mode),
			      BYTES_PER_SVE_VECTOR))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
aarch64_memtag_tag_offset (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 910 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op), 0, 15)));
}

bool
aarch64_granule16_uimm6 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 914 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op), 0, 1008)
		    && !(INTVAL (op) & 0xf)));
}

bool
aarch64_granule16_simm9 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 919 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/predicates.md"
(IN_RANGE (INTVAL (op),  -4096, 4080)
		    && !(INTVAL (op) & 0xf)));
}

enum constraint_num
lookup_constraint_1 (const char *str)
{
  switch (str[0])
    {
    case '<':
      return CONSTRAINT__l;
    case '>':
      return CONSTRAINT__g;
    case 'D':
      if (!strncmp (str + 1, "b", 1))
        return CONSTRAINT_Db;
      if (!strncmp (str + 1, "n", 1))
        return CONSTRAINT_Dn;
      if (!strncmp (str + 1, "h", 1))
        return CONSTRAINT_Dh;
      if (!strncmp (str + 1, "q", 1))
        return CONSTRAINT_Dq;
      if (!strncmp (str + 1, "t", 1))
        return CONSTRAINT_Dt;
      if (!strncmp (str + 1, "l", 1))
        return CONSTRAINT_Dl;
      if (!strncmp (str + 1, "1", 1))
        return CONSTRAINT_D1;
      if (!strncmp (str + 1, "r", 1))
        return CONSTRAINT_Dr;
      if (!strncmp (str + 1, "z", 1))
        return CONSTRAINT_Dz;
      if (!strncmp (str + 1, "m", 1))
        return CONSTRAINT_Dm;
      if (!strncmp (str + 1, "d", 1))
        return CONSTRAINT_Dd;
      if (!strncmp (str + 1, "s", 1))
        return CONSTRAINT_Ds;
      if (!strncmp (str + 1, "p", 1))
        return CONSTRAINT_Dp;
      if (!strncmp (str + 1, "o", 1))
        return CONSTRAINT_Do;
      break;
    case 'E':
      return CONSTRAINT_E;
    case 'F':
      return CONSTRAINT_F;
    case 'I':
      return CONSTRAINT_I;
    case 'J':
      return CONSTRAINT_J;
    case 'K':
      return CONSTRAINT_K;
    case 'L':
      return CONSTRAINT_L;
    case 'M':
      return CONSTRAINT_M;
    case 'N':
      return CONSTRAINT_N;
    case 'Q':
      return CONSTRAINT_Q;
    case 'S':
      return CONSTRAINT_S;
    case 'U':
      if (!strncmp (str + 1, "cr", 2))
        return CONSTRAINT_Ucr;
      if (!strncmp (str + 1, "pa", 2))
        return CONSTRAINT_Upa;
      if (!strncmp (str + 1, "pl", 2))
        return CONSTRAINT_Upl;
      if (!strncmp (str + 1, "aa", 2))
        return CONSTRAINT_Uaa;
      if (!strncmp (str + 1, "ai", 2))
        return CONSTRAINT_Uai;
      if (!strncmp (str + 1, "av", 2))
        return CONSTRAINT_Uav;
      if (!strncmp (str + 1, "at", 2))
        return CONSTRAINT_Uat;
      if (!strncmp (str + 1, "ti", 2))
        return CONSTRAINT_Uti;
      if (!strncmp (str + 1, "sO", 2))
        return CONSTRAINT_UsO;
      if (!strncmp (str + 1, "sP", 2))
        return CONSTRAINT_UsP;
      if (!strncmp (str + 1, "sh", 2))
        return CONSTRAINT_Ush;
      if (!strncmp (str + 1, "sa", 2))
        return CONSTRAINT_Usa;
      if (!strncmp (str + 1, "sw", 2))
        return CONSTRAINT_Usw;
      if (!strncmp (str + 1, "ss", 2))
        return CONSTRAINT_Uss;
      if (!strncmp (str + 1, "sn", 2))
        return CONSTRAINT_Usn;
      if (!strncmp (str + 1, "sd", 2))
        return CONSTRAINT_Usd;
      if (!strncmp (str + 1, "sf", 2))
        return CONSTRAINT_Usf;
      if (!strncmp (str + 1, "sg", 2))
        return CONSTRAINT_Usg;
      if (!strncmp (str + 1, "sj", 2))
        return CONSTRAINT_Usj;
      if (!strncmp (str + 1, "sM", 2))
        return CONSTRAINT_UsM;
      if (!strncmp (str + 1, "lc", 2))
        return CONSTRAINT_Ulc;
      if (!strncmp (str + 1, "sv", 2))
        return CONSTRAINT_Usv;
      if (!strncmp (str + 1, "si", 2))
        return CONSTRAINT_Usi;
      if (!strncmp (str + 1, "i1", 2))
        return CONSTRAINT_Ui1;
      if (!strncmp (str + 1, "i2", 2))
        return CONSTRAINT_Ui2;
      if (!strncmp (str + 1, "i3", 2))
        return CONSTRAINT_Ui3;
      if (!strncmp (str + 1, "i7", 2))
        return CONSTRAINT_Ui7;
      if (!strncmp (str + 1, "p3", 2))
        return CONSTRAINT_Up3;
      if (!strncmp (str + 1, "ph", 2))
        return CONSTRAINT_Uph;
      if (!strncmp (str + 1, "st", 2))
        return CONSTRAINT_Ust;
      if (!strncmp (str + 1, "mp", 2))
        return CONSTRAINT_Ump;
      if (!strncmp (str + 1, "mn", 2))
        return CONSTRAINT_Umn;
      if (!strncmp (str + 1, "Pb", 2))
        return CONSTRAINT_UPb;
      if (!strncmp (str + 1, "Pd", 2))
        return CONSTRAINT_UPd;
      if (!strncmp (str + 1, "Ph", 2))
        return CONSTRAINT_UPh;
      if (!strncmp (str + 1, "Pw", 2))
        return CONSTRAINT_UPw;
      if (!strncmp (str + 1, "tf", 2))
        return CONSTRAINT_Utf;
      if (!strncmp (str + 1, "tn", 2))
        return CONSTRAINT_Utn;
      if (!strncmp (str + 1, "tr", 2))
        return CONSTRAINT_Utr;
      if (!strncmp (str + 1, "tv", 2))
        return CONSTRAINT_Utv;
      if (!strncmp (str + 1, "tq", 2))
        return CONSTRAINT_Utq;
      if (!strncmp (str + 1, "tQ", 2))
        return CONSTRAINT_UtQ;
      if (!strncmp (str + 1, "Ob", 2))
        return CONSTRAINT_UOb;
      if (!strncmp (str + 1, "Oh", 2))
        return CONSTRAINT_UOh;
      if (!strncmp (str + 1, "Ow", 2))
        return CONSTRAINT_UOw;
      if (!strncmp (str + 1, "Od", 2))
        return CONSTRAINT_UOd;
      if (!strncmp (str + 1, "ty", 2))
        return CONSTRAINT_Uty;
      if (!strncmp (str + 1, "tx", 2))
        return CONSTRAINT_Utx;
      if (!strncmp (str + 1, "fc", 2))
        return CONSTRAINT_Ufc;
      if (!strncmp (str + 1, "vi", 2))
        return CONSTRAINT_Uvi;
      if (!strncmp (str + 1, "cs", 2))
        return CONSTRAINT_Ucs;
      break;
    case 'V':
      return CONSTRAINT_V;
    case 'X':
      return CONSTRAINT_X;
    case 'Y':
      return CONSTRAINT_Y;
    case 'Z':
      return CONSTRAINT_Z;
    case 'c':
      return CONSTRAINT_c;
    case 'i':
      return CONSTRAINT_i;
    case 'k':
      return CONSTRAINT_k;
    case 'm':
      return CONSTRAINT_m;
    case 'n':
      return CONSTRAINT_n;
    case 'o':
      return CONSTRAINT_o;
    case 'p':
      return CONSTRAINT_p;
    case 'r':
      return CONSTRAINT_r;
    case 's':
      return CONSTRAINT_s;
    case 'v':
      if (!strncmp (str + 1, "gd", 2))
        return CONSTRAINT_vgd;
      if (!strncmp (str + 1, "gh", 2))
        return CONSTRAINT_vgh;
      if (!strncmp (str + 1, "gw", 2))
        return CONSTRAINT_vgw;
      if (!strncmp (str + 1, "sa", 2))
        return CONSTRAINT_vsa;
      if (!strncmp (str + 1, "sb", 2))
        return CONSTRAINT_vsb;
      if (!strncmp (str + 1, "sc", 2))
        return CONSTRAINT_vsc;
      if (!strncmp (str + 1, "ss", 2))
        return CONSTRAINT_vss;
      if (!strncmp (str + 1, "sd", 2))
        return CONSTRAINT_vsd;
      if (!strncmp (str + 1, "si", 2))
        return CONSTRAINT_vsi;
      if (!strncmp (str + 1, "sn", 2))
        return CONSTRAINT_vsn;
      if (!strncmp (str + 1, "sQ", 2))
        return CONSTRAINT_vsQ;
      if (!strncmp (str + 1, "sS", 2))
        return CONSTRAINT_vsS;
      if (!strncmp (str + 1, "sl", 2))
        return CONSTRAINT_vsl;
      if (!strncmp (str + 1, "sm", 2))
        return CONSTRAINT_vsm;
      if (!strncmp (str + 1, "sA", 2))
        return CONSTRAINT_vsA;
      if (!strncmp (str + 1, "sB", 2))
        return CONSTRAINT_vsB;
      if (!strncmp (str + 1, "sM", 2))
        return CONSTRAINT_vsM;
      if (!strncmp (str + 1, "sN", 2))
        return CONSTRAINT_vsN;
      if (!strncmp (str + 1, "gb", 2))
        return CONSTRAINT_vgb;
      break;
    case 'w':
      return CONSTRAINT_w;
    case 'x':
      return CONSTRAINT_x;
    case 'y':
      return CONSTRAINT_y;
    default: break;
    }
  return CONSTRAINT__UNKNOWN;
}

const unsigned char lookup_constraint_array[] = {
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__l, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__g, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_E, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_F, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_I, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_J, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_K, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_L, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_M, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_N, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_Q, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_S, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_V, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_X, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_Y, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_Z, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_c, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_i, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_k, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_m, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_n, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_o, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_p, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_r, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_s, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_w, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_x, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_y, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN
};

enum reg_class
reg_class_for_constraint_1 (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_r: return GENERAL_REGS;
    case CONSTRAINT_k: return STACK_REG;
    case CONSTRAINT_Ucs: return TAILCALL_ADDR_REGS;
    case CONSTRAINT_Ucr: return aarch64_harden_sls_blr_p () ? STUB_REGS : GENERAL_REGS;
    case CONSTRAINT_w: return FP_REGS;
    case CONSTRAINT_Upa: return PR_REGS;
    case CONSTRAINT_Upl: return PR_LO_REGS;
    case CONSTRAINT_x: return FP_LO_REGS;
    case CONSTRAINT_y: return FP_LO8_REGS;
    default: break;
    }
  return NO_REGS;
}

bool (*constraint_satisfied_p_array[]) (rtx) = {
  satisfies_constraint_I,
  satisfies_constraint_J,
  satisfies_constraint_K,
  satisfies_constraint_L,
  satisfies_constraint_M,
  satisfies_constraint_N,
  satisfies_constraint_m,
  satisfies_constraint_o,
  satisfies_constraint_Q,
  satisfies_constraint_Ust,
  satisfies_constraint_Ump,
  satisfies_constraint_Umn,
  satisfies_constraint_Utf,
  satisfies_constraint_Utn,
  satisfies_constraint_Utr,
  satisfies_constraint_Utv,
  satisfies_constraint_Utx,
  satisfies_constraint_Utq,
  satisfies_constraint_UtQ,
  satisfies_constraint_UOb,
  satisfies_constraint_UOh,
  satisfies_constraint_UOw,
  satisfies_constraint_UOd,
  satisfies_constraint_Uty,
  satisfies_constraint_p,
  satisfies_constraint_UPb,
  satisfies_constraint_UPd,
  satisfies_constraint_UPh,
  satisfies_constraint_UPw,
  satisfies_constraint_Dp,
  satisfies_constraint_Uaa,
  satisfies_constraint_Uai,
  satisfies_constraint_Uav,
  satisfies_constraint_Uat,
  satisfies_constraint_Uti,
  satisfies_constraint_UsO,
  satisfies_constraint_UsP,
  satisfies_constraint_S,
  satisfies_constraint_Y,
  satisfies_constraint_Ush,
  satisfies_constraint_Usa,
  satisfies_constraint_Usw,
  satisfies_constraint_Uss,
  satisfies_constraint_Usn,
  satisfies_constraint_Usd,
  satisfies_constraint_Usf,
  satisfies_constraint_Usg,
  satisfies_constraint_Usj,
  satisfies_constraint_Ulc,
  satisfies_constraint_Usv,
  satisfies_constraint_Usi,
  satisfies_constraint_Ui2,
  satisfies_constraint_Ui3,
  satisfies_constraint_Ui7,
  satisfies_constraint_Up3,
  satisfies_constraint_Uph,
  satisfies_constraint_Ufc,
  satisfies_constraint_Uvi,
  satisfies_constraint_Do,
  satisfies_constraint_Db,
  satisfies_constraint_Dn,
  satisfies_constraint_Dh,
  satisfies_constraint_Dq,
  satisfies_constraint_Dt,
  satisfies_constraint_Dl,
  satisfies_constraint_D1,
  satisfies_constraint_Dr,
  satisfies_constraint_Dz,
  satisfies_constraint_Dm,
  satisfies_constraint_Dd,
  satisfies_constraint_Ds,
  satisfies_constraint_vgb,
  satisfies_constraint_vgd,
  satisfies_constraint_vgh,
  satisfies_constraint_vgw,
  satisfies_constraint_vsa,
  satisfies_constraint_vsb,
  satisfies_constraint_vsc,
  satisfies_constraint_vsd,
  satisfies_constraint_vsi,
  satisfies_constraint_vsn,
  satisfies_constraint_vsQ,
  satisfies_constraint_vsS,
  satisfies_constraint_vsl,
  satisfies_constraint_vsm,
  satisfies_constraint_vsA,
  satisfies_constraint_vsB,
  satisfies_constraint_vsM,
  satisfies_constraint_vsN,
  satisfies_constraint_c,
  satisfies_constraint_V,
  satisfies_constraint__l,
  satisfies_constraint__g,
  satisfies_constraint_i,
  satisfies_constraint_s,
  satisfies_constraint_n,
  satisfies_constraint_E,
  satisfies_constraint_F,
  satisfies_constraint_X,
  satisfies_constraint_Z,
  satisfies_constraint_UsM,
  satisfies_constraint_Ui1,
  satisfies_constraint_vss
};

bool
insn_const_int_ok_for_constraint (HOST_WIDE_INT ival, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_I:
      return 
#line 58 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/constraints.md"
(aarch64_uimm12_shift (ival));

    case CONSTRAINT_J:
      return 
#line 86 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/constraints.md"
(aarch64_uimm12_shift (-ival));

    case CONSTRAINT_K:
      return 
#line 95 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/constraints.md"
(aarch64_bitmask_imm (ival, SImode));

    case CONSTRAINT_L:
      return 
#line 100 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/constraints.md"
(aarch64_bitmask_imm (ival, DImode));

    case CONSTRAINT_M:
      return 
#line 105 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/constraints.md"
(aarch64_move_imm (ival, SImode));

    case CONSTRAINT_N:
      return 
#line 110 "/home/user/workdir/openwrt-fs/openwrt-23.05.5/build_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/aarch64/constraints.md"
(aarch64_move_imm (ival, DImode));

    default: break;
    }
  return false;
}

