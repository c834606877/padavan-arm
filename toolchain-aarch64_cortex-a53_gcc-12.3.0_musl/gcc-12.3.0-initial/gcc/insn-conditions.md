(define_conditions [
  (-1 "TARGET_SVE && 64 >= 32")
  (-1 "TARGET_I8MM")
  (0 "TARGET_SVE && (~0x21 & 0x22) == 0")
  (-1 "TARGET_SVE
   && aarch64_sve_same_pred_for_ptest_p (&operands[4], &operands[6])")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx2SImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V8HImode)))")
  (-1 "TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (SImode) >= 64")
  (-1 "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx8HImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_SVE2_AES")
  (-1 "UINTVAL (operands[3]) < GET_MODE_BITSIZE (SImode) &&
   (UINTVAL (operands[3]) + UINTVAL (operands[4]) == GET_MODE_BITSIZE (SImode))")
  (0 "(TARGET_SVE && (~0x21 & 0x24) == 0) && ( !CONSTANT_P (operands[7]))")
  (-1 "TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V2DImode) - 1)")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V2SFmode)")
  (-1 "TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V8BFmode, operands[1], operands[2])")
  (0 "(TARGET_SVE && (~0x41 & 0x24) == 0) && ( reload_completed)")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2DImode)
       || register_operand (operands[1], V3x2DImode))")
  (-1 "(TARGET_SVE && (~0x27 & 0x21) == 0) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))")
  (-1 "can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[4]))
   && (XOR != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0)")
  (-1 "TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, false, V2SImode)")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx4SFmode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V4SFmode)))")
  (-1 "(TARGET_SVE) && (ptr_mode == SImode || Pmode == SImode)")
  (-1 "TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[2], V4HImode))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4BFmode)
       || register_operand (operands[1], V4x4BFmode))")
  (-1 "(TARGET_SVE && (~0x23 & 0x22) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x16QImode)
       || register_operand (operands[1], V2x16QImode))")
  (0 "(TARGET_SVE2
   && (~0x43 & 0x24) == 0) && ( !CONSTANT_P (operands[4]))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4SImode)
       || register_operand (operands[1], V4x4SImode))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx16BFmode)
       || register_operand (operands[2], VNx16BFmode))) && ( reload_completed)")
  (-1 "UINTVAL (operands[3]) < 32 &&
   (UINTVAL (operands[3]) + UINTVAL (operands[4]) == 32)")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx16BImode)
       || register_operand (operands[1], VNx16BImode))")
  (-1 "UINTVAL (operands[2]) == HOST_WIDE_INT_M1U << INTVAL (operands[4])
   && INTVAL (operands[4])
   && (UINTVAL (operands[4]) + UINTVAL (operands[5])
       <= GET_MODE_BITSIZE (DImode))")
  (-1 "((TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx2SImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "aarch64_operands_adjust_ok_for_ldpstp (operands, false, DImode)")
  (-1 "TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[2], DImode))")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[2], operands[3])) && (TARGET_SVE2)")
  (-1 "(TARGET_SVE && (~0x41 & 0x41) == 0) && ( reload_completed)")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx16BFmode)
       || register_operand (operands[2], VNx16BFmode))")
  (0 "TARGET_SVE && (~0x41 & 0x42) == 0")
  (-1 "!(UINTVAL (operands[1]) == 0
     || (UINTVAL (operands[3]) + UINTVAL (operands[1])
	 > GET_MODE_BITSIZE (SImode)))")
  (-1 "TARGET_SIMD && reload_completed
   && ((FP_REGNUM_P (REGNO (operands[0])) && GP_REGNUM_P (REGNO (operands[1])))
       || (GP_REGNUM_P (REGNO (operands[0])) && FP_REGNUM_P (REGNO (operands[1]))))")
  (-1 "TARGET_FLOAT && !flag_rounding_math")
  (-1 "aarch64_operands_ok_for_ldpstp (operands, true, V2SFmode)")
  (-1 "(TARGET_SVE) && ( !rtx_equal_p (operands[1], operands[4]))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx32BFmode)
       || register_operand (operands[2], VNx32BFmode))")
  (-1 "TARGET_RNG")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx2DFmode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "aarch64_operands_ok_for_ldpstp (operands, true, DImode)")
  (-1 "TARGET_SVE_I8MM")
  (-1 "TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, true, V2DImode)")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && ( 1)")
  (-1 "TARGET_SVE && (~0x43 & 0x41) == 0")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx24BFmode)
       || register_operand (operands[2], VNx24BFmode))) && ( reload_completed)")
  (0 "(TARGET_SVE && (~0x27 & 0x81) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "(TARGET_SVE2
   && (~0x27 & 0x22) == 0) && ( !CONSTANT_P (operands[4]))")
  (-1 "TARGET_SVE
   && VNx2HImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2HImode)))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8HImode)
       || register_operand (operands[1], V3x8HImode))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8HImode)
       || register_operand (operands[1], V4x8HImode))")
  (-1 "aarch64_operands_ok_for_ldpstp (operands, true, V4HFmode)")
  (-1 "((TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx16QImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (0 "TARGET_SVE && 8 >= 64")
  (-1 "TARGET_SIMD && TARGET_AES")
  (-1 "(TARGET_SVE) && ( !rtx_equal_p (operands[1], operands[3]))")
  (-1 "ptr_mode == DImode")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx2DFmode)
       || register_operand (operands[2], VNx2DFmode))")
  (-1 "can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[4]))
   && (AND != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0)")
  (-1 "(TARGET_SVE
   && 64 >= 64
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && ( !rtx_equal_p (operands[2], operands[4]))")
  (-1 "TARGET_SIMD
   && rtx_equal_p (XEXP (operands[3], 0),
		   plus_constant (Pmode,
				  XEXP (operands[1], 0),
				  GET_MODE_SIZE (V2SFmode)))")
  (-1 "TARGET_FRINT && TARGET_FLOAT
   && !(VECTOR_MODE_P (SFmode) && !TARGET_SIMD)")
  (-1 "aarch64_operands_ok_for_ldpstp (operands, false, DFmode)")
  (-1 "(TARGET_SVE && (~0x27 & 0x22) == 0) && ( reload_completed)")
  (-1 "TARGET_SVE
   && (VNx2DFmode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx2DFmode)
	   && nonmemory_operand (operands[1], VNx2DFmode)))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx6DImode)
       || register_operand (operands[2], VNx6DImode))) && ( reload_completed)")
  (0 "TARGET_SVE
   && (~0x81 & 0x21) == 0")
  (0 "TARGET_SVE && 64 > 64")
  (-1 "TARGET_SIMD
   && rtx_equal_p (XEXP (operands[2], 0),
		   plus_constant (Pmode,
				  XEXP (operands[0], 0),
				  GET_MODE_SIZE (V4HFmode)))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx16SFmode)
       || register_operand (operands[2], VNx16SFmode))) && ( reload_completed)")
  (-1 "(TARGET_SVE) && ( !CONSTANT_P (operands[4]))")
  (-1 "TARGET_FLOAT && (register_operand (operands[0], TFmode)
    || aarch64_reg_or_fp_zero (operands[1], TFmode))")
  (0 "(TARGET_SVE && (~0x21 & 0x41) == 0) && ( reload_completed)")
  (-1 "(TARGET_SVE2
   && (~0x43 & 0x41) == 0) && ( !CONSTANT_P (operands[4]))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx32HFmode)
       || register_operand (operands[2], VNx32HFmode))")
  (-1 "ptr_mode == SImode")
  (-1 "TARGET_SVE && 32 > 8")
  (-1 "(INTVAL (operands[5]) == GET_MODE_SIZE (SImode)) && (ptr_mode == DImode || Pmode == DImode)")
  (-1 "rtx_mode_t (operands[5], DImode)
   == (wi::shwi (1, DImode) << (unsigned) GET_MODE_BITSIZE (SImode))")
  (-1 "can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[3]))
   && (AND != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0)")
  (-1 "TARGET_SVE
   && (~0x43 & 0x42) == 0")
  (0 "(TARGET_SVE && (~0x21 & 0x81) == 0) && ( reload_completed)")
  (-1 "aarch64_uxt_size (INTVAL (operands[2]),INTVAL (operands[3])) != 0")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (HFmode), 1, 15)")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8BFmode)
       || register_operand (operands[1], V2x8BFmode))")
  (0 "(TARGET_SVE && (~0x23 & 0x42) == 0) && ( reload_completed)")
  (-1 "(INTVAL (operands[3]) == ~INTVAL (operands[4]))
  && (aarch64_high_bits_all_ones_p (INTVAL (operands[3]))
    || aarch64_high_bits_all_ones_p (INTVAL (operands[4])))")
  (-1 "UINTVAL (operands[1]) < GET_MODE_BITSIZE (SImode)
   && UINTVAL (operands[1]) % 16 == 0")
  (-1 "TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V8HImode, operands[1], operands[2])")
  (-1 "TARGET_SIMD
   && (register_operand (operands[0], V4SImode)
       || aarch64_simd_reg_or_zero (operands[1], V4SImode))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4BFmode)
       || register_operand (operands[1], V3x4BFmode))")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx8QImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx8SImode)
       || register_operand (operands[2], VNx8SImode))")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed
   && register_operand (operands[5], VNx8HImode)
   && !rtx_equal_p (operands[0], operands[5]))")
  (-1 "IN_RANGE (INTVAL (operands[2]) + INTVAL (operands[3]),
	     1, GET_MODE_BITSIZE (SImode) - 1)")
  (-1 "(TARGET_SVE) && ( reload_completed
   && REG_P (operands[0])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx4BFmode)
       || register_operand (operands[2], VNx4BFmode))) && ( register_operand (operands[0], VNx4BFmode)
   && register_operand (operands[2], VNx4BFmode))")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V8BFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0")
  (-1 "TARGET_SVE2
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])")
  (-1 "TARGET_SVE
   && (!register_operand (operands[1], VNx16QImode)
       || register_operand (operands[2], VNx16QImode))")
  (-1 "TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (HFmode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (HFmode), 0, 63)")
  (-1 "IN_RANGE (INTVAL (operands[2]) + INTVAL (operands[3]), 1,
	     GET_MODE_BITSIZE (DImode) - 1)
   && (INTVAL (operands[2]) + INTVAL (operands[3]))
       == GET_MODE_BITSIZE (SImode)")
  (-1 "TARGET_SVE
   && (!register_operand (operands[1], VNx4HFmode)
       || register_operand (operands[2], VNx4HFmode))")
  (-1 "rtx_equal_p (XEXP (operands[2], 0),
		 plus_constant (Pmode,
				XEXP (operands[0], 0),
				GET_MODE_SIZE (DImode)))")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V4SImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx12SFmode)
       || register_operand (operands[2], VNx12SFmode))) && ( reload_completed)")
  (-1 "TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (SFmode) >= 64")
  (-1 "(TARGET_SVE) && ( !CONSTANT_P (operands[3]))")
  (-1 "(TARGET_SIMD
   && INTVAL (operands[5])
      == INTVAL (operands[4]) + GET_MODE_SIZE (TImode)) && (ptr_mode == DImode || Pmode == DImode)")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (SImode), 1, 15)")
  (0 "(TARGET_SVE && (~0x21 & 0x81) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx2QImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_SVE && GET_MODE_NUNITS (VNx2DImode).is_constant ()")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( 1)")
  (-1 "TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (HImode) >= 64")
  (-1 "aarch64_operands_ok_for_ldpstp (operands, false, SFmode)")
  (0 "TARGET_SVE
   && (~0x81 & 0x42) == 0")
  (-1 "(!aarch64_move_imm (INTVAL (operands[1]), SImode)
   && !aarch64_plus_operand (operands[1], SImode)
   && !reload_completed) && (ptr_mode == SImode || Pmode == SImode)")
  (-1 "(TARGET_SVE && (~0x23 & 0x21) == 0) && ( !CONSTANT_P (operands[7]))")
  (-1 "(TARGET_SVE2
   && (~0x43 & 0x42) == 0) && ( !CONSTANT_P (operands[4]))")
  (-1 "aarch64_operands_adjust_ok_for_ldpstp (operands, true, DImode)")
  (-1 "rtx_mode_t (operands[4], DImode)
   == (wi::shwi (1, DImode) << (unsigned) GET_MODE_BITSIZE (SImode))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx2DImode)
       || register_operand (operands[2], VNx2DImode))) && ( register_operand (operands[0], VNx2DImode)
   && register_operand (operands[2], VNx2DImode))")
  (-1 "(TARGET_SVE) && ( reload_completed
   && !register_operand (operands[3], VNx8QImode))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx16HImode)
       || register_operand (operands[2], VNx16HImode))) && ( reload_completed)")
  (-1 "TARGET_SVE
   && (VNx4SImode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx4SImode)
	   && nonmemory_operand (operands[1], VNx4SImode)))")
  (-1 "TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[2], DFmode))")
  (0 "TARGET_SVE && (~0x27 & 0x42) == 0")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx4QImode)
       || register_operand (operands[2], VNx4QImode))")
  (-1 "UINTVAL (operands[1]) <= 16")
  (-1 "(INTVAL (operands[5]) == GET_MODE_SIZE (DFmode)) && (ptr_mode == SImode || Pmode == SImode)")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed
   && register_operand (operands[5], VNx8QImode)
   && !rtx_equal_p (operands[0], operands[5]))")
  (0 "(TARGET_SVE && (~0x21 & 0x24) == 0) && ( !CONSTANT_P (operands[6]))")
  (-1 "(TARGET_SVE && (~0x27 & 0x24) == 0) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))")
  (-1 "TARGET_SVE
   && VNx2HFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2HFmode)))")
  (-1 "TARGET_SVE2
   && (~0x27 & 0x24) == 0")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2DImode)
       || register_operand (operands[1], V4x2DImode))")
  (-1 "TARGET_SIMD")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V2DFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0")
  (0 "(TARGET_SVE && (~0x81 & 0x42) == 0) && ( reload_completed)")
  (-1 "aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[2]), 0,
				      UINTVAL (operands[4]))")
  (-1 "TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (HFmode) >= 64")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx2SFmode)
       || register_operand (operands[2], VNx2SFmode))")
  (-1 "((~INTVAL (operands[4]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0)
   && INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)")
  (-1 "TARGET_SVE
   && (!register_operand (operands[1], VNx2DFmode)
       || register_operand (operands[2], VNx2DFmode))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4SFmode)
       || register_operand (operands[1], V4x4SFmode))")
  (-1 "(TARGET_SVE && 16 >= 16) && ( !rtx_equal_p (operands[1], operands[4]))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx24HFmode)
       || register_operand (operands[2], VNx24HFmode))")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx4SImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_SVE && 32 == 32")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V16QImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0")
  (-1 "TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V8BFmode)
       || register_operand (operands[2], V4BFmode))")
  (-1 "TARGET_SIMD && TARGET_SHA2 && BYTES_BIG_ENDIAN")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4BFmode)
       || register_operand (operands[1], V2x4BFmode))")
  (-1 "TARGET_SVE && aarch64_check_zero_based_sve_index_immediate (operands[2])")
  (-1 "UINTVAL (operands[3]) < GET_MODE_BITSIZE (SImode)
   && (UINTVAL (operands[3]) + UINTVAL (operands[4])
       == GET_MODE_BITSIZE (SImode))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx24HImode)
       || register_operand (operands[2], VNx24HImode))) && ( reload_completed)")
  (-1 "TARGET_SVE && BYTES_BIG_ENDIAN")
  (-1 "TARGET_SVE
   && VNx4SImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4SImode)))")
  (0 "TARGET_SVE && (~0x41 & 0x22) == 0")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed
   && register_operand (operands[5], VNx2DFmode)
   && !rtx_equal_p (operands[0], operands[5]))")
  (-1 "aarch64_operands_ok_for_ldpstp (operands, true, V4HImode)")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx2SFmode)
       || register_operand (operands[2], VNx2SFmode))) && ( register_operand (operands[0], VNx2SFmode)
   && register_operand (operands[2], VNx2SFmode))")
  (0 "(TARGET_SVE && (~0x43 & 0x24) == 0) && ( reload_completed)")
  (-1 "TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (BFmode) >= 64")
  (0 "TARGET_SVE
   && (~0x27 & 0x41) == 0")
  (-1 "(TARGET_SVE && (~0x23 & 0x22) == 0) && ( reload_completed)")
  (-1 "(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (DImode)) && (ptr_mode == SImode || Pmode == SImode)")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x1DFmode)
       || register_operand (operands[1], V2x1DFmode))")
  (-1 "(TARGET_SVE && 32 >= 32) && ( !rtx_equal_p (operands[1], operands[4]))")
  (-1 "TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V8HFmode)))")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx2DFmode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (0 "TARGET_SVE
   && (~0x81 & 0x24) == 0")
  (-1 "(((~INTVAL (operands[4]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0)
   && INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)) && ( true)")
  (0 "TARGET_SVE && (~0x21 & 0x42) == 0")
  (-1 "TARGET_LS64")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx4HImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "(((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0)) && ( true)")
  (-1 "TARGET_SVE
   && (!register_operand (operands[1], VNx8QImode)
       || register_operand (operands[2], VNx8QImode))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2DFmode)
       || register_operand (operands[1], V3x2DFmode))")
  (-1 "TARGET_SVE
   && (VNx8BFmode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx8BFmode)
	   && nonmemory_operand (operands[1], VNx8BFmode)))")
  (-1 "TARGET_SVE
   && 8 >= 8
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])")
  (-1 "(TARGET_SVE && (~0x27 & 0x21) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "INTVAL (operands[1]) > 0
   && ((INTVAL (operands[1]) + INTVAL (operands[2]))
	<= GET_MODE_BITSIZE (SImode))
   && aarch64_bitmask_imm (
	UINTVAL (aarch64_mask_from_zextract_ops (operands[1],
						 operands[2])),
	SImode)")
  (-1 "TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (SFmode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (SFmode), 0, 63)")
  (-1 "TARGET_SVE
   && (~0x81 & 0x81) == 0")
  (0 "(TARGET_SVE && (~0x27 & 0x81) == 0) && ( reload_completed)")
  (0 "TARGET_SVE && (~0x23 & 0x81) == 0")
  (-1 "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx2DImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (0 "TARGET_SVE && 16 > 64")
  (-1 "(TARGET_SVE) && ( !CONSTANT_P (operands[7]))")
  (0 "TARGET_SVE && (~0x81 & 0x42) == 0")
  (-1 "TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (HImode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (HImode), 0, 63)")
  (-1 "UINTVAL (operands[2]) < GET_MODE_BITSIZE (QImode)")
  (-1 "(TARGET_SVE && (~0x27 & 0x24) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "(TARGET_SVE && 64 >= 32) && ( !rtx_equal_p (operands[1], operands[4]))")
  (-1 "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx16QImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)")
  (-1 "rtx_equal_p (XEXP (operands[3], 0),
		 plus_constant (Pmode,
				XEXP (operands[1], 0),
				GET_MODE_SIZE (SFmode)))")
  (-1 "aarch64_operands_ok_for_ldpstp (operands, false, DImode)")
  (-1 "TARGET_SIMD && TARGET_AES
   && aarch64_fusion_enabled_p (AARCH64_FUSE_AES_AESMC)")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx8HFmode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx4QImode)
       || register_operand (operands[2], VNx4QImode))) && ( register_operand (operands[0], VNx4QImode)
   && register_operand (operands[2], VNx4QImode))")
  (-1 "TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V2DFmode, operands[1], operands[2])")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx32HImode)
       || register_operand (operands[2], VNx32HImode))) && ( reload_completed)")
  (0 "(TARGET_SVE && (~0x43 & 0x22) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx8SImode)
       || register_operand (operands[2], VNx8SImode))) && ( reload_completed)")
  (-1 "TARGET_SIMD &&
    rtx_equal_p (XEXP (operands[2], 0),
		 plus_constant (Pmode,
				XEXP (operands[0], 0),
				GET_MODE_SIZE (TFmode)))")
  (-1 "aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[2]), 0,
				      UINTVAL (operands[4]))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx2BImode)
       || register_operand (operands[1], VNx2BImode))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx16QImode)
       || register_operand (operands[2], VNx16QImode))")
  (0 "TARGET_SVE && 16 == 32")
  (1 "true")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (DImode), 1, 15)")
  (-1 "TARGET_SVE
   && (~0x43 & 0x41) == 0")
  (-1 "(TARGET_SVE) && ( (!CONSTANT_P (operands[2]) || !CONSTANT_P (operands[3])))")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V4SFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0")
  (0 "(TARGET_SVE && (~0x21 & 0x22) == 0) && ( !CONSTANT_P (operands[7]))")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx4SFmode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (0 "(TARGET_SVE && (~0x81 & 0x22) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "TARGET_LSE")
  (-1 "TARGET_SVE
   && 64 >= 8
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])")
  (0 "(TARGET_SVE && (~0x23 & 0x81) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "aarch64_operands_ok_for_ldpstp (operands, true, V2SImode)")
  (-1 "TARGET_SVE
   && VNx4HFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4HFmode)))")
  (-1 "!(UINTVAL (operands[1]) == 0
     || (UINTVAL (operands[3]) + UINTVAL (operands[1])
	 > GET_MODE_BITSIZE (DImode)))")
  (0 "TARGET_SVE && 16 > 32")
  (-1 "TARGET_SIMD
   && (register_operand (operands[0], V16QImode)
       || aarch64_simd_reg_or_zero (operands[1], V16QImode))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx32BFmode)
       || register_operand (operands[2], VNx32BFmode))) && ( reload_completed)")
  (-1 "(TARGET_SIMD) && ( reload_completed
  && ENDIAN_LANE_N (2, INTVAL (operands[2])) == 0)")
  (-1 "aarch64_operands_adjust_ok_for_ldpstp (operands, true, SImode)")
  (-1 "TARGET_SVE && !rtx_equal_p (operands[3], operands[4])")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (SFmode), 1, 15)")
  (-1 "aarch64_operands_adjust_ok_for_ldpstp (operands, false, SFmode)")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4HFmode)
       || register_operand (operands[1], V3x4HFmode))")
  (-1 "TARGET_SVE
   && (!register_operand (operands[1], VNx2HImode)
       || register_operand (operands[2], VNx2HImode))")
  (-1 "aarch64_maxmin_plus_const (UMIN, operands, false)")
  (-1 "TARGET_BF16_SIMD")
  (-1 "!aarch64_move_imm (INTVAL (operands[2]), DImode)
   && !aarch64_plus_operand (operands[2], DImode)
   && !reload_completed")
  (-1 "TARGET_SIMD
   && (register_operand (operands[0], V4BFmode)
       || aarch64_simd_reg_or_zero (operands[1], V4BFmode))")
  (-1 "(TARGET_SVE2
   && !rtx_equal_p (operands[2], operands[4])
   && (CONSTANT_P (operands[4]) || !rtx_equal_p (operands[3], operands[4]))) && ( 1)")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx4DFmode)
       || register_operand (operands[2], VNx4DFmode))) && ( reload_completed)")
  (-1 "TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2SImode)
       || register_operand (operands[2], SImode))")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (BFmode), 1, 15)")
  (0 "(TARGET_SVE && (~0x23 & 0x41) == 0) && ( reload_completed)")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx2HFmode)
       || register_operand (operands[2], VNx2HFmode))) && ( register_operand (operands[0], VNx2HFmode)
   && register_operand (operands[2], VNx2HFmode))")
  (-1 "(TARGET_SVE) && ( reload_completed
   && register_operand (operands[3], VNx4SFmode)
   && INTVAL (operands[4]) == SVE_RELAXED_GP)")
  (-1 "rtx_equal_p (XEXP (operands[2], 0),
		 plus_constant (Pmode,
				XEXP (operands[0], 0),
				GET_MODE_SIZE (SFmode)))")
  (-1 "INTVAL (operands[1]) == INTVAL (operands[2])")
  (0 "(TARGET_SVE && (~0x81 & 0x42) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx4SFmode)
       || register_operand (operands[2], VNx4SFmode))")
  (0 "(TARGET_SVE && (~0x21 & 0x24) == 0) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x1DImode)
       || register_operand (operands[1], V2x1DImode))")
  (-1 "TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V4SFmode)))")
  (-1 "!reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])")
  (0 "TARGET_SVE
   && (~0x27 & 0x42) == 0")
  (-1 "TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V2DFmode)))")
  (0 "(TARGET_SVE && (~0x41 & 0x42) == 0) && ( !CONSTANT_P (operands[6]))")
  (-1 "(TARGET_SIMD && INTVAL (operands[5]) == GET_MODE_SIZE (TFmode)) && (ptr_mode == DImode || Pmode == DImode)")
  (-1 "TARGET_SVE && 32 >= 16")
  (-1 "TARGET_SVE && GET_MODE_NUNITS (VNx8BFmode).is_constant ()")
  (-1 "TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V8BFmode)
       || register_operand (operands[2], V4BFmode))")
  (-1 "TARGET_SIMD && TARGET_SHA3")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2SFmode)
       || register_operand (operands[1], V4x2SFmode))")
  (-1 "TARGET_FLOAT && (reload_completed || reload_in_progress)")
  (-1 "TARGET_SIMD && TARGET_SM4")
  (-1 "TARGET_ILP32")
  (-1 "((TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx4HImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "(TARGET_SVE) && ( reload_completed
   && !register_operand (operands[3], VNx4QImode))")
  (-1 "(aarch64_maxmin_plus_const (UMAX, operands, false)) && ( 1)")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)")
  (-1 "TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[2], V8QImode))")
  (0 "(TARGET_SVE && (~0x23 & 0x41) == 0) && ( !CONSTANT_P (operands[3]))")
  (0 "(TARGET_SVE2
   && (~0x43 & 0x22) == 0) && ( !CONSTANT_P (operands[4]))")
  (-1 "TARGET_SIMD
   && rtx_equal_p (XEXP (operands[3], 0),
		   plus_constant (Pmode,
				  XEXP (operands[1], 0),
				  GET_MODE_SIZE (V4HFmode)))")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed
   && register_operand (operands[5], VNx2SImode)
   && !rtx_equal_p (operands[0], operands[5]))")
  (-1 "TARGET_SVE2_SM4")
  (-1 "(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (SFmode)) && (ptr_mode == SImode || Pmode == SImode)")
  (-1 "(TARGET_SVE) && (TARGET_SVE_F64MM)")
  (-1 "(TARGET_SVE) && ( reload_completed
   && !register_operand (operands[3], VNx2HImode))")
  (-1 "(TARGET_SVE2) && ( !rtx_equal_p (operands[1], operands[4]))")
  (-1 "((~INTVAL (operands[4]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0)
   && INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)")
  (-1 "TARGET_SIMD && reload_completed
   && GP_REGNUM_P (REGNO (operands[0]))
   && GP_REGNUM_P (REGNO (operands[1]))")
  (-1 "!(UINTVAL (operands[1]) == 0
     || (UINTVAL (operands[2]) + UINTVAL (operands[1])
	 > GET_MODE_BITSIZE (SImode)))")
  (-1 "TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V16QImode) - 1)")
  (-1 "rtx_equal_p (XEXP (operands[2], 0),
		 plus_constant (Pmode,
				XEXP (operands[0], 0),
				GET_MODE_SIZE (SImode)))")
  (0 "TARGET_SVE
   && (~0x27 & 0x81) == 0")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x1DFmode)
       || register_operand (operands[1], V4x1DFmode))")
  (-1 "(TARGET_SVE) && ( !CONSTANT_P (operands[6]))")
  (-1 "(register_operand (operands[0], V8DImode)
    || register_operand (operands[1], V8DImode))")
  (-1 "TARGET_SVE && (~0x23 & 0x22) == 0")
  (0 "(TARGET_SVE && (~0x23 & 0x24) == 0) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))")
  (0 "(TARGET_SVE
   && 8 >= 32
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && ( !rtx_equal_p (operands[2], operands[4]))")
  (0 "TARGET_SVE && (~0x81 & 0x21) == 0")
  (-1 "TARGET_SIMD
   && (register_operand (operands[0], V8BFmode)
       || aarch64_simd_reg_or_zero (operands[1], V8BFmode))")
  (0 "TARGET_SVE && 8 >= 32")
  (-1 "TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (SImode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (SImode), 0, 63)")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx8HImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx8DFmode)
       || register_operand (operands[2], VNx8DFmode))) && ( reload_completed)")
  (-1 "(TARGET_SVE && (~0x21 & 0x21) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx4SImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "(TARGET_SVE && (~0x21 & 0x21) == 0) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx8DFmode)
       || register_operand (operands[2], VNx8DFmode))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2DImode)
       || register_operand (operands[1], V4x2DImode))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8HFmode)
       || register_operand (operands[1], V2x8HFmode))")
  (0 "(TARGET_SVE && (~0x23 & 0x24) == 0) && ( !CONSTANT_P (operands[7]))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx4SImode)
       || register_operand (operands[2], VNx4SImode))")
  (-1 "(TARGET_SVE && (~0x43 & 0x41) == 0) && ( !CONSTANT_P (operands[3]))")
  (0 "TARGET_SVE && 8 == 32")
  (-1 "TARGET_SVE && GET_MODE_NUNITS (VNx8HImode).is_constant ()")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x16QImode)
       || register_operand (operands[1], V2x16QImode))")
  (0 "(TARGET_SVE && (~0x21 & 0x24) == 0) && ( !CONSTANT_P (operands[3]))")
  (0 "(TARGET_SVE && 16 >= 32) && ( !rtx_equal_p (operands[1], operands[4]))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx2QImode)
       || register_operand (operands[2], VNx2QImode))")
  (0 "TARGET_SVE && (~0x23 & 0x24) == 0")
  (0 "TARGET_SVE
   && 8 >= 32
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])")
  (-1 "(TARGET_SVE && (~0x23 & 0x21) == 0) && ( !CONSTANT_P (operands[3]))")
  (0 "TARGET_SVE && 32 >= 64")
  (-1 "TARGET_SVE && 32 > 16")
  (-1 "TARGET_SVE2")
  (-1 "(TARGET_SVE2
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && ( 1)")
  (-1 "(TARGET_COMPLEX) && (TARGET_SIMD_F16INST)")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx8SFmode)
       || register_operand (operands[2], VNx8SFmode))")
  (-1 "(TARGET_SVE) && ( (operands[4] != CONST0_RTX (VNx16BImode)
       || operands[5] != CONST0_RTX (VNx16BImode)))")
  (-1 "TARGET_SVE
   && (!register_operand (operands[1], VNx8HFmode)
       || register_operand (operands[2], VNx8HFmode))")
  (-1 "TARGET_SVE
   && (!register_operand (operands[1], VNx4SFmode)
       || register_operand (operands[2], VNx4SFmode))")
  (-1 "((!aarch64_move_imm (INTVAL (operands[1]), DImode)
   && !aarch64_plus_operand (operands[1], DImode)
   && !reload_completed) && (ptr_mode == DImode || Pmode == DImode)) && ( true)")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode))")
  (-1 "(TARGET_SVE2
   && (~0x27 & 0x24) == 0) && ( !CONSTANT_P (operands[4]))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8BFmode)
       || register_operand (operands[1], V4x8BFmode))")
  (0 "TARGET_SVE && 64 == 32")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed
   && register_operand (operands[5], VNx8HFmode)
   && !rtx_equal_p (operands[0], operands[5]))")
  (-1 "(TARGET_SVE) && ( reload_completed
   && register_operand (operands[2], VNx4SFmode)
   && INTVAL (operands[4]) == SVE_RELAXED_GP)")
  (-1 "reload_completed && aarch64_split_128bit_move_p (operands[0], operands[1])")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (HFmode), 16, 63)")
  (-1 "TARGET_SVE
   && (~0x27 & 0x24) == 0")
  (0 "(TARGET_SVE && (~0x41 & 0x81) == 0) && ( reload_completed)")
  (-1 "(TARGET_SIMD) && ( reload_completed)")
  (-1 "(TARGET_SVE && (~0x27 & 0x22) == 0) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))")
  (-1 "(TARGET_SVE) && ( !CONSTANT_P (operands[5]))")
  (-1 "can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[4]))
   && (XOR != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0)")
  (0 "TARGET_SVE && (~0x43 & 0x81) == 0")
  (0 "TARGET_SVE && 8 >= 16")
  (-1 "(TARGET_SVE && operands[0] != stack_pointer_rtx) && ( epilogue_completed
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && aarch64_split_add_offset_immediate (operands[2], SImode))")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (SFmode), 16, 63)")
  (-1 "(TARGET_SIMD) && ( reload_completed && aarch64_simd_register (operands[0], V8QImode))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2DFmode)
       || register_operand (operands[1], V2x2DFmode))")
  (-1 "TARGET_SVE && 64 >= 16")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2DImode)
       || register_operand (operands[1], V3x2DImode))")
  (-1 "TARGET_SVE2_AES && aarch64_fusion_enabled_p (AARCH64_FUSE_AES_AESMC)")
  (-1 "UINTVAL (operands[2]) == -UINTVAL (operands[3])")
  (0 "(TARGET_SVE && (~0x21 & 0x22) == 0) && ( !CONSTANT_P (operands[6]))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx8HImode)
       || register_operand (operands[2], VNx8HImode))")
  (-1 "TARGET_SIMD
   && (register_operand (operands[0], V4HImode)
       || aarch64_simd_reg_or_zero (operands[1], V4HImode))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4HFmode)
       || register_operand (operands[1], V2x4HFmode))")
  (-1 "(TARGET_SVE && (~0x41 & 0x41) == 0) && ( !CONSTANT_P (operands[6]))")
  (-1 "TARGET_SVE
   && VNx8HFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx8HFmode)))")
  (-1 "(TARGET_TLS_DESC) && (ptr_mode == DImode)")
  (-1 "TARGET_SIMD
   && rtx_equal_p (XEXP (operands[2], 0),
		   plus_constant (Pmode,
				  XEXP (operands[0], 0),
				  GET_MODE_SIZE (V2SFmode)))")
  (0 "TARGET_SVE && 64 == 16")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[3]) * 16 / 8, 0, 255)")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)")
  (0 "TARGET_SVE && 32 == 16")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx2DImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx2DFmode)
       || register_operand (operands[2], VNx2DFmode))) && ( register_operand (operands[0], VNx2DFmode)
   && register_operand (operands[2], VNx2DFmode))")
  (0 "TARGET_SVE && 8 == 16")
  (-1 "TARGET_SVE
   && (VNx8HImode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx8HImode)
	   && nonmemory_operand (operands[1], VNx8HImode)))")
  (-1 "(TARGET_SVE && (~0x27 & 0x22) == 0) && ( !CONSTANT_P (operands[7]))")
  (-1 "(TARGET_FLOAT) && (AARCH64_ISA_F16)")
  (-1 "aarch64_movk_shift (rtx_mode_t (operands[2], DImode),
		       rtx_mode_t (operands[3], DImode)) >= 0")
  (-1 "(TARGET_COMPLEX && !BYTES_BIG_ENDIAN) && (TARGET_SIMD_F16INST)")
  (-1 "TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, false, V2DFmode)")
  (0 "(TARGET_SVE && (~0x81 & 0x22) == 0) && ( reload_completed)")
  (-1 "aarch64_operands_ok_for_ldpstp (operands, true, V8QImode)")
  (0 "TARGET_SVE && (~0x23 & 0x41) == 0")
  (-1 "UINTVAL (operands[2]) < GET_MODE_BITSIZE (HImode)")
  (-1 "(((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0)) && ( true)")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x1DImode)
       || register_operand (operands[1], V3x1DImode))")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, DFmode)")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8HImode)
       || register_operand (operands[1], V4x8HImode))")
  (-1 "TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V4SImode)))")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx4SImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_SVE
   && (!register_operand (operands[1], VNx4HImode)
       || register_operand (operands[2], VNx4HImode))")
  (-1 "TARGET_FLOAT && (register_operand (operands[0], SFmode)
    || aarch64_reg_or_fp_zero (operands[1], SFmode))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8HFmode)
       || register_operand (operands[1], V2x8HFmode))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x1DFmode)
       || register_operand (operands[1], V2x1DFmode))")
  (-1 "TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V4SImode)))")
  (-1 "((TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx2DImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[4]),
				      UINTVAL (operands[2]),
				      HOST_WIDE_INT_M1U << UINTVAL (operands[2]) )")
  (-1 "(TARGET_SIMD) && ( reload_completed
  && ENDIAN_LANE_N (8, INTVAL (operands[2])) == 0)")
  (-1 "TARGET_SVE
   && VNx4HImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4HImode)))")
  (-1 "TARGET_SIMD && reload_completed")
  (-1 "TARGET_SVE && 64 >= 64")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * 16 / 8, 0, 63)")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4SFmode)
       || register_operand (operands[1], V3x4SFmode))")
  (-1 "INTVAL (operands[3]) == -INTVAL (operands[2])")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8QImode)
       || register_operand (operands[1], V3x8QImode))")
  (0 "TARGET_SVE && (~0x81 & 0x41) == 0")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN")
  (0 "(TARGET_SVE
   && 8 >= 16
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && ( !rtx_equal_p (operands[2], operands[4]))")
  (-1 "(TARGET_SVE2) && ( !CONSTANT_P (operands[4]))")
  (-1 "TARGET_SIMD
   && rtx_equal_p (XEXP (operands[3], 0),
		   plus_constant (Pmode,
				  XEXP (operands[1], 0),
				  GET_MODE_SIZE (DFmode)))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4HImode)
       || register_operand (operands[1], V4x4HImode))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4HImode)
       || register_operand (operands[1], V4x4HImode))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx6DFmode)
       || register_operand (operands[2], VNx6DFmode))) && ( reload_completed)")
  (0 "TARGET_SVE2
   && (~0x27 & 0x81) == 0")
  (-1 "TARGET_SVE
   && (!register_operand (operands[1], VNx2SFmode)
       || register_operand (operands[2], VNx2SFmode))")
  (-1 "(TARGET_SIMD
   && INTVAL (operands[5])
      == INTVAL (operands[4]) + GET_MODE_SIZE (TFmode)) && (ptr_mode == SImode || Pmode == SImode)")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (HImode), 16, 63)")
  (-1 "can_create_pseudo_p ()
   && !aarch64_can_const_movi_rtx_p (operands[1], SFmode)
   && !aarch64_float_const_representable_p (operands[1])
   &&  aarch64_float_const_rtx_p (operands[1])")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2DImode)
       || register_operand (operands[1], V2x2DImode))")
  (-1 "TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[2], DFmode))")
  (0 "(TARGET_SVE
   && 8 >= 64
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && ( !rtx_equal_p (operands[2], operands[4]))")
  (-1 "(TARGET_SVE) && (ptr_mode == DImode || Pmode == DImode)")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x1DFmode)
       || register_operand (operands[1], V3x1DFmode))")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed
   && register_operand (operands[5], VNx4QImode)
   && !rtx_equal_p (operands[0], operands[5]))")
  (-1 "TARGET_FLOAT
   && IN_RANGE (aarch64_fpconst_pow_of_2 (operands[2]), 1,
		GET_MODE_BITSIZE (DImode))")
  (-1 "TARGET_SVE && reload_completed")
  (-1 "TARGET_SVE_F64MM")
  (-1 "TARGET_SVE && 16 == 16")
  (-1 "aarch64_maxmin_plus_const (SMIN, operands, false)")
  (-1 "TARGET_SVE")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed
   && register_operand (operands[5], VNx16QImode)
   && !rtx_equal_p (operands[0], operands[5]))")
  (0 "(TARGET_SVE && (~0x41 & 0x81) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V2DFmode) - 1)")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx2BFmode)
       || register_operand (operands[2], VNx2BFmode))) && ( register_operand (operands[0], VNx2BFmode)
   && register_operand (operands[2], VNx2BFmode))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4HFmode)
       || register_operand (operands[1], V4x4HFmode))")
  (-1 "TARGET_SIMD
   && (register_operand (operands[0], V4SFmode)
       || aarch64_simd_reg_or_zero (operands[1], V4SFmode))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx64QImode)
       || register_operand (operands[2], VNx64QImode))")
  (0 "TARGET_SVE
   && 8 >= 64
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])")
  (-1 "TARGET_SVE && (~0x27 & 0x22) == 0")
  (0 "(TARGET_SVE && (~0x23 & 0x81) == 0) && ( reload_completed)")
  (-1 "TARGET_SIMD
   && (register_operand (operands[0], V8HFmode)
       || aarch64_simd_reg_or_zero (operands[1], V8HFmode))")
  (-1 "SIBLING_CALL_P (insn)")
  (-1 "(TARGET_SVE && 64 >= 16) && ( !rtx_equal_p (operands[1], operands[4]))")
  (-1 "TARGET_FLOAT && TARGET_SIMD")
  (-1 "TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V8HFmode) - 1)")
  (-1 "(TARGET_SVE && operands[0] != stack_pointer_rtx) && ( epilogue_completed
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && aarch64_split_add_offset_immediate (operands[2], DImode))")
  (0 "(TARGET_SVE && (~0x23 & 0x24) == 0) && ( !CONSTANT_P (operands[6]))")
  (-1 "can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[4]))
   && (PLUS != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0)")
  (-1 "(TARGET_SVE2) && ( !CONSTANT_P (operands[5]))")
  (-1 "UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)")
  (-1 "(TARGET_FLOAT && TARGET_SIMD) && (TARGET_SIMD_F16INST)")
  (-1 "(!aarch64_move_imm (INTVAL (operands[2]), DImode)
   && !aarch64_plus_operand (operands[2], DImode)
   && !reload_completed) && ( true)")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx8DImode)
       || register_operand (operands[2], VNx8DImode))) && ( reload_completed)")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx12SImode)
       || register_operand (operands[2], VNx12SImode))) && ( reload_completed)")
  (-1 "aarch64_operands_adjust_ok_for_ldpstp (operands, true, DFmode)")
  (-1 "TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[2], V2SImode))")
  (-1 "TARGET_SVE && (~0x43 & 0x42) == 0")
  (-1 "can_create_pseudo_p ()
   && !aarch64_can_const_movi_rtx_p (operands[1], HFmode)
   && !aarch64_float_const_representable_p (operands[1])
   &&  aarch64_float_const_rtx_p (operands[1])")
  (-1 "(TARGET_SVE) && (TARGET_SVE2)")
  (0 "TARGET_SVE2
   && (~0x43 & 0x22) == 0")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed
   && register_operand (operands[5], VNx4SImode)
   && !rtx_equal_p (operands[0], operands[5]))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx4DFmode)
       || register_operand (operands[2], VNx4DFmode))")
  (-1 "UINTVAL (operands[2]) == HOST_WIDE_INT_M1U << INTVAL (operands[4])
   && INTVAL (operands[4])
   && (UINTVAL (operands[4]) + UINTVAL (operands[5])
       <= GET_MODE_BITSIZE (SImode))")
  (-1 "TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (DImode) >= 64")
  (-1 "TARGET_FLOAT
   && IN_RANGE (aarch64_fpconst_pow_of_2 (operands[2]), 1,
		GET_MODE_BITSIZE (SImode))")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (HImode), 1, 15)")
  (0 "(TARGET_SVE && (~0x21 & 0x24) == 0) && ( reload_completed)")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx48QImode)
       || register_operand (operands[2], VNx48QImode))")
  (-1 "(TARGET_SVE && (~0x27 & 0x22) == 0) && ( !CONSTANT_P (operands[6]))")
  (-1 "(TARGET_SVE) && ( reload_completed)")
  (-1 "TARGET_JSCVT")
  (-1 "TARGET_SIMD && !STRICT_ALIGNMENT")
  (0 "TARGET_SVE2
   && (~0x27 & 0x41) == 0")
  (-1 "(TARGET_SVE2 && !rtx_equal_p (operands[2], operands[3])) && ( !rtx_equal_p (operands[1], operands[4]))")
  (-1 "(TARGET_TLS_DESC && TARGET_SVE) && (ptr_mode == DImode)")
  (-1 "(TARGET_SVE) && ( reload_completed
   && !register_operand (operands[3], VNx8HImode))")
  (-1 "TARGET_SIMD
   && (register_operand (operands[0], V2SImode)
       || aarch64_simd_reg_or_zero (operands[1], V2SImode))")
  (0 "TARGET_SVE && (~0x41 & 0x81) == 0")
  (-1 "(((~INTVAL (operands[4]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0)
   && INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)) && ( true)")
  (-1 "(!aarch64_move_imm (INTVAL (operands[1]), DImode)
   && !aarch64_plus_operand (operands[1], DImode)
   && !reload_completed) && (ptr_mode == SImode || Pmode == SImode)")
  (-1 "(INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)) && ( true)")
  (-1 "TARGET_SIMD
   && ENDIAN_LANE_N (16, INTVAL (operands[2])) == 0")
  (-1 "TARGET_SVE
   && VNx2DImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2DImode)))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx16HFmode)
       || register_operand (operands[2], VNx16HFmode))")
  (-1 "(INTVAL (operands[5]) == GET_MODE_SIZE (SImode)) && (ptr_mode == SImode || Pmode == SImode)")
  (-1 "TARGET_SVE
   && VNx4QImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4QImode)))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8QImode)
       || register_operand (operands[1], V2x8QImode))")
  (-1 "aarch64_operands_ok_for_ldpstp (operands, true, SFmode)")
  (0 "TARGET_SVE && (~0x23 & 0x42) == 0")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V16QImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0")
  (-1 "TARGET_SIMD && TARGET_SHA2 && !BYTES_BIG_ENDIAN")
  (-1 "can_create_pseudo_p ()
   && !aarch64_can_const_movi_rtx_p (operands[1], DFmode)
   && !aarch64_float_const_representable_p (operands[1])
   &&  aarch64_float_const_rtx_p (operands[1])")
  (-1 "TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V8HFmode)))")
  (-1 "(TARGET_SVE && (~0x81 & 0x81) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "TARGET_SIMD
   && rtx_equal_p (XEXP (operands[3], 0),
		   plus_constant (Pmode,
				  XEXP (operands[1], 0),
				  GET_MODE_SIZE (V8QImode)))")
  (-1 "TARGET_SVE
   && VNx4SFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4SFmode)))")
  (-1 "can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[3]))
   && (PLUS != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0)")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4HImode)
       || register_operand (operands[1], V3x4HImode))")
  (-1 "TARGET_SVE && 64 > 32")
  (-1 "(register_operand (operands[0], SImode)
    || aarch64_reg_or_zero (operands[1], SImode))")
  (-1 "aarch64_move_imm (INTVAL (operands[2]), SImode)")
  (-1 "UINTVAL (operands[2]) < 32")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], CImode)
       || register_operand (operands[1], CImode))")
  (0 "TARGET_SVE && 16 == 8")
  (0 "TARGET_SVE && 32 == 8")
  (0 "(TARGET_SVE && (~0x81 & 0x41) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "UINTVAL (operands[3]) < GET_MODE_BITSIZE (DImode)
   && (UINTVAL (operands[3]) + UINTVAL (operands[4])
       == GET_MODE_BITSIZE (DImode))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx32QImode)
       || register_operand (operands[2], VNx32QImode))")
  (-1 "(register_operand (operands[0], QImode)
    || aarch64_reg_or_zero (operands[1], QImode))")
  (-1 "(TARGET_SVE) && ( (!CONSTANT_P (operands[4]) || !CONSTANT_P (operands[5])))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx24HImode)
       || register_operand (operands[2], VNx24HImode))")
  (-1 "TARGET_SVE
   && 64 >= 32
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx2DImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (0 "(TARGET_SVE && (~0x27 & 0x42) == 0) && ( reload_completed)")
  (0 "TARGET_SVE && 16 > 16")
  (-1 "can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[3]))
   && (IOR != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0)")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[4], operands[5])) && ( 1)")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx8HFmode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8QImode)
       || register_operand (operands[1], V3x8QImode))")
  (0 "TARGET_SVE && (~0x43 & 0x24) == 0")
  (-1 "TARGET_SIMD
   && ENDIAN_LANE_N (8, INTVAL (operands[2])) == 0")
  (0 "TARGET_SVE && 16 >= 32")
  (-1 "TARGET_SVE2
   && (~0x27 & 0x22) == 0")
  (-1 "!(UINTVAL (operands[1]) == 0
     || (UINTVAL (operands[2]) + UINTVAL (operands[1])
	 > GET_MODE_BITSIZE (DImode)))")
  (-1 "TARGET_SIMD_RDMA")
  (0 "(TARGET_SVE2
   && (~0x43 & 0x81) == 0) && ( !CONSTANT_P (operands[4]))")
  (-1 "TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, true, V2SFmode)")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed
   && register_operand (operands[5], VNx4SFmode)
   && !rtx_equal_p (operands[0], operands[5]))")
  (0 "TARGET_SVE2
   && (~0x43 & 0x21) == 0")
  (-1 "TARGET_SVE && (~0x21 & 0x21) == 0")
  (-1 "TARGET_DOTPROD")
  (-1 "(TARGET_SVE && (~0x21 & 0x21) == 0) && ( !CONSTANT_P (operands[7]))")
  (-1 "TARGET_SIMD
   && (register_operand (operands[0], V2DFmode)
       || aarch64_simd_reg_or_zero (operands[1], V2DFmode))")
  (-1 "((TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx8HImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8HFmode)
       || register_operand (operands[1], V3x8HFmode))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx12SImode)
       || register_operand (operands[2], VNx12SImode))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2SImode)
       || register_operand (operands[1], V2x2SImode))")
  (-1 "TARGET_F16FML")
  (0 "TARGET_SVE && 8 == 64")
  (-1 "(TARGET_SVE) && ( reload_completed
   && !register_operand (operands[3], VNx2DImode))")
  (-1 "(aarch64_maxmin_plus_const (SMIN, operands, false)) && ( 1)")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[3], operands[4])) && ( 1)")
  (-1 "aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[4]),
				      UINTVAL (operands[2]),
				      HOST_WIDE_INT_M1U << UINTVAL (operands[2]) )")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx8BImode)
       || register_operand (operands[1], VNx8BImode))")
  (-1 "TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (BFmode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (BFmode), 0, 63)")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * 8 / 8, 0, 63)")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx4SFmode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_SVE && !rtx_equal_p (operands[2], operands[6])")
  (-1 "(TARGET_SVE
   && aarch64_sve_same_pred_for_ptest_p (&operands[4], &operands[6])) && ( !rtx_equal_p (operands[4], operands[6]))")
  (-1 "TARGET_SVE
   && (!register_operand (operands[1], VNx2SImode)
       || register_operand (operands[2], VNx2SImode))")
  (-1 "(TARGET_SIMD) && ( reload_completed
  && ENDIAN_LANE_N (4, INTVAL (operands[2])) == 0)")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V8HImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0")
  (-1 "TARGET_SVE2
   && (~0x27 & 0x21) == 0")
  (0 "TARGET_SVE
   && (~0x43 & 0x22) == 0")
  (-1 "aarch_rev16_shleft_mask_imm_p (operands[3], DImode)
   && aarch_rev16_shright_mask_imm_p (operands[2], DImode)")
  (-1 "TARGET_FRINT && TARGET_FLOAT
   && !(VECTOR_MODE_P (V2DFmode) && !TARGET_SIMD)")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx16QImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx4HImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (DFmode), 16, 63)")
  (0 "TARGET_SVE
   && (~0x81 & 0x41) == 0")
  (-1 "TARGET_SVE && !BYTES_BIG_ENDIAN")
  (-1 "TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V8HImode) - 1)")
  (-1 "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx4QImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (SImode), 16, 63)")
  (-1 "TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V4SFmode) - 1)")
  (-1 "(TARGET_SIMD) && ( reload_completed
  && ENDIAN_LANE_N (16, INTVAL (operands[2])) == 0)")
  (-1 "(TARGET_SVE) && ( reload_completed
   && register_operand (operands[2], VNx2DFmode)
   && INTVAL (operands[4]) == SVE_RELAXED_GP)")
  (-1 "((TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx2QImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "(!aarch64_move_imm (INTVAL (operands[2]), SImode)
   && !aarch64_plus_operand (operands[2], SImode)
   && !reload_completed) && ( true)")
  (-1 "can_create_pseudo_p ()")
  (-1 "TARGET_SVE
   && VNx2SFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2SFmode)))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x1DImode)
       || register_operand (operands[1], V4x1DImode))")
  (0 "(TARGET_SVE && (~0x23 & 0x24) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "(TARGET_SVE) && ( (!rtx_equal_p (operands[1], operands[5])
       || !rtx_equal_p (operands[1], operands[6])))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2SFmode)
       || register_operand (operands[1], V2x2SFmode))")
  (-1 "TARGET_SVE && GET_MODE_NUNITS (VNx8HFmode).is_constant ()")
  (-1 "TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, false, V2DImode)")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (QImode), 1, 15)")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx16QImode)
       || register_operand (operands[2], VNx16QImode))) && ( register_operand (operands[0], VNx16QImode)
   && register_operand (operands[2], VNx16QImode))")
  (-1 "TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (DFmode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (DFmode), 0, 63)")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x16QImode)
       || register_operand (operands[1], V4x16QImode))")
  (-1 "TARGET_FLOAT && (register_operand (operands[0], DFmode)
    || aarch64_reg_or_fp_zero (operands[1], DFmode))")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V8QImode)")
  (0 "(TARGET_SVE && (~0x21 & 0x42) == 0) && ( reload_completed)")
  (0 "(TARGET_SVE && (~0x27 & 0x41) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "TARGET_SVE
   && VNx2BFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2BFmode)))")
  (-1 "!HONOR_SIGNED_ZEROS (SFmode) && TARGET_FLOAT")
  (-1 "TARGET_SVE && !rtx_equal_p (operands[2], operands[3])")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx24BFmode)
       || register_operand (operands[2], VNx24BFmode))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8QImode)
       || register_operand (operands[1], V2x8QImode))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx2HFmode)
       || register_operand (operands[2], VNx2HFmode))")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx8HFmode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "(TARGET_SIMD) && ( reload_completed && aarch64_simd_register (operands[0], V4HFmode))")
  (-1 "TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[2], V2SFmode))")
  (-1 "(INTVAL (operands[5]) == GET_MODE_SIZE (DFmode)) && (ptr_mode == DImode || Pmode == DImode)")
  (0 "TARGET_SVE && (~0x27 & 0x41) == 0")
  (-1 "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx4HImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8HFmode)
       || register_operand (operands[1], V3x8HFmode))")
  (-1 "(TARGET_SVE && (~0x27 & 0x21) == 0) && ( !CONSTANT_P (operands[7]))")
  (-1 "((TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx8QImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (0 "TARGET_SVE && (~0x27 & 0x81) == 0")
  (-1 "((TARGET_SVE) && (TARGET_SVE2)) && ( (!CONSTANT_P (operands[3]) || !CONSTANT_P (operands[4])))")
  (-1 "TARGET_FRINT && TARGET_FLOAT
   && !(VECTOR_MODE_P (V4SFmode) && !TARGET_SIMD)")
  (0 "TARGET_SVE && (~0x81 & 0x24) == 0")
  (0 "(TARGET_SVE && (~0x41 & 0x24) == 0) && ( !CONSTANT_P (operands[3]))")
  (0 "TARGET_SVE && 32 == 64")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx16SImode)
       || register_operand (operands[2], VNx16SImode))) && ( reload_completed)")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode))")
  (0 "(TARGET_SVE2
   && (~0x27 & 0x81) == 0) && ( !CONSTANT_P (operands[4]))")
  (-1 "aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[2]),
				      UINTVAL (operands[4]),
				      UINTVAL(operands[5]))")
  (-1 "ptr_mode == SImode || Pmode == SImode")
  (0 "(TARGET_SVE && (~0x41 & 0x42) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "(TARGET_SVE && (~0x21 & 0x21) == 0) && ( reload_completed)")
  (-1 "(TARGET_SVE) && ( 1)")
  (-1 "aarch64_operands_ok_for_ldpstp (operands, true, DFmode)")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx12SFmode)
       || register_operand (operands[2], VNx12SFmode))")
  (-1 "(aarch64_maxmin_plus_const (UMIN, operands, false)) && ( 1)")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed
   && register_operand (operands[5], VNx2QImode)
   && !rtx_equal_p (operands[0], operands[5]))")
  (-1 "(TARGET_SVE) && ( !rtx_equal_p (operands[1], operands[5]))")
  (-1 "(TARGET_SVE) && ( reload_completed
   && !register_operand (operands[3], VNx2QImode))")
  (-1 "rtx_mode_t (operands[4], TImode)
   == (wi::shwi (1, TImode) << (unsigned) GET_MODE_BITSIZE (DImode))")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[3]) * 64 / 8, 0, 255)")
  (-1 "(TARGET_SVE) && ( (!rtx_equal_p (operands[1], operands[4])
       || !rtx_equal_p (operands[1], operands[5])))")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed
   && register_operand (operands[5], VNx2HImode)
   && !rtx_equal_p (operands[0], operands[5]))")
  (-1 "TARGET_TME")
  (-1 "TARGET_SVE && 8 == 8")
  (-1 "TARGET_MEMTAG")
  (0 "(TARGET_SVE && (~0x21 & 0x22) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "TARGET_SIMD
   && IN_RANGE (aarch64_vec_fpconst_pow_of_2 (operands[2]), 1,
		GET_MODE_BITSIZE (GET_MODE_INNER (V4SFmode)))")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V8BFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0")
  (-1 "TARGET_SIMD
   && rtx_equal_p (XEXP (operands[3], 0),
		   plus_constant (Pmode,
				  XEXP (operands[1], 0),
				  GET_MODE_SIZE (V4HImode)))")
  (0 "(TARGET_SVE && (~0x43 & 0x81) == 0) && ( reload_completed)")
  (-1 "TARGET_FLOAT
   && ((GET_MODE_BITSIZE (SFmode) <= LONG_TYPE_SIZE)
   || !flag_trapping_math || flag_fp_int_builtin_inexact)")
  (-1 "TARGET_SVE2_BITPERM")
  (-1 "aarch64_operands_adjust_ok_for_ldpstp (operands, true, SFmode)")
  (-1 "((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0)")
  (-1 "TARGET_MOPS")
  (-1 "(INTVAL (operands[5]) == GET_MODE_SIZE (SFmode)) && (ptr_mode == SImode || Pmode == SImode)")
  (0 "(TARGET_SVE && (~0x81 & 0x21) == 0) && ( reload_completed)")
  (0 "(TARGET_SVE && (~0x81 & 0x24) == 0) && ( reload_completed)")
  (-1 "TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])")
  (0 "(TARGET_SVE2
   && (~0x27 & 0x42) == 0) && ( !CONSTANT_P (operands[4]))")
  (0 "(TARGET_SVE && (~0x43 & 0x21) == 0) && ( reload_completed)")
  (-1 "((TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx4SImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (0 "(TARGET_SVE && 16 >= 64) && ( !rtx_equal_p (operands[1], operands[4]))")
  (0 "TARGET_SVE && 32 > 64")
  (-1 "can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[3]))
   && (XOR != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0)")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx2DFmode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (0 "(TARGET_SVE && (~0x21 & 0x22) == 0) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx8HFmode)
       || register_operand (operands[2], VNx8HFmode))) && ( register_operand (operands[0], VNx8HFmode)
   && register_operand (operands[2], VNx8HFmode))")
  (-1 "(!aarch64_move_imm (INTVAL (operands[1]), SImode)
   && !aarch64_plus_operand (operands[1], SImode)
   && !reload_completed) && (ptr_mode == DImode || Pmode == DImode)")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx4DImode)
       || register_operand (operands[2], VNx4DImode))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x16QImode)
       || register_operand (operands[1], V4x16QImode))")
  (-1 "TARGET_SVE
   && VNx2QImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2QImode)))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx32QImode)
       || register_operand (operands[2], VNx32QImode))) && ( reload_completed)")
  (0 "(TARGET_SVE && (~0x43 & 0x24) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "(register_operand (operands[0], HImode)
    || aarch64_reg_or_zero (operands[1], HImode))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx48QImode)
       || register_operand (operands[2], VNx48QImode))) && ( reload_completed)")
  (-1 "TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (DImode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (DImode), 0, 63)")
  (0 "(TARGET_SVE && (~0x43 & 0x22) == 0) && ( reload_completed)")
  (-1 "(TARGET_SIMD && INTVAL (operands[5]) == GET_MODE_SIZE (TImode)) && (ptr_mode == SImode || Pmode == SImode)")
  (-1 "TARGET_CRC32")
  (-1 "(TARGET_SVE) && ( reload_completed
   && !register_operand (operands[3], VNx4HImode))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x1DFmode)
       || register_operand (operands[1], V3x1DFmode))")
  (-1 "TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2SFmode)
       || register_operand (operands[2], SFmode))")
  (-1 "(TARGET_SVE2) && ( !CONSTANT_P (operands[3]))")
  (-1 "TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V8BFmode)))")
  (-1 "TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V8HFmode, operands[1], operands[2])")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx4BFmode)
       || register_operand (operands[2], VNx4BFmode))")
  (-1 "UINTVAL (operands[1]) < GET_MODE_BITSIZE (DImode)
   && UINTVAL (operands[1]) % 16 == 0")
  (-1 "TARGET_SVE
   && (!register_operand (operands[1], VNx2HFmode)
       || register_operand (operands[2], VNx2HFmode))")
  (-1 "(TARGET_SVE) && ( !rtx_equal_p (operands[0], operands[9]))")
  (-1 "((TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx2HImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_SVE
   && (~0x27 & 0x21) == 0")
  (-1 "TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V8BFmode)))")
  (-1 "TARGET_SIMD
   && ENDIAN_LANE_N (4, INTVAL (operands[2])) == 0")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8HImode)
       || register_operand (operands[1], V3x8HImode))")
  (0 "(TARGET_SVE && (~0x21 & 0x41) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
				   XEXP (operands[1], 0),
				   GET_MODE_SIZE (TFmode)))")
  (-1 "aarch64_operands_ok_for_ldpstp (operands, true, SImode)")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed
   && register_operand (operands[5], VNx2DImode)
   && !rtx_equal_p (operands[0], operands[5]))")
  (-1 "(TARGET_SVE && (~0x41 & 0x41) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "UINTVAL (operands[3]) < GET_MODE_BITSIZE (DImode) &&
   (UINTVAL (operands[3]) + UINTVAL (operands[4]) == GET_MODE_BITSIZE (DImode))")
  (-1 "CONST_INT_P (operands[1]) && !aarch64_move_imm (INTVAL (operands[1]), SImode)
    && REG_P (operands[0]) && GP_REGNUM_P (REGNO (operands[0]))")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[2], operands[3])) && ( !rtx_equal_p (operands[1], operands[4]))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2DFmode)
       || register_operand (operands[1], V2x2DFmode))")
  (0 "(TARGET_SVE && (~0x41 & 0x21) == 0) && ( reload_completed)")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (DFmode), 1, 15)")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx16QImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "((TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx4QImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (0 "(TARGET_SVE && (~0x23 & 0x42) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "(TARGET_SVE && 32 >= 16) && ( !rtx_equal_p (operands[1], operands[4]))")
  (-1 "TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[2], V2SFmode))")
  (0 "TARGET_SVE
   && (~0x81 & 0x22) == 0")
  (0 "(TARGET_SVE && (~0x27 & 0x41) == 0) && ( reload_completed)")
  (-1 "TARGET_FRINT && TARGET_FLOAT
   && !(VECTOR_MODE_P (V2SFmode) && !TARGET_SIMD)")
  (-1 "TARGET_SVE2
   && (~0x43 & 0x42) == 0")
  (-1 "(TARGET_SVE && (~0x27 & 0x24) == 0) && ( reload_completed)")
  (-1 "TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (DFmode) >= 64")
  (-1 "TARGET_SVE
   && (!register_operand (operands[1], VNx2QImode)
       || register_operand (operands[2], VNx2QImode))")
  (-1 "(TARGET_SVE) && ( reload_completed
   && !register_operand (operands[3], VNx4SImode))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx8DImode)
       || register_operand (operands[2], VNx8DImode))")
  (-1 "TARGET_SVE && GET_MODE_NUNITS (VNx4SImode).is_constant ()")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V8HFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0")
  (-1 "can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[4]))
   && (IOR != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0)")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8HImode)
       || register_operand (operands[1], V2x8HImode))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx2SImode)
       || register_operand (operands[2], VNx2SImode))) && ( register_operand (operands[0], VNx2SImode)
   && register_operand (operands[2], VNx2SImode))")
  (-1 "(TARGET_SVE && (~0x27 & 0x21) == 0) && ( reload_completed)")
  (0 "TARGET_SVE && 16 >= 64")
  (0 "TARGET_SVE && 32 > 32")
  (-1 "TARGET_SVE2
   && !rtx_equal_p (operands[2], operands[4])
   && (CONSTANT_P (operands[4]) || !rtx_equal_p (operands[3], operands[4]))")
  (-1 "TARGET_SIMD && TARGET_SHA2")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx32HFmode)
       || register_operand (operands[2], VNx32HFmode))) && ( reload_completed)")
  (-1 "TARGET_SVE && !rtx_equal_p (operands[2], operands[4])")
  (-1 "(TARGET_SVE) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))")
  (-1 "rtx_equal_p (XEXP (operands[3], 0),
		 plus_constant (Pmode,
				XEXP (operands[1], 0),
				GET_MODE_SIZE (DFmode)))")
  (-1 "rtx_equal_p (XEXP (operands[2], 0),
		 plus_constant (Pmode,
				XEXP (operands[0], 0),
				GET_MODE_SIZE (DFmode)))")
  (-1 "(TARGET_SVE2
   && (~0x27 & 0x21) == 0) && ( !CONSTANT_P (operands[4]))")
  (-1 "TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V2SFmode, operands[1], operands[2])")
  (-1 "(TARGET_SVE && (~0x43 & 0x42) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4BFmode)
       || register_operand (operands[1], V4x4BFmode))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx4HFmode)
       || register_operand (operands[2], VNx4HFmode))) && ( register_operand (operands[0], VNx4HFmode)
   && register_operand (operands[2], VNx4HFmode))")
  (-1 "(TARGET_SVE
   && 64 >= 16
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && ( !rtx_equal_p (operands[2], operands[4]))")
  (-1 "TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V2DImode)))")
  (-1 "!((operands[3] == const1_rtx && operands[4] == constm1_rtx)
     || (operands[3] == constm1_rtx && operands[4] == const1_rtx))")
  (-1 "TARGET_SVE && operands[0] != stack_pointer_rtx")
  (-1 "TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, false, V2SFmode)")
  (-1 "TARGET_SVE
   && (!register_operand (operands[1], VNx8BFmode)
       || register_operand (operands[2], VNx8BFmode))")
  (-1 "TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V8HFmode)
       || register_operand (operands[2], V4HFmode))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x1DImode)
       || register_operand (operands[1], V4x1DImode))")
  (-1 "TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V4SFmode, operands[1], operands[2])")
  (-1 "aarch64_mask_and_shift_for_ubfiz_p (DImode, operands[3], operands[2])
  && (INTVAL (operands[2]) + popcount_hwi (INTVAL (operands[3])))
      == GET_MODE_BITSIZE (SImode)")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx2HImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_SIMD
   && (register_operand (operands[0], V2DImode)
       || aarch64_simd_reg_or_zero (operands[1], V2DImode))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2SFmode)
       || register_operand (operands[1], V4x2SFmode))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8BFmode)
       || register_operand (operands[1], V2x8BFmode))")
  (-1 "TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[2], V8QImode))")
  (-1 "(TARGET_SVE && (~0x43 & 0x42) == 0) && ( reload_completed)")
  (-1 "TARGET_SVE
   && (VNx16QImode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx16QImode)
	   && nonmemory_operand (operands[1], VNx16QImode)))")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (BFmode), 16, 63)")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2DImode)
       || register_operand (operands[1], V2x2DImode))")
  (-1 "TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V16QImode)))")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * 64 / 8, 0, 63)")
  (-1 "TARGET_SVE
   && (!register_operand (operands[1], VNx8HImode)
       || register_operand (operands[2], VNx8HImode))")
  (-1 "UINTVAL (operands[2]) < 64")
  (-1 "(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (DFmode)) && (ptr_mode == SImode || Pmode == SImode)")
  (-1 "optimize > 0 && flag_modulo_sched")
  (-1 "(TARGET_SVE
   && 8 >= 8
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && ( !rtx_equal_p (operands[2], operands[4]))")
  (-1 "aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[2]),
				      UINTVAL (operands[4]),
				      HOST_WIDE_INT_M1U << UINTVAL (operands[4]) )")
  (-1 "(aarch64_maxmin_plus_const (SMAX, operands, false)) && ( 1)")
  (0 "(TARGET_SVE && (~0x21 & 0x22) == 0) && ( reload_completed)")
  (-1 "(INTVAL (operands[5]) == GET_MODE_SIZE (SFmode)) && (ptr_mode == DImode || Pmode == DImode)")
  (-1 "(TARGET_FLOAT) && (ptr_mode == SImode || Pmode == SImode)")
  (-1 "(TARGET_SVE) && ( reload_completed
   && register_operand (operands[2], VNx8HFmode)
   && INTVAL (operands[4]) == SVE_RELAXED_GP)")
  (-1 "(TARGET_SVE
   && 64 >= 32
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && ( !rtx_equal_p (operands[2], operands[4]))")
  (-1 "!reg_overlap_mentioned_p (operands[0], operands[1])
   && INTVAL (operands[3]) == -INTVAL (operands[2])")
  (-1 "TARGET_FRINT && TARGET_FLOAT
   && !(VECTOR_MODE_P (DFmode) && !TARGET_SIMD)")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx8BFmode)
       || register_operand (operands[2], VNx8BFmode))) && ( register_operand (operands[0], VNx8BFmode)
   && register_operand (operands[2], VNx8BFmode))")
  (-1 "(TARGET_SVE && (~0x23 & 0x21) == 0) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))")
  (-1 "(TARGET_SIMD) && (TARGET_SIMD_F16INST)")
  (-1 "TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (QImode) >= 64")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx4HFmode)
       || register_operand (operands[2], VNx4HFmode))")
  (-1 "(TARGET_SIMD
   && INTVAL (operands[5])
      == INTVAL (operands[4]) + GET_MODE_SIZE (TImode)) && (ptr_mode == SImode || Pmode == SImode)")
  (-1 "rtx_equal_p (XEXP (operands[3], 0),
		plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (SImode)))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4SImode)
       || register_operand (operands[1], V2x4SImode))")
  (-1 "(TARGET_SVE && BYTES_BIG_ENDIAN) && ( reload_completed)")
  (-1 "IN_RANGE (INTVAL (operands[2]) + INTVAL (operands[3]),
	     1, GET_MODE_BITSIZE (DImode) - 1)")
  (-1 "(INTVAL (operands[5]) == GET_MODE_SIZE (DImode)) && (ptr_mode == SImode || Pmode == SImode)")
  (-1 "((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0)")
  (-1 "TARGET_SIMD
   && IN_RANGE (aarch64_vec_fpconst_pow_of_2 (operands[2]), 1,
		GET_MODE_BITSIZE (GET_MODE_INNER (V2DFmode)))")
  (0 "(TARGET_SVE && (~0x27 & 0x42) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "(TARGET_SVE && (~0x27 & 0x22) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[5]),
				      UINTVAL (operands[2]),
				      UINTVAL(operands[3]))")
  (-1 "aarch64_uxt_size (INTVAL (operands[2]), INTVAL (operands[3])) != 0")
  (-1 "TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V16QImode)))")
  (-1 "TARGET_SIMD
   && (register_operand (operands[0], V2SFmode)
       || aarch64_simd_reg_or_zero (operands[1], V2SFmode))")
  (-1 "(TARGET_SIMD) && ( REG_P (operands[0]) && GP_REGNUM_P (REGNO (operands[0])))")
  (-1 "TARGET_SVE && !rtx_equal_p (operands[4], operands[5])")
  (-1 "(TARGET_SVE && (~0x23 & 0x22) == 0) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))")
  (0 "(TARGET_SVE2
   && (~0x43 & 0x21) == 0) && ( !CONSTANT_P (operands[4]))")
  (-1 "((!aarch64_move_imm (INTVAL (operands[1]), SImode)
   && !aarch64_plus_operand (operands[1], SImode)
   && !reload_completed) && (ptr_mode == SImode || Pmode == SImode)) && ( true)")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx2DImode)
       || register_operand (operands[2], VNx2DImode))")
  (-1 "(TARGET_TLS_DESC && !TARGET_SVE) && (ptr_mode == DImode)")
  (-1 "TARGET_TME && (UINTVAL (operands[0]) <= 65535)")
  (0 "TARGET_SVE
   && (~0x43 & 0x24) == 0")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx8SFmode)
       || register_operand (operands[2], VNx8SFmode))) && ( reload_completed)")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx2HImode)
       || register_operand (operands[2], VNx2HImode))")
  (-1 "TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V4SImode) - 1)")
  (-1 "TARGET_SVE && 64 > 16")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4SFmode)
       || register_operand (operands[1], V2x4SFmode))")
  (-1 "TARGET_SVE2
   && (~0x43 & 0x41) == 0")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed
   && register_operand (operands[5], VNx4SFmode)
   && !rtx_equal_p (operands[0], operands[5]))")
  (0 "TARGET_SVE && 16 == 64")
  (-1 "TARGET_FLOAT && (register_operand (operands[0], BFmode)
    || aarch64_reg_or_fp_zero (operands[1], BFmode))")
  (-1 "TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V2DImode, operands[1], operands[2])")
  (-1 "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx8QImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "(TARGET_SVE && (~0x27 & 0x24) == 0) && ( !CONSTANT_P (operands[7]))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4HImode)
       || register_operand (operands[1], V3x4HImode))")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V4SImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0")
  (-1 "TARGET_FP_F16INST")
  (-1 "TARGET_SVE && 16 >= 8")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V2DImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0")
  (-1 "(aarch64_stack_protector_guard != SSP_GLOBAL) && (ptr_mode == DImode)")
  (-1 "TARGET_SVE2_SHA3")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4BFmode)
       || register_operand (operands[1], V3x4BFmode))")
  (-1 "aarch64_maxmin_plus_const (UMAX, operands, false)")
  (-1 "aarch64_move_imm (INTVAL (operands[2]), DImode)")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2SFmode)
       || register_operand (operands[1], V3x2SFmode))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4SImode)
       || register_operand (operands[1], V3x4SImode))")
  (0 "(TARGET_SVE && (~0x81 & 0x41) == 0) && ( reload_completed)")
  (0 "TARGET_SVE && (~0x41 & 0x24) == 0")
  (-1 "can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[3]))
   && (PLUS != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0)")
  (-1 "(TARGET_SIMD && INTVAL (operands[5]) == GET_MODE_SIZE (TImode)) && (ptr_mode == DImode || Pmode == DImode)")
  (-1 "TARGET_SIMD
   && rtx_equal_p (XEXP (operands[3], 0),
		   plus_constant (Pmode,
				  XEXP (operands[1], 0),
				  GET_MODE_SIZE (V2SImode)))")
  (-1 "UINTVAL (operands[1]) <= 32")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx4SImode)
       || register_operand (operands[2], VNx4SImode))) && ( register_operand (operands[0], VNx4SImode)
   && register_operand (operands[2], VNx4SImode))")
  (0 "(TARGET_SVE && (~0x41 & 0x22) == 0) && ( reload_completed)")
  (0 "(TARGET_SVE && (~0x81 & 0x21) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8BFmode)
       || register_operand (operands[1], V3x8BFmode))")
  (-1 "(TARGET_SVE) && ( !rtx_equal_p (operands[5], operands[6]))")
  (-1 "((TARGET_SVE) && (TARGET_SVE2)) && ( !CONSTANT_P (operands[4]))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4BFmode)
       || register_operand (operands[1], V2x4BFmode))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx6DImode)
       || register_operand (operands[2], VNx6DImode))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2DFmode)
       || register_operand (operands[1], V4x2DFmode))")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V8HImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0")
  (-1 "INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx8QImode)
       || register_operand (operands[2], VNx8QImode))")
  (-1 "(TARGET_SVE
   && 64 >= 8
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && ( !rtx_equal_p (operands[2], operands[4]))")
  (0 "(TARGET_SVE && (~0x81 & 0x24) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "TARGET_SVE && 16 >= 16")
  (-1 "TARGET_SIMD
   && rtx_equal_p (XEXP (operands[2], 0),
		   plus_constant (Pmode,
				  XEXP (operands[0], 0),
				  GET_MODE_SIZE (V4HImode)))")
  (0 "(TARGET_SVE && (~0x43 & 0x81) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V4SFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0")
  (-1 "(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (DFmode)) && (ptr_mode == DImode || Pmode == DImode)")
  (-1 "(TARGET_TLS_DESC && TARGET_SVE) && (ptr_mode == SImode)")
  (-1 "aarch64_operands_adjust_ok_for_ldpstp (operands, false, DFmode)")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4SImode)
       || register_operand (operands[1], V2x4SImode))")
  (-1 "TARGET_SVE2 && !rtx_equal_p (operands[2], operands[3])")
  (0 "(TARGET_SVE && (~0x41 & 0x42) == 0) && ( reload_completed)")
  (-1 "INTVAL (operands[1]) > 0
   && ((INTVAL (operands[1]) + INTVAL (operands[2]))
	<= GET_MODE_BITSIZE (DImode))
   && aarch64_bitmask_imm (
	UINTVAL (aarch64_mask_from_zextract_ops (operands[1],
						 operands[2])),
	DImode)")
  (-1 "TARGET_SIMD || TARGET_MOPS")
  (-1 "TARGET_SIMD
   && (register_operand (operands[0], V8QImode)
       || aarch64_simd_reg_or_zero (operands[1], V8QImode))")
  (-1 "TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V4SImode, operands[1], operands[2])")
  (-1 "(TARGET_SVE && (~0x43 & 0x41) == 0) && ( !CONSTANT_P (operands[6]))")
  (-1 "(INTVAL (operands[5]) == GET_MODE_SIZE (DImode)) && (ptr_mode == DImode || Pmode == DImode)")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx16SFmode)
       || register_operand (operands[2], VNx16SFmode))")
  (-1 "can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[4]))
   && (AND != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0)")
  (0 "TARGET_SVE && (~0x21 & 0x24) == 0")
  (-1 "(TARGET_SVE && 64 >= 64) && ( !rtx_equal_p (operands[1], operands[4]))")
  (-1 "TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V8HFmode)
       || register_operand (operands[2], V4HFmode))")
  (-1 "aarch64_operands_adjust_ok_for_ldpstp (operands, false, SImode)")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx32HImode)
       || register_operand (operands[2], VNx32HImode))")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed
   && register_operand (operands[5], VNx2DFmode)
   && !rtx_equal_p (operands[0], operands[5]))")
  (-1 "TARGET_SIMD
   && IN_RANGE (aarch64_vec_fpconst_pow_of_2 (operands[2]), 1,
		GET_MODE_BITSIZE (GET_MODE_INNER (V2SFmode)))")
  (-1 "TARGET_SVE
   && VNx8BFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx8BFmode)))")
  (-1 "(TARGET_SVE && (~0x23 & 0x22) == 0) && ( !CONSTANT_P (operands[7]))")
  (-1 "TARGET_SVE
   && (!register_operand (operands[1], VNx4SImode)
       || register_operand (operands[2], VNx4SImode))")
  (0 "(TARGET_SVE && (~0x21 & 0x42) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx6DFmode)
       || register_operand (operands[2], VNx6DFmode))")
  (-1 "(~INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0")
  (0 "(TARGET_SVE && (~0x43 & 0x21) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4HFmode)
       || register_operand (operands[1], V2x4HFmode))")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V2DImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0")
  (-1 "(register_operand (operands[0], DImode)
    || aarch64_reg_or_zero (operands[1], DImode))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x16QImode)
       || register_operand (operands[1], V3x16QImode))")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[3]) * 32 / 8, 0, 255)")
  (-1 "TARGET_SVE
   && (!register_operand (operands[1], VNx2BFmode)
       || register_operand (operands[2], VNx2BFmode))")
  (-1 "(TARGET_SVE) && ( reload_completed
   && !register_operand (operands[3], VNx2SImode))")
  (-1 "TARGET_SVE && 16 > 8")
  (-1 "aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[5]),
				      UINTVAL (operands[2]),
				      UINTVAL(operands[3]))")
  (-1 "TARGET_SVE && GET_MODE_NUNITS (VNx4SFmode).is_constant ()")
  (-1 "TARGET_SVE
   && (VNx4SFmode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx4SFmode)
	   && nonmemory_operand (operands[1], VNx4SFmode)))")
  (-1 "TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (QImode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (QImode), 0, 63)")
  (-1 "TARGET_SVE && (~0x41 & 0x41) == 0")
  (-1 "TARGET_SVE && 32 >= 8")
  (-1 "(TARGET_FLOAT) && (ptr_mode == DImode || Pmode == DImode)")
  (-1 "ptr_mode == DImode || Pmode == DImode")
  (-1 "TARGET_SVE2
   && aarch64_sve_same_pred_for_ptest_p (&operands[4], &operands[6])")
  (-1 "rtx_mode_t (operands[5], TImode)
   == (wi::shwi (1, TImode) << (unsigned) GET_MODE_BITSIZE (DImode))")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V4HImode)")
  (-1 "reload_completed && FP_REGNUM_P (REGNO (operands[0]))")
  (-1 "TARGET_SVE && (~0x27 & 0x21) == 0")
  (-1 "TARGET_SVE && GET_MODE_NUNITS (VNx2DFmode).is_constant ()")
  (-1 "(TARGET_SVE) && ( MEM_P (operands[1]))")
  (-1 "(TARGET_TLS_DESC) && (ptr_mode == SImode)")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed
   && register_operand (operands[5], VNx8HFmode)
   && !rtx_equal_p (operands[0], operands[5]))")
  (-1 "(aarch64_stack_protector_guard != SSP_GLOBAL) && (ptr_mode == SImode)")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4SFmode)
       || register_operand (operands[1], V3x4SFmode))")
  (-1 "aarch64_mask_and_shift_for_ubfiz_p (SImode, operands[3], operands[2])")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx2SImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8QImode)
       || register_operand (operands[1], V4x8QImode))")
  (-1 "can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[3]))
   && (AND != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0)")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x1DImode)
       || register_operand (operands[1], V3x1DImode))")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V2DFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx2HImode)
       || register_operand (operands[2], VNx2HImode))) && ( register_operand (operands[0], VNx2HImode)
   && register_operand (operands[2], VNx2HImode))")
  (-1 "aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[2]),
				      UINTVAL (operands[4]),
				      HOST_WIDE_INT_M1U << UINTVAL (operands[4]) )")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4HImode)
       || register_operand (operands[1], V2x4HImode))")
  (-1 "TARGET_SVE
   && (!register_operand (operands[1], VNx4QImode)
       || register_operand (operands[2], VNx4QImode))")
  (0 "TARGET_SVE2
   && (~0x27 & 0x42) == 0")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (QImode), 16, 63)")
  (-1 "TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, true, V2SImode)")
  (-1 "TARGET_SVE
   && VNx8HImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx8HImode)))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4HImode)
       || register_operand (operands[1], V2x4HImode))")
  (-1 "(TARGET_SIMD) && ( reload_completed && aarch64_simd_register (operands[0], V2SFmode))")
  (-1 "TARGET_COMPLEX && !BYTES_BIG_ENDIAN")
  (-1 "rtx_equal_p (XEXP (operands[3], 0),
		 plus_constant (Pmode,
				XEXP (operands[1], 0),
				GET_MODE_SIZE (DImode)))")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx4QImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx4HImode)
       || register_operand (operands[2], VNx4HImode))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2SImode)
       || register_operand (operands[1], V4x2SImode))")
  (-1 "(TARGET_SVE && (~0x27 & 0x24) == 0) && ( !CONSTANT_P (operands[6]))")
  (-1 "((!aarch64_move_imm (INTVAL (operands[1]), SImode)
   && !aarch64_plus_operand (operands[1], SImode)
   && !reload_completed) && (ptr_mode == DImode || Pmode == DImode)) && ( true)")
  (-1 "TARGET_SIMD
   && rtx_equal_p (XEXP (operands[2], 0),
		   plus_constant (Pmode,
				  XEXP (operands[0], 0),
				  GET_MODE_SIZE (V2SImode)))")
  (-1 "TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V2SImode, operands[1], operands[2])")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V4HFmode)")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx2QImode)
       || register_operand (operands[2], VNx2QImode))) && ( register_operand (operands[0], VNx2QImode)
   && register_operand (operands[2], VNx2QImode))")
  (-1 "(TARGET_SIMD) && ( reload_completed && aarch64_simd_register (operands[0], V4BFmode))")
  (-1 "TARGET_SVE && GET_MODE_NUNITS (VNx16QImode).is_constant ()")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx2HImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "CONST_INT_P (operands[1]) && !aarch64_move_imm (INTVAL (operands[1]), DImode)
    && REG_P (operands[0]) && GP_REGNUM_P (REGNO (operands[0]))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx4SFmode)
       || register_operand (operands[2], VNx4SFmode))) && ( register_operand (operands[0], VNx4SFmode)
   && register_operand (operands[2], VNx4SFmode))")
  (-1 "TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2SFmode)
       || register_operand (operands[2], SFmode))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx16HImode)
       || register_operand (operands[2], VNx16HImode))")
  (-1 "TARGET_SVE && 64 == 64")
  (-1 "TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[2], V2SImode))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2DFmode)
       || register_operand (operands[1], V4x2DFmode))")
  (-1 "TARGET_SVE && 8 >= 8")
  (-1 "aarch64_maxmin_plus_const (SMAX, operands, false)")
  (-1 "(TARGET_SVE && (~0x23 & 0x22) == 0) && ( !CONSTANT_P (operands[6]))")
  (-1 "(TARGET_TLS_DESC && !TARGET_SVE) && (ptr_mode == SImode)")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2SFmode)
       || register_operand (operands[1], V3x2SFmode))")
  (-1 "TARGET_SIMD_F16INST")
  (-1 "TARGET_BF16_FP")
  (-1 "TARGET_SVE_BF16")
  (-1 "TARGET_SVE && (~0x81 & 0x81) == 0")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx4DImode)
       || register_operand (operands[2], VNx4DImode))) && ( reload_completed)")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4HFmode)
       || register_operand (operands[1], V4x4HFmode))")
  (-1 "TARGET_SVE && 32 >= 32")
  (-1 "TARGET_SVE
   && (VNx8HFmode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx8HFmode)
	   && nonmemory_operand (operands[1], VNx8HFmode)))")
  (-1 "(TARGET_SIMD) && ( reload_completed && aarch64_simd_register (operands[0], V4HImode))")
  (-1 "aarch64_mask_and_shift_for_ubfiz_p (DImode, operands[3], operands[2])")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx2BFmode)
       || register_operand (operands[2], VNx2BFmode))")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx8QImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx2QImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (0 "TARGET_SVE2
   && (~0x43 & 0x24) == 0")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[3]) * 8 / 8, 0, 255)")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2SImode)
       || register_operand (operands[1], V4x2SImode))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8QImode)
       || register_operand (operands[1], V4x8QImode))")
  (-1 "(TARGET_SVE && (~0x23 & 0x21) == 0) && ( !CONSTANT_P (operands[6]))")
  (-1 "TARGET_SVE && 64 >= 8")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (DImode), 16, 63)")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], CImode)
       || register_operand (operands[1], CImode))")
  (-1 "TARGET_FLOAT && (TARGET_FP_F16INST || TARGET_SIMD)")
  (-1 "TARGET_SVE
   && (!register_operand (operands[1], VNx4BFmode)
       || register_operand (operands[2], VNx4BFmode))")
  (-1 "TARGET_SVE
   && VNx8QImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx8QImode)))")
  (-1 "TARGET_FLOAT")
  (-1 "(~INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0")
  (-1 "(TARGET_SIMD) && ( reload_completed && aarch64_simd_register (operands[0], V2SImode))")
  (-1 "TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V16QImode, operands[1], operands[2])")
  (-1 "(TARGET_SVE2
   && aarch64_sve_same_pred_for_ptest_p (&operands[4], &operands[6])) && ( !rtx_equal_p (operands[4], operands[6]))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx8HFmode)
       || register_operand (operands[2], VNx8HFmode))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx8HImode)
       || register_operand (operands[2], VNx8HImode))) && ( register_operand (operands[0], VNx8HImode)
   && register_operand (operands[2], VNx8HImode))")
  (-1 "(TARGET_SVE) && ( (!CONSTANT_P (operands[3]) || !CONSTANT_P (operands[4])))")
  (0 "(TARGET_SVE && (~0x23 & 0x24) == 0) && ( reload_completed)")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8BFmode)
       || register_operand (operands[1], V4x8BFmode))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx4BImode)
       || register_operand (operands[1], VNx4BImode))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx64QImode)
       || register_operand (operands[2], VNx64QImode))) && ( reload_completed)")
  (-1 "TARGET_SVE
   && 64 >= 64
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2SImode)
       || register_operand (operands[1], V3x2SImode))")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && ( 1)")
  (-1 "can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[3]))
   && (XOR != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0)")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode))")
  (-1 "TARGET_SVE
   && VNx2SImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2SImode)))")
  (-1 "(TARGET_SIMD) && (AARCH64_ISA_F16)")
  (-1 "(TARGET_SVE) && ( reload_completed
   && register_operand (operands[3], VNx8HFmode)
   && INTVAL (operands[4]) == SVE_RELAXED_GP)")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2SFmode)
       || register_operand (operands[1], V2x2SFmode))")
  (0 "(TARGET_SVE && 32 >= 64) && ( !rtx_equal_p (operands[1], operands[4]))")
  (-1 "aarch64_use_return_insn_p ()")
  (-1 "epilogue_completed")
  (-1 "!aarch64_move_imm (INTVAL (operands[2]), SImode)
   && !aarch64_plus_operand (operands[2], SImode)
   && !reload_completed")
  (-1 "TARGET_SVE && (~0x23 & 0x21) == 0")
  (-1 "TARGET_SIMD
   && rtx_equal_p (XEXP (operands[2], 0),
		   plus_constant (Pmode,
				  XEXP (operands[0], 0),
				  GET_MODE_SIZE (V8QImode)))")
  (-1 "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx2QImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (0 "TARGET_SVE && (~0x21 & 0x81) == 0")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8HFmode)
       || register_operand (operands[1], V4x8HFmode))")
  (-1 "TARGET_FLOAT && (register_operand (operands[0], HFmode)
    || aarch64_reg_or_fp_zero (operands[1], HFmode))")
  (-1 "!HONOR_SIGNED_ZEROS (DFmode) && TARGET_FLOAT")
  (-1 "reload_completed")
  (-1 "TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2SImode)
       || register_operand (operands[2], SImode))")
  (-1 "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx2SImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4HFmode)
       || register_operand (operands[1], V3x4HFmode))")
  (0 "TARGET_SVE && (~0x21 & 0x41) == 0")
  (-1 "(TARGET_SVE && (~0x27 & 0x21) == 0) && ( !CONSTANT_P (operands[6]))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx8QImode)
       || register_operand (operands[2], VNx8QImode))) && ( register_operand (operands[0], VNx8QImode)
   && register_operand (operands[2], VNx8QImode))")
  (0 "TARGET_SVE
   && (~0x43 & 0x81) == 0")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx2SImode)
       || register_operand (operands[2], VNx2SImode))")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx4QImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_SVE && (~0x27 & 0x24) == 0")
  (-1 "UINTVAL (operands[1]) <= 8")
  (-1 "(TARGET_SVE && (~0x81 & 0x81) == 0) && ( reload_completed)")
  (-1 "TARGET_SVE
   && (VNx2DImode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx2DImode)
	   && nonmemory_operand (operands[1], VNx2DImode)))")
  (0 "TARGET_SVE && (~0x43 & 0x21) == 0")
  (0 "TARGET_SVE
   && VNx16QImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx16QImode)))")
  (-1 "(TARGET_SVE && (~0x43 & 0x41) == 0) && ( reload_completed)")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx4HImode)
       || register_operand (operands[2], VNx4HImode))) && ( register_operand (operands[0], VNx4HImode)
   && register_operand (operands[2], VNx4HImode))")
  (-1 "TARGET_COMPLEX")
  (-1 "aarch_rev16_shleft_mask_imm_p (operands[3], SImode)
   && aarch_rev16_shright_mask_imm_p (operands[2], SImode)")
  (-1 "INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2SImode)
       || register_operand (operands[1], V3x2SImode))")
  (-1 "TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[2], V4HImode))")
  (-1 "TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * 32 / 8, 0, 63)")
  (-1 "TARGET_SIMD
   && ENDIAN_LANE_N (2, INTVAL (operands[2])) == 0")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x1DFmode)
       || register_operand (operands[1], V4x1DFmode))")
  (-1 "(TARGET_SVE && !rtx_equal_p (operands[2], operands[6])) && ( !CONSTANT_P (operands[5]))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2DFmode)
       || register_operand (operands[1], V3x2DFmode))")
  (-1 "(register_operand (operands[0], TImode)
    || aarch64_reg_or_zero (operands[1], TImode))")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed
   && register_operand (operands[5], VNx4HImode)
   && !rtx_equal_p (operands[0], operands[5]))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x1DImode)
       || register_operand (operands[1], V2x1DImode))")
  (0 "TARGET_SVE && (~0x41 & 0x21) == 0")
  (-1 "TARGET_SIMD
   && (register_operand (operands[0], V4HFmode)
       || aarch64_simd_reg_or_zero (operands[1], V4HFmode))")
  (-1 "TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V2DImode)))")
  (-1 "(TARGET_SIMD
   && INTVAL (operands[5])
      == INTVAL (operands[4]) + GET_MODE_SIZE (TFmode)) && (ptr_mode == DImode || Pmode == DImode)")
  (0 "(TARGET_SVE && (~0x41 & 0x22) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "aarch64_operands_ok_for_ldpstp (operands, false, SImode)")
  (0 "(TARGET_SVE && (~0x41 & 0x21) == 0) && ( !CONSTANT_P (operands[3]))")
  (-1 "(TARGET_SVE) && (TARGET_SVE_F32MM)")
  (-1 "(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (SImode)) && (ptr_mode == DImode || Pmode == DImode)")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx8BFmode)
       || register_operand (operands[2], VNx8BFmode))")
  (0 "TARGET_SVE
   && 8 >= 16
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])")
  (-1 "rtx_equal_p (XEXP (operands[3], 0),
		 plus_constant (Pmode,
				XEXP (operands[1], 0),
				GET_MODE_SIZE (SImode)))")
  (-1 "UINTVAL (operands[2]) == HOST_WIDE_INT_M1U << INTVAL (operands[4])
   && INTVAL (operands[4])
   && UINTVAL (operands[4]) + UINTVAL (operands[5]) <= 32")
  (-1 "TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V8HImode)))")
  (-1 "(TARGET_SVE) && ( reload_completed
   && register_operand (operands[3], VNx2DFmode)
   && INTVAL (operands[4]) == SVE_RELAXED_GP)")
  (-1 "TARGET_SIMD
   && rtx_equal_p (XEXP (operands[2], 0),
		   plus_constant (Pmode,
				  XEXP (operands[0], 0),
				  GET_MODE_SIZE (DFmode)))")
  (-1 "UINTVAL (operands[3]) < 32
   && UINTVAL (operands[3]) + UINTVAL (operands[4]) == 32
   && INTVAL (operands[3]) == INTVAL (operands[5])")
  (-1 "can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[4]))
   && (PLUS != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0)")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4SImode)
       || register_operand (operands[1], V4x4SImode))")
  (0 "TARGET_SVE && (~0x43 & 0x22) == 0")
  (0 "TARGET_SVE
   && (~0x43 & 0x21) == 0")
  (-1 "TARGET_SIMD
   && (register_operand (operands[0], V8HImode)
       || aarch64_simd_reg_or_zero (operands[1], V8HImode))")
  (-1 "aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[2]),
				      UINTVAL (operands[4]),
				      UINTVAL(operands[5]))")
  (-1 "TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[2], DImode))")
  (-1 "(TARGET_SIMD && INTVAL (operands[5]) == GET_MODE_SIZE (TFmode)) && (ptr_mode == SImode || Pmode == SImode)")
  (-1 "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed
   && register_operand (operands[4], VNx2HImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "aarch64_movk_shift (rtx_mode_t (operands[2], SImode),
		       rtx_mode_t (operands[3], SImode)) >= 0")
  (0 "TARGET_SVE && (~0x81 & 0x22) == 0")
  (-1 "can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[4]))
   && (IOR != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0)")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V8HFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0")
  (-1 "TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V2DFmode)))")
  (-1 "(TARGET_SVE && (~0x23 & 0x21) == 0) && ( reload_completed)")
  (-1 "TARGET_SVE
   && 64 >= 16
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])")
  (-1 "(INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)) && ( true)")
  (-1 "(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed
   && register_operand (operands[4], VNx8HImode)
   && !rtx_equal_p (operands[0], operands[4]))")
  (-1 "TARGET_FLOAT
   && ((GET_MODE_BITSIZE (DFmode) <= LONG_TYPE_SIZE)
   || !flag_trapping_math || flag_fp_int_builtin_inexact)")
  (-1 "(TARGET_SVE && (~0x21 & 0x21) == 0) && ( !CONSTANT_P (operands[6]))")
  (-1 "(!aarch64_move_imm (INTVAL (operands[1]), DImode)
   && !aarch64_plus_operand (operands[1], DImode)
   && !reload_completed) && (ptr_mode == DImode || Pmode == DImode)")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8HFmode)
       || register_operand (operands[1], V4x8HFmode))")
  (-1 "can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[3]))
   && (IOR != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0)")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx16HFmode)
       || register_operand (operands[2], VNx16HFmode))) && ( reload_completed)")
  (-1 "(TARGET_SVE) && ( reload_completed
   && !register_operand (operands[3], VNx16QImode))")
  (-1 "TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, true, V2DFmode)")
  (-1 "TARGET_SVE
   && VNx2DFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2DFmode)))")
  (-1 "!STRICT_ALIGNMENT || TARGET_MOPS")
  (-1 "TARGET_SVE
   && VNx4BFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4BFmode)))")
  (-1 "INTVAL (operands[2]) + INTVAL (operands[3]) == 32")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4SImode)
       || register_operand (operands[1], V3x4SImode))")
  (-1 "(TARGET_SVE
   && (register_operand (operands[0], VNx24HFmode)
       || register_operand (operands[2], VNx24HFmode))) && ( reload_completed)")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2SImode)
       || register_operand (operands[1], V2x2SImode))")
  (-1 "TARGET_SVE && 64 > 8")
  (-1 "TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V2SImode)")
  (-1 "TARGET_SVE
   && (~0x27 & 0x22) == 0")
  (-1 "TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V8BFmode) - 1)")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode))")
  (-1 "(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (SImode)) && (ptr_mode == SImode || Pmode == SImode)")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4SFmode)
       || register_operand (operands[1], V2x4SFmode))")
  (-1 "(TARGET_SVE && (~0x43 & 0x42) == 0) && ( !CONSTANT_P (operands[6]))")
  (-1 "TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x16QImode)
       || register_operand (operands[1], V3x16QImode))")
  (-1 "(TARGET_SVE2) && (TARGET_SVE2_AES)")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8BFmode)
       || register_operand (operands[1], V3x8BFmode))")
  (0 "(TARGET_SVE2
   && (~0x27 & 0x41) == 0) && ( !CONSTANT_P (operands[4]))")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4SFmode)
       || register_operand (operands[1], V4x4SFmode))")
  (-1 "TARGET_SVE
   && (register_operand (operands[0], VNx16SImode)
       || register_operand (operands[2], VNx16SImode))")
  (-1 "!aarch64_track_speculation")
  (0 "TARGET_SVE2
   && (~0x43 & 0x81) == 0")
  (-1 "TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])")
  (-1 "(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (DImode)) && (ptr_mode == DImode || Pmode == DImode)")
  (-1 "(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (SFmode)) && (ptr_mode == DImode || Pmode == DImode)")
  (-1 " epilogue_completed")
  (-1 "TARGET_SVE
   && (!register_operand (operands[1], VNx2DImode)
       || register_operand (operands[2], VNx2DImode))")
  (-1 "((!aarch64_move_imm (INTVAL (operands[1]), DImode)
   && !aarch64_plus_operand (operands[1], DImode)
   && !reload_completed) && (ptr_mode == SImode || Pmode == SImode)) && ( true)")
  (0 "TARGET_SVE && 64 == 8")
  (-1 "TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8HImode)
       || register_operand (operands[1], V2x8HImode))")
])
