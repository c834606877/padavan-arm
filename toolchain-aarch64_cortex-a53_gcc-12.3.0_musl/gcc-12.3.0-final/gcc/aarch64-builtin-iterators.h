/* -*- buffer-read-only: t -*- */
/* Generated automatically by geniterators.sh from iterators.md.  */
#ifndef GCC_AARCH64_ITERATORS_H
#define GCC_AARCH64_ITERATORS_H
#define BUILTIN_CC_ONLY(T, N, MAP, FLAG) \
  VAR1 (T, N, MAP, FLAG, cc)
#define BUILTIN_CCFP_CCFPE(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, ccfp, ccfpe)
#define BUILTIN_GPI(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, si, di)
#define BUILTIN_GPI_I16(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, hi, si, di)
#define BUILTIN_JUST_TI(T, N, MAP, FLAG) \
  VAR1 (T, N, MAP, FLAG, ti)
#define BUILTIN_SHORT(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, qi, hi)
#define BUILTIN_SI_ONLY(T, N, MAP, FLAG) \
  VAR1 (T, N, MAP, FLAG, si)
#define BUILTIN_DI_ONLY(T, N, MAP, FLAG) \
  VAR1 (T, N, MAP, FLAG, di)
#define BUILTIN_ALLI(T, N, MAP, FLAG) \
  VAR4 (T, N, MAP, FLAG, qi, hi, si, di)
#define BUILTIN_ALLI_TI(T, N, MAP, FLAG) \
  VAR5 (T, N, MAP, FLAG, qi, hi, si, di, ti)
#define BUILTIN_ALLX(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, qi, hi, si)
#define BUILTIN_GPF(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, sf, df)
#define BUILTIN_GPF_F16(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, hf, sf, df)
#define BUILTIN_GPF_HF(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, hf, sf, df)
#define BUILTIN_HFBF(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, hf, bf)
#define BUILTIN_GPF_TF_F16(T, N, MAP, FLAG) \
  VAR4 (T, N, MAP, FLAG, hf, sf, df, tf)
#define BUILTIN_GPF_TF_F16_MOV(T, N, MAP, FLAG) \
  VAR5 (T, N, MAP, FLAG, hf, bf, sf, df, tf)
#define BUILTIN_VDF(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, v2sf, v4hf)
#define BUILTIN_GPF_TF(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, sf, df, tf)
#define BUILTIN_VDQ_I(T, N, MAP, FLAG) \
  VAR7 (T, N, MAP, FLAG, v8qi, v16qi, v4hi, v8hi, v2si, v4si, v2di)
#define BUILTIN_VSDQ_I(T, N, MAP, FLAG) \
  VAR11 (T, N, MAP, FLAG, v8qi, v16qi, v4hi, v8hi, v2si, v4si, v2di, qi, hi, si, di)
#define BUILTIN_VSDQ_I_DI(T, N, MAP, FLAG) \
  VAR8 (T, N, MAP, FLAG, v8qi, v16qi, v4hi, v8hi, v2si, v4si, v2di, di)
#define BUILTIN_VD(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, v8qi, v4hi, v4hf, v2si, v2sf, v4bf)
#define BUILTIN_VDMOV(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, v8qi, v4hi, v4hf, v4bf, v2si, v2sf)
#define BUILTIN_DREG(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, v8qi, v4hi, v4hf, v2si, v2sf, df)
#define BUILTIN_DREG2(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, v8qi, v4hi, v4hf, v2si, v2sf, df)
#define BUILTIN_VP_2E(T, N, MAP, FLAG) \
  VAR4 (T, N, MAP, FLAG, v2si, v2sf, v2di, v2df)
#define BUILTIN_VD_BHSI(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, v8qi, v4hi, v2si)
#define BUILTIN_VDQ_BHSI(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, v8qi, v16qi, v4hi, v8hi, v2si, v4si)
#define BUILTIN_VQ(T, N, MAP, FLAG) \
  VAR8 (T, N, MAP, FLAG, v16qi, v8hi, v4si, v2di, v8hf, v4sf, v2df, v8bf)
#define BUILTIN_VQ2(T, N, MAP, FLAG) \
  VAR8 (T, N, MAP, FLAG, v16qi, v8hi, v4si, v2di, v8hf, v8bf, v4sf, v2df)
#define BUILTIN_VQMOV(T, N, MAP, FLAG) \
  VAR8 (T, N, MAP, FLAG, v16qi, v8hi, v4si, v2di, v8hf, v8bf, v4sf, v2df)
#define BUILTIN_VQMOV_NO2E(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, v16qi, v8hi, v4si, v8hf, v8bf, v4sf)
#define BUILTIN_VD_I(T, N, MAP, FLAG) \
  VAR4 (T, N, MAP, FLAG, v8qi, v4hi, v2si, di)
#define BUILTIN_VQ_I(T, N, MAP, FLAG) \
  VAR4 (T, N, MAP, FLAG, v16qi, v8hi, v4si, v2di)
#define BUILTIN_VQ_NO2E(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, v16qi, v8hi, v4si, v8hf, v4sf, v8bf)
#define BUILTIN_VBF(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, v4bf, v8bf)
#define BUILTIN_P(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, si, di)
#define BUILTIN_PTR(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, si, di)
#define BUILTIN_VDQF_F16(T, N, MAP, FLAG) \
  VAR7 (T, N, MAP, FLAG, v4hf, v8hf, v2sf, v4sf, v2df, v4bf, v8bf)
#define BUILTIN_VDQF(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, v2sf, v4sf, v2df)
#define BUILTIN_VHSDF(T, N, MAP, FLAG) \
  VAR5 (T, N, MAP, FLAG, v4hf, v8hf, v2sf, v4sf, v2df)
#define BUILTIN_VDQF_DF(T, N, MAP, FLAG) \
  VAR4 (T, N, MAP, FLAG, v2sf, v4sf, v2df, df)
#define BUILTIN_VHSDF_DF(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, v4hf, v8hf, v2sf, v4sf, v2df, df)
#define BUILTIN_VHSDF_HSDF(T, N, MAP, FLAG) \
  VAR8 (T, N, MAP, FLAG, v4hf, v8hf, v2sf, v4sf, v2df, hf, sf, df)
#define BUILTIN_VSFDF(T, N, MAP, FLAG) \
  VAR5 (T, N, MAP, FLAG, v2sf, v4sf, v2df, df, sf)
#define BUILTIN_VDQSF(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, v2sf, v4sf)
#define BUILTIN_VQ_HSF(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, v8hf, v4sf)
#define BUILTIN_VDQF_COND(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, v2sf, v2si, v4sf, v4si, v2df, v2di)
#define BUILTIN_VALLF(T, N, MAP, FLAG) \
  VAR5 (T, N, MAP, FLAG, v2sf, v4sf, v2df, sf, df)
#define BUILTIN_V2F(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, v2sf, v2df)
#define BUILTIN_VALL(T, N, MAP, FLAG) \
  VAR10 (T, N, MAP, FLAG, v8qi, v16qi, v4hi, v8hi, v2si, v4si, v2di, v2sf, v4sf, v2df)
#define BUILTIN_VALL_F16(T, N, MAP, FLAG) \
  VAR14 (T, N, MAP, FLAG, v8qi, v16qi, v4hi, v8hi, v2si, v4si, v2di, v4hf, v8hf, v4bf, v8bf, v2sf, v4sf, v2df)
#define BUILTIN_VALL_F16_NO_V2Q(T, N, MAP, FLAG) \
  VAR10 (T, N, MAP, FLAG, v8qi, v16qi, v4hi, v8hi, v2si, v4si, v4hf, v8hf, v2sf, v4sf)
#define BUILTIN_VALLDI(T, N, MAP, FLAG) \
  VAR11 (T, N, MAP, FLAG, v8qi, v16qi, v4hi, v8hi, v2si, v4si, v2di, v2sf, v4sf, v2df, di)
#define BUILTIN_VALLDI_F16(T, N, MAP, FLAG) \
  VAR15 (T, N, MAP, FLAG, v8qi, v16qi, v4hi, v8hi, v2si, v4si, v2di, v4hf, v8hf, v4bf, v8bf, v2sf, v4sf, v2df, di)
#define BUILTIN_VALLDIF(T, N, MAP, FLAG) \
  VAR16 (T, N, MAP, FLAG, v8qi, v16qi, v4hi, v8hi, v2si, v4si, v4bf, v8bf, v2di, v4hf, v8hf, v2sf, v4sf, v2df, di, df)
#define BUILTIN_VALLP(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, v8qi, v16qi, v4hi, v8hi, v2di, di)
#define BUILTIN_VALLP_NO_DI(T, N, MAP, FLAG) \
  VAR5 (T, N, MAP, FLAG, v8qi, v16qi, v4hi, v8hi, v2di)
#define BUILTIN_VDQV(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, v8qi, v16qi, v4hi, v8hi, v4si, v2di)
#define BUILTIN_VDQV_S(T, N, MAP, FLAG) \
  VAR5 (T, N, MAP, FLAG, v8qi, v16qi, v4hi, v8hi, v4si)
#define BUILTIN_VDQV_E(T, N, MAP, FLAG) \
  VAR4 (T, N, MAP, FLAG, v8qi, v16qi, v4hi, v8hi)
#define BUILTIN_VDQV_L(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, v8qi, v16qi, v4hi, v8hi, v4si, v2si)
#define BUILTIN_VDN(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, v4hi, v2si, di)
#define BUILTIN_VQN(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, v8hi, v4si, v2di)
#define BUILTIN_VSQN_HSDI(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, v8hi, v4si, v2di, hi, si, di)
#define BUILTIN_VQW(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, v16qi, v8hi, v4si)
#define BUILTIN_VDC(T, N, MAP, FLAG) \
  VAR8 (T, N, MAP, FLAG, v8qi, v4hi, v4bf, v4hf, v2si, v2sf, di, df)
#define BUILTIN_VDCSIF(T, N, MAP, FLAG) \
  VAR10 (T, N, MAP, FLAG, v8qi, v4hi, v4bf, v4hf, v2si, v2sf, si, sf, di, df)
#define BUILTIN_VDC_P(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, v8qi, v4hi, di)
#define BUILTIN_VDQIF(T, N, MAP, FLAG) \
  VAR9 (T, N, MAP, FLAG, v8qi, v16qi, v4hi, v8hi, v2si, v4si, v2sf, v4sf, v2df)
#define BUILTIN_VDQIF_F16(T, N, MAP, FLAG) \
  VAR11 (T, N, MAP, FLAG, v8qi, v16qi, v4hi, v8hi, v2si, v4si, v4hf, v8hf, v2sf, v4sf, v2df)
#define BUILTIN_VDQ_SI(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, v2si, v4si)
#define BUILTIN_VDQ_SDI(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, v2si, v4si, v2di)
#define BUILTIN_VDQ_HSDI(T, N, MAP, FLAG) \
  VAR5 (T, N, MAP, FLAG, v4hi, v8hi, v2si, v4si, v2di)
#define BUILTIN_VSDQ_SDI(T, N, MAP, FLAG) \
  VAR5 (T, N, MAP, FLAG, v2si, v4si, v2di, si, di)
#define BUILTIN_VSDQ_HSDI(T, N, MAP, FLAG) \
  VAR8 (T, N, MAP, FLAG, v4hi, v8hi, v2si, v4si, v2di, hi, si, di)
#define BUILTIN_VDQQH(T, N, MAP, FLAG) \
  VAR4 (T, N, MAP, FLAG, v8qi, v16qi, v4hi, v8hi)
#define BUILTIN_VDQHS(T, N, MAP, FLAG) \
  VAR4 (T, N, MAP, FLAG, v4hi, v8hi, v2si, v4si)
#define BUILTIN_VDQHSD(T, N, MAP, FLAG) \
  VAR5 (T, N, MAP, FLAG, v4hi, v8hi, v2si, v4si, v2di)
#define BUILTIN_VSDQ_HSI(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, v4hi, v8hi, v2si, v4si, hi, si)
#define BUILTIN_VSD_HSI(T, N, MAP, FLAG) \
  VAR4 (T, N, MAP, FLAG, v4hi, v2si, hi, si)
#define BUILTIN_VD_HSI(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, v4hi, v2si)
#define BUILTIN_SD_HSI(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, hi, si)
#define BUILTIN_SD_HSDI(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, hi, si, di)
#define BUILTIN_VQ_HSI(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, v8hi, v4si)
#define BUILTIN_VB(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, v8qi, v16qi)
#define BUILTIN_VS(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, v2si, v4si)
#define BUILTIN_TX(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, ti, tf)
#define BUILTIN_VSTRUCT(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, oi, ci, xi)
#define BUILTIN_VSTRUCT_D(T, N, MAP, FLAG) \
  VAR24 (T, N, MAP, FLAG, v2x8qi, v2x4hi, v2x2si, v2x1di, v2x4hf, v2x2sf, v2x1df, v2x4bf, v3x8qi, v3x4hi, v3x2si, v3x1di, v3x4hf, v3x2sf, v3x1df, v3x4bf, v4x8qi, v4x4hi, v4x2si, v4x1di, v4x4hf, v4x2sf, v4x1df, v4x4bf)
#define BUILTIN_VSTRUCT_2D(T, N, MAP, FLAG) \
  VAR8 (T, N, MAP, FLAG, v2x8qi, v2x4hi, v2x2si, v2x1di, v2x4hf, v2x2sf, v2x1df, v2x4bf)
#define BUILTIN_VSTRUCT_3D(T, N, MAP, FLAG) \
  VAR8 (T, N, MAP, FLAG, v3x8qi, v3x4hi, v3x2si, v3x1di, v3x4hf, v3x2sf, v3x1df, v3x4bf)
#define BUILTIN_VSTRUCT_4D(T, N, MAP, FLAG) \
  VAR8 (T, N, MAP, FLAG, v4x8qi, v4x4hi, v4x2si, v4x1di, v4x4hf, v4x2sf, v4x1df, v4x4bf)
#define BUILTIN_VSTRUCT_2DNX(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, v2x8qi, v2x4hi, v2x2si, v2x4hf, v2x2sf, v2x4bf)
#define BUILTIN_VSTRUCT_3DNX(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, v3x8qi, v3x4hi, v3x2si, v3x4hf, v3x2sf, v3x4bf)
#define BUILTIN_VSTRUCT_4DNX(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, v4x8qi, v4x4hi, v4x2si, v4x4hf, v4x2sf, v4x4bf)
#define BUILTIN_VSTRUCT_DX(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, v2x1di, v2x1df, v3x1di, v3x1df, v4x1di, v4x1df)
#define BUILTIN_VSTRUCT_2DX(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, v2x1di, v2x1df)
#define BUILTIN_VSTRUCT_3DX(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, v3x1di, v3x1df)
#define BUILTIN_VSTRUCT_4DX(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, v4x1di, v4x1df)
#define BUILTIN_VSTRUCT_Q(T, N, MAP, FLAG) \
  VAR24 (T, N, MAP, FLAG, v2x16qi, v2x8hi, v2x4si, v2x2di, v2x8hf, v2x4sf, v2x2df, v2x8bf, v3x16qi, v3x8hi, v3x4si, v3x2di, v3x8hf, v3x4sf, v3x2df, v3x8bf, v4x16qi, v4x8hi, v4x4si, v4x2di, v4x8hf, v4x4sf, v4x2df, v4x8bf)
#define BUILTIN_VSTRUCT_2Q(T, N, MAP, FLAG) \
  VAR8 (T, N, MAP, FLAG, v2x16qi, v2x8hi, v2x4si, v2x2di, v2x8hf, v2x4sf, v2x2df, v2x8bf)
#define BUILTIN_VSTRUCT_3Q(T, N, MAP, FLAG) \
  VAR8 (T, N, MAP, FLAG, v3x16qi, v3x8hi, v3x4si, v3x2di, v3x8hf, v3x4sf, v3x2df, v3x8bf)
#define BUILTIN_VSTRUCT_4Q(T, N, MAP, FLAG) \
  VAR8 (T, N, MAP, FLAG, v4x16qi, v4x8hi, v4x4si, v4x2di, v4x8hf, v4x4sf, v4x2df, v4x8bf)
#define BUILTIN_VSTRUCT_2QD(T, N, MAP, FLAG) \
  VAR16 (T, N, MAP, FLAG, v2x8qi, v2x4hi, v2x2si, v2x1di, v2x4hf, v2x2sf, v2x1df, v2x4bf, v2x16qi, v2x8hi, v2x4si, v2x2di, v2x8hf, v2x4sf, v2x2df, v2x8bf)
#define BUILTIN_VSTRUCT_3QD(T, N, MAP, FLAG) \
  VAR16 (T, N, MAP, FLAG, v3x8qi, v3x4hi, v3x2si, v3x1di, v3x4hf, v3x2sf, v3x1df, v3x4bf, v3x16qi, v3x8hi, v3x4si, v3x2di, v3x8hf, v3x4sf, v3x2df, v3x8bf)
#define BUILTIN_VSTRUCT_4QD(T, N, MAP, FLAG) \
  VAR16 (T, N, MAP, FLAG, v4x8qi, v4x4hi, v4x2si, v4x1di, v4x4hf, v4x2sf, v4x1df, v4x4bf, v4x16qi, v4x8hi, v4x4si, v4x2di, v4x8hf, v4x4sf, v4x2df, v4x8bf)
#define BUILTIN_VSTRUCT_QD(T, N, MAP, FLAG) \
  VAR48 (T, N, MAP, FLAG, v2x8qi, v2x4hi, v2x2si, v2x1di, v2x4hf, v2x2sf, v2x1df, v2x4bf, v3x8qi, v3x4hi, v3x2si, v3x1di, v3x4hf, v3x2sf, v3x1df, v3x4bf, v4x8qi, v4x4hi, v4x2si, v4x1di, v4x4hf, v4x2sf, v4x1df, v4x4bf, v2x16qi, v2x8hi, v2x4si, v2x2di, v2x8hf, v2x4sf, v2x2df, v2x8bf, v3x16qi, v3x8hi, v3x4si, v3x2di, v3x8hf, v3x4sf, v3x2df, v3x8bf, v4x16qi, v4x8hi, v4x4si, v4x2di, v4x8hf, v4x4sf, v4x2df, v4x8bf)
#define BUILTIN_DX(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, di, df)
#define BUILTIN_DX2(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, di, df)
#define BUILTIN_SX(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, si, sf)
#define BUILTIN_SX2(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, si, sf)
#define BUILTIN_DSX(T, N, MAP, FLAG) \
  VAR4 (T, N, MAP, FLAG, df, di, sf, si)
#define BUILTIN_VMUL(T, N, MAP, FLAG) \
  VAR9 (T, N, MAP, FLAG, v4hi, v8hi, v2si, v4si, v4hf, v8hf, v2sf, v4sf, v2df)
#define BUILTIN_VMULD(T, N, MAP, FLAG) \
  VAR8 (T, N, MAP, FLAG, v4hi, v8hi, v2si, v4si, v4hf, v8hf, v2sf, v4sf)
#define BUILTIN_VNx16QI_ONLY(T, N, MAP, FLAG) \
  VAR1 (T, N, MAP, FLAG, vnx16qi)
#define BUILTIN_VNx8HI_ONLY(T, N, MAP, FLAG) \
  VAR1 (T, N, MAP, FLAG, vnx8hi)
#define BUILTIN_VNx8BF_ONLY(T, N, MAP, FLAG) \
  VAR1 (T, N, MAP, FLAG, vnx8bf)
#define BUILTIN_VNx4SI_ONLY(T, N, MAP, FLAG) \
  VAR1 (T, N, MAP, FLAG, vnx4si)
#define BUILTIN_VNx4SF_ONLY(T, N, MAP, FLAG) \
  VAR1 (T, N, MAP, FLAG, vnx4sf)
#define BUILTIN_VNx2DI_ONLY(T, N, MAP, FLAG) \
  VAR1 (T, N, MAP, FLAG, vnx2di)
#define BUILTIN_VNx2DF_ONLY(T, N, MAP, FLAG) \
  VAR1 (T, N, MAP, FLAG, vnx2df)
#define BUILTIN_SVE_STRUCT(T, N, MAP, FLAG) \
  VAR24 (T, N, MAP, FLAG, vnx32qi, vnx16hi, vnx8si, vnx4di, vnx16bf, vnx16hf, vnx8sf, vnx4df, vnx48qi, vnx24hi, vnx12si, vnx6di, vnx24bf, vnx24hf, vnx12sf, vnx6df, vnx64qi, vnx32hi, vnx16si, vnx8di, vnx32bf, vnx32hf, vnx16sf, vnx8df)
#define BUILTIN_SVE_FULL(T, N, MAP, FLAG) \
  VAR8 (T, N, MAP, FLAG, vnx16qi, vnx8hi, vnx4si, vnx2di, vnx8bf, vnx8hf, vnx4sf, vnx2df)
#define BUILTIN_SVE_FULL_I(T, N, MAP, FLAG) \
  VAR4 (T, N, MAP, FLAG, vnx16qi, vnx8hi, vnx4si, vnx2di)
#define BUILTIN_SVE_FULL_F(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, vnx8hf, vnx4sf, vnx2df)
#define BUILTIN_SVE_FULL_BHI(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, vnx16qi, vnx8hi)
#define BUILTIN_SVE_FULL_BHSI(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, vnx16qi, vnx8hi, vnx4si)
#define BUILTIN_SVE_FULL_HSD(T, N, MAP, FLAG) \
  VAR7 (T, N, MAP, FLAG, vnx8hi, vnx4si, vnx2di, vnx8bf, vnx8hf, vnx4sf, vnx2df)
#define BUILTIN_SVE_FULL_HSDI(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, vnx8hi, vnx4si, vnx2di)
#define BUILTIN_SVE_FULL_HSI(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, vnx8hi, vnx4si)
#define BUILTIN_SVE_FULL_HSF(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, vnx8hf, vnx4sf)
#define BUILTIN_SVE_FULL_HDI(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, vnx8hi, vnx2di)
#define BUILTIN_SVE_FULL_SD(T, N, MAP, FLAG) \
  VAR4 (T, N, MAP, FLAG, vnx4si, vnx2di, vnx4sf, vnx2df)
#define BUILTIN_SVE_FULL_SDI(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, vnx4si, vnx2di)
#define BUILTIN_SVE_FULL_SDF(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, vnx4sf, vnx2df)
#define BUILTIN_SVE_MATMULF(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, vnx4sf, vnx2df)
#define BUILTIN_SVE_FULL_S(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, vnx4si, vnx4sf)
#define BUILTIN_SVE_FULL_D(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, vnx2di, vnx2df)
#define BUILTIN_SVE_PARTIAL_I(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, vnx8qi, vnx4qi, vnx2qi, vnx4hi, vnx2hi, vnx2si)
#define BUILTIN_SVE_ALL(T, N, MAP, FLAG) \
  VAR19 (T, N, MAP, FLAG, vnx16qi, vnx8qi, vnx4qi, vnx2qi, vnx8hi, vnx4hi, vnx2hi, vnx8hf, vnx4hf, vnx2hf, vnx8bf, vnx4bf, vnx2bf, vnx4si, vnx2si, vnx4sf, vnx2sf, vnx2di, vnx2df)
#define BUILTIN_SVE_I(T, N, MAP, FLAG) \
  VAR10 (T, N, MAP, FLAG, vnx16qi, vnx8qi, vnx4qi, vnx2qi, vnx8hi, vnx4hi, vnx2hi, vnx4si, vnx2si, vnx2di)
#define BUILTIN_SVE_HSDI(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, vnx8hi, vnx4hi, vnx2hi, vnx4si, vnx2si, vnx2di)
#define BUILTIN_SVE_24(T, N, MAP, FLAG) \
  VAR14 (T, N, MAP, FLAG, vnx2qi, vnx2hi, vnx2hf, vnx2bf, vnx2si, vnx2sf, vnx2di, vnx2df, vnx4qi, vnx4hi, vnx4hf, vnx4bf, vnx4si, vnx4sf)
#define BUILTIN_SVE_24I(T, N, MAP, FLAG) \
  VAR7 (T, N, MAP, FLAG, vnx2qi, vnx2hi, vnx2si, vnx2di, vnx4qi, vnx4hi, vnx4si)
#define BUILTIN_SVE_2(T, N, MAP, FLAG) \
  VAR8 (T, N, MAP, FLAG, vnx2qi, vnx2hi, vnx2hf, vnx2bf, vnx2si, vnx2sf, vnx2di, vnx2df)
#define BUILTIN_SVE_2BHSI(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, vnx2qi, vnx2hi, vnx2si)
#define BUILTIN_SVE_2HSDI(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, vnx2hi, vnx2si, vnx2di)
#define BUILTIN_SVE_4(T, N, MAP, FLAG) \
  VAR6 (T, N, MAP, FLAG, vnx4qi, vnx4hi, vnx4hf, vnx4bf, vnx4si, vnx4sf)
#define BUILTIN_SVE_4BHI(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, vnx4qi, vnx4hi)
#define BUILTIN_SVE_4HSI(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, vnx4hi, vnx4si)
#define BUILTIN_SVE2_PMULL_PAIR_I(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, vnx16qi, vnx4si, vnx2di)
#define BUILTIN_VNx8_NARROW(T, N, MAP, FLAG) \
  VAR1 (T, N, MAP, FLAG, vnx8qi)
#define BUILTIN_VNx8_WIDE(T, N, MAP, FLAG) \
  VAR1 (T, N, MAP, FLAG, vnx8hi)
#define BUILTIN_VNx4_NARROW(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, vnx4qi, vnx4hi)
#define BUILTIN_VNx4_WIDE(T, N, MAP, FLAG) \
  VAR1 (T, N, MAP, FLAG, vnx4si)
#define BUILTIN_VNx2_NARROW(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, vnx2qi, vnx2hi, vnx2si)
#define BUILTIN_VNx2_WIDE(T, N, MAP, FLAG) \
  VAR1 (T, N, MAP, FLAG, vnx2di)
#define BUILTIN_PRED_ALL(T, N, MAP, FLAG) \
  VAR4 (T, N, MAP, FLAG, vnx16bi, vnx8bi, vnx4bi, vnx2bi)
#define BUILTIN_PRED_BHS(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, vnx16bi, vnx8bi, vnx4bi)
#define BUILTIN_PRED_HSD(T, N, MAP, FLAG) \
  VAR3 (T, N, MAP, FLAG, vnx8bi, vnx4bi, vnx2bi)
#define BUILTIN_V4SF_TO_BF(T, N, MAP, FLAG) \
  VAR2 (T, N, MAP, FLAG, v4bf, v8bf)
#endif /* GCC_AARCH64_ITERATORS_H  */
