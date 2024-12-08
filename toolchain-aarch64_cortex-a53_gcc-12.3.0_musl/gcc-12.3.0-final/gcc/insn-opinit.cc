/* Generated automatically by the program `genopinit'
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
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "optabs.h"

struct optab_pat {
  unsigned scode;
  enum insn_code icode;
};

static const struct optab_pat pats[NUM_OPTAB_PATTERNS] = {
  { 0x010d0e, CODE_FOR_extendqihi2 },
  { 0x010d0f, CODE_FOR_extendqisi2 },
  { 0x010d10, CODE_FOR_extendqidi2 },
  { 0x010e0f, CODE_FOR_extendhisi2 },
  { 0x010e10, CODE_FOR_extendhidi2 },
  { 0x010f10, CODE_FOR_extendsidi2 },
  { 0x012729, CODE_FOR_extendhfsf2 },
  { 0x01272a, CODE_FOR_extendhfdf2 },
  { 0x01292a, CODE_FOR_extendsfdf2 },
  { 0x014044, CODE_FOR_extendv8qiv8hi2 },
  { 0x014145, CODE_FOR_extendv4hiv4si2 },
  { 0x014246, CODE_FOR_extendv2siv2di2 },
  { 0x014b4a, CODE_FOR_extendvnx2qivnx2di2 },
  { 0x014b4d, CODE_FOR_extendvnx2qivnx2hi2 },
  { 0x014b50, CODE_FOR_extendvnx2qivnx2si2 },
  { 0x014c49, CODE_FOR_extendvnx4qivnx4si2 },
  { 0x014c4f, CODE_FOR_extendvnx4qivnx4hi2 },
  { 0x014d4a, CODE_FOR_extendvnx2hivnx2di2 },
  { 0x014d50, CODE_FOR_extendvnx2hivnx2si2 },
  { 0x014e48, CODE_FOR_extendvnx8qivnx8hi2 },
  { 0x014f49, CODE_FOR_extendvnx4hivnx4si2 },
  { 0x01504a, CODE_FOR_extendvnx2sivnx2di2 },
  { 0x022927, CODE_FOR_truncsfhf2 },
  { 0x022a27, CODE_FOR_truncdfhf2 },
  { 0x022a29, CODE_FOR_truncdfsf2 },
  { 0x024440, CODE_FOR_truncv8hiv8qi2 },
  { 0x024541, CODE_FOR_truncv4siv4hi2 },
  { 0x024642, CODE_FOR_truncv2div2si2 },
  { 0x02484e, CODE_FOR_truncvnx8hivnx8qi2 },
  { 0x02494c, CODE_FOR_truncvnx4sivnx4qi2 },
  { 0x02494f, CODE_FOR_truncvnx4sivnx4hi2 },
  { 0x024a4b, CODE_FOR_truncvnx2divnx2qi2 },
  { 0x024a4d, CODE_FOR_truncvnx2divnx2hi2 },
  { 0x024a50, CODE_FOR_truncvnx2divnx2si2 },
  { 0x024d4b, CODE_FOR_truncvnx2hivnx2qi2 },
  { 0x024f4c, CODE_FOR_truncvnx4hivnx4qi2 },
  { 0x02504b, CODE_FOR_truncvnx2sivnx2qi2 },
  { 0x02504d, CODE_FOR_truncvnx2sivnx2hi2 },
  { 0x030d0e, CODE_FOR_zero_extendqihi2 },
  { 0x030d0f, CODE_FOR_zero_extendqisi2 },
  { 0x030d10, CODE_FOR_zero_extendqidi2 },
  { 0x030e0f, CODE_FOR_zero_extendhisi2 },
  { 0x030e10, CODE_FOR_zero_extendhidi2 },
  { 0x030f10, CODE_FOR_zero_extendsidi2 },
  { 0x034044, CODE_FOR_zero_extendv8qiv8hi2 },
  { 0x034145, CODE_FOR_zero_extendv4hiv4si2 },
  { 0x034246, CODE_FOR_zero_extendv2siv2di2 },
  { 0x034b4a, CODE_FOR_zero_extendvnx2qivnx2di2 },
  { 0x034b4d, CODE_FOR_zero_extendvnx2qivnx2hi2 },
  { 0x034b50, CODE_FOR_zero_extendvnx2qivnx2si2 },
  { 0x034c49, CODE_FOR_zero_extendvnx4qivnx4si2 },
  { 0x034c4f, CODE_FOR_zero_extendvnx4qivnx4hi2 },
  { 0x034d4a, CODE_FOR_zero_extendvnx2hivnx2di2 },
  { 0x034d50, CODE_FOR_zero_extendvnx2hivnx2si2 },
  { 0x034e48, CODE_FOR_zero_extendvnx8qivnx8hi2 },
  { 0x034f49, CODE_FOR_zero_extendvnx4hivnx4si2 },
  { 0x03504a, CODE_FOR_zero_extendvnx2sivnx2di2 },
  { 0x047c41, CODE_FOR_fixv4hfv4hi2 },
  { 0x047d42, CODE_FOR_fixv2sfv2si2 },
  { 0x048044, CODE_FOR_fixv8hfv8hi2 },
  { 0x048145, CODE_FOR_fixv4sfv4si2 },
  { 0x048246, CODE_FOR_fixv2dfv2di2 },
  { 0x057c41, CODE_FOR_fixunsv4hfv4hi2 },
  { 0x057d42, CODE_FOR_fixunsv2sfv2si2 },
  { 0x058044, CODE_FOR_fixunsv8hfv8hi2 },
  { 0x058145, CODE_FOR_fixunsv4sfv4si2 },
  { 0x058246, CODE_FOR_fixunsv2dfv2di2 },
  { 0x060e27, CODE_FOR_floathihf2 },
  { 0x060f27, CODE_FOR_floatsihf2 },
  { 0x060f29, CODE_FOR_floatsisf2 },
  { 0x060f2a, CODE_FOR_floatsidf2 },
  { 0x061027, CODE_FOR_floatdihf2 },
  { 0x061029, CODE_FOR_floatdisf2 },
  { 0x06102a, CODE_FOR_floatdidf2 },
  { 0x06417c, CODE_FOR_floatv4hiv4hf2 },
  { 0x06427d, CODE_FOR_floatv2siv2sf2 },
  { 0x064480, CODE_FOR_floatv8hiv8hf2 },
  { 0x064581, CODE_FOR_floatv4siv4sf2 },
  { 0x064682, CODE_FOR_floatv2div2df2 },
  { 0x064884, CODE_FOR_floatvnx8hivnx8hf2 },
  { 0x064985, CODE_FOR_floatvnx4sivnx4sf2 },
  { 0x064a86, CODE_FOR_floatvnx2divnx2df2 },
  { 0x070e27, CODE_FOR_floatunshihf2 },
  { 0x070f27, CODE_FOR_floatunssihf2 },
  { 0x070f29, CODE_FOR_floatunssisf2 },
  { 0x070f2a, CODE_FOR_floatunssidf2 },
  { 0x071027, CODE_FOR_floatunsdihf2 },
  { 0x071029, CODE_FOR_floatunsdisf2 },
  { 0x07102a, CODE_FOR_floatunsdidf2 },
  { 0x07417c, CODE_FOR_floatunsv4hiv4hf2 },
  { 0x07427d, CODE_FOR_floatunsv2siv2sf2 },
  { 0x074480, CODE_FOR_floatunsv8hiv8hf2 },
  { 0x074581, CODE_FOR_floatunsv4siv4sf2 },
  { 0x074682, CODE_FOR_floatunsv2div2df2 },
  { 0x074884, CODE_FOR_floatunsvnx8hivnx8hf2 },
  { 0x074985, CODE_FOR_floatunsvnx4sivnx4sf2 },
  { 0x074a86, CODE_FOR_floatunsvnx2divnx2df2 },
  { 0x08290f, CODE_FOR_lrintsfsi2 },
  { 0x082910, CODE_FOR_lrintsfdi2 },
  { 0x082a0f, CODE_FOR_lrintdfsi2 },
  { 0x082a10, CODE_FOR_lrintdfdi2 },
  { 0x09270e, CODE_FOR_lroundhfhi2 },
  { 0x09270f, CODE_FOR_lroundhfsi2 },
  { 0x092710, CODE_FOR_lroundhfdi2 },
  { 0x09290f, CODE_FOR_lroundsfsi2 },
  { 0x092910, CODE_FOR_lroundsfdi2 },
  { 0x092a0f, CODE_FOR_lrounddfsi2 },
  { 0x092a10, CODE_FOR_lrounddfdi2 },
  { 0x097c41, CODE_FOR_lroundv4hfv4hi2 },
  { 0x097d42, CODE_FOR_lroundv2sfv2si2 },
  { 0x098044, CODE_FOR_lroundv8hfv8hi2 },
  { 0x098145, CODE_FOR_lroundv4sfv4si2 },
  { 0x098246, CODE_FOR_lroundv2dfv2di2 },
  { 0x0a270e, CODE_FOR_lfloorhfhi2 },
  { 0x0a270f, CODE_FOR_lfloorhfsi2 },
  { 0x0a2710, CODE_FOR_lfloorhfdi2 },
  { 0x0a290f, CODE_FOR_lfloorsfsi2 },
  { 0x0a2910, CODE_FOR_lfloorsfdi2 },
  { 0x0a2a0f, CODE_FOR_lfloordfsi2 },
  { 0x0a2a10, CODE_FOR_lfloordfdi2 },
  { 0x0a7c41, CODE_FOR_lfloorv4hfv4hi2 },
  { 0x0a7d42, CODE_FOR_lfloorv2sfv2si2 },
  { 0x0a8044, CODE_FOR_lfloorv8hfv8hi2 },
  { 0x0a8145, CODE_FOR_lfloorv4sfv4si2 },
  { 0x0a8246, CODE_FOR_lfloorv2dfv2di2 },
  { 0x0b270e, CODE_FOR_lceilhfhi2 },
  { 0x0b270f, CODE_FOR_lceilhfsi2 },
  { 0x0b2710, CODE_FOR_lceilhfdi2 },
  { 0x0b290f, CODE_FOR_lceilsfsi2 },
  { 0x0b2910, CODE_FOR_lceilsfdi2 },
  { 0x0b2a0f, CODE_FOR_lceildfsi2 },
  { 0x0b2a10, CODE_FOR_lceildfdi2 },
  { 0x0b7c41, CODE_FOR_lceilv4hfv4hi2 },
  { 0x0b7d42, CODE_FOR_lceilv2sfv2si2 },
  { 0x0b8044, CODE_FOR_lceilv8hfv8hi2 },
  { 0x0b8145, CODE_FOR_lceilv4sfv4si2 },
  { 0x0b8246, CODE_FOR_lceilv2dfv2di2 },
  { 0x10270e, CODE_FOR_fix_trunchfhi2 },
  { 0x10270f, CODE_FOR_fix_trunchfsi2 },
  { 0x102710, CODE_FOR_fix_trunchfdi2 },
  { 0x10290f, CODE_FOR_fix_truncsfsi2 },
  { 0x102910, CODE_FOR_fix_truncsfdi2 },
  { 0x102a0f, CODE_FOR_fix_truncdfsi2 },
  { 0x102a10, CODE_FOR_fix_truncdfdi2 },
  { 0x107c41, CODE_FOR_fix_truncv4hfv4hi2 },
  { 0x107d42, CODE_FOR_fix_truncv2sfv2si2 },
  { 0x108044, CODE_FOR_fix_truncv8hfv8hi2 },
  { 0x108145, CODE_FOR_fix_truncv4sfv4si2 },
  { 0x108246, CODE_FOR_fix_truncv2dfv2di2 },
  { 0x108448, CODE_FOR_fix_truncvnx8hfvnx8hi2 },
  { 0x108549, CODE_FOR_fix_truncvnx4sfvnx4si2 },
  { 0x10864a, CODE_FOR_fix_truncvnx2dfvnx2di2 },
  { 0x11270e, CODE_FOR_fixuns_trunchfhi2 },
  { 0x11270f, CODE_FOR_fixuns_trunchfsi2 },
  { 0x112710, CODE_FOR_fixuns_trunchfdi2 },
  { 0x11290f, CODE_FOR_fixuns_truncsfsi2 },
  { 0x112910, CODE_FOR_fixuns_truncsfdi2 },
  { 0x112a0f, CODE_FOR_fixuns_truncdfsi2 },
  { 0x112a10, CODE_FOR_fixuns_truncdfdi2 },
  { 0x117c41, CODE_FOR_fixuns_truncv4hfv4hi2 },
  { 0x117d42, CODE_FOR_fixuns_truncv2sfv2si2 },
  { 0x118044, CODE_FOR_fixuns_truncv8hfv8hi2 },
  { 0x118145, CODE_FOR_fixuns_truncv4sfv4si2 },
  { 0x118246, CODE_FOR_fixuns_truncv2dfv2di2 },
  { 0x118448, CODE_FOR_fixuns_truncvnx8hfvnx8hi2 },
  { 0x118549, CODE_FOR_fixuns_truncvnx4sfvnx4si2 },
  { 0x11864a, CODE_FOR_fixuns_truncvnx2dfvnx2di2 },
  { 0x120f10, CODE_FOR_mulsidi3 },
  { 0x121011, CODE_FOR_mulditi3 },
  { 0x130f10, CODE_FOR_umulsidi3 },
  { 0x131011, CODE_FOR_umulditi3 },
  { 0x150f10, CODE_FOR_maddsidi4 },
  { 0x160f10, CODE_FOR_umaddsidi4 },
  { 0x190f10, CODE_FOR_msubsidi4 },
  { 0x1a0f10, CODE_FOR_umsubsidi4 },
  { 0x1d435d, CODE_FOR_vec_load_lanesv2x16qiv16qi },
  { 0x1d435e, CODE_FOR_vec_load_lanesv3x16qiv16qi },
  { 0x1d435f, CODE_FOR_vec_load_lanesv4x16qiv16qi },
  { 0x1d4460, CODE_FOR_vec_load_lanesv2x8hiv8hi },
  { 0x1d4461, CODE_FOR_vec_load_lanesv3x8hiv8hi },
  { 0x1d4462, CODE_FOR_vec_load_lanesv4x8hiv8hi },
  { 0x1d4563, CODE_FOR_vec_load_lanesv2x4siv4si },
  { 0x1d4564, CODE_FOR_vec_load_lanesv3x4siv4si },
  { 0x1d4565, CODE_FOR_vec_load_lanesv4x4siv4si },
  { 0x1d4666, CODE_FOR_vec_load_lanesv2x2div2di },
  { 0x1d4667, CODE_FOR_vec_load_lanesv3x2div2di },
  { 0x1d4668, CODE_FOR_vec_load_lanesv4x2div2di },
  { 0x1d4769, CODE_FOR_vec_load_lanesvnx32qivnx16qi },
  { 0x1d476e, CODE_FOR_vec_load_lanesvnx48qivnx16qi },
  { 0x1d4773, CODE_FOR_vec_load_lanesvnx64qivnx16qi },
  { 0x1d486a, CODE_FOR_vec_load_lanesvnx16hivnx8hi },
  { 0x1d486f, CODE_FOR_vec_load_lanesvnx24hivnx8hi },
  { 0x1d4874, CODE_FOR_vec_load_lanesvnx32hivnx8hi },
  { 0x1d496b, CODE_FOR_vec_load_lanesvnx8sivnx4si },
  { 0x1d4970, CODE_FOR_vec_load_lanesvnx12sivnx4si },
  { 0x1d4975, CODE_FOR_vec_load_lanesvnx16sivnx4si },
  { 0x1d4a6c, CODE_FOR_vec_load_lanesvnx4divnx2di },
  { 0x1d4a71, CODE_FOR_vec_load_lanesvnx6divnx2di },
  { 0x1d4a76, CODE_FOR_vec_load_lanesvnx8divnx2di },
  { 0x1d7f98, CODE_FOR_vec_load_lanesv2x8bfv8bf },
  { 0x1d7f9a, CODE_FOR_vec_load_lanesv3x8bfv8bf },
  { 0x1d7f9c, CODE_FOR_vec_load_lanesv4x8bfv8bf },
  { 0x1d8099, CODE_FOR_vec_load_lanesv2x8hfv8hf },
  { 0x1d809b, CODE_FOR_vec_load_lanesv3x8hfv8hf },
  { 0x1d809d, CODE_FOR_vec_load_lanesv4x8hfv8hf },
  { 0x1d819e, CODE_FOR_vec_load_lanesv2x4sfv4sf },
  { 0x1d819f, CODE_FOR_vec_load_lanesv3x4sfv4sf },
  { 0x1d81a0, CODE_FOR_vec_load_lanesv4x4sfv4sf },
  { 0x1d82a1, CODE_FOR_vec_load_lanesv2x2dfv2df },
  { 0x1d82a2, CODE_FOR_vec_load_lanesv3x2dfv2df },
  { 0x1d82a3, CODE_FOR_vec_load_lanesv4x2dfv2df },
  { 0x1d83a4, CODE_FOR_vec_load_lanesvnx16bfvnx8bf },
  { 0x1d83a8, CODE_FOR_vec_load_lanesvnx24bfvnx8bf },
  { 0x1d83ac, CODE_FOR_vec_load_lanesvnx32bfvnx8bf },
  { 0x1d84a5, CODE_FOR_vec_load_lanesvnx16hfvnx8hf },
  { 0x1d84a9, CODE_FOR_vec_load_lanesvnx24hfvnx8hf },
  { 0x1d84ad, CODE_FOR_vec_load_lanesvnx32hfvnx8hf },
  { 0x1d85a6, CODE_FOR_vec_load_lanesvnx8sfvnx4sf },
  { 0x1d85aa, CODE_FOR_vec_load_lanesvnx12sfvnx4sf },
  { 0x1d85ae, CODE_FOR_vec_load_lanesvnx16sfvnx4sf },
  { 0x1d86a7, CODE_FOR_vec_load_lanesvnx4dfvnx2df },
  { 0x1d86ab, CODE_FOR_vec_load_lanesvnx6dfvnx2df },
  { 0x1d86af, CODE_FOR_vec_load_lanesvnx8dfvnx2df },
  { 0x1e435d, CODE_FOR_vec_store_lanesv2x16qiv16qi },
  { 0x1e435e, CODE_FOR_vec_store_lanesv3x16qiv16qi },
  { 0x1e435f, CODE_FOR_vec_store_lanesv4x16qiv16qi },
  { 0x1e4460, CODE_FOR_vec_store_lanesv2x8hiv8hi },
  { 0x1e4461, CODE_FOR_vec_store_lanesv3x8hiv8hi },
  { 0x1e4462, CODE_FOR_vec_store_lanesv4x8hiv8hi },
  { 0x1e4563, CODE_FOR_vec_store_lanesv2x4siv4si },
  { 0x1e4564, CODE_FOR_vec_store_lanesv3x4siv4si },
  { 0x1e4565, CODE_FOR_vec_store_lanesv4x4siv4si },
  { 0x1e4666, CODE_FOR_vec_store_lanesv2x2div2di },
  { 0x1e4667, CODE_FOR_vec_store_lanesv3x2div2di },
  { 0x1e4668, CODE_FOR_vec_store_lanesv4x2div2di },
  { 0x1e4769, CODE_FOR_vec_store_lanesvnx32qivnx16qi },
  { 0x1e476e, CODE_FOR_vec_store_lanesvnx48qivnx16qi },
  { 0x1e4773, CODE_FOR_vec_store_lanesvnx64qivnx16qi },
  { 0x1e486a, CODE_FOR_vec_store_lanesvnx16hivnx8hi },
  { 0x1e486f, CODE_FOR_vec_store_lanesvnx24hivnx8hi },
  { 0x1e4874, CODE_FOR_vec_store_lanesvnx32hivnx8hi },
  { 0x1e496b, CODE_FOR_vec_store_lanesvnx8sivnx4si },
  { 0x1e4970, CODE_FOR_vec_store_lanesvnx12sivnx4si },
  { 0x1e4975, CODE_FOR_vec_store_lanesvnx16sivnx4si },
  { 0x1e4a6c, CODE_FOR_vec_store_lanesvnx4divnx2di },
  { 0x1e4a71, CODE_FOR_vec_store_lanesvnx6divnx2di },
  { 0x1e4a76, CODE_FOR_vec_store_lanesvnx8divnx2di },
  { 0x1e7f98, CODE_FOR_vec_store_lanesv2x8bfv8bf },
  { 0x1e7f9a, CODE_FOR_vec_store_lanesv3x8bfv8bf },
  { 0x1e7f9c, CODE_FOR_vec_store_lanesv4x8bfv8bf },
  { 0x1e8099, CODE_FOR_vec_store_lanesv2x8hfv8hf },
  { 0x1e809b, CODE_FOR_vec_store_lanesv3x8hfv8hf },
  { 0x1e809d, CODE_FOR_vec_store_lanesv4x8hfv8hf },
  { 0x1e819e, CODE_FOR_vec_store_lanesv2x4sfv4sf },
  { 0x1e819f, CODE_FOR_vec_store_lanesv3x4sfv4sf },
  { 0x1e81a0, CODE_FOR_vec_store_lanesv4x4sfv4sf },
  { 0x1e82a1, CODE_FOR_vec_store_lanesv2x2dfv2df },
  { 0x1e82a2, CODE_FOR_vec_store_lanesv3x2dfv2df },
  { 0x1e82a3, CODE_FOR_vec_store_lanesv4x2dfv2df },
  { 0x1e83a4, CODE_FOR_vec_store_lanesvnx16bfvnx8bf },
  { 0x1e83a8, CODE_FOR_vec_store_lanesvnx24bfvnx8bf },
  { 0x1e83ac, CODE_FOR_vec_store_lanesvnx32bfvnx8bf },
  { 0x1e84a5, CODE_FOR_vec_store_lanesvnx16hfvnx8hf },
  { 0x1e84a9, CODE_FOR_vec_store_lanesvnx24hfvnx8hf },
  { 0x1e84ad, CODE_FOR_vec_store_lanesvnx32hfvnx8hf },
  { 0x1e85a6, CODE_FOR_vec_store_lanesvnx8sfvnx4sf },
  { 0x1e85aa, CODE_FOR_vec_store_lanesvnx12sfvnx4sf },
  { 0x1e85ae, CODE_FOR_vec_store_lanesvnx16sfvnx4sf },
  { 0x1e86a7, CODE_FOR_vec_store_lanesvnx4dfvnx2df },
  { 0x1e86ab, CODE_FOR_vec_store_lanesvnx6dfvnx2df },
  { 0x1e86af, CODE_FOR_vec_store_lanesvnx8dfvnx2df },
  { 0x1f4769, CODE_FOR_vec_mask_load_lanesvnx32qivnx16qi },
  { 0x1f476e, CODE_FOR_vec_mask_load_lanesvnx48qivnx16qi },
  { 0x1f4773, CODE_FOR_vec_mask_load_lanesvnx64qivnx16qi },
  { 0x1f486a, CODE_FOR_vec_mask_load_lanesvnx16hivnx8hi },
  { 0x1f486f, CODE_FOR_vec_mask_load_lanesvnx24hivnx8hi },
  { 0x1f4874, CODE_FOR_vec_mask_load_lanesvnx32hivnx8hi },
  { 0x1f496b, CODE_FOR_vec_mask_load_lanesvnx8sivnx4si },
  { 0x1f4970, CODE_FOR_vec_mask_load_lanesvnx12sivnx4si },
  { 0x1f4975, CODE_FOR_vec_mask_load_lanesvnx16sivnx4si },
  { 0x1f4a6c, CODE_FOR_vec_mask_load_lanesvnx4divnx2di },
  { 0x1f4a71, CODE_FOR_vec_mask_load_lanesvnx6divnx2di },
  { 0x1f4a76, CODE_FOR_vec_mask_load_lanesvnx8divnx2di },
  { 0x1f83a4, CODE_FOR_vec_mask_load_lanesvnx16bfvnx8bf },
  { 0x1f83a8, CODE_FOR_vec_mask_load_lanesvnx24bfvnx8bf },
  { 0x1f83ac, CODE_FOR_vec_mask_load_lanesvnx32bfvnx8bf },
  { 0x1f84a5, CODE_FOR_vec_mask_load_lanesvnx16hfvnx8hf },
  { 0x1f84a9, CODE_FOR_vec_mask_load_lanesvnx24hfvnx8hf },
  { 0x1f84ad, CODE_FOR_vec_mask_load_lanesvnx32hfvnx8hf },
  { 0x1f85a6, CODE_FOR_vec_mask_load_lanesvnx8sfvnx4sf },
  { 0x1f85aa, CODE_FOR_vec_mask_load_lanesvnx12sfvnx4sf },
  { 0x1f85ae, CODE_FOR_vec_mask_load_lanesvnx16sfvnx4sf },
  { 0x1f86a7, CODE_FOR_vec_mask_load_lanesvnx4dfvnx2df },
  { 0x1f86ab, CODE_FOR_vec_mask_load_lanesvnx6dfvnx2df },
  { 0x1f86af, CODE_FOR_vec_mask_load_lanesvnx8dfvnx2df },
  { 0x204769, CODE_FOR_vec_mask_store_lanesvnx32qivnx16qi },
  { 0x20476e, CODE_FOR_vec_mask_store_lanesvnx48qivnx16qi },
  { 0x204773, CODE_FOR_vec_mask_store_lanesvnx64qivnx16qi },
  { 0x20486a, CODE_FOR_vec_mask_store_lanesvnx16hivnx8hi },
  { 0x20486f, CODE_FOR_vec_mask_store_lanesvnx24hivnx8hi },
  { 0x204874, CODE_FOR_vec_mask_store_lanesvnx32hivnx8hi },
  { 0x20496b, CODE_FOR_vec_mask_store_lanesvnx8sivnx4si },
  { 0x204970, CODE_FOR_vec_mask_store_lanesvnx12sivnx4si },
  { 0x204975, CODE_FOR_vec_mask_store_lanesvnx16sivnx4si },
  { 0x204a6c, CODE_FOR_vec_mask_store_lanesvnx4divnx2di },
  { 0x204a71, CODE_FOR_vec_mask_store_lanesvnx6divnx2di },
  { 0x204a76, CODE_FOR_vec_mask_store_lanesvnx8divnx2di },
  { 0x2083a4, CODE_FOR_vec_mask_store_lanesvnx16bfvnx8bf },
  { 0x2083a8, CODE_FOR_vec_mask_store_lanesvnx24bfvnx8bf },
  { 0x2083ac, CODE_FOR_vec_mask_store_lanesvnx32bfvnx8bf },
  { 0x2084a5, CODE_FOR_vec_mask_store_lanesvnx16hfvnx8hf },
  { 0x2084a9, CODE_FOR_vec_mask_store_lanesvnx24hfvnx8hf },
  { 0x2084ad, CODE_FOR_vec_mask_store_lanesvnx32hfvnx8hf },
  { 0x2085a6, CODE_FOR_vec_mask_store_lanesvnx8sfvnx4sf },
  { 0x2085aa, CODE_FOR_vec_mask_store_lanesvnx12sfvnx4sf },
  { 0x2085ae, CODE_FOR_vec_mask_store_lanesvnx16sfvnx4sf },
  { 0x2086a7, CODE_FOR_vec_mask_store_lanesvnx4dfvnx2df },
  { 0x2086ab, CODE_FOR_vec_mask_store_lanesvnx6dfvnx2df },
  { 0x2086af, CODE_FOR_vec_mask_store_lanesvnx8dfvnx2df },
  { 0x211010, CODE_FOR_vconddidi },
  { 0x214040, CODE_FOR_vcondv8qiv8qi },
  { 0x214141, CODE_FOR_vcondv4hiv4hi },
  { 0x214242, CODE_FOR_vcondv2siv2si },
  { 0x21427d, CODE_FOR_vcondv2sfv2si },
  { 0x214343, CODE_FOR_vcondv16qiv16qi },
  { 0x214444, CODE_FOR_vcondv8hiv8hi },
  { 0x214545, CODE_FOR_vcondv4siv4si },
  { 0x214581, CODE_FOR_vcondv4sfv4si },
  { 0x214646, CODE_FOR_vcondv2div2di },
  { 0x214682, CODE_FOR_vcondv2dfv2di },
  { 0x214747, CODE_FOR_vcondvnx16qivnx16qi },
  { 0x214848, CODE_FOR_vcondvnx8hivnx8hi },
  { 0x21484e, CODE_FOR_vcondvnx8qivnx8hi },
  { 0x214883, CODE_FOR_vcondvnx8bfvnx8hi },
  { 0x214884, CODE_FOR_vcondvnx8hfvnx8hi },
  { 0x214949, CODE_FOR_vcondvnx4sivnx4si },
  { 0x21494c, CODE_FOR_vcondvnx4qivnx4si },
  { 0x21494f, CODE_FOR_vcondvnx4hivnx4si },
  { 0x214985, CODE_FOR_vcondvnx4sfvnx4si },
  { 0x214989, CODE_FOR_vcondvnx4bfvnx4si },
  { 0x21498a, CODE_FOR_vcondvnx4hfvnx4si },
  { 0x214a4a, CODE_FOR_vcondvnx2divnx2di },
  { 0x214a4b, CODE_FOR_vcondvnx2qivnx2di },
  { 0x214a4d, CODE_FOR_vcondvnx2hivnx2di },
  { 0x214a50, CODE_FOR_vcondvnx2sivnx2di },
  { 0x214a86, CODE_FOR_vcondvnx2dfvnx2di },
  { 0x214a87, CODE_FOR_vcondvnx2bfvnx2di },
  { 0x214a88, CODE_FOR_vcondvnx2hfvnx2di },
  { 0x214a8b, CODE_FOR_vcondvnx2sfvnx2di },
  { 0x214b4a, CODE_FOR_vcondvnx2divnx2qi },
  { 0x214b4b, CODE_FOR_vcondvnx2qivnx2qi },
  { 0x214b4d, CODE_FOR_vcondvnx2hivnx2qi },
  { 0x214b50, CODE_FOR_vcondvnx2sivnx2qi },
  { 0x214b86, CODE_FOR_vcondvnx2dfvnx2qi },
  { 0x214b87, CODE_FOR_vcondvnx2bfvnx2qi },
  { 0x214b88, CODE_FOR_vcondvnx2hfvnx2qi },
  { 0x214b8b, CODE_FOR_vcondvnx2sfvnx2qi },
  { 0x214c49, CODE_FOR_vcondvnx4sivnx4qi },
  { 0x214c4c, CODE_FOR_vcondvnx4qivnx4qi },
  { 0x214c4f, CODE_FOR_vcondvnx4hivnx4qi },
  { 0x214c85, CODE_FOR_vcondvnx4sfvnx4qi },
  { 0x214c89, CODE_FOR_vcondvnx4bfvnx4qi },
  { 0x214c8a, CODE_FOR_vcondvnx4hfvnx4qi },
  { 0x214d4a, CODE_FOR_vcondvnx2divnx2hi },
  { 0x214d4b, CODE_FOR_vcondvnx2qivnx2hi },
  { 0x214d4d, CODE_FOR_vcondvnx2hivnx2hi },
  { 0x214d50, CODE_FOR_vcondvnx2sivnx2hi },
  { 0x214d86, CODE_FOR_vcondvnx2dfvnx2hi },
  { 0x214d87, CODE_FOR_vcondvnx2bfvnx2hi },
  { 0x214d88, CODE_FOR_vcondvnx2hfvnx2hi },
  { 0x214d8b, CODE_FOR_vcondvnx2sfvnx2hi },
  { 0x214e48, CODE_FOR_vcondvnx8hivnx8qi },
  { 0x214e4e, CODE_FOR_vcondvnx8qivnx8qi },
  { 0x214e83, CODE_FOR_vcondvnx8bfvnx8qi },
  { 0x214e84, CODE_FOR_vcondvnx8hfvnx8qi },
  { 0x214f49, CODE_FOR_vcondvnx4sivnx4hi },
  { 0x214f4c, CODE_FOR_vcondvnx4qivnx4hi },
  { 0x214f4f, CODE_FOR_vcondvnx4hivnx4hi },
  { 0x214f85, CODE_FOR_vcondvnx4sfvnx4hi },
  { 0x214f89, CODE_FOR_vcondvnx4bfvnx4hi },
  { 0x214f8a, CODE_FOR_vcondvnx4hfvnx4hi },
  { 0x21504a, CODE_FOR_vcondvnx2divnx2si },
  { 0x21504b, CODE_FOR_vcondvnx2qivnx2si },
  { 0x21504d, CODE_FOR_vcondvnx2hivnx2si },
  { 0x215050, CODE_FOR_vcondvnx2sivnx2si },
  { 0x215086, CODE_FOR_vcondvnx2dfvnx2si },
  { 0x215087, CODE_FOR_vcondvnx2bfvnx2si },
  { 0x215088, CODE_FOR_vcondvnx2hfvnx2si },
  { 0x21508b, CODE_FOR_vcondvnx2sfvnx2si },
  { 0x217d42, CODE_FOR_vcondv2siv2sf },
  { 0x217d7d, CODE_FOR_vcondv2sfv2sf },
  { 0x218145, CODE_FOR_vcondv4siv4sf },
  { 0x218181, CODE_FOR_vcondv4sfv4sf },
  { 0x218246, CODE_FOR_vcondv2div2df },
  { 0x218282, CODE_FOR_vcondv2dfv2df },
  { 0x218448, CODE_FOR_vcondvnx8hivnx8hf },
  { 0x218483, CODE_FOR_vcondvnx8bfvnx8hf },
  { 0x218484, CODE_FOR_vcondvnx8hfvnx8hf },
  { 0x218549, CODE_FOR_vcondvnx4sivnx4sf },
  { 0x218585, CODE_FOR_vcondvnx4sfvnx4sf },
  { 0x21864a, CODE_FOR_vcondvnx2divnx2df },
  { 0x218686, CODE_FOR_vcondvnx2dfvnx2df },
  { 0x221010, CODE_FOR_vcondudidi },
  { 0x224040, CODE_FOR_vconduv8qiv8qi },
  { 0x224141, CODE_FOR_vconduv4hiv4hi },
  { 0x224242, CODE_FOR_vconduv2siv2si },
  { 0x22427d, CODE_FOR_vconduv2sfv2si },
  { 0x224343, CODE_FOR_vconduv16qiv16qi },
  { 0x224444, CODE_FOR_vconduv8hiv8hi },
  { 0x224545, CODE_FOR_vconduv4siv4si },
  { 0x224581, CODE_FOR_vconduv4sfv4si },
  { 0x224646, CODE_FOR_vconduv2div2di },
  { 0x224682, CODE_FOR_vconduv2dfv2di },
  { 0x224747, CODE_FOR_vconduvnx16qivnx16qi },
  { 0x224848, CODE_FOR_vconduvnx8hivnx8hi },
  { 0x22484e, CODE_FOR_vconduvnx8qivnx8hi },
  { 0x224883, CODE_FOR_vconduvnx8bfvnx8hi },
  { 0x224884, CODE_FOR_vconduvnx8hfvnx8hi },
  { 0x224949, CODE_FOR_vconduvnx4sivnx4si },
  { 0x22494c, CODE_FOR_vconduvnx4qivnx4si },
  { 0x22494f, CODE_FOR_vconduvnx4hivnx4si },
  { 0x224985, CODE_FOR_vconduvnx4sfvnx4si },
  { 0x224989, CODE_FOR_vconduvnx4bfvnx4si },
  { 0x22498a, CODE_FOR_vconduvnx4hfvnx4si },
  { 0x224a4a, CODE_FOR_vconduvnx2divnx2di },
  { 0x224a4b, CODE_FOR_vconduvnx2qivnx2di },
  { 0x224a4d, CODE_FOR_vconduvnx2hivnx2di },
  { 0x224a50, CODE_FOR_vconduvnx2sivnx2di },
  { 0x224a86, CODE_FOR_vconduvnx2dfvnx2di },
  { 0x224a87, CODE_FOR_vconduvnx2bfvnx2di },
  { 0x224a88, CODE_FOR_vconduvnx2hfvnx2di },
  { 0x224a8b, CODE_FOR_vconduvnx2sfvnx2di },
  { 0x224b4a, CODE_FOR_vconduvnx2divnx2qi },
  { 0x224b4b, CODE_FOR_vconduvnx2qivnx2qi },
  { 0x224b4d, CODE_FOR_vconduvnx2hivnx2qi },
  { 0x224b50, CODE_FOR_vconduvnx2sivnx2qi },
  { 0x224b86, CODE_FOR_vconduvnx2dfvnx2qi },
  { 0x224b87, CODE_FOR_vconduvnx2bfvnx2qi },
  { 0x224b88, CODE_FOR_vconduvnx2hfvnx2qi },
  { 0x224b8b, CODE_FOR_vconduvnx2sfvnx2qi },
  { 0x224c49, CODE_FOR_vconduvnx4sivnx4qi },
  { 0x224c4c, CODE_FOR_vconduvnx4qivnx4qi },
  { 0x224c4f, CODE_FOR_vconduvnx4hivnx4qi },
  { 0x224c85, CODE_FOR_vconduvnx4sfvnx4qi },
  { 0x224c89, CODE_FOR_vconduvnx4bfvnx4qi },
  { 0x224c8a, CODE_FOR_vconduvnx4hfvnx4qi },
  { 0x224d4a, CODE_FOR_vconduvnx2divnx2hi },
  { 0x224d4b, CODE_FOR_vconduvnx2qivnx2hi },
  { 0x224d4d, CODE_FOR_vconduvnx2hivnx2hi },
  { 0x224d50, CODE_FOR_vconduvnx2sivnx2hi },
  { 0x224d86, CODE_FOR_vconduvnx2dfvnx2hi },
  { 0x224d87, CODE_FOR_vconduvnx2bfvnx2hi },
  { 0x224d88, CODE_FOR_vconduvnx2hfvnx2hi },
  { 0x224d8b, CODE_FOR_vconduvnx2sfvnx2hi },
  { 0x224e48, CODE_FOR_vconduvnx8hivnx8qi },
  { 0x224e4e, CODE_FOR_vconduvnx8qivnx8qi },
  { 0x224e83, CODE_FOR_vconduvnx8bfvnx8qi },
  { 0x224e84, CODE_FOR_vconduvnx8hfvnx8qi },
  { 0x224f49, CODE_FOR_vconduvnx4sivnx4hi },
  { 0x224f4c, CODE_FOR_vconduvnx4qivnx4hi },
  { 0x224f4f, CODE_FOR_vconduvnx4hivnx4hi },
  { 0x224f85, CODE_FOR_vconduvnx4sfvnx4hi },
  { 0x224f89, CODE_FOR_vconduvnx4bfvnx4hi },
  { 0x224f8a, CODE_FOR_vconduvnx4hfvnx4hi },
  { 0x22504a, CODE_FOR_vconduvnx2divnx2si },
  { 0x22504b, CODE_FOR_vconduvnx2qivnx2si },
  { 0x22504d, CODE_FOR_vconduvnx2hivnx2si },
  { 0x225050, CODE_FOR_vconduvnx2sivnx2si },
  { 0x225086, CODE_FOR_vconduvnx2dfvnx2si },
  { 0x225087, CODE_FOR_vconduvnx2bfvnx2si },
  { 0x225088, CODE_FOR_vconduvnx2hfvnx2si },
  { 0x22508b, CODE_FOR_vconduvnx2sfvnx2si },
  { 0x241010, CODE_FOR_vcond_mask_didi },
  { 0x243c3c, CODE_FOR_vcond_mask_vnx16bivnx16bi },
  { 0x243c47, CODE_FOR_vcond_mask_vnx16qivnx16bi },
  { 0x243d3d, CODE_FOR_vcond_mask_vnx8bivnx8bi },
  { 0x243d48, CODE_FOR_vcond_mask_vnx8hivnx8bi },
  { 0x243d4e, CODE_FOR_vcond_mask_vnx8qivnx8bi },
  { 0x243d83, CODE_FOR_vcond_mask_vnx8bfvnx8bi },
  { 0x243d84, CODE_FOR_vcond_mask_vnx8hfvnx8bi },
  { 0x243e3e, CODE_FOR_vcond_mask_vnx4bivnx4bi },
  { 0x243e49, CODE_FOR_vcond_mask_vnx4sivnx4bi },
  { 0x243e4c, CODE_FOR_vcond_mask_vnx4qivnx4bi },
  { 0x243e4f, CODE_FOR_vcond_mask_vnx4hivnx4bi },
  { 0x243e85, CODE_FOR_vcond_mask_vnx4sfvnx4bi },
  { 0x243e89, CODE_FOR_vcond_mask_vnx4bfvnx4bi },
  { 0x243e8a, CODE_FOR_vcond_mask_vnx4hfvnx4bi },
  { 0x243f3f, CODE_FOR_vcond_mask_vnx2bivnx2bi },
  { 0x243f4a, CODE_FOR_vcond_mask_vnx2divnx2bi },
  { 0x243f4b, CODE_FOR_vcond_mask_vnx2qivnx2bi },
  { 0x243f4d, CODE_FOR_vcond_mask_vnx2hivnx2bi },
  { 0x243f50, CODE_FOR_vcond_mask_vnx2sivnx2bi },
  { 0x243f86, CODE_FOR_vcond_mask_vnx2dfvnx2bi },
  { 0x243f87, CODE_FOR_vcond_mask_vnx2bfvnx2bi },
  { 0x243f88, CODE_FOR_vcond_mask_vnx2hfvnx2bi },
  { 0x243f8b, CODE_FOR_vcond_mask_vnx2sfvnx2bi },
  { 0x244040, CODE_FOR_vcond_mask_v8qiv8qi },
  { 0x244141, CODE_FOR_vcond_mask_v4hiv4hi },
  { 0x244242, CODE_FOR_vcond_mask_v2siv2si },
  { 0x24427d, CODE_FOR_vcond_mask_v2sfv2si },
  { 0x244343, CODE_FOR_vcond_mask_v16qiv16qi },
  { 0x244444, CODE_FOR_vcond_mask_v8hiv8hi },
  { 0x244545, CODE_FOR_vcond_mask_v4siv4si },
  { 0x244581, CODE_FOR_vcond_mask_v4sfv4si },
  { 0x244646, CODE_FOR_vcond_mask_v2div2di },
  { 0x244682, CODE_FOR_vcond_mask_v2dfv2di },
  { 0x251010, CODE_FOR_vec_cmpdidi },
  { 0x253c47, CODE_FOR_vec_cmpvnx16qivnx16bi },
  { 0x253d48, CODE_FOR_vec_cmpvnx8hivnx8bi },
  { 0x253d4e, CODE_FOR_vec_cmpvnx8qivnx8bi },
  { 0x253d84, CODE_FOR_vec_cmpvnx8hfvnx8bi },
  { 0x253e49, CODE_FOR_vec_cmpvnx4sivnx4bi },
  { 0x253e4c, CODE_FOR_vec_cmpvnx4qivnx4bi },
  { 0x253e4f, CODE_FOR_vec_cmpvnx4hivnx4bi },
  { 0x253e85, CODE_FOR_vec_cmpvnx4sfvnx4bi },
  { 0x253f4a, CODE_FOR_vec_cmpvnx2divnx2bi },
  { 0x253f4b, CODE_FOR_vec_cmpvnx2qivnx2bi },
  { 0x253f4d, CODE_FOR_vec_cmpvnx2hivnx2bi },
  { 0x253f50, CODE_FOR_vec_cmpvnx2sivnx2bi },
  { 0x253f86, CODE_FOR_vec_cmpvnx2dfvnx2bi },
  { 0x254040, CODE_FOR_vec_cmpv8qiv8qi },
  { 0x254141, CODE_FOR_vec_cmpv4hiv4hi },
  { 0x254242, CODE_FOR_vec_cmpv2siv2si },
  { 0x25427d, CODE_FOR_vec_cmpv2sfv2si },
  { 0x254343, CODE_FOR_vec_cmpv16qiv16qi },
  { 0x254444, CODE_FOR_vec_cmpv8hiv8hi },
  { 0x254545, CODE_FOR_vec_cmpv4siv4si },
  { 0x254581, CODE_FOR_vec_cmpv4sfv4si },
  { 0x254646, CODE_FOR_vec_cmpv2div2di },
  { 0x254682, CODE_FOR_vec_cmpv2dfv2di },
  { 0x261010, CODE_FOR_vec_cmpudidi },
  { 0x263c47, CODE_FOR_vec_cmpuvnx16qivnx16bi },
  { 0x263d48, CODE_FOR_vec_cmpuvnx8hivnx8bi },
  { 0x263d4e, CODE_FOR_vec_cmpuvnx8qivnx8bi },
  { 0x263e49, CODE_FOR_vec_cmpuvnx4sivnx4bi },
  { 0x263e4c, CODE_FOR_vec_cmpuvnx4qivnx4bi },
  { 0x263e4f, CODE_FOR_vec_cmpuvnx4hivnx4bi },
  { 0x263f4a, CODE_FOR_vec_cmpuvnx2divnx2bi },
  { 0x263f4b, CODE_FOR_vec_cmpuvnx2qivnx2bi },
  { 0x263f4d, CODE_FOR_vec_cmpuvnx2hivnx2bi },
  { 0x263f50, CODE_FOR_vec_cmpuvnx2sivnx2bi },
  { 0x264040, CODE_FOR_vec_cmpuv8qiv8qi },
  { 0x264141, CODE_FOR_vec_cmpuv4hiv4hi },
  { 0x264242, CODE_FOR_vec_cmpuv2siv2si },
  { 0x264343, CODE_FOR_vec_cmpuv16qiv16qi },
  { 0x264444, CODE_FOR_vec_cmpuv8hiv8hi },
  { 0x264545, CODE_FOR_vec_cmpuv4siv4si },
  { 0x264646, CODE_FOR_vec_cmpuv2div2di },
  { 0x283c47, CODE_FOR_maskloadvnx16qivnx16bi },
  { 0x283d48, CODE_FOR_maskloadvnx8hivnx8bi },
  { 0x283d4e, CODE_FOR_maskloadvnx8qivnx8bi },
  { 0x283d83, CODE_FOR_maskloadvnx8bfvnx8bi },
  { 0x283d84, CODE_FOR_maskloadvnx8hfvnx8bi },
  { 0x283e49, CODE_FOR_maskloadvnx4sivnx4bi },
  { 0x283e4c, CODE_FOR_maskloadvnx4qivnx4bi },
  { 0x283e4f, CODE_FOR_maskloadvnx4hivnx4bi },
  { 0x283e85, CODE_FOR_maskloadvnx4sfvnx4bi },
  { 0x283e89, CODE_FOR_maskloadvnx4bfvnx4bi },
  { 0x283e8a, CODE_FOR_maskloadvnx4hfvnx4bi },
  { 0x283f4a, CODE_FOR_maskloadvnx2divnx2bi },
  { 0x283f4b, CODE_FOR_maskloadvnx2qivnx2bi },
  { 0x283f4d, CODE_FOR_maskloadvnx2hivnx2bi },
  { 0x283f50, CODE_FOR_maskloadvnx2sivnx2bi },
  { 0x283f86, CODE_FOR_maskloadvnx2dfvnx2bi },
  { 0x283f87, CODE_FOR_maskloadvnx2bfvnx2bi },
  { 0x283f88, CODE_FOR_maskloadvnx2hfvnx2bi },
  { 0x283f8b, CODE_FOR_maskloadvnx2sfvnx2bi },
  { 0x293c47, CODE_FOR_maskstorevnx16qivnx16bi },
  { 0x293d48, CODE_FOR_maskstorevnx8hivnx8bi },
  { 0x293d4e, CODE_FOR_maskstorevnx8qivnx8bi },
  { 0x293d83, CODE_FOR_maskstorevnx8bfvnx8bi },
  { 0x293d84, CODE_FOR_maskstorevnx8hfvnx8bi },
  { 0x293e49, CODE_FOR_maskstorevnx4sivnx4bi },
  { 0x293e4c, CODE_FOR_maskstorevnx4qivnx4bi },
  { 0x293e4f, CODE_FOR_maskstorevnx4hivnx4bi },
  { 0x293e85, CODE_FOR_maskstorevnx4sfvnx4bi },
  { 0x293e89, CODE_FOR_maskstorevnx4bfvnx4bi },
  { 0x293e8a, CODE_FOR_maskstorevnx4hfvnx4bi },
  { 0x293f4a, CODE_FOR_maskstorevnx2divnx2bi },
  { 0x293f4b, CODE_FOR_maskstorevnx2qivnx2bi },
  { 0x293f4d, CODE_FOR_maskstorevnx2hivnx2bi },
  { 0x293f50, CODE_FOR_maskstorevnx2sivnx2bi },
  { 0x293f86, CODE_FOR_maskstorevnx2dfvnx2bi },
  { 0x293f87, CODE_FOR_maskstorevnx2bfvnx2bi },
  { 0x293f88, CODE_FOR_maskstorevnx2hfvnx2bi },
  { 0x293f8b, CODE_FOR_maskstorevnx2sfvnx2bi },
  { 0x2a4949, CODE_FOR_gather_loadvnx4sivnx4si },
  { 0x2a494c, CODE_FOR_gather_loadvnx4qivnx4si },
  { 0x2a494f, CODE_FOR_gather_loadvnx4hivnx4si },
  { 0x2a4985, CODE_FOR_gather_loadvnx4sfvnx4si },
  { 0x2a4989, CODE_FOR_gather_loadvnx4bfvnx4si },
  { 0x2a498a, CODE_FOR_gather_loadvnx4hfvnx4si },
  { 0x2a4a4a, CODE_FOR_gather_loadvnx2divnx2di },
  { 0x2a4a4b, CODE_FOR_gather_loadvnx2qivnx2di },
  { 0x2a4a4d, CODE_FOR_gather_loadvnx2hivnx2di },
  { 0x2a4a50, CODE_FOR_gather_loadvnx2sivnx2di },
  { 0x2a4a86, CODE_FOR_gather_loadvnx2dfvnx2di },
  { 0x2a4a87, CODE_FOR_gather_loadvnx2bfvnx2di },
  { 0x2a4a88, CODE_FOR_gather_loadvnx2hfvnx2di },
  { 0x2a4a8b, CODE_FOR_gather_loadvnx2sfvnx2di },
  { 0x2b4949, CODE_FOR_mask_gather_loadvnx4sivnx4si },
  { 0x2b494c, CODE_FOR_mask_gather_loadvnx4qivnx4si },
  { 0x2b494f, CODE_FOR_mask_gather_loadvnx4hivnx4si },
  { 0x2b4985, CODE_FOR_mask_gather_loadvnx4sfvnx4si },
  { 0x2b4989, CODE_FOR_mask_gather_loadvnx4bfvnx4si },
  { 0x2b498a, CODE_FOR_mask_gather_loadvnx4hfvnx4si },
  { 0x2b4a4a, CODE_FOR_mask_gather_loadvnx2divnx2di },
  { 0x2b4a4b, CODE_FOR_mask_gather_loadvnx2qivnx2di },
  { 0x2b4a4d, CODE_FOR_mask_gather_loadvnx2hivnx2di },
  { 0x2b4a50, CODE_FOR_mask_gather_loadvnx2sivnx2di },
  { 0x2b4a86, CODE_FOR_mask_gather_loadvnx2dfvnx2di },
  { 0x2b4a87, CODE_FOR_mask_gather_loadvnx2bfvnx2di },
  { 0x2b4a88, CODE_FOR_mask_gather_loadvnx2hfvnx2di },
  { 0x2b4a8b, CODE_FOR_mask_gather_loadvnx2sfvnx2di },
  { 0x2c4949, CODE_FOR_scatter_storevnx4sivnx4si },
  { 0x2c494c, CODE_FOR_scatter_storevnx4qivnx4si },
  { 0x2c494f, CODE_FOR_scatter_storevnx4hivnx4si },
  { 0x2c4985, CODE_FOR_scatter_storevnx4sfvnx4si },
  { 0x2c4989, CODE_FOR_scatter_storevnx4bfvnx4si },
  { 0x2c498a, CODE_FOR_scatter_storevnx4hfvnx4si },
  { 0x2c4a4a, CODE_FOR_scatter_storevnx2divnx2di },
  { 0x2c4a4b, CODE_FOR_scatter_storevnx2qivnx2di },
  { 0x2c4a4d, CODE_FOR_scatter_storevnx2hivnx2di },
  { 0x2c4a50, CODE_FOR_scatter_storevnx2sivnx2di },
  { 0x2c4a86, CODE_FOR_scatter_storevnx2dfvnx2di },
  { 0x2c4a87, CODE_FOR_scatter_storevnx2bfvnx2di },
  { 0x2c4a88, CODE_FOR_scatter_storevnx2hfvnx2di },
  { 0x2c4a8b, CODE_FOR_scatter_storevnx2sfvnx2di },
  { 0x2d4949, CODE_FOR_mask_scatter_storevnx4sivnx4si },
  { 0x2d494c, CODE_FOR_mask_scatter_storevnx4qivnx4si },
  { 0x2d494f, CODE_FOR_mask_scatter_storevnx4hivnx4si },
  { 0x2d4985, CODE_FOR_mask_scatter_storevnx4sfvnx4si },
  { 0x2d4989, CODE_FOR_mask_scatter_storevnx4bfvnx4si },
  { 0x2d498a, CODE_FOR_mask_scatter_storevnx4hfvnx4si },
  { 0x2d4a4a, CODE_FOR_mask_scatter_storevnx2divnx2di },
  { 0x2d4a4b, CODE_FOR_mask_scatter_storevnx2qivnx2di },
  { 0x2d4a4d, CODE_FOR_mask_scatter_storevnx2hivnx2di },
  { 0x2d4a50, CODE_FOR_mask_scatter_storevnx2sivnx2di },
  { 0x2d4a86, CODE_FOR_mask_scatter_storevnx2dfvnx2di },
  { 0x2d4a87, CODE_FOR_mask_scatter_storevnx2bfvnx2di },
  { 0x2d4a88, CODE_FOR_mask_scatter_storevnx2hfvnx2di },
  { 0x2d4a8b, CODE_FOR_mask_scatter_storevnx2sfvnx2di },
  { 0x2e0d3c, CODE_FOR_vec_extractvnx16biqi },
  { 0x2e0d40, CODE_FOR_vec_extractv8qiqi },
  { 0x2e0d43, CODE_FOR_vec_extractv16qiqi },
  { 0x2e0d47, CODE_FOR_vec_extractvnx16qiqi },
  { 0x2e0e3d, CODE_FOR_vec_extractvnx8bihi },
  { 0x2e0e41, CODE_FOR_vec_extractv4hihi },
  { 0x2e0e44, CODE_FOR_vec_extractv8hihi },
  { 0x2e0e48, CODE_FOR_vec_extractvnx8hihi },
  { 0x2e0f3e, CODE_FOR_vec_extractvnx4bisi },
  { 0x2e0f42, CODE_FOR_vec_extractv2sisi },
  { 0x2e0f45, CODE_FOR_vec_extractv4sisi },
  { 0x2e0f49, CODE_FOR_vec_extractvnx4sisi },
  { 0x2e103f, CODE_FOR_vec_extractvnx2bidi },
  { 0x2e1046, CODE_FOR_vec_extractv2didi },
  { 0x2e104a, CODE_FOR_vec_extractvnx2didi },
  { 0x2e277c, CODE_FOR_vec_extractv4hfhf },
  { 0x2e2780, CODE_FOR_vec_extractv8hfhf },
  { 0x2e2784, CODE_FOR_vec_extractvnx8hfhf },
  { 0x2e287b, CODE_FOR_vec_extractv4bfbf },
  { 0x2e287f, CODE_FOR_vec_extractv8bfbf },
  { 0x2e2883, CODE_FOR_vec_extractvnx8bfbf },
  { 0x2e297d, CODE_FOR_vec_extractv2sfsf },
  { 0x2e2981, CODE_FOR_vec_extractv4sfsf },
  { 0x2e2985, CODE_FOR_vec_extractvnx4sfsf },
  { 0x2e2a82, CODE_FOR_vec_extractv2dfdf },
  { 0x2e2a86, CODE_FOR_vec_extractvnx2dfdf },
  { 0x2e4043, CODE_FOR_vec_extractv16qiv8qi },
  { 0x2e4144, CODE_FOR_vec_extractv8hiv4hi },
  { 0x2e4245, CODE_FOR_vec_extractv4siv2si },
  { 0x2e7b7f, CODE_FOR_vec_extractv8bfv4bf },
  { 0x2e7c80, CODE_FOR_vec_extractv8hfv4hf },
  { 0x2e7d81, CODE_FOR_vec_extractv4sfv2sf },
  { 0x2e7e82, CODE_FOR_vec_extractv2dfv1df },
  { 0x2f0d40, CODE_FOR_vec_initv8qiqi },
  { 0x2f0d43, CODE_FOR_vec_initv16qiqi },
  { 0x2f0d47, CODE_FOR_vec_initvnx16qiqi },
  { 0x2f0e41, CODE_FOR_vec_initv4hihi },
  { 0x2f0e44, CODE_FOR_vec_initv8hihi },
  { 0x2f0e48, CODE_FOR_vec_initvnx8hihi },
  { 0x2f0f42, CODE_FOR_vec_initv2sisi },
  { 0x2f0f45, CODE_FOR_vec_initv4sisi },
  { 0x2f0f49, CODE_FOR_vec_initvnx4sisi },
  { 0x2f1046, CODE_FOR_vec_initv2didi },
  { 0x2f104a, CODE_FOR_vec_initvnx2didi },
  { 0x2f277c, CODE_FOR_vec_initv4hfhf },
  { 0x2f2780, CODE_FOR_vec_initv8hfhf },
  { 0x2f2784, CODE_FOR_vec_initvnx8hfhf },
  { 0x2f287b, CODE_FOR_vec_initv4bfbf },
  { 0x2f287f, CODE_FOR_vec_initv8bfbf },
  { 0x2f2883, CODE_FOR_vec_initvnx8bfbf },
  { 0x2f297d, CODE_FOR_vec_initv2sfsf },
  { 0x2f2981, CODE_FOR_vec_initv4sfsf },
  { 0x2f2985, CODE_FOR_vec_initvnx4sfsf },
  { 0x2f2a82, CODE_FOR_vec_initv2dfdf },
  { 0x2f2a86, CODE_FOR_vec_initvnx2dfdf },
  { 0x2f4043, CODE_FOR_vec_initv16qiv8qi },
  { 0x2f4144, CODE_FOR_vec_initv8hiv4hi },
  { 0x2f4245, CODE_FOR_vec_initv4siv2si },
  { 0x2f7b7f, CODE_FOR_vec_initv8bfv4bf },
  { 0x2f7c80, CODE_FOR_vec_initv8hfv4hf },
  { 0x2f7d81, CODE_FOR_vec_initv4sfv2sf },
  { 0x303c0f, CODE_FOR_while_ultsivnx16bi },
  { 0x303c10, CODE_FOR_while_ultdivnx16bi },
  { 0x303d0f, CODE_FOR_while_ultsivnx8bi },
  { 0x303d10, CODE_FOR_while_ultdivnx8bi },
  { 0x303e0f, CODE_FOR_while_ultsivnx4bi },
  { 0x303e10, CODE_FOR_while_ultdivnx4bi },
  { 0x303f0f, CODE_FOR_while_ultsivnx2bi },
  { 0x303f10, CODE_FOR_while_ultdivnx2bi },
  { 0x31000f, CODE_FOR_addsi3 },
  { 0x310010, CODE_FOR_adddi3 },
  { 0x310011, CODE_FOR_addti3 },
  { 0x310027, CODE_FOR_addhf3 },
  { 0x310029, CODE_FOR_addsf3 },
  { 0x31002a, CODE_FOR_adddf3 },
  { 0x310040, CODE_FOR_addv8qi3 },
  { 0x310041, CODE_FOR_addv4hi3 },
  { 0x310042, CODE_FOR_addv2si3 },
  { 0x310043, CODE_FOR_addv16qi3 },
  { 0x310044, CODE_FOR_addv8hi3 },
  { 0x310045, CODE_FOR_addv4si3 },
  { 0x310046, CODE_FOR_addv2di3 },
  { 0x310047, CODE_FOR_addvnx16qi3 },
  { 0x310048, CODE_FOR_addvnx8hi3 },
  { 0x310049, CODE_FOR_addvnx4si3 },
  { 0x31004a, CODE_FOR_addvnx2di3 },
  { 0x31004b, CODE_FOR_addvnx2qi3 },
  { 0x31004c, CODE_FOR_addvnx4qi3 },
  { 0x31004d, CODE_FOR_addvnx2hi3 },
  { 0x31004e, CODE_FOR_addvnx8qi3 },
  { 0x31004f, CODE_FOR_addvnx4hi3 },
  { 0x310050, CODE_FOR_addvnx2si3 },
  { 0x31007c, CODE_FOR_addv4hf3 },
  { 0x31007d, CODE_FOR_addv2sf3 },
  { 0x310080, CODE_FOR_addv8hf3 },
  { 0x310081, CODE_FOR_addv4sf3 },
  { 0x310082, CODE_FOR_addv2df3 },
  { 0x310084, CODE_FOR_addvnx8hf3 },
  { 0x310085, CODE_FOR_addvnx4sf3 },
  { 0x310086, CODE_FOR_addvnx2df3 },
  { 0x35000f, CODE_FOR_subsi3 },
  { 0x350010, CODE_FOR_subdi3 },
  { 0x350011, CODE_FOR_subti3 },
  { 0x350027, CODE_FOR_subhf3 },
  { 0x350029, CODE_FOR_subsf3 },
  { 0x35002a, CODE_FOR_subdf3 },
  { 0x350040, CODE_FOR_subv8qi3 },
  { 0x350041, CODE_FOR_subv4hi3 },
  { 0x350042, CODE_FOR_subv2si3 },
  { 0x350043, CODE_FOR_subv16qi3 },
  { 0x350044, CODE_FOR_subv8hi3 },
  { 0x350045, CODE_FOR_subv4si3 },
  { 0x350046, CODE_FOR_subv2di3 },
  { 0x350047, CODE_FOR_subvnx16qi3 },
  { 0x350048, CODE_FOR_subvnx8hi3 },
  { 0x350049, CODE_FOR_subvnx4si3 },
  { 0x35004a, CODE_FOR_subvnx2di3 },
  { 0x35004b, CODE_FOR_subvnx2qi3 },
  { 0x35004c, CODE_FOR_subvnx4qi3 },
  { 0x35004d, CODE_FOR_subvnx2hi3 },
  { 0x35004e, CODE_FOR_subvnx8qi3 },
  { 0x35004f, CODE_FOR_subvnx4hi3 },
  { 0x350050, CODE_FOR_subvnx2si3 },
  { 0x35007c, CODE_FOR_subv4hf3 },
  { 0x35007d, CODE_FOR_subv2sf3 },
  { 0x350080, CODE_FOR_subv8hf3 },
  { 0x350081, CODE_FOR_subv4sf3 },
  { 0x350082, CODE_FOR_subv2df3 },
  { 0x350084, CODE_FOR_subvnx8hf3 },
  { 0x350085, CODE_FOR_subvnx4sf3 },
  { 0x350086, CODE_FOR_subvnx2df3 },
  { 0x39000f, CODE_FOR_mulsi3 },
  { 0x390010, CODE_FOR_muldi3 },
  { 0x390011, CODE_FOR_multi3 },
  { 0x390027, CODE_FOR_mulhf3 },
  { 0x390029, CODE_FOR_mulsf3 },
  { 0x39002a, CODE_FOR_muldf3 },
  { 0x390040, CODE_FOR_mulv8qi3 },
  { 0x390041, CODE_FOR_mulv4hi3 },
  { 0x390042, CODE_FOR_mulv2si3 },
  { 0x390043, CODE_FOR_mulv16qi3 },
  { 0x390044, CODE_FOR_mulv8hi3 },
  { 0x390045, CODE_FOR_mulv4si3 },
  { 0x390047, CODE_FOR_mulvnx16qi3 },
  { 0x390048, CODE_FOR_mulvnx8hi3 },
  { 0x390049, CODE_FOR_mulvnx4si3 },
  { 0x39004a, CODE_FOR_mulvnx2di3 },
  { 0x39004b, CODE_FOR_mulvnx2qi3 },
  { 0x39004c, CODE_FOR_mulvnx4qi3 },
  { 0x39004d, CODE_FOR_mulvnx2hi3 },
  { 0x39004e, CODE_FOR_mulvnx8qi3 },
  { 0x39004f, CODE_FOR_mulvnx4hi3 },
  { 0x390050, CODE_FOR_mulvnx2si3 },
  { 0x39007c, CODE_FOR_mulv4hf3 },
  { 0x39007d, CODE_FOR_mulv2sf3 },
  { 0x390080, CODE_FOR_mulv8hf3 },
  { 0x390081, CODE_FOR_mulv4sf3 },
  { 0x390082, CODE_FOR_mulv2df3 },
  { 0x390084, CODE_FOR_mulvnx8hf3 },
  { 0x390085, CODE_FOR_mulvnx4sf3 },
  { 0x390086, CODE_FOR_mulvnx2df3 },
  { 0x3d000f, CODE_FOR_divsi3 },
  { 0x3d0010, CODE_FOR_divdi3 },
  { 0x3d0027, CODE_FOR_divhf3 },
  { 0x3d0029, CODE_FOR_divsf3 },
  { 0x3d002a, CODE_FOR_divdf3 },
  { 0x3d0049, CODE_FOR_divvnx4si3 },
  { 0x3d004a, CODE_FOR_divvnx2di3 },
  { 0x3d007c, CODE_FOR_divv4hf3 },
  { 0x3d007d, CODE_FOR_divv2sf3 },
  { 0x3d0080, CODE_FOR_divv8hf3 },
  { 0x3d0081, CODE_FOR_divv4sf3 },
  { 0x3d0082, CODE_FOR_divv2df3 },
  { 0x3d0084, CODE_FOR_divvnx8hf3 },
  { 0x3d0085, CODE_FOR_divvnx4sf3 },
  { 0x3d0086, CODE_FOR_divvnx2df3 },
  { 0x40000f, CODE_FOR_udivsi3 },
  { 0x400010, CODE_FOR_udivdi3 },
  { 0x400049, CODE_FOR_udivvnx4si3 },
  { 0x40004a, CODE_FOR_udivvnx2di3 },
  { 0x44000f, CODE_FOR_modsi3 },
  { 0x440010, CODE_FOR_moddi3 },
  { 0x46007c, CODE_FOR_ftruncv4hf2 },
  { 0x46007d, CODE_FOR_ftruncv2sf2 },
  { 0x460080, CODE_FOR_ftruncv8hf2 },
  { 0x460081, CODE_FOR_ftruncv4sf2 },
  { 0x460082, CODE_FOR_ftruncv2df2 },
  { 0x47000f, CODE_FOR_andsi3 },
  { 0x470010, CODE_FOR_anddi3 },
  { 0x47003c, CODE_FOR_andvnx16bi3 },
  { 0x47003d, CODE_FOR_andvnx8bi3 },
  { 0x47003e, CODE_FOR_andvnx4bi3 },
  { 0x47003f, CODE_FOR_andvnx2bi3 },
  { 0x470040, CODE_FOR_andv8qi3 },
  { 0x470041, CODE_FOR_andv4hi3 },
  { 0x470042, CODE_FOR_andv2si3 },
  { 0x470043, CODE_FOR_andv16qi3 },
  { 0x470044, CODE_FOR_andv8hi3 },
  { 0x470045, CODE_FOR_andv4si3 },
  { 0x470046, CODE_FOR_andv2di3 },
  { 0x470047, CODE_FOR_andvnx16qi3 },
  { 0x470048, CODE_FOR_andvnx8hi3 },
  { 0x470049, CODE_FOR_andvnx4si3 },
  { 0x47004a, CODE_FOR_andvnx2di3 },
  { 0x47004b, CODE_FOR_andvnx2qi3 },
  { 0x47004c, CODE_FOR_andvnx4qi3 },
  { 0x47004d, CODE_FOR_andvnx2hi3 },
  { 0x47004e, CODE_FOR_andvnx8qi3 },
  { 0x47004f, CODE_FOR_andvnx4hi3 },
  { 0x470050, CODE_FOR_andvnx2si3 },
  { 0x48000f, CODE_FOR_iorsi3 },
  { 0x480010, CODE_FOR_iordi3 },
  { 0x48003c, CODE_FOR_iorvnx16bi3 },
  { 0x48003d, CODE_FOR_iorvnx8bi3 },
  { 0x48003e, CODE_FOR_iorvnx4bi3 },
  { 0x48003f, CODE_FOR_iorvnx2bi3 },
  { 0x480040, CODE_FOR_iorv8qi3 },
  { 0x480041, CODE_FOR_iorv4hi3 },
  { 0x480042, CODE_FOR_iorv2si3 },
  { 0x480043, CODE_FOR_iorv16qi3 },
  { 0x480044, CODE_FOR_iorv8hi3 },
  { 0x480045, CODE_FOR_iorv4si3 },
  { 0x480046, CODE_FOR_iorv2di3 },
  { 0x480047, CODE_FOR_iorvnx16qi3 },
  { 0x480048, CODE_FOR_iorvnx8hi3 },
  { 0x480049, CODE_FOR_iorvnx4si3 },
  { 0x48004a, CODE_FOR_iorvnx2di3 },
  { 0x48004b, CODE_FOR_iorvnx2qi3 },
  { 0x48004c, CODE_FOR_iorvnx4qi3 },
  { 0x48004d, CODE_FOR_iorvnx2hi3 },
  { 0x48004e, CODE_FOR_iorvnx8qi3 },
  { 0x48004f, CODE_FOR_iorvnx4hi3 },
  { 0x480050, CODE_FOR_iorvnx2si3 },
  { 0x49000f, CODE_FOR_xorsi3 },
  { 0x490010, CODE_FOR_xordi3 },
  { 0x49003c, CODE_FOR_xorvnx16bi3 },
  { 0x49003d, CODE_FOR_xorvnx8bi3 },
  { 0x49003e, CODE_FOR_xorvnx4bi3 },
  { 0x49003f, CODE_FOR_xorvnx2bi3 },
  { 0x490040, CODE_FOR_xorv8qi3 },
  { 0x490041, CODE_FOR_xorv4hi3 },
  { 0x490042, CODE_FOR_xorv2si3 },
  { 0x490043, CODE_FOR_xorv16qi3 },
  { 0x490044, CODE_FOR_xorv8hi3 },
  { 0x490045, CODE_FOR_xorv4si3 },
  { 0x490046, CODE_FOR_xorv2di3 },
  { 0x490047, CODE_FOR_xorvnx16qi3 },
  { 0x490048, CODE_FOR_xorvnx8hi3 },
  { 0x490049, CODE_FOR_xorvnx4si3 },
  { 0x49004a, CODE_FOR_xorvnx2di3 },
  { 0x49004b, CODE_FOR_xorvnx2qi3 },
  { 0x49004c, CODE_FOR_xorvnx4qi3 },
  { 0x49004d, CODE_FOR_xorvnx2hi3 },
  { 0x49004e, CODE_FOR_xorvnx8qi3 },
  { 0x49004f, CODE_FOR_xorvnx4hi3 },
  { 0x490050, CODE_FOR_xorvnx2si3 },
  { 0x4a000d, CODE_FOR_ashlqi3 },
  { 0x4a000e, CODE_FOR_ashlhi3 },
  { 0x4a000f, CODE_FOR_ashlsi3 },
  { 0x4a0010, CODE_FOR_ashldi3 },
  { 0x4a0040, CODE_FOR_ashlv8qi3 },
  { 0x4a0041, CODE_FOR_ashlv4hi3 },
  { 0x4a0042, CODE_FOR_ashlv2si3 },
  { 0x4a0043, CODE_FOR_ashlv16qi3 },
  { 0x4a0044, CODE_FOR_ashlv8hi3 },
  { 0x4a0045, CODE_FOR_ashlv4si3 },
  { 0x4a0046, CODE_FOR_ashlv2di3 },
  { 0x4a0047, CODE_FOR_ashlvnx16qi3 },
  { 0x4a0048, CODE_FOR_ashlvnx8hi3 },
  { 0x4a0049, CODE_FOR_ashlvnx4si3 },
  { 0x4a004a, CODE_FOR_ashlvnx2di3 },
  { 0x4a004b, CODE_FOR_ashlvnx2qi3 },
  { 0x4a004c, CODE_FOR_ashlvnx4qi3 },
  { 0x4a004d, CODE_FOR_ashlvnx2hi3 },
  { 0x4a004e, CODE_FOR_ashlvnx8qi3 },
  { 0x4a004f, CODE_FOR_ashlvnx4hi3 },
  { 0x4a0050, CODE_FOR_ashlvnx2si3 },
  { 0x4d000f, CODE_FOR_ashrsi3 },
  { 0x4d0010, CODE_FOR_ashrdi3 },
  { 0x4d0040, CODE_FOR_ashrv8qi3 },
  { 0x4d0041, CODE_FOR_ashrv4hi3 },
  { 0x4d0042, CODE_FOR_ashrv2si3 },
  { 0x4d0043, CODE_FOR_ashrv16qi3 },
  { 0x4d0044, CODE_FOR_ashrv8hi3 },
  { 0x4d0045, CODE_FOR_ashrv4si3 },
  { 0x4d0046, CODE_FOR_ashrv2di3 },
  { 0x4d0047, CODE_FOR_ashrvnx16qi3 },
  { 0x4d0048, CODE_FOR_ashrvnx8hi3 },
  { 0x4d0049, CODE_FOR_ashrvnx4si3 },
  { 0x4d004a, CODE_FOR_ashrvnx2di3 },
  { 0x4d004b, CODE_FOR_ashrvnx2qi3 },
  { 0x4d004c, CODE_FOR_ashrvnx4qi3 },
  { 0x4d004d, CODE_FOR_ashrvnx2hi3 },
  { 0x4d004e, CODE_FOR_ashrvnx8qi3 },
  { 0x4d004f, CODE_FOR_ashrvnx4hi3 },
  { 0x4d0050, CODE_FOR_ashrvnx2si3 },
  { 0x4e000f, CODE_FOR_lshrsi3 },
  { 0x4e0010, CODE_FOR_lshrdi3 },
  { 0x4e0040, CODE_FOR_lshrv8qi3 },
  { 0x4e0041, CODE_FOR_lshrv4hi3 },
  { 0x4e0042, CODE_FOR_lshrv2si3 },
  { 0x4e0043, CODE_FOR_lshrv16qi3 },
  { 0x4e0044, CODE_FOR_lshrv8hi3 },
  { 0x4e0045, CODE_FOR_lshrv4si3 },
  { 0x4e0046, CODE_FOR_lshrv2di3 },
  { 0x4e0047, CODE_FOR_lshrvnx16qi3 },
  { 0x4e0048, CODE_FOR_lshrvnx8hi3 },
  { 0x4e0049, CODE_FOR_lshrvnx4si3 },
  { 0x4e004a, CODE_FOR_lshrvnx2di3 },
  { 0x4e004b, CODE_FOR_lshrvnx2qi3 },
  { 0x4e004c, CODE_FOR_lshrvnx4qi3 },
  { 0x4e004d, CODE_FOR_lshrvnx2hi3 },
  { 0x4e004e, CODE_FOR_lshrvnx8qi3 },
  { 0x4e004f, CODE_FOR_lshrvnx4hi3 },
  { 0x4e0050, CODE_FOR_lshrvnx2si3 },
  { 0x4f000f, CODE_FOR_rotlsi3 },
  { 0x4f0010, CODE_FOR_rotldi3 },
  { 0x50000f, CODE_FOR_rotrsi3 },
  { 0x500010, CODE_FOR_rotrdi3 },
  { 0x510040, CODE_FOR_vashlv8qi3 },
  { 0x510041, CODE_FOR_vashlv4hi3 },
  { 0x510042, CODE_FOR_vashlv2si3 },
  { 0x510043, CODE_FOR_vashlv16qi3 },
  { 0x510044, CODE_FOR_vashlv8hi3 },
  { 0x510045, CODE_FOR_vashlv4si3 },
  { 0x510046, CODE_FOR_vashlv2di3 },
  { 0x510047, CODE_FOR_vashlvnx16qi3 },
  { 0x510048, CODE_FOR_vashlvnx8hi3 },
  { 0x510049, CODE_FOR_vashlvnx4si3 },
  { 0x51004a, CODE_FOR_vashlvnx2di3 },
  { 0x51004b, CODE_FOR_vashlvnx2qi3 },
  { 0x51004c, CODE_FOR_vashlvnx4qi3 },
  { 0x51004d, CODE_FOR_vashlvnx2hi3 },
  { 0x51004e, CODE_FOR_vashlvnx8qi3 },
  { 0x51004f, CODE_FOR_vashlvnx4hi3 },
  { 0x510050, CODE_FOR_vashlvnx2si3 },
  { 0x520040, CODE_FOR_vashrv8qi3 },
  { 0x520041, CODE_FOR_vashrv4hi3 },
  { 0x520042, CODE_FOR_vashrv2si3 },
  { 0x520043, CODE_FOR_vashrv16qi3 },
  { 0x520044, CODE_FOR_vashrv8hi3 },
  { 0x520045, CODE_FOR_vashrv4si3 },
  { 0x520046, CODE_FOR_vashrv2di3 },
  { 0x520047, CODE_FOR_vashrvnx16qi3 },
  { 0x520048, CODE_FOR_vashrvnx8hi3 },
  { 0x520049, CODE_FOR_vashrvnx4si3 },
  { 0x52004a, CODE_FOR_vashrvnx2di3 },
  { 0x52004b, CODE_FOR_vashrvnx2qi3 },
  { 0x52004c, CODE_FOR_vashrvnx4qi3 },
  { 0x52004d, CODE_FOR_vashrvnx2hi3 },
  { 0x52004e, CODE_FOR_vashrvnx8qi3 },
  { 0x52004f, CODE_FOR_vashrvnx4hi3 },
  { 0x520050, CODE_FOR_vashrvnx2si3 },
  { 0x530040, CODE_FOR_vlshrv8qi3 },
  { 0x530041, CODE_FOR_vlshrv4hi3 },
  { 0x530042, CODE_FOR_vlshrv2si3 },
  { 0x530043, CODE_FOR_vlshrv16qi3 },
  { 0x530044, CODE_FOR_vlshrv8hi3 },
  { 0x530045, CODE_FOR_vlshrv4si3 },
  { 0x530046, CODE_FOR_vlshrv2di3 },
  { 0x530047, CODE_FOR_vlshrvnx16qi3 },
  { 0x530048, CODE_FOR_vlshrvnx8hi3 },
  { 0x530049, CODE_FOR_vlshrvnx4si3 },
  { 0x53004a, CODE_FOR_vlshrvnx2di3 },
  { 0x53004b, CODE_FOR_vlshrvnx2qi3 },
  { 0x53004c, CODE_FOR_vlshrvnx4qi3 },
  { 0x53004d, CODE_FOR_vlshrvnx2hi3 },
  { 0x53004e, CODE_FOR_vlshrvnx8qi3 },
  { 0x53004f, CODE_FOR_vlshrvnx4hi3 },
  { 0x530050, CODE_FOR_vlshrvnx2si3 },
  { 0x560029, CODE_FOR_sminsf3 },
  { 0x56002a, CODE_FOR_smindf3 },
  { 0x560040, CODE_FOR_sminv8qi3 },
  { 0x560041, CODE_FOR_sminv4hi3 },
  { 0x560042, CODE_FOR_sminv2si3 },
  { 0x560043, CODE_FOR_sminv16qi3 },
  { 0x560044, CODE_FOR_sminv8hi3 },
  { 0x560045, CODE_FOR_sminv4si3 },
  { 0x560046, CODE_FOR_sminv2di3 },
  { 0x560047, CODE_FOR_sminvnx16qi3 },
  { 0x560048, CODE_FOR_sminvnx8hi3 },
  { 0x560049, CODE_FOR_sminvnx4si3 },
  { 0x56004a, CODE_FOR_sminvnx2di3 },
  { 0x56004b, CODE_FOR_sminvnx2qi3 },
  { 0x56004c, CODE_FOR_sminvnx4qi3 },
  { 0x56004d, CODE_FOR_sminvnx2hi3 },
  { 0x56004e, CODE_FOR_sminvnx8qi3 },
  { 0x56004f, CODE_FOR_sminvnx4hi3 },
  { 0x560050, CODE_FOR_sminvnx2si3 },
  { 0x56007c, CODE_FOR_sminv4hf3 },
  { 0x56007d, CODE_FOR_sminv2sf3 },
  { 0x560080, CODE_FOR_sminv8hf3 },
  { 0x560081, CODE_FOR_sminv4sf3 },
  { 0x560082, CODE_FOR_sminv2df3 },
  { 0x560084, CODE_FOR_sminvnx8hf3 },
  { 0x560085, CODE_FOR_sminvnx4sf3 },
  { 0x560086, CODE_FOR_sminvnx2df3 },
  { 0x570029, CODE_FOR_smaxsf3 },
  { 0x57002a, CODE_FOR_smaxdf3 },
  { 0x570040, CODE_FOR_smaxv8qi3 },
  { 0x570041, CODE_FOR_smaxv4hi3 },
  { 0x570042, CODE_FOR_smaxv2si3 },
  { 0x570043, CODE_FOR_smaxv16qi3 },
  { 0x570044, CODE_FOR_smaxv8hi3 },
  { 0x570045, CODE_FOR_smaxv4si3 },
  { 0x570046, CODE_FOR_smaxv2di3 },
  { 0x570047, CODE_FOR_smaxvnx16qi3 },
  { 0x570048, CODE_FOR_smaxvnx8hi3 },
  { 0x570049, CODE_FOR_smaxvnx4si3 },
  { 0x57004a, CODE_FOR_smaxvnx2di3 },
  { 0x57004b, CODE_FOR_smaxvnx2qi3 },
  { 0x57004c, CODE_FOR_smaxvnx4qi3 },
  { 0x57004d, CODE_FOR_smaxvnx2hi3 },
  { 0x57004e, CODE_FOR_smaxvnx8qi3 },
  { 0x57004f, CODE_FOR_smaxvnx4hi3 },
  { 0x570050, CODE_FOR_smaxvnx2si3 },
  { 0x57007c, CODE_FOR_smaxv4hf3 },
  { 0x57007d, CODE_FOR_smaxv2sf3 },
  { 0x570080, CODE_FOR_smaxv8hf3 },
  { 0x570081, CODE_FOR_smaxv4sf3 },
  { 0x570082, CODE_FOR_smaxv2df3 },
  { 0x570084, CODE_FOR_smaxvnx8hf3 },
  { 0x570085, CODE_FOR_smaxvnx4sf3 },
  { 0x570086, CODE_FOR_smaxvnx2df3 },
  { 0x580040, CODE_FOR_uminv8qi3 },
  { 0x580041, CODE_FOR_uminv4hi3 },
  { 0x580042, CODE_FOR_uminv2si3 },
  { 0x580043, CODE_FOR_uminv16qi3 },
  { 0x580044, CODE_FOR_uminv8hi3 },
  { 0x580045, CODE_FOR_uminv4si3 },
  { 0x580046, CODE_FOR_uminv2di3 },
  { 0x580047, CODE_FOR_uminvnx16qi3 },
  { 0x580048, CODE_FOR_uminvnx8hi3 },
  { 0x580049, CODE_FOR_uminvnx4si3 },
  { 0x58004a, CODE_FOR_uminvnx2di3 },
  { 0x58004b, CODE_FOR_uminvnx2qi3 },
  { 0x58004c, CODE_FOR_uminvnx4qi3 },
  { 0x58004d, CODE_FOR_uminvnx2hi3 },
  { 0x58004e, CODE_FOR_uminvnx8qi3 },
  { 0x58004f, CODE_FOR_uminvnx4hi3 },
  { 0x580050, CODE_FOR_uminvnx2si3 },
  { 0x59000f, CODE_FOR_umaxsi3 },
  { 0x590010, CODE_FOR_umaxdi3 },
  { 0x590040, CODE_FOR_umaxv8qi3 },
  { 0x590041, CODE_FOR_umaxv4hi3 },
  { 0x590042, CODE_FOR_umaxv2si3 },
  { 0x590043, CODE_FOR_umaxv16qi3 },
  { 0x590044, CODE_FOR_umaxv8hi3 },
  { 0x590045, CODE_FOR_umaxv4si3 },
  { 0x590046, CODE_FOR_umaxv2di3 },
  { 0x590047, CODE_FOR_umaxvnx16qi3 },
  { 0x590048, CODE_FOR_umaxvnx8hi3 },
  { 0x590049, CODE_FOR_umaxvnx4si3 },
  { 0x59004a, CODE_FOR_umaxvnx2di3 },
  { 0x59004b, CODE_FOR_umaxvnx2qi3 },
  { 0x59004c, CODE_FOR_umaxvnx4qi3 },
  { 0x59004d, CODE_FOR_umaxvnx2hi3 },
  { 0x59004e, CODE_FOR_umaxvnx8qi3 },
  { 0x59004f, CODE_FOR_umaxvnx4hi3 },
  { 0x590050, CODE_FOR_umaxvnx2si3 },
  { 0x5a000f, CODE_FOR_negsi2 },
  { 0x5a0010, CODE_FOR_negdi2 },
  { 0x5a0027, CODE_FOR_neghf2 },
  { 0x5a0029, CODE_FOR_negsf2 },
  { 0x5a002a, CODE_FOR_negdf2 },
  { 0x5a0040, CODE_FOR_negv8qi2 },
  { 0x5a0041, CODE_FOR_negv4hi2 },
  { 0x5a0042, CODE_FOR_negv2si2 },
  { 0x5a0043, CODE_FOR_negv16qi2 },
  { 0x5a0044, CODE_FOR_negv8hi2 },
  { 0x5a0045, CODE_FOR_negv4si2 },
  { 0x5a0046, CODE_FOR_negv2di2 },
  { 0x5a0047, CODE_FOR_negvnx16qi2 },
  { 0x5a0048, CODE_FOR_negvnx8hi2 },
  { 0x5a0049, CODE_FOR_negvnx4si2 },
  { 0x5a004a, CODE_FOR_negvnx2di2 },
  { 0x5a004b, CODE_FOR_negvnx2qi2 },
  { 0x5a004c, CODE_FOR_negvnx4qi2 },
  { 0x5a004d, CODE_FOR_negvnx2hi2 },
  { 0x5a004e, CODE_FOR_negvnx8qi2 },
  { 0x5a004f, CODE_FOR_negvnx4hi2 },
  { 0x5a0050, CODE_FOR_negvnx2si2 },
  { 0x5a007c, CODE_FOR_negv4hf2 },
  { 0x5a007d, CODE_FOR_negv2sf2 },
  { 0x5a0080, CODE_FOR_negv8hf2 },
  { 0x5a0081, CODE_FOR_negv4sf2 },
  { 0x5a0082, CODE_FOR_negv2df2 },
  { 0x5a0084, CODE_FOR_negvnx8hf2 },
  { 0x5a0085, CODE_FOR_negvnx4sf2 },
  { 0x5a0086, CODE_FOR_negvnx2df2 },
  { 0x5e000f, CODE_FOR_abssi2 },
  { 0x5e0010, CODE_FOR_absdi2 },
  { 0x5e0027, CODE_FOR_abshf2 },
  { 0x5e0029, CODE_FOR_abssf2 },
  { 0x5e002a, CODE_FOR_absdf2 },
  { 0x5e0040, CODE_FOR_absv8qi2 },
  { 0x5e0041, CODE_FOR_absv4hi2 },
  { 0x5e0042, CODE_FOR_absv2si2 },
  { 0x5e0043, CODE_FOR_absv16qi2 },
  { 0x5e0044, CODE_FOR_absv8hi2 },
  { 0x5e0045, CODE_FOR_absv4si2 },
  { 0x5e0046, CODE_FOR_absv2di2 },
  { 0x5e0047, CODE_FOR_absvnx16qi2 },
  { 0x5e0048, CODE_FOR_absvnx8hi2 },
  { 0x5e0049, CODE_FOR_absvnx4si2 },
  { 0x5e004a, CODE_FOR_absvnx2di2 },
  { 0x5e004b, CODE_FOR_absvnx2qi2 },
  { 0x5e004c, CODE_FOR_absvnx4qi2 },
  { 0x5e004d, CODE_FOR_absvnx2hi2 },
  { 0x5e004e, CODE_FOR_absvnx8qi2 },
  { 0x5e004f, CODE_FOR_absvnx4hi2 },
  { 0x5e0050, CODE_FOR_absvnx2si2 },
  { 0x5e007c, CODE_FOR_absv4hf2 },
  { 0x5e007d, CODE_FOR_absv2sf2 },
  { 0x5e0080, CODE_FOR_absv8hf2 },
  { 0x5e0081, CODE_FOR_absv4sf2 },
  { 0x5e0082, CODE_FOR_absv2df2 },
  { 0x5e0084, CODE_FOR_absvnx8hf2 },
  { 0x5e0085, CODE_FOR_absvnx4sf2 },
  { 0x5e0086, CODE_FOR_absvnx2df2 },
  { 0x60000f, CODE_FOR_one_cmplsi2 },
  { 0x600010, CODE_FOR_one_cmpldi2 },
  { 0x60003c, CODE_FOR_one_cmplvnx16bi2 },
  { 0x60003d, CODE_FOR_one_cmplvnx8bi2 },
  { 0x60003e, CODE_FOR_one_cmplvnx4bi2 },
  { 0x60003f, CODE_FOR_one_cmplvnx2bi2 },
  { 0x600040, CODE_FOR_one_cmplv8qi2 },
  { 0x600041, CODE_FOR_one_cmplv4hi2 },
  { 0x600042, CODE_FOR_one_cmplv2si2 },
  { 0x600043, CODE_FOR_one_cmplv16qi2 },
  { 0x600044, CODE_FOR_one_cmplv8hi2 },
  { 0x600045, CODE_FOR_one_cmplv4si2 },
  { 0x600046, CODE_FOR_one_cmplv2di2 },
  { 0x600047, CODE_FOR_one_cmplvnx16qi2 },
  { 0x600048, CODE_FOR_one_cmplvnx8hi2 },
  { 0x600049, CODE_FOR_one_cmplvnx4si2 },
  { 0x60004a, CODE_FOR_one_cmplvnx2di2 },
  { 0x60004b, CODE_FOR_one_cmplvnx2qi2 },
  { 0x60004c, CODE_FOR_one_cmplvnx4qi2 },
  { 0x60004d, CODE_FOR_one_cmplvnx2hi2 },
  { 0x60004e, CODE_FOR_one_cmplvnx8qi2 },
  { 0x60004f, CODE_FOR_one_cmplvnx4hi2 },
  { 0x600050, CODE_FOR_one_cmplvnx2si2 },
  { 0x61000e, CODE_FOR_bswaphi2 },
  { 0x61000f, CODE_FOR_bswapsi2 },
  { 0x610010, CODE_FOR_bswapdi2 },
  { 0x610041, CODE_FOR_bswapv4hi2 },
  { 0x610042, CODE_FOR_bswapv2si2 },
  { 0x610044, CODE_FOR_bswapv8hi2 },
  { 0x610045, CODE_FOR_bswapv4si2 },
  { 0x610046, CODE_FOR_bswapv2di2 },
  { 0x62000f, CODE_FOR_ffssi2 },
  { 0x620010, CODE_FOR_ffsdi2 },
  { 0x63000f, CODE_FOR_clzsi2 },
  { 0x630010, CODE_FOR_clzdi2 },
  { 0x630040, CODE_FOR_clzv8qi2 },
  { 0x630041, CODE_FOR_clzv4hi2 },
  { 0x630042, CODE_FOR_clzv2si2 },
  { 0x630043, CODE_FOR_clzv16qi2 },
  { 0x630044, CODE_FOR_clzv8hi2 },
  { 0x630045, CODE_FOR_clzv4si2 },
  { 0x630047, CODE_FOR_clzvnx16qi2 },
  { 0x630048, CODE_FOR_clzvnx8hi2 },
  { 0x630049, CODE_FOR_clzvnx4si2 },
  { 0x63004a, CODE_FOR_clzvnx2di2 },
  { 0x63004b, CODE_FOR_clzvnx2qi2 },
  { 0x63004c, CODE_FOR_clzvnx4qi2 },
  { 0x63004d, CODE_FOR_clzvnx2hi2 },
  { 0x63004e, CODE_FOR_clzvnx8qi2 },
  { 0x63004f, CODE_FOR_clzvnx4hi2 },
  { 0x630050, CODE_FOR_clzvnx2si2 },
  { 0x64000f, CODE_FOR_ctzsi2 },
  { 0x640010, CODE_FOR_ctzdi2 },
  { 0x640042, CODE_FOR_ctzv2si2 },
  { 0x640045, CODE_FOR_ctzv4si2 },
  { 0x65000f, CODE_FOR_clrsbsi2 },
  { 0x650010, CODE_FOR_clrsbdi2 },
  { 0x650040, CODE_FOR_clrsbv8qi2 },
  { 0x650041, CODE_FOR_clrsbv4hi2 },
  { 0x650042, CODE_FOR_clrsbv2si2 },
  { 0x650043, CODE_FOR_clrsbv16qi2 },
  { 0x650044, CODE_FOR_clrsbv8hi2 },
  { 0x650045, CODE_FOR_clrsbv4si2 },
  { 0x650047, CODE_FOR_clrsbvnx16qi2 },
  { 0x650048, CODE_FOR_clrsbvnx8hi2 },
  { 0x650049, CODE_FOR_clrsbvnx4si2 },
  { 0x65004a, CODE_FOR_clrsbvnx2di2 },
  { 0x65004b, CODE_FOR_clrsbvnx2qi2 },
  { 0x65004c, CODE_FOR_clrsbvnx4qi2 },
  { 0x65004d, CODE_FOR_clrsbvnx2hi2 },
  { 0x65004e, CODE_FOR_clrsbvnx8qi2 },
  { 0x65004f, CODE_FOR_clrsbvnx4hi2 },
  { 0x650050, CODE_FOR_clrsbvnx2si2 },
  { 0x66000f, CODE_FOR_popcountsi2 },
  { 0x660010, CODE_FOR_popcountdi2 },
  { 0x660040, CODE_FOR_popcountv8qi2 },
  { 0x660043, CODE_FOR_popcountv16qi2 },
  { 0x660047, CODE_FOR_popcountvnx16qi2 },
  { 0x660048, CODE_FOR_popcountvnx8hi2 },
  { 0x660049, CODE_FOR_popcountvnx4si2 },
  { 0x66004a, CODE_FOR_popcountvnx2di2 },
  { 0x66004b, CODE_FOR_popcountvnx2qi2 },
  { 0x66004c, CODE_FOR_popcountvnx4qi2 },
  { 0x66004d, CODE_FOR_popcountvnx2hi2 },
  { 0x66004e, CODE_FOR_popcountvnx8qi2 },
  { 0x66004f, CODE_FOR_popcountvnx4hi2 },
  { 0x660050, CODE_FOR_popcountvnx2si2 },
  { 0x720027, CODE_FOR_sqrthf2 },
  { 0x720029, CODE_FOR_sqrtsf2 },
  { 0x72002a, CODE_FOR_sqrtdf2 },
  { 0x72007c, CODE_FOR_sqrtv4hf2 },
  { 0x72007d, CODE_FOR_sqrtv2sf2 },
  { 0x720080, CODE_FOR_sqrtv8hf2 },
  { 0x720081, CODE_FOR_sqrtv4sf2 },
  { 0x720082, CODE_FOR_sqrtv2df2 },
  { 0x720084, CODE_FOR_sqrtvnx8hf2 },
  { 0x720085, CODE_FOR_sqrtvnx4sf2 },
  { 0x720086, CODE_FOR_sqrtvnx2df2 },
  { 0x81000d, CODE_FOR_movqi },
  { 0x81000e, CODE_FOR_movhi },
  { 0x81000f, CODE_FOR_movsi },
  { 0x810010, CODE_FOR_movdi },
  { 0x810011, CODE_FOR_movti },
  { 0x810012, CODE_FOR_movoi },
  { 0x810013, CODE_FOR_movci },
  { 0x810014, CODE_FOR_movxi },
  { 0x810027, CODE_FOR_movhf },
  { 0x810028, CODE_FOR_movbf },
  { 0x810029, CODE_FOR_movsf },
  { 0x81002a, CODE_FOR_movdf },
  { 0x81002b, CODE_FOR_movtf },
  { 0x81003c, CODE_FOR_movvnx16bi },
  { 0x81003d, CODE_FOR_movvnx8bi },
  { 0x81003e, CODE_FOR_movvnx4bi },
  { 0x81003f, CODE_FOR_movvnx2bi },
  { 0x810040, CODE_FOR_movv8qi },
  { 0x810041, CODE_FOR_movv4hi },
  { 0x810042, CODE_FOR_movv2si },
  { 0x810043, CODE_FOR_movv16qi },
  { 0x810044, CODE_FOR_movv8hi },
  { 0x810045, CODE_FOR_movv4si },
  { 0x810046, CODE_FOR_movv2di },
  { 0x810047, CODE_FOR_movvnx16qi },
  { 0x810048, CODE_FOR_movvnx8hi },
  { 0x810049, CODE_FOR_movvnx4si },
  { 0x81004a, CODE_FOR_movvnx2di },
  { 0x81004b, CODE_FOR_movvnx2qi },
  { 0x81004c, CODE_FOR_movvnx4qi },
  { 0x81004d, CODE_FOR_movvnx2hi },
  { 0x81004e, CODE_FOR_movvnx8qi },
  { 0x81004f, CODE_FOR_movvnx4hi },
  { 0x810050, CODE_FOR_movvnx2si },
  { 0x810051, CODE_FOR_movv2x8qi },
  { 0x810052, CODE_FOR_movv3x8qi },
  { 0x810053, CODE_FOR_movv4x8qi },
  { 0x810054, CODE_FOR_movv2x4hi },
  { 0x810055, CODE_FOR_movv3x4hi },
  { 0x810056, CODE_FOR_movv4x4hi },
  { 0x810057, CODE_FOR_movv2x2si },
  { 0x810058, CODE_FOR_movv3x2si },
  { 0x810059, CODE_FOR_movv4x2si },
  { 0x81005a, CODE_FOR_movv2x1di },
  { 0x81005b, CODE_FOR_movv3x1di },
  { 0x81005c, CODE_FOR_movv4x1di },
  { 0x81005d, CODE_FOR_movv2x16qi },
  { 0x81005e, CODE_FOR_movv3x16qi },
  { 0x81005f, CODE_FOR_movv4x16qi },
  { 0x810060, CODE_FOR_movv2x8hi },
  { 0x810061, CODE_FOR_movv3x8hi },
  { 0x810062, CODE_FOR_movv4x8hi },
  { 0x810063, CODE_FOR_movv2x4si },
  { 0x810064, CODE_FOR_movv3x4si },
  { 0x810065, CODE_FOR_movv4x4si },
  { 0x810066, CODE_FOR_movv2x2di },
  { 0x810067, CODE_FOR_movv3x2di },
  { 0x810068, CODE_FOR_movv4x2di },
  { 0x810069, CODE_FOR_movvnx32qi },
  { 0x81006a, CODE_FOR_movvnx16hi },
  { 0x81006b, CODE_FOR_movvnx8si },
  { 0x81006c, CODE_FOR_movvnx4di },
  { 0x81006e, CODE_FOR_movvnx48qi },
  { 0x81006f, CODE_FOR_movvnx24hi },
  { 0x810070, CODE_FOR_movvnx12si },
  { 0x810071, CODE_FOR_movvnx6di },
  { 0x810073, CODE_FOR_movvnx64qi },
  { 0x810074, CODE_FOR_movvnx32hi },
  { 0x810075, CODE_FOR_movvnx16si },
  { 0x810076, CODE_FOR_movvnx8di },
  { 0x810079, CODE_FOR_movv8di },
  { 0x81007b, CODE_FOR_movv4bf },
  { 0x81007c, CODE_FOR_movv4hf },
  { 0x81007d, CODE_FOR_movv2sf },
  { 0x81007f, CODE_FOR_movv8bf },
  { 0x810080, CODE_FOR_movv8hf },
  { 0x810081, CODE_FOR_movv4sf },
  { 0x810082, CODE_FOR_movv2df },
  { 0x810083, CODE_FOR_movvnx8bf },
  { 0x810084, CODE_FOR_movvnx8hf },
  { 0x810085, CODE_FOR_movvnx4sf },
  { 0x810086, CODE_FOR_movvnx2df },
  { 0x810087, CODE_FOR_movvnx2bf },
  { 0x810088, CODE_FOR_movvnx2hf },
  { 0x810089, CODE_FOR_movvnx4bf },
  { 0x81008a, CODE_FOR_movvnx4hf },
  { 0x81008b, CODE_FOR_movvnx2sf },
  { 0x81008c, CODE_FOR_movv2x4bf },
  { 0x81008d, CODE_FOR_movv2x4hf },
  { 0x81008e, CODE_FOR_movv3x4bf },
  { 0x81008f, CODE_FOR_movv3x4hf },
  { 0x810090, CODE_FOR_movv4x4bf },
  { 0x810091, CODE_FOR_movv4x4hf },
  { 0x810092, CODE_FOR_movv2x2sf },
  { 0x810093, CODE_FOR_movv3x2sf },
  { 0x810094, CODE_FOR_movv4x2sf },
  { 0x810095, CODE_FOR_movv2x1df },
  { 0x810096, CODE_FOR_movv3x1df },
  { 0x810097, CODE_FOR_movv4x1df },
  { 0x810098, CODE_FOR_movv2x8bf },
  { 0x810099, CODE_FOR_movv2x8hf },
  { 0x81009a, CODE_FOR_movv3x8bf },
  { 0x81009b, CODE_FOR_movv3x8hf },
  { 0x81009c, CODE_FOR_movv4x8bf },
  { 0x81009d, CODE_FOR_movv4x8hf },
  { 0x81009e, CODE_FOR_movv2x4sf },
  { 0x81009f, CODE_FOR_movv3x4sf },
  { 0x8100a0, CODE_FOR_movv4x4sf },
  { 0x8100a1, CODE_FOR_movv2x2df },
  { 0x8100a2, CODE_FOR_movv3x2df },
  { 0x8100a3, CODE_FOR_movv4x2df },
  { 0x8100a4, CODE_FOR_movvnx16bf },
  { 0x8100a5, CODE_FOR_movvnx16hf },
  { 0x8100a6, CODE_FOR_movvnx8sf },
  { 0x8100a7, CODE_FOR_movvnx4df },
  { 0x8100a8, CODE_FOR_movvnx24bf },
  { 0x8100a9, CODE_FOR_movvnx24hf },
  { 0x8100aa, CODE_FOR_movvnx12sf },
  { 0x8100ab, CODE_FOR_movvnx6df },
  { 0x8100ac, CODE_FOR_movvnx32bf },
  { 0x8100ad, CODE_FOR_movvnx32hf },
  { 0x8100ae, CODE_FOR_movvnx16sf },
  { 0x8100af, CODE_FOR_movvnx8df },
  { 0x830040, CODE_FOR_movmisalignv8qi },
  { 0x830041, CODE_FOR_movmisalignv4hi },
  { 0x830042, CODE_FOR_movmisalignv2si },
  { 0x830043, CODE_FOR_movmisalignv16qi },
  { 0x830044, CODE_FOR_movmisalignv8hi },
  { 0x830045, CODE_FOR_movmisalignv4si },
  { 0x830046, CODE_FOR_movmisalignv2di },
  { 0x830047, CODE_FOR_movmisalignvnx16qi },
  { 0x830048, CODE_FOR_movmisalignvnx8hi },
  { 0x830049, CODE_FOR_movmisalignvnx4si },
  { 0x83004a, CODE_FOR_movmisalignvnx2di },
  { 0x83004b, CODE_FOR_movmisalignvnx2qi },
  { 0x83004c, CODE_FOR_movmisalignvnx4qi },
  { 0x83004d, CODE_FOR_movmisalignvnx2hi },
  { 0x83004e, CODE_FOR_movmisalignvnx8qi },
  { 0x83004f, CODE_FOR_movmisalignvnx4hi },
  { 0x830050, CODE_FOR_movmisalignvnx2si },
  { 0x83007b, CODE_FOR_movmisalignv4bf },
  { 0x83007c, CODE_FOR_movmisalignv4hf },
  { 0x83007d, CODE_FOR_movmisalignv2sf },
  { 0x83007f, CODE_FOR_movmisalignv8bf },
  { 0x830080, CODE_FOR_movmisalignv8hf },
  { 0x830081, CODE_FOR_movmisalignv4sf },
  { 0x830082, CODE_FOR_movmisalignv2df },
  { 0x830083, CODE_FOR_movmisalignvnx8bf },
  { 0x830084, CODE_FOR_movmisalignvnx8hf },
  { 0x830085, CODE_FOR_movmisalignvnx4sf },
  { 0x830086, CODE_FOR_movmisalignvnx2df },
  { 0x830087, CODE_FOR_movmisalignvnx2bf },
  { 0x830088, CODE_FOR_movmisalignvnx2hf },
  { 0x830089, CODE_FOR_movmisalignvnx4bf },
  { 0x83008a, CODE_FOR_movmisalignvnx4hf },
  { 0x83008b, CODE_FOR_movmisalignvnx2sf },
  { 0x85000f, CODE_FOR_insvsi },
  { 0x850010, CODE_FOR_insvdi },
  { 0x8e0002, CODE_FOR_cbranchcc4 },
  { 0x8e000f, CODE_FOR_cbranchsi4 },
  { 0x8e0010, CODE_FOR_cbranchdi4 },
  { 0x8e0029, CODE_FOR_cbranchsf4 },
  { 0x8e002a, CODE_FOR_cbranchdf4 },
  { 0x8e003c, CODE_FOR_cbranchvnx16bi4 },
  { 0x8e003d, CODE_FOR_cbranchvnx8bi4 },
  { 0x8e003e, CODE_FOR_cbranchvnx4bi4 },
  { 0x8e003f, CODE_FOR_cbranchvnx2bi4 },
  { 0x90000f, CODE_FOR_negsicc },
  { 0x900010, CODE_FOR_negdicc },
  { 0x91000f, CODE_FOR_notsicc },
  { 0x910010, CODE_FOR_notdicc },
  { 0x92000d, CODE_FOR_movqicc },
  { 0x92000e, CODE_FOR_movhicc },
  { 0x92000f, CODE_FOR_movsicc },
  { 0x920010, CODE_FOR_movdicc },
  { 0x920029, CODE_FOR_movsfcc },
  { 0x92002a, CODE_FOR_movdfcc },
  { 0x930047, CODE_FOR_cond_addvnx16qi },
  { 0x930048, CODE_FOR_cond_addvnx8hi },
  { 0x930049, CODE_FOR_cond_addvnx4si },
  { 0x93004a, CODE_FOR_cond_addvnx2di },
  { 0x93004b, CODE_FOR_cond_addvnx2qi },
  { 0x93004c, CODE_FOR_cond_addvnx4qi },
  { 0x93004d, CODE_FOR_cond_addvnx2hi },
  { 0x93004e, CODE_FOR_cond_addvnx8qi },
  { 0x93004f, CODE_FOR_cond_addvnx4hi },
  { 0x930050, CODE_FOR_cond_addvnx2si },
  { 0x930084, CODE_FOR_cond_addvnx8hf },
  { 0x930085, CODE_FOR_cond_addvnx4sf },
  { 0x930086, CODE_FOR_cond_addvnx2df },
  { 0x940047, CODE_FOR_cond_subvnx16qi },
  { 0x940048, CODE_FOR_cond_subvnx8hi },
  { 0x940049, CODE_FOR_cond_subvnx4si },
  { 0x94004a, CODE_FOR_cond_subvnx2di },
  { 0x94004b, CODE_FOR_cond_subvnx2qi },
  { 0x94004c, CODE_FOR_cond_subvnx4qi },
  { 0x94004d, CODE_FOR_cond_subvnx2hi },
  { 0x94004e, CODE_FOR_cond_subvnx8qi },
  { 0x94004f, CODE_FOR_cond_subvnx4hi },
  { 0x940050, CODE_FOR_cond_subvnx2si },
  { 0x940084, CODE_FOR_cond_subvnx8hf },
  { 0x940085, CODE_FOR_cond_subvnx4sf },
  { 0x940086, CODE_FOR_cond_subvnx2df },
  { 0x950047, CODE_FOR_cond_mulvnx16qi },
  { 0x950048, CODE_FOR_cond_mulvnx8hi },
  { 0x950049, CODE_FOR_cond_mulvnx4si },
  { 0x95004a, CODE_FOR_cond_mulvnx2di },
  { 0x95004b, CODE_FOR_cond_mulvnx2qi },
  { 0x95004c, CODE_FOR_cond_mulvnx4qi },
  { 0x95004d, CODE_FOR_cond_mulvnx2hi },
  { 0x95004e, CODE_FOR_cond_mulvnx8qi },
  { 0x95004f, CODE_FOR_cond_mulvnx4hi },
  { 0x950050, CODE_FOR_cond_mulvnx2si },
  { 0x950084, CODE_FOR_cond_mulvnx8hf },
  { 0x950085, CODE_FOR_cond_mulvnx4sf },
  { 0x950086, CODE_FOR_cond_mulvnx2df },
  { 0x960049, CODE_FOR_cond_divvnx4si },
  { 0x96004a, CODE_FOR_cond_divvnx2di },
  { 0x960084, CODE_FOR_cond_divvnx8hf },
  { 0x960085, CODE_FOR_cond_divvnx4sf },
  { 0x960086, CODE_FOR_cond_divvnx2df },
  { 0x980049, CODE_FOR_cond_udivvnx4si },
  { 0x98004a, CODE_FOR_cond_udivvnx2di },
  { 0x9a0047, CODE_FOR_cond_andvnx16qi },
  { 0x9a0048, CODE_FOR_cond_andvnx8hi },
  { 0x9a0049, CODE_FOR_cond_andvnx4si },
  { 0x9a004a, CODE_FOR_cond_andvnx2di },
  { 0x9a004b, CODE_FOR_cond_andvnx2qi },
  { 0x9a004c, CODE_FOR_cond_andvnx4qi },
  { 0x9a004d, CODE_FOR_cond_andvnx2hi },
  { 0x9a004e, CODE_FOR_cond_andvnx8qi },
  { 0x9a004f, CODE_FOR_cond_andvnx4hi },
  { 0x9a0050, CODE_FOR_cond_andvnx2si },
  { 0x9b0047, CODE_FOR_cond_iorvnx16qi },
  { 0x9b0048, CODE_FOR_cond_iorvnx8hi },
  { 0x9b0049, CODE_FOR_cond_iorvnx4si },
  { 0x9b004a, CODE_FOR_cond_iorvnx2di },
  { 0x9b004b, CODE_FOR_cond_iorvnx2qi },
  { 0x9b004c, CODE_FOR_cond_iorvnx4qi },
  { 0x9b004d, CODE_FOR_cond_iorvnx2hi },
  { 0x9b004e, CODE_FOR_cond_iorvnx8qi },
  { 0x9b004f, CODE_FOR_cond_iorvnx4hi },
  { 0x9b0050, CODE_FOR_cond_iorvnx2si },
  { 0x9c0047, CODE_FOR_cond_xorvnx16qi },
  { 0x9c0048, CODE_FOR_cond_xorvnx8hi },
  { 0x9c0049, CODE_FOR_cond_xorvnx4si },
  { 0x9c004a, CODE_FOR_cond_xorvnx2di },
  { 0x9c004b, CODE_FOR_cond_xorvnx2qi },
  { 0x9c004c, CODE_FOR_cond_xorvnx4qi },
  { 0x9c004d, CODE_FOR_cond_xorvnx2hi },
  { 0x9c004e, CODE_FOR_cond_xorvnx8qi },
  { 0x9c004f, CODE_FOR_cond_xorvnx4hi },
  { 0x9c0050, CODE_FOR_cond_xorvnx2si },
  { 0x9d0047, CODE_FOR_cond_ashlvnx16qi },
  { 0x9d0048, CODE_FOR_cond_ashlvnx8hi },
  { 0x9d0049, CODE_FOR_cond_ashlvnx4si },
  { 0x9d004a, CODE_FOR_cond_ashlvnx2di },
  { 0x9d004b, CODE_FOR_cond_ashlvnx2qi },
  { 0x9d004c, CODE_FOR_cond_ashlvnx4qi },
  { 0x9d004d, CODE_FOR_cond_ashlvnx2hi },
  { 0x9d004e, CODE_FOR_cond_ashlvnx8qi },
  { 0x9d004f, CODE_FOR_cond_ashlvnx4hi },
  { 0x9d0050, CODE_FOR_cond_ashlvnx2si },
  { 0x9e0047, CODE_FOR_cond_ashrvnx16qi },
  { 0x9e0048, CODE_FOR_cond_ashrvnx8hi },
  { 0x9e0049, CODE_FOR_cond_ashrvnx4si },
  { 0x9e004a, CODE_FOR_cond_ashrvnx2di },
  { 0x9e004b, CODE_FOR_cond_ashrvnx2qi },
  { 0x9e004c, CODE_FOR_cond_ashrvnx4qi },
  { 0x9e004d, CODE_FOR_cond_ashrvnx2hi },
  { 0x9e004e, CODE_FOR_cond_ashrvnx8qi },
  { 0x9e004f, CODE_FOR_cond_ashrvnx4hi },
  { 0x9e0050, CODE_FOR_cond_ashrvnx2si },
  { 0x9f0047, CODE_FOR_cond_lshrvnx16qi },
  { 0x9f0048, CODE_FOR_cond_lshrvnx8hi },
  { 0x9f0049, CODE_FOR_cond_lshrvnx4si },
  { 0x9f004a, CODE_FOR_cond_lshrvnx2di },
  { 0x9f004b, CODE_FOR_cond_lshrvnx2qi },
  { 0x9f004c, CODE_FOR_cond_lshrvnx4qi },
  { 0x9f004d, CODE_FOR_cond_lshrvnx2hi },
  { 0x9f004e, CODE_FOR_cond_lshrvnx8qi },
  { 0x9f004f, CODE_FOR_cond_lshrvnx4hi },
  { 0x9f0050, CODE_FOR_cond_lshrvnx2si },
  { 0xa00047, CODE_FOR_cond_sminvnx16qi },
  { 0xa00048, CODE_FOR_cond_sminvnx8hi },
  { 0xa00049, CODE_FOR_cond_sminvnx4si },
  { 0xa0004a, CODE_FOR_cond_sminvnx2di },
  { 0xa0004b, CODE_FOR_cond_sminvnx2qi },
  { 0xa0004c, CODE_FOR_cond_sminvnx4qi },
  { 0xa0004d, CODE_FOR_cond_sminvnx2hi },
  { 0xa0004e, CODE_FOR_cond_sminvnx8qi },
  { 0xa0004f, CODE_FOR_cond_sminvnx4hi },
  { 0xa00050, CODE_FOR_cond_sminvnx2si },
  { 0xa00084, CODE_FOR_cond_sminvnx8hf },
  { 0xa00085, CODE_FOR_cond_sminvnx4sf },
  { 0xa00086, CODE_FOR_cond_sminvnx2df },
  { 0xa10047, CODE_FOR_cond_smaxvnx16qi },
  { 0xa10048, CODE_FOR_cond_smaxvnx8hi },
  { 0xa10049, CODE_FOR_cond_smaxvnx4si },
  { 0xa1004a, CODE_FOR_cond_smaxvnx2di },
  { 0xa1004b, CODE_FOR_cond_smaxvnx2qi },
  { 0xa1004c, CODE_FOR_cond_smaxvnx4qi },
  { 0xa1004d, CODE_FOR_cond_smaxvnx2hi },
  { 0xa1004e, CODE_FOR_cond_smaxvnx8qi },
  { 0xa1004f, CODE_FOR_cond_smaxvnx4hi },
  { 0xa10050, CODE_FOR_cond_smaxvnx2si },
  { 0xa10084, CODE_FOR_cond_smaxvnx8hf },
  { 0xa10085, CODE_FOR_cond_smaxvnx4sf },
  { 0xa10086, CODE_FOR_cond_smaxvnx2df },
  { 0xa20047, CODE_FOR_cond_uminvnx16qi },
  { 0xa20048, CODE_FOR_cond_uminvnx8hi },
  { 0xa20049, CODE_FOR_cond_uminvnx4si },
  { 0xa2004a, CODE_FOR_cond_uminvnx2di },
  { 0xa2004b, CODE_FOR_cond_uminvnx2qi },
  { 0xa2004c, CODE_FOR_cond_uminvnx4qi },
  { 0xa2004d, CODE_FOR_cond_uminvnx2hi },
  { 0xa2004e, CODE_FOR_cond_uminvnx8qi },
  { 0xa2004f, CODE_FOR_cond_uminvnx4hi },
  { 0xa20050, CODE_FOR_cond_uminvnx2si },
  { 0xa30047, CODE_FOR_cond_umaxvnx16qi },
  { 0xa30048, CODE_FOR_cond_umaxvnx8hi },
  { 0xa30049, CODE_FOR_cond_umaxvnx4si },
  { 0xa3004a, CODE_FOR_cond_umaxvnx2di },
  { 0xa3004b, CODE_FOR_cond_umaxvnx2qi },
  { 0xa3004c, CODE_FOR_cond_umaxvnx4qi },
  { 0xa3004d, CODE_FOR_cond_umaxvnx2hi },
  { 0xa3004e, CODE_FOR_cond_umaxvnx8qi },
  { 0xa3004f, CODE_FOR_cond_umaxvnx4hi },
  { 0xa30050, CODE_FOR_cond_umaxvnx2si },
  { 0xa40084, CODE_FOR_cond_fminvnx8hf },
  { 0xa40085, CODE_FOR_cond_fminvnx4sf },
  { 0xa40086, CODE_FOR_cond_fminvnx2df },
  { 0xa50084, CODE_FOR_cond_fmaxvnx8hf },
  { 0xa50085, CODE_FOR_cond_fmaxvnx4sf },
  { 0xa50086, CODE_FOR_cond_fmaxvnx2df },
  { 0xa60047, CODE_FOR_cond_fmavnx16qi },
  { 0xa60048, CODE_FOR_cond_fmavnx8hi },
  { 0xa60049, CODE_FOR_cond_fmavnx4si },
  { 0xa6004a, CODE_FOR_cond_fmavnx2di },
  { 0xa6004b, CODE_FOR_cond_fmavnx2qi },
  { 0xa6004c, CODE_FOR_cond_fmavnx4qi },
  { 0xa6004d, CODE_FOR_cond_fmavnx2hi },
  { 0xa6004e, CODE_FOR_cond_fmavnx8qi },
  { 0xa6004f, CODE_FOR_cond_fmavnx4hi },
  { 0xa60050, CODE_FOR_cond_fmavnx2si },
  { 0xa60084, CODE_FOR_cond_fmavnx8hf },
  { 0xa60085, CODE_FOR_cond_fmavnx4sf },
  { 0xa60086, CODE_FOR_cond_fmavnx2df },
  { 0xa70084, CODE_FOR_cond_fmsvnx8hf },
  { 0xa70085, CODE_FOR_cond_fmsvnx4sf },
  { 0xa70086, CODE_FOR_cond_fmsvnx2df },
  { 0xa80047, CODE_FOR_cond_fnmavnx16qi },
  { 0xa80048, CODE_FOR_cond_fnmavnx8hi },
  { 0xa80049, CODE_FOR_cond_fnmavnx4si },
  { 0xa8004a, CODE_FOR_cond_fnmavnx2di },
  { 0xa8004b, CODE_FOR_cond_fnmavnx2qi },
  { 0xa8004c, CODE_FOR_cond_fnmavnx4qi },
  { 0xa8004d, CODE_FOR_cond_fnmavnx2hi },
  { 0xa8004e, CODE_FOR_cond_fnmavnx8qi },
  { 0xa8004f, CODE_FOR_cond_fnmavnx4hi },
  { 0xa80050, CODE_FOR_cond_fnmavnx2si },
  { 0xa80084, CODE_FOR_cond_fnmavnx8hf },
  { 0xa80085, CODE_FOR_cond_fnmavnx4sf },
  { 0xa80086, CODE_FOR_cond_fnmavnx2df },
  { 0xa90084, CODE_FOR_cond_fnmsvnx8hf },
  { 0xa90085, CODE_FOR_cond_fnmsvnx4sf },
  { 0xa90086, CODE_FOR_cond_fnmsvnx2df },
  { 0xaa0047, CODE_FOR_cond_negvnx16qi },
  { 0xaa0048, CODE_FOR_cond_negvnx8hi },
  { 0xaa0049, CODE_FOR_cond_negvnx4si },
  { 0xaa004a, CODE_FOR_cond_negvnx2di },
  { 0xaa004b, CODE_FOR_cond_negvnx2qi },
  { 0xaa004c, CODE_FOR_cond_negvnx4qi },
  { 0xaa004d, CODE_FOR_cond_negvnx2hi },
  { 0xaa004e, CODE_FOR_cond_negvnx8qi },
  { 0xaa004f, CODE_FOR_cond_negvnx4hi },
  { 0xaa0050, CODE_FOR_cond_negvnx2si },
  { 0xaa0084, CODE_FOR_cond_negvnx8hf },
  { 0xaa0085, CODE_FOR_cond_negvnx4sf },
  { 0xaa0086, CODE_FOR_cond_negvnx2df },
  { 0xab000f, CODE_FOR_cmovsi6 },
  { 0xab0010, CODE_FOR_cmovdi6 },
  { 0xab0029, CODE_FOR_cmovsf6 },
  { 0xab002a, CODE_FOR_cmovdf6 },
  { 0xac0002, CODE_FOR_cstorecc4 },
  { 0xac000f, CODE_FOR_cstoresi4 },
  { 0xac0010, CODE_FOR_cstoredi4 },
  { 0xac0029, CODE_FOR_cstoresf4 },
  { 0xac002a, CODE_FOR_cstoredf4 },
  { 0xae000f, CODE_FOR_addvsi4 },
  { 0xae0010, CODE_FOR_addvdi4 },
  { 0xae0011, CODE_FOR_addvti4 },
  { 0xaf000f, CODE_FOR_subvsi4 },
  { 0xaf0010, CODE_FOR_subvdi4 },
  { 0xaf0011, CODE_FOR_subvti4 },
  { 0xb1000f, CODE_FOR_uaddvsi4 },
  { 0xb10010, CODE_FOR_uaddvdi4 },
  { 0xb10011, CODE_FOR_uaddvti4 },
  { 0xb2000f, CODE_FOR_usubvsi4 },
  { 0xb20010, CODE_FOR_usubvdi4 },
  { 0xb20011, CODE_FOR_usubvti4 },
  { 0xb4000f, CODE_FOR_negvsi3 },
  { 0xb40010, CODE_FOR_negvdi3 },
  { 0xb40011, CODE_FOR_negvti3 },
  { 0xb70010, CODE_FOR_smuldi3_highpart },
  { 0xb70047, CODE_FOR_smulvnx16qi3_highpart },
  { 0xb70048, CODE_FOR_smulvnx8hi3_highpart },
  { 0xb70049, CODE_FOR_smulvnx4si3_highpart },
  { 0xb7004a, CODE_FOR_smulvnx2di3_highpart },
  { 0xb7004b, CODE_FOR_smulvnx2qi3_highpart },
  { 0xb7004c, CODE_FOR_smulvnx4qi3_highpart },
  { 0xb7004d, CODE_FOR_smulvnx2hi3_highpart },
  { 0xb7004e, CODE_FOR_smulvnx8qi3_highpart },
  { 0xb7004f, CODE_FOR_smulvnx4hi3_highpart },
  { 0xb70050, CODE_FOR_smulvnx2si3_highpart },
  { 0xb80010, CODE_FOR_umuldi3_highpart },
  { 0xb80047, CODE_FOR_umulvnx16qi3_highpart },
  { 0xb80048, CODE_FOR_umulvnx8hi3_highpart },
  { 0xb80049, CODE_FOR_umulvnx4si3_highpart },
  { 0xb8004a, CODE_FOR_umulvnx2di3_highpart },
  { 0xb8004b, CODE_FOR_umulvnx2qi3_highpart },
  { 0xb8004c, CODE_FOR_umulvnx4qi3_highpart },
  { 0xb8004d, CODE_FOR_umulvnx2hi3_highpart },
  { 0xb8004e, CODE_FOR_umulvnx8qi3_highpart },
  { 0xb8004f, CODE_FOR_umulvnx4hi3_highpart },
  { 0xb80050, CODE_FOR_umulvnx2si3_highpart },
  { 0xbc0010, CODE_FOR_cpymemdi },
  { 0xbd0010, CODE_FOR_movmemdi },
  { 0xbe0010, CODE_FOR_setmemdi },
  { 0xc10027, CODE_FOR_fmahf4 },
  { 0xc10029, CODE_FOR_fmasf4 },
  { 0xc1002a, CODE_FOR_fmadf4 },
  { 0xc10047, CODE_FOR_fmavnx16qi4 },
  { 0xc10048, CODE_FOR_fmavnx8hi4 },
  { 0xc10049, CODE_FOR_fmavnx4si4 },
  { 0xc1004a, CODE_FOR_fmavnx2di4 },
  { 0xc1004b, CODE_FOR_fmavnx2qi4 },
  { 0xc1004c, CODE_FOR_fmavnx4qi4 },
  { 0xc1004d, CODE_FOR_fmavnx2hi4 },
  { 0xc1004e, CODE_FOR_fmavnx8qi4 },
  { 0xc1004f, CODE_FOR_fmavnx4hi4 },
  { 0xc10050, CODE_FOR_fmavnx2si4 },
  { 0xc1007c, CODE_FOR_fmav4hf4 },
  { 0xc1007d, CODE_FOR_fmav2sf4 },
  { 0xc10080, CODE_FOR_fmav8hf4 },
  { 0xc10081, CODE_FOR_fmav4sf4 },
  { 0xc10082, CODE_FOR_fmav2df4 },
  { 0xc10084, CODE_FOR_fmavnx8hf4 },
  { 0xc10085, CODE_FOR_fmavnx4sf4 },
  { 0xc10086, CODE_FOR_fmavnx2df4 },
  { 0xc20029, CODE_FOR_fmssf4 },
  { 0xc2002a, CODE_FOR_fmsdf4 },
  { 0xc20084, CODE_FOR_fmsvnx8hf4 },
  { 0xc20085, CODE_FOR_fmsvnx4sf4 },
  { 0xc20086, CODE_FOR_fmsvnx2df4 },
  { 0xc30027, CODE_FOR_fnmahf4 },
  { 0xc30029, CODE_FOR_fnmasf4 },
  { 0xc3002a, CODE_FOR_fnmadf4 },
  { 0xc30047, CODE_FOR_fnmavnx16qi4 },
  { 0xc30048, CODE_FOR_fnmavnx8hi4 },
  { 0xc30049, CODE_FOR_fnmavnx4si4 },
  { 0xc3004a, CODE_FOR_fnmavnx2di4 },
  { 0xc3004b, CODE_FOR_fnmavnx2qi4 },
  { 0xc3004c, CODE_FOR_fnmavnx4qi4 },
  { 0xc3004d, CODE_FOR_fnmavnx2hi4 },
  { 0xc3004e, CODE_FOR_fnmavnx8qi4 },
  { 0xc3004f, CODE_FOR_fnmavnx4hi4 },
  { 0xc30050, CODE_FOR_fnmavnx2si4 },
  { 0xc3007c, CODE_FOR_fnmav4hf4 },
  { 0xc3007d, CODE_FOR_fnmav2sf4 },
  { 0xc30080, CODE_FOR_fnmav8hf4 },
  { 0xc30081, CODE_FOR_fnmav4sf4 },
  { 0xc30082, CODE_FOR_fnmav2df4 },
  { 0xc30084, CODE_FOR_fnmavnx8hf4 },
  { 0xc30085, CODE_FOR_fnmavnx4sf4 },
  { 0xc30086, CODE_FOR_fnmavnx2df4 },
  { 0xc40029, CODE_FOR_fnmssf4 },
  { 0xc4002a, CODE_FOR_fnmsdf4 },
  { 0xc40084, CODE_FOR_fnmsvnx8hf4 },
  { 0xc40085, CODE_FOR_fnmsvnx4sf4 },
  { 0xc40086, CODE_FOR_fnmsvnx2df4 },
  { 0xc50027, CODE_FOR_rinthf2 },
  { 0xc50029, CODE_FOR_rintsf2 },
  { 0xc5002a, CODE_FOR_rintdf2 },
  { 0xc5007c, CODE_FOR_rintv4hf2 },
  { 0xc5007d, CODE_FOR_rintv2sf2 },
  { 0xc50080, CODE_FOR_rintv8hf2 },
  { 0xc50081, CODE_FOR_rintv4sf2 },
  { 0xc50082, CODE_FOR_rintv2df2 },
  { 0xc50084, CODE_FOR_rintvnx8hf2 },
  { 0xc50085, CODE_FOR_rintvnx4sf2 },
  { 0xc50086, CODE_FOR_rintvnx2df2 },
  { 0xc60027, CODE_FOR_roundhf2 },
  { 0xc60029, CODE_FOR_roundsf2 },
  { 0xc6002a, CODE_FOR_rounddf2 },
  { 0xc6007c, CODE_FOR_roundv4hf2 },
  { 0xc6007d, CODE_FOR_roundv2sf2 },
  { 0xc60080, CODE_FOR_roundv8hf2 },
  { 0xc60081, CODE_FOR_roundv4sf2 },
  { 0xc60082, CODE_FOR_roundv2df2 },
  { 0xc60084, CODE_FOR_roundvnx8hf2 },
  { 0xc60085, CODE_FOR_roundvnx4sf2 },
  { 0xc60086, CODE_FOR_roundvnx2df2 },
  { 0xc70027, CODE_FOR_roundevenhf2 },
  { 0xc70029, CODE_FOR_roundevensf2 },
  { 0xc7002a, CODE_FOR_roundevendf2 },
  { 0xc7007c, CODE_FOR_roundevenv4hf2 },
  { 0xc7007d, CODE_FOR_roundevenv2sf2 },
  { 0xc70080, CODE_FOR_roundevenv8hf2 },
  { 0xc70081, CODE_FOR_roundevenv4sf2 },
  { 0xc70082, CODE_FOR_roundevenv2df2 },
  { 0xc80027, CODE_FOR_floorhf2 },
  { 0xc80029, CODE_FOR_floorsf2 },
  { 0xc8002a, CODE_FOR_floordf2 },
  { 0xc8007c, CODE_FOR_floorv4hf2 },
  { 0xc8007d, CODE_FOR_floorv2sf2 },
  { 0xc80080, CODE_FOR_floorv8hf2 },
  { 0xc80081, CODE_FOR_floorv4sf2 },
  { 0xc80082, CODE_FOR_floorv2df2 },
  { 0xc80084, CODE_FOR_floorvnx8hf2 },
  { 0xc80085, CODE_FOR_floorvnx4sf2 },
  { 0xc80086, CODE_FOR_floorvnx2df2 },
  { 0xc90027, CODE_FOR_ceilhf2 },
  { 0xc90029, CODE_FOR_ceilsf2 },
  { 0xc9002a, CODE_FOR_ceildf2 },
  { 0xc9007c, CODE_FOR_ceilv4hf2 },
  { 0xc9007d, CODE_FOR_ceilv2sf2 },
  { 0xc90080, CODE_FOR_ceilv8hf2 },
  { 0xc90081, CODE_FOR_ceilv4sf2 },
  { 0xc90082, CODE_FOR_ceilv2df2 },
  { 0xc90084, CODE_FOR_ceilvnx8hf2 },
  { 0xc90085, CODE_FOR_ceilvnx4sf2 },
  { 0xc90086, CODE_FOR_ceilvnx2df2 },
  { 0xca0027, CODE_FOR_btrunchf2 },
  { 0xca0029, CODE_FOR_btruncsf2 },
  { 0xca002a, CODE_FOR_btruncdf2 },
  { 0xca007c, CODE_FOR_btruncv4hf2 },
  { 0xca007d, CODE_FOR_btruncv2sf2 },
  { 0xca0080, CODE_FOR_btruncv8hf2 },
  { 0xca0081, CODE_FOR_btruncv4sf2 },
  { 0xca0082, CODE_FOR_btruncv2df2 },
  { 0xca0084, CODE_FOR_btruncvnx8hf2 },
  { 0xca0085, CODE_FOR_btruncvnx4sf2 },
  { 0xca0086, CODE_FOR_btruncvnx2df2 },
  { 0xcb0027, CODE_FOR_nearbyinthf2 },
  { 0xcb0029, CODE_FOR_nearbyintsf2 },
  { 0xcb002a, CODE_FOR_nearbyintdf2 },
  { 0xcb007c, CODE_FOR_nearbyintv4hf2 },
  { 0xcb007d, CODE_FOR_nearbyintv2sf2 },
  { 0xcb0080, CODE_FOR_nearbyintv8hf2 },
  { 0xcb0081, CODE_FOR_nearbyintv4sf2 },
  { 0xcb0082, CODE_FOR_nearbyintv2df2 },
  { 0xcb0084, CODE_FOR_nearbyintvnx8hf2 },
  { 0xcb0085, CODE_FOR_nearbyintvnx4sf2 },
  { 0xcb0086, CODE_FOR_nearbyintvnx2df2 },
  { 0xd30029, CODE_FOR_copysignsf3 },
  { 0xd3002a, CODE_FOR_copysigndf3 },
  { 0xd3007c, CODE_FOR_copysignv4hf3 },
  { 0xd3007d, CODE_FOR_copysignv2sf3 },
  { 0xd30080, CODE_FOR_copysignv8hf3 },
  { 0xd30081, CODE_FOR_copysignv4sf3 },
  { 0xd30082, CODE_FOR_copysignv2df3 },
  { 0xd30084, CODE_FOR_copysignvnx8hf3 },
  { 0xd30085, CODE_FOR_copysignvnx4sf3 },
  { 0xd30086, CODE_FOR_copysignvnx2df3 },
  { 0xd40029, CODE_FOR_xorsignsf3 },
  { 0xd4002a, CODE_FOR_xorsigndf3 },
  { 0xd4007c, CODE_FOR_xorsignv4hf3 },
  { 0xd4007d, CODE_FOR_xorsignv2sf3 },
  { 0xd40080, CODE_FOR_xorsignv8hf3 },
  { 0xd40081, CODE_FOR_xorsignv4sf3 },
  { 0xd40082, CODE_FOR_xorsignv2df3 },
  { 0xd40084, CODE_FOR_xorsignvnx8hf3 },
  { 0xd40085, CODE_FOR_xorsignvnx4sf3 },
  { 0xd40086, CODE_FOR_xorsignvnx2df3 },
  { 0xd50047, CODE_FOR_cadd90vnx16qi3 },
  { 0xd50048, CODE_FOR_cadd90vnx8hi3 },
  { 0xd50049, CODE_FOR_cadd90vnx4si3 },
  { 0xd5004a, CODE_FOR_cadd90vnx2di3 },
  { 0xd5007c, CODE_FOR_cadd90v4hf3 },
  { 0xd5007d, CODE_FOR_cadd90v2sf3 },
  { 0xd50080, CODE_FOR_cadd90v8hf3 },
  { 0xd50081, CODE_FOR_cadd90v4sf3 },
  { 0xd50082, CODE_FOR_cadd90v2df3 },
  { 0xd50084, CODE_FOR_cadd90vnx8hf3 },
  { 0xd50085, CODE_FOR_cadd90vnx4sf3 },
  { 0xd50086, CODE_FOR_cadd90vnx2df3 },
  { 0xd60047, CODE_FOR_cadd270vnx16qi3 },
  { 0xd60048, CODE_FOR_cadd270vnx8hi3 },
  { 0xd60049, CODE_FOR_cadd270vnx4si3 },
  { 0xd6004a, CODE_FOR_cadd270vnx2di3 },
  { 0xd6007c, CODE_FOR_cadd270v4hf3 },
  { 0xd6007d, CODE_FOR_cadd270v2sf3 },
  { 0xd60080, CODE_FOR_cadd270v8hf3 },
  { 0xd60081, CODE_FOR_cadd270v4sf3 },
  { 0xd60082, CODE_FOR_cadd270v2df3 },
  { 0xd60084, CODE_FOR_cadd270vnx8hf3 },
  { 0xd60085, CODE_FOR_cadd270vnx4sf3 },
  { 0xd60086, CODE_FOR_cadd270vnx2df3 },
  { 0xd70047, CODE_FOR_cmulvnx16qi3 },
  { 0xd70048, CODE_FOR_cmulvnx8hi3 },
  { 0xd70049, CODE_FOR_cmulvnx4si3 },
  { 0xd7004a, CODE_FOR_cmulvnx2di3 },
  { 0xd7007c, CODE_FOR_cmulv4hf3 },
  { 0xd7007d, CODE_FOR_cmulv2sf3 },
  { 0xd70080, CODE_FOR_cmulv8hf3 },
  { 0xd70081, CODE_FOR_cmulv4sf3 },
  { 0xd70082, CODE_FOR_cmulv2df3 },
  { 0xd70084, CODE_FOR_cmulvnx8hf3 },
  { 0xd70085, CODE_FOR_cmulvnx4sf3 },
  { 0xd70086, CODE_FOR_cmulvnx2df3 },
  { 0xd80047, CODE_FOR_cmul_conjvnx16qi3 },
  { 0xd80048, CODE_FOR_cmul_conjvnx8hi3 },
  { 0xd80049, CODE_FOR_cmul_conjvnx4si3 },
  { 0xd8004a, CODE_FOR_cmul_conjvnx2di3 },
  { 0xd8007c, CODE_FOR_cmul_conjv4hf3 },
  { 0xd8007d, CODE_FOR_cmul_conjv2sf3 },
  { 0xd80080, CODE_FOR_cmul_conjv8hf3 },
  { 0xd80081, CODE_FOR_cmul_conjv4sf3 },
  { 0xd80082, CODE_FOR_cmul_conjv2df3 },
  { 0xd80084, CODE_FOR_cmul_conjvnx8hf3 },
  { 0xd80085, CODE_FOR_cmul_conjvnx4sf3 },
  { 0xd80086, CODE_FOR_cmul_conjvnx2df3 },
  { 0xd90047, CODE_FOR_cmlavnx16qi4 },
  { 0xd90048, CODE_FOR_cmlavnx8hi4 },
  { 0xd90049, CODE_FOR_cmlavnx4si4 },
  { 0xd9004a, CODE_FOR_cmlavnx2di4 },
  { 0xd9007c, CODE_FOR_cmlav4hf4 },
  { 0xd9007d, CODE_FOR_cmlav2sf4 },
  { 0xd90080, CODE_FOR_cmlav8hf4 },
  { 0xd90081, CODE_FOR_cmlav4sf4 },
  { 0xd90082, CODE_FOR_cmlav2df4 },
  { 0xd90084, CODE_FOR_cmlavnx8hf4 },
  { 0xd90085, CODE_FOR_cmlavnx4sf4 },
  { 0xd90086, CODE_FOR_cmlavnx2df4 },
  { 0xda0047, CODE_FOR_cmla_conjvnx16qi4 },
  { 0xda0048, CODE_FOR_cmla_conjvnx8hi4 },
  { 0xda0049, CODE_FOR_cmla_conjvnx4si4 },
  { 0xda004a, CODE_FOR_cmla_conjvnx2di4 },
  { 0xda007c, CODE_FOR_cmla_conjv4hf4 },
  { 0xda007d, CODE_FOR_cmla_conjv2sf4 },
  { 0xda0080, CODE_FOR_cmla_conjv8hf4 },
  { 0xda0081, CODE_FOR_cmla_conjv4sf4 },
  { 0xda0082, CODE_FOR_cmla_conjv2df4 },
  { 0xda0084, CODE_FOR_cmla_conjvnx8hf4 },
  { 0xda0085, CODE_FOR_cmla_conjvnx4sf4 },
  { 0xda0086, CODE_FOR_cmla_conjvnx2df4 },
  { 0xdb0047, CODE_FOR_cmlsvnx16qi4 },
  { 0xdb0048, CODE_FOR_cmlsvnx8hi4 },
  { 0xdb0049, CODE_FOR_cmlsvnx4si4 },
  { 0xdb004a, CODE_FOR_cmlsvnx2di4 },
  { 0xdb007c, CODE_FOR_cmlsv4hf4 },
  { 0xdb007d, CODE_FOR_cmlsv2sf4 },
  { 0xdb0080, CODE_FOR_cmlsv8hf4 },
  { 0xdb0081, CODE_FOR_cmlsv4sf4 },
  { 0xdb0082, CODE_FOR_cmlsv2df4 },
  { 0xdb0084, CODE_FOR_cmlsvnx8hf4 },
  { 0xdb0085, CODE_FOR_cmlsvnx4sf4 },
  { 0xdb0086, CODE_FOR_cmlsvnx2df4 },
  { 0xdc0047, CODE_FOR_cmls_conjvnx16qi4 },
  { 0xdc0048, CODE_FOR_cmls_conjvnx8hi4 },
  { 0xdc0049, CODE_FOR_cmls_conjvnx4si4 },
  { 0xdc004a, CODE_FOR_cmls_conjvnx2di4 },
  { 0xdc007c, CODE_FOR_cmls_conjv4hf4 },
  { 0xdc007d, CODE_FOR_cmls_conjv2sf4 },
  { 0xdc0080, CODE_FOR_cmls_conjv8hf4 },
  { 0xdc0081, CODE_FOR_cmls_conjv4sf4 },
  { 0xdc0082, CODE_FOR_cmls_conjv2df4 },
  { 0xdc0084, CODE_FOR_cmls_conjvnx8hf4 },
  { 0xdc0085, CODE_FOR_cmls_conjvnx4sf4 },
  { 0xdc0086, CODE_FOR_cmls_conjvnx2df4 },
  { 0xef0029, CODE_FOR_rsqrtsf2 },
  { 0xef002a, CODE_FOR_rsqrtdf2 },
  { 0xef007d, CODE_FOR_rsqrtv2sf2 },
  { 0xef0081, CODE_FOR_rsqrtv4sf2 },
  { 0xef0082, CODE_FOR_rsqrtv2df2 },
  { 0xef0085, CODE_FOR_rsqrtvnx4sf2 },
  { 0xef0086, CODE_FOR_rsqrtvnx2df2 },
  { 0xf1007d, CODE_FOR_signbitv2sf2 },
  { 0xf10081, CODE_FOR_signbitv4sf2 },
  { 0xfb0027, CODE_FOR_fmaxhf3 },
  { 0xfb0029, CODE_FOR_fmaxsf3 },
  { 0xfb002a, CODE_FOR_fmaxdf3 },
  { 0xfb007c, CODE_FOR_fmaxv4hf3 },
  { 0xfb007d, CODE_FOR_fmaxv2sf3 },
  { 0xfb0080, CODE_FOR_fmaxv8hf3 },
  { 0xfb0081, CODE_FOR_fmaxv4sf3 },
  { 0xfb0082, CODE_FOR_fmaxv2df3 },
  { 0xfb0084, CODE_FOR_fmaxvnx8hf3 },
  { 0xfb0085, CODE_FOR_fmaxvnx4sf3 },
  { 0xfb0086, CODE_FOR_fmaxvnx2df3 },
  { 0xfc0027, CODE_FOR_fminhf3 },
  { 0xfc0029, CODE_FOR_fminsf3 },
  { 0xfc002a, CODE_FOR_fmindf3 },
  { 0xfc007c, CODE_FOR_fminv4hf3 },
  { 0xfc007d, CODE_FOR_fminv2sf3 },
  { 0xfc0080, CODE_FOR_fminv8hf3 },
  { 0xfc0081, CODE_FOR_fminv4sf3 },
  { 0xfc0082, CODE_FOR_fminv2df3 },
  { 0xfc0084, CODE_FOR_fminvnx8hf3 },
  { 0xfc0085, CODE_FOR_fminvnx4sf3 },
  { 0xfc0086, CODE_FOR_fminvnx2df3 },
  { 0xfd007c, CODE_FOR_reduc_fmax_scal_v4hf },
  { 0xfd007d, CODE_FOR_reduc_fmax_scal_v2sf },
  { 0xfd0080, CODE_FOR_reduc_fmax_scal_v8hf },
  { 0xfd0081, CODE_FOR_reduc_fmax_scal_v4sf },
  { 0xfd0082, CODE_FOR_reduc_fmax_scal_v2df },
  { 0xfd0084, CODE_FOR_reduc_fmax_scal_vnx8hf },
  { 0xfd0085, CODE_FOR_reduc_fmax_scal_vnx4sf },
  { 0xfd0086, CODE_FOR_reduc_fmax_scal_vnx2df },
  { 0xfe007c, CODE_FOR_reduc_fmin_scal_v4hf },
  { 0xfe007d, CODE_FOR_reduc_fmin_scal_v2sf },
  { 0xfe0080, CODE_FOR_reduc_fmin_scal_v8hf },
  { 0xfe0081, CODE_FOR_reduc_fmin_scal_v4sf },
  { 0xfe0082, CODE_FOR_reduc_fmin_scal_v2df },
  { 0xfe0084, CODE_FOR_reduc_fmin_scal_vnx8hf },
  { 0xfe0085, CODE_FOR_reduc_fmin_scal_vnx4sf },
  { 0xfe0086, CODE_FOR_reduc_fmin_scal_vnx2df },
  { 0xff0040, CODE_FOR_reduc_smax_scal_v8qi },
  { 0xff0041, CODE_FOR_reduc_smax_scal_v4hi },
  { 0xff0042, CODE_FOR_reduc_smax_scal_v2si },
  { 0xff0043, CODE_FOR_reduc_smax_scal_v16qi },
  { 0xff0044, CODE_FOR_reduc_smax_scal_v8hi },
  { 0xff0045, CODE_FOR_reduc_smax_scal_v4si },
  { 0xff0047, CODE_FOR_reduc_smax_scal_vnx16qi },
  { 0xff0048, CODE_FOR_reduc_smax_scal_vnx8hi },
  { 0xff0049, CODE_FOR_reduc_smax_scal_vnx4si },
  { 0xff004a, CODE_FOR_reduc_smax_scal_vnx2di },
  { 0xff007c, CODE_FOR_reduc_smax_scal_v4hf },
  { 0xff007d, CODE_FOR_reduc_smax_scal_v2sf },
  { 0xff0080, CODE_FOR_reduc_smax_scal_v8hf },
  { 0xff0081, CODE_FOR_reduc_smax_scal_v4sf },
  { 0xff0082, CODE_FOR_reduc_smax_scal_v2df },
  { 0xff0084, CODE_FOR_reduc_smax_scal_vnx8hf },
  { 0xff0085, CODE_FOR_reduc_smax_scal_vnx4sf },
  { 0xff0086, CODE_FOR_reduc_smax_scal_vnx2df },
  { 0x1000040, CODE_FOR_reduc_smin_scal_v8qi },
  { 0x1000041, CODE_FOR_reduc_smin_scal_v4hi },
  { 0x1000042, CODE_FOR_reduc_smin_scal_v2si },
  { 0x1000043, CODE_FOR_reduc_smin_scal_v16qi },
  { 0x1000044, CODE_FOR_reduc_smin_scal_v8hi },
  { 0x1000045, CODE_FOR_reduc_smin_scal_v4si },
  { 0x1000047, CODE_FOR_reduc_smin_scal_vnx16qi },
  { 0x1000048, CODE_FOR_reduc_smin_scal_vnx8hi },
  { 0x1000049, CODE_FOR_reduc_smin_scal_vnx4si },
  { 0x100004a, CODE_FOR_reduc_smin_scal_vnx2di },
  { 0x100007c, CODE_FOR_reduc_smin_scal_v4hf },
  { 0x100007d, CODE_FOR_reduc_smin_scal_v2sf },
  { 0x1000080, CODE_FOR_reduc_smin_scal_v8hf },
  { 0x1000081, CODE_FOR_reduc_smin_scal_v4sf },
  { 0x1000082, CODE_FOR_reduc_smin_scal_v2df },
  { 0x1000084, CODE_FOR_reduc_smin_scal_vnx8hf },
  { 0x1000085, CODE_FOR_reduc_smin_scal_vnx4sf },
  { 0x1000086, CODE_FOR_reduc_smin_scal_vnx2df },
  { 0x1010040, CODE_FOR_reduc_plus_scal_v8qi },
  { 0x1010041, CODE_FOR_reduc_plus_scal_v4hi },
  { 0x1010042, CODE_FOR_reduc_plus_scal_v2si },
  { 0x1010043, CODE_FOR_reduc_plus_scal_v16qi },
  { 0x1010044, CODE_FOR_reduc_plus_scal_v8hi },
  { 0x1010045, CODE_FOR_reduc_plus_scal_v4si },
  { 0x1010046, CODE_FOR_reduc_plus_scal_v2di },
  { 0x1010047, CODE_FOR_reduc_plus_scal_vnx16qi },
  { 0x1010048, CODE_FOR_reduc_plus_scal_vnx8hi },
  { 0x1010049, CODE_FOR_reduc_plus_scal_vnx4si },
  { 0x101004a, CODE_FOR_reduc_plus_scal_vnx2di },
  { 0x101007d, CODE_FOR_reduc_plus_scal_v2sf },
  { 0x1010081, CODE_FOR_reduc_plus_scal_v4sf },
  { 0x1010082, CODE_FOR_reduc_plus_scal_v2df },
  { 0x1010084, CODE_FOR_reduc_plus_scal_vnx8hf },
  { 0x1010085, CODE_FOR_reduc_plus_scal_vnx4sf },
  { 0x1010086, CODE_FOR_reduc_plus_scal_vnx2df },
  { 0x1020040, CODE_FOR_reduc_umax_scal_v8qi },
  { 0x1020041, CODE_FOR_reduc_umax_scal_v4hi },
  { 0x1020042, CODE_FOR_reduc_umax_scal_v2si },
  { 0x1020043, CODE_FOR_reduc_umax_scal_v16qi },
  { 0x1020044, CODE_FOR_reduc_umax_scal_v8hi },
  { 0x1020045, CODE_FOR_reduc_umax_scal_v4si },
  { 0x1020047, CODE_FOR_reduc_umax_scal_vnx16qi },
  { 0x1020048, CODE_FOR_reduc_umax_scal_vnx8hi },
  { 0x1020049, CODE_FOR_reduc_umax_scal_vnx4si },
  { 0x102004a, CODE_FOR_reduc_umax_scal_vnx2di },
  { 0x1030040, CODE_FOR_reduc_umin_scal_v8qi },
  { 0x1030041, CODE_FOR_reduc_umin_scal_v4hi },
  { 0x1030042, CODE_FOR_reduc_umin_scal_v2si },
  { 0x1030043, CODE_FOR_reduc_umin_scal_v16qi },
  { 0x1030044, CODE_FOR_reduc_umin_scal_v8hi },
  { 0x1030045, CODE_FOR_reduc_umin_scal_v4si },
  { 0x1030047, CODE_FOR_reduc_umin_scal_vnx16qi },
  { 0x1030048, CODE_FOR_reduc_umin_scal_vnx8hi },
  { 0x1030049, CODE_FOR_reduc_umin_scal_vnx4si },
  { 0x103004a, CODE_FOR_reduc_umin_scal_vnx2di },
  { 0x1040047, CODE_FOR_reduc_and_scal_vnx16qi },
  { 0x1040048, CODE_FOR_reduc_and_scal_vnx8hi },
  { 0x1040049, CODE_FOR_reduc_and_scal_vnx4si },
  { 0x104004a, CODE_FOR_reduc_and_scal_vnx2di },
  { 0x1050047, CODE_FOR_reduc_ior_scal_vnx16qi },
  { 0x1050048, CODE_FOR_reduc_ior_scal_vnx8hi },
  { 0x1050049, CODE_FOR_reduc_ior_scal_vnx4si },
  { 0x105004a, CODE_FOR_reduc_ior_scal_vnx2di },
  { 0x1060047, CODE_FOR_reduc_xor_scal_vnx16qi },
  { 0x1060048, CODE_FOR_reduc_xor_scal_vnx8hi },
  { 0x1060049, CODE_FOR_reduc_xor_scal_vnx4si },
  { 0x106004a, CODE_FOR_reduc_xor_scal_vnx2di },
  { 0x1070084, CODE_FOR_fold_left_plus_vnx8hf },
  { 0x1070085, CODE_FOR_fold_left_plus_vnx4sf },
  { 0x1070086, CODE_FOR_fold_left_plus_vnx2df },
  { 0x1080084, CODE_FOR_mask_fold_left_plus_vnx8hf },
  { 0x1080085, CODE_FOR_mask_fold_left_plus_vnx4sf },
  { 0x1080086, CODE_FOR_mask_fold_left_plus_vnx2df },
  { 0x1090047, CODE_FOR_extract_last_vnx16qi },
  { 0x1090048, CODE_FOR_extract_last_vnx8hi },
  { 0x1090049, CODE_FOR_extract_last_vnx4si },
  { 0x109004a, CODE_FOR_extract_last_vnx2di },
  { 0x1090083, CODE_FOR_extract_last_vnx8bf },
  { 0x1090084, CODE_FOR_extract_last_vnx8hf },
  { 0x1090085, CODE_FOR_extract_last_vnx4sf },
  { 0x1090086, CODE_FOR_extract_last_vnx2df },
  { 0x10a0047, CODE_FOR_fold_extract_last_vnx16qi },
  { 0x10a0048, CODE_FOR_fold_extract_last_vnx8hi },
  { 0x10a0049, CODE_FOR_fold_extract_last_vnx4si },
  { 0x10a004a, CODE_FOR_fold_extract_last_vnx2di },
  { 0x10a0083, CODE_FOR_fold_extract_last_vnx8bf },
  { 0x10a0084, CODE_FOR_fold_extract_last_vnx8hf },
  { 0x10a0085, CODE_FOR_fold_extract_last_vnx4sf },
  { 0x10a0086, CODE_FOR_fold_extract_last_vnx2df },
  { 0x10b0040, CODE_FOR_avgv8qi3_floor },
  { 0x10b0041, CODE_FOR_avgv4hi3_floor },
  { 0x10b0042, CODE_FOR_avgv2si3_floor },
  { 0x10b0043, CODE_FOR_avgv16qi3_floor },
  { 0x10b0044, CODE_FOR_avgv8hi3_floor },
  { 0x10b0045, CODE_FOR_avgv4si3_floor },
  { 0x10b0047, CODE_FOR_avgvnx16qi3_floor },
  { 0x10b0048, CODE_FOR_avgvnx8hi3_floor },
  { 0x10b0049, CODE_FOR_avgvnx4si3_floor },
  { 0x10b004a, CODE_FOR_avgvnx2di3_floor },
  { 0x10c0040, CODE_FOR_uavgv8qi3_floor },
  { 0x10c0041, CODE_FOR_uavgv4hi3_floor },
  { 0x10c0042, CODE_FOR_uavgv2si3_floor },
  { 0x10c0043, CODE_FOR_uavgv16qi3_floor },
  { 0x10c0044, CODE_FOR_uavgv8hi3_floor },
  { 0x10c0045, CODE_FOR_uavgv4si3_floor },
  { 0x10c0047, CODE_FOR_uavgvnx16qi3_floor },
  { 0x10c0048, CODE_FOR_uavgvnx8hi3_floor },
  { 0x10c0049, CODE_FOR_uavgvnx4si3_floor },
  { 0x10c004a, CODE_FOR_uavgvnx2di3_floor },
  { 0x10d0040, CODE_FOR_avgv8qi3_ceil },
  { 0x10d0041, CODE_FOR_avgv4hi3_ceil },
  { 0x10d0042, CODE_FOR_avgv2si3_ceil },
  { 0x10d0043, CODE_FOR_avgv16qi3_ceil },
  { 0x10d0044, CODE_FOR_avgv8hi3_ceil },
  { 0x10d0045, CODE_FOR_avgv4si3_ceil },
  { 0x10d0047, CODE_FOR_avgvnx16qi3_ceil },
  { 0x10d0048, CODE_FOR_avgvnx8hi3_ceil },
  { 0x10d0049, CODE_FOR_avgvnx4si3_ceil },
  { 0x10d004a, CODE_FOR_avgvnx2di3_ceil },
  { 0x10e0040, CODE_FOR_uavgv8qi3_ceil },
  { 0x10e0041, CODE_FOR_uavgv4hi3_ceil },
  { 0x10e0042, CODE_FOR_uavgv2si3_ceil },
  { 0x10e0043, CODE_FOR_uavgv16qi3_ceil },
  { 0x10e0044, CODE_FOR_uavgv8hi3_ceil },
  { 0x10e0045, CODE_FOR_uavgv4si3_ceil },
  { 0x10e0047, CODE_FOR_uavgvnx16qi3_ceil },
  { 0x10e0048, CODE_FOR_uavgvnx8hi3_ceil },
  { 0x10e0049, CODE_FOR_uavgvnx4si3_ceil },
  { 0x10e004a, CODE_FOR_uavgvnx2di3_ceil },
  { 0x10f0040, CODE_FOR_sdot_prodv8qi },
  { 0x10f0043, CODE_FOR_sdot_prodv16qi },
  { 0x10f0047, CODE_FOR_sdot_prodvnx16qi },
  { 0x10f0048, CODE_FOR_sdot_prodvnx8hi },
  { 0x1100040, CODE_FOR_widen_ssumv8qi3 },
  { 0x1100041, CODE_FOR_widen_ssumv4hi3 },
  { 0x1100042, CODE_FOR_widen_ssumv2si3 },
  { 0x1100043, CODE_FOR_widen_ssumv16qi3 },
  { 0x1100044, CODE_FOR_widen_ssumv8hi3 },
  { 0x1100045, CODE_FOR_widen_ssumv4si3 },
  { 0x1110040, CODE_FOR_udot_prodv8qi },
  { 0x1110043, CODE_FOR_udot_prodv16qi },
  { 0x1110047, CODE_FOR_udot_prodvnx16qi },
  { 0x1110048, CODE_FOR_udot_prodvnx8hi },
  { 0x1120040, CODE_FOR_usdot_prodv8qi },
  { 0x1120043, CODE_FOR_usdot_prodv16qi },
  { 0x1120047, CODE_FOR_usdot_prodvnx16qi },
  { 0x1130040, CODE_FOR_widen_usumv8qi3 },
  { 0x1130041, CODE_FOR_widen_usumv4hi3 },
  { 0x1130042, CODE_FOR_widen_usumv2si3 },
  { 0x1130043, CODE_FOR_widen_usumv16qi3 },
  { 0x1130044, CODE_FOR_widen_usumv8hi3 },
  { 0x1130045, CODE_FOR_widen_usumv4si3 },
  { 0x1140043, CODE_FOR_usadv16qi },
  { 0x1140047, CODE_FOR_usadvnx16qi },
  { 0x1140048, CODE_FOR_usadvnx8hi },
  { 0x1150043, CODE_FOR_ssadv16qi },
  { 0x1150047, CODE_FOR_ssadvnx16qi },
  { 0x1150048, CODE_FOR_ssadvnx8hi },
  { 0x1160047, CODE_FOR_smulhsvnx16qi3 },
  { 0x1160048, CODE_FOR_smulhsvnx8hi3 },
  { 0x1160049, CODE_FOR_smulhsvnx4si3 },
  { 0x1170047, CODE_FOR_smulhrsvnx16qi3 },
  { 0x1170048, CODE_FOR_smulhrsvnx8hi3 },
  { 0x1170049, CODE_FOR_smulhrsvnx4si3 },
  { 0x1180047, CODE_FOR_umulhsvnx16qi3 },
  { 0x1180048, CODE_FOR_umulhsvnx8hi3 },
  { 0x1180049, CODE_FOR_umulhsvnx4si3 },
  { 0x1190047, CODE_FOR_umulhrsvnx16qi3 },
  { 0x1190048, CODE_FOR_umulhrsvnx8hi3 },
  { 0x1190049, CODE_FOR_umulhrsvnx4si3 },
  { 0x11a0047, CODE_FOR_sdiv_pow2vnx16qi3 },
  { 0x11a0048, CODE_FOR_sdiv_pow2vnx8hi3 },
  { 0x11a0049, CODE_FOR_sdiv_pow2vnx4si3 },
  { 0x11a004a, CODE_FOR_sdiv_pow2vnx2di3 },
  { 0x11a004b, CODE_FOR_sdiv_pow2vnx2qi3 },
  { 0x11a004c, CODE_FOR_sdiv_pow2vnx4qi3 },
  { 0x11a004d, CODE_FOR_sdiv_pow2vnx2hi3 },
  { 0x11a004e, CODE_FOR_sdiv_pow2vnx8qi3 },
  { 0x11a004f, CODE_FOR_sdiv_pow2vnx4hi3 },
  { 0x11a0050, CODE_FOR_sdiv_pow2vnx2si3 },
  { 0x11b0086, CODE_FOR_vec_pack_sfix_trunc_vnx2df },
  { 0x11d0010, CODE_FOR_vec_pack_trunc_di },
  { 0x11d002a, CODE_FOR_vec_pack_trunc_df },
  { 0x11d003d, CODE_FOR_vec_pack_trunc_vnx8bi },
  { 0x11d003e, CODE_FOR_vec_pack_trunc_vnx4bi },
  { 0x11d003f, CODE_FOR_vec_pack_trunc_vnx2bi },
  { 0x11d0041, CODE_FOR_vec_pack_trunc_v4hi },
  { 0x11d0042, CODE_FOR_vec_pack_trunc_v2si },
  { 0x11d0044, CODE_FOR_vec_pack_trunc_v8hi },
  { 0x11d0045, CODE_FOR_vec_pack_trunc_v4si },
  { 0x11d0046, CODE_FOR_vec_pack_trunc_v2di },
  { 0x11d0048, CODE_FOR_vec_pack_trunc_vnx8hi },
  { 0x11d0049, CODE_FOR_vec_pack_trunc_vnx4si },
  { 0x11d004a, CODE_FOR_vec_pack_trunc_vnx2di },
  { 0x11d0082, CODE_FOR_vec_pack_trunc_v2df },
  { 0x11d0085, CODE_FOR_vec_pack_trunc_vnx4sf },
  { 0x11d0086, CODE_FOR_vec_pack_trunc_vnx2df },
  { 0x11e0086, CODE_FOR_vec_pack_ufix_trunc_vnx2df },
  { 0x1230040, CODE_FOR_vec_permv8qi },
  { 0x1230043, CODE_FOR_vec_permv16qi },
  { 0x1230047, CODE_FOR_vec_permvnx16qi },
  { 0x1230048, CODE_FOR_vec_permvnx8hi },
  { 0x1230049, CODE_FOR_vec_permvnx4si },
  { 0x123004a, CODE_FOR_vec_permvnx2di },
  { 0x1230083, CODE_FOR_vec_permvnx8bf },
  { 0x1230084, CODE_FOR_vec_permvnx8hf },
  { 0x1230085, CODE_FOR_vec_permvnx4sf },
  { 0x1230086, CODE_FOR_vec_permvnx2df },
  { 0x1250040, CODE_FOR_vec_setv8qi },
  { 0x1250041, CODE_FOR_vec_setv4hi },
  { 0x1250042, CODE_FOR_vec_setv2si },
  { 0x1250043, CODE_FOR_vec_setv16qi },
  { 0x1250044, CODE_FOR_vec_setv8hi },
  { 0x1250045, CODE_FOR_vec_setv4si },
  { 0x1250046, CODE_FOR_vec_setv2di },
  { 0x125007b, CODE_FOR_vec_setv4bf },
  { 0x125007c, CODE_FOR_vec_setv4hf },
  { 0x125007d, CODE_FOR_vec_setv2sf },
  { 0x125007f, CODE_FOR_vec_setv8bf },
  { 0x1250080, CODE_FOR_vec_setv8hf },
  { 0x1250081, CODE_FOR_vec_setv4sf },
  { 0x1250082, CODE_FOR_vec_setv2df },
  { 0x1270040, CODE_FOR_vec_shr_v8qi },
  { 0x1270041, CODE_FOR_vec_shr_v4hi },
  { 0x1270042, CODE_FOR_vec_shr_v2si },
  { 0x127007b, CODE_FOR_vec_shr_v4bf },
  { 0x127007c, CODE_FOR_vec_shr_v4hf },
  { 0x127007d, CODE_FOR_vec_shr_v2sf },
  { 0x12c0049, CODE_FOR_vec_unpacks_float_hi_vnx4si },
  { 0x12d0049, CODE_FOR_vec_unpacks_float_lo_vnx4si },
  { 0x12e003c, CODE_FOR_vec_unpacks_hi_vnx16bi },
  { 0x12e003d, CODE_FOR_vec_unpacks_hi_vnx8bi },
  { 0x12e003e, CODE_FOR_vec_unpacks_hi_vnx4bi },
  { 0x12e0043, CODE_FOR_vec_unpacks_hi_v16qi },
  { 0x12e0044, CODE_FOR_vec_unpacks_hi_v8hi },
  { 0x12e0045, CODE_FOR_vec_unpacks_hi_v4si },
  { 0x12e0047, CODE_FOR_vec_unpacks_hi_vnx16qi },
  { 0x12e0048, CODE_FOR_vec_unpacks_hi_vnx8hi },
  { 0x12e0049, CODE_FOR_vec_unpacks_hi_vnx4si },
  { 0x12e0080, CODE_FOR_vec_unpacks_hi_v8hf },
  { 0x12e0081, CODE_FOR_vec_unpacks_hi_v4sf },
  { 0x12e0084, CODE_FOR_vec_unpacks_hi_vnx8hf },
  { 0x12e0085, CODE_FOR_vec_unpacks_hi_vnx4sf },
  { 0x12f003c, CODE_FOR_vec_unpacks_lo_vnx16bi },
  { 0x12f003d, CODE_FOR_vec_unpacks_lo_vnx8bi },
  { 0x12f003e, CODE_FOR_vec_unpacks_lo_vnx4bi },
  { 0x12f0043, CODE_FOR_vec_unpacks_lo_v16qi },
  { 0x12f0044, CODE_FOR_vec_unpacks_lo_v8hi },
  { 0x12f0045, CODE_FOR_vec_unpacks_lo_v4si },
  { 0x12f0047, CODE_FOR_vec_unpacks_lo_vnx16qi },
  { 0x12f0048, CODE_FOR_vec_unpacks_lo_vnx8hi },
  { 0x12f0049, CODE_FOR_vec_unpacks_lo_vnx4si },
  { 0x12f0080, CODE_FOR_vec_unpacks_lo_v8hf },
  { 0x12f0081, CODE_FOR_vec_unpacks_lo_v4sf },
  { 0x12f0084, CODE_FOR_vec_unpacks_lo_vnx8hf },
  { 0x12f0085, CODE_FOR_vec_unpacks_lo_vnx4sf },
  { 0x1320049, CODE_FOR_vec_unpacku_float_hi_vnx4si },
  { 0x1330049, CODE_FOR_vec_unpacku_float_lo_vnx4si },
  { 0x134003c, CODE_FOR_vec_unpacku_hi_vnx16bi },
  { 0x134003d, CODE_FOR_vec_unpacku_hi_vnx8bi },
  { 0x134003e, CODE_FOR_vec_unpacku_hi_vnx4bi },
  { 0x1340043, CODE_FOR_vec_unpacku_hi_v16qi },
  { 0x1340044, CODE_FOR_vec_unpacku_hi_v8hi },
  { 0x1340045, CODE_FOR_vec_unpacku_hi_v4si },
  { 0x1340047, CODE_FOR_vec_unpacku_hi_vnx16qi },
  { 0x1340048, CODE_FOR_vec_unpacku_hi_vnx8hi },
  { 0x1340049, CODE_FOR_vec_unpacku_hi_vnx4si },
  { 0x135003c, CODE_FOR_vec_unpacku_lo_vnx16bi },
  { 0x135003d, CODE_FOR_vec_unpacku_lo_vnx8bi },
  { 0x135003e, CODE_FOR_vec_unpacku_lo_vnx4bi },
  { 0x1350043, CODE_FOR_vec_unpacku_lo_v16qi },
  { 0x1350044, CODE_FOR_vec_unpacku_lo_v8hi },
  { 0x1350045, CODE_FOR_vec_unpacku_lo_v4si },
  { 0x1350047, CODE_FOR_vec_unpacku_lo_vnx16qi },
  { 0x1350048, CODE_FOR_vec_unpacku_lo_vnx8hi },
  { 0x1350049, CODE_FOR_vec_unpacku_lo_vnx4si },
  { 0x1370043, CODE_FOR_vec_widen_smult_hi_v16qi },
  { 0x1370044, CODE_FOR_vec_widen_smult_hi_v8hi },
  { 0x1370045, CODE_FOR_vec_widen_smult_hi_v4si },
  { 0x1380043, CODE_FOR_vec_widen_smult_lo_v16qi },
  { 0x1380044, CODE_FOR_vec_widen_smult_lo_v8hi },
  { 0x1380045, CODE_FOR_vec_widen_smult_lo_v4si },
  { 0x13a0043, CODE_FOR_vec_widen_ssubl_hi_v16qi },
  { 0x13a0044, CODE_FOR_vec_widen_ssubl_hi_v8hi },
  { 0x13a0045, CODE_FOR_vec_widen_ssubl_hi_v4si },
  { 0x13b0043, CODE_FOR_vec_widen_ssubl_lo_v16qi },
  { 0x13b0044, CODE_FOR_vec_widen_ssubl_lo_v8hi },
  { 0x13b0045, CODE_FOR_vec_widen_ssubl_lo_v4si },
  { 0x13c0043, CODE_FOR_vec_widen_saddl_hi_v16qi },
  { 0x13c0044, CODE_FOR_vec_widen_saddl_hi_v8hi },
  { 0x13c0045, CODE_FOR_vec_widen_saddl_hi_v4si },
  { 0x13d0043, CODE_FOR_vec_widen_saddl_lo_v16qi },
  { 0x13d0044, CODE_FOR_vec_widen_saddl_lo_v8hi },
  { 0x13d0045, CODE_FOR_vec_widen_saddl_lo_v4si },
  { 0x13e0043, CODE_FOR_vec_widen_sshiftl_hi_v16qi },
  { 0x13e0044, CODE_FOR_vec_widen_sshiftl_hi_v8hi },
  { 0x13e0045, CODE_FOR_vec_widen_sshiftl_hi_v4si },
  { 0x13f0043, CODE_FOR_vec_widen_sshiftl_lo_v16qi },
  { 0x13f0044, CODE_FOR_vec_widen_sshiftl_lo_v8hi },
  { 0x13f0045, CODE_FOR_vec_widen_sshiftl_lo_v4si },
  { 0x1410043, CODE_FOR_vec_widen_umult_hi_v16qi },
  { 0x1410044, CODE_FOR_vec_widen_umult_hi_v8hi },
  { 0x1410045, CODE_FOR_vec_widen_umult_hi_v4si },
  { 0x1420043, CODE_FOR_vec_widen_umult_lo_v16qi },
  { 0x1420044, CODE_FOR_vec_widen_umult_lo_v8hi },
  { 0x1420045, CODE_FOR_vec_widen_umult_lo_v4si },
  { 0x1440043, CODE_FOR_vec_widen_ushiftl_hi_v16qi },
  { 0x1440044, CODE_FOR_vec_widen_ushiftl_hi_v8hi },
  { 0x1440045, CODE_FOR_vec_widen_ushiftl_hi_v4si },
  { 0x1450043, CODE_FOR_vec_widen_ushiftl_lo_v16qi },
  { 0x1450044, CODE_FOR_vec_widen_ushiftl_lo_v8hi },
  { 0x1450045, CODE_FOR_vec_widen_ushiftl_lo_v4si },
  { 0x1460043, CODE_FOR_vec_widen_usubl_hi_v16qi },
  { 0x1460044, CODE_FOR_vec_widen_usubl_hi_v8hi },
  { 0x1460045, CODE_FOR_vec_widen_usubl_hi_v4si },
  { 0x1470043, CODE_FOR_vec_widen_usubl_lo_v16qi },
  { 0x1470044, CODE_FOR_vec_widen_usubl_lo_v8hi },
  { 0x1470045, CODE_FOR_vec_widen_usubl_lo_v4si },
  { 0x1480043, CODE_FOR_vec_widen_uaddl_hi_v16qi },
  { 0x1480044, CODE_FOR_vec_widen_uaddl_hi_v8hi },
  { 0x1480045, CODE_FOR_vec_widen_uaddl_hi_v4si },
  { 0x1490043, CODE_FOR_vec_widen_uaddl_lo_v16qi },
  { 0x1490044, CODE_FOR_vec_widen_uaddl_lo_v8hi },
  { 0x1490045, CODE_FOR_vec_widen_uaddl_lo_v4si },
  { 0x154000d, CODE_FOR_atomic_add_fetchqi },
  { 0x154000e, CODE_FOR_atomic_add_fetchhi },
  { 0x154000f, CODE_FOR_atomic_add_fetchsi },
  { 0x1540010, CODE_FOR_atomic_add_fetchdi },
  { 0x155000d, CODE_FOR_atomic_addqi },
  { 0x155000e, CODE_FOR_atomic_addhi },
  { 0x155000f, CODE_FOR_atomic_addsi },
  { 0x1550010, CODE_FOR_atomic_adddi },
  { 0x156000d, CODE_FOR_atomic_and_fetchqi },
  { 0x156000e, CODE_FOR_atomic_and_fetchhi },
  { 0x156000f, CODE_FOR_atomic_and_fetchsi },
  { 0x1560010, CODE_FOR_atomic_and_fetchdi },
  { 0x157000d, CODE_FOR_atomic_andqi },
  { 0x157000e, CODE_FOR_atomic_andhi },
  { 0x157000f, CODE_FOR_atomic_andsi },
  { 0x1570010, CODE_FOR_atomic_anddi },
  { 0x15b000d, CODE_FOR_atomic_compare_and_swapqi },
  { 0x15b000e, CODE_FOR_atomic_compare_and_swaphi },
  { 0x15b000f, CODE_FOR_atomic_compare_and_swapsi },
  { 0x15b0010, CODE_FOR_atomic_compare_and_swapdi },
  { 0x15b0011, CODE_FOR_atomic_compare_and_swapti },
  { 0x15c000d, CODE_FOR_atomic_exchangeqi },
  { 0x15c000e, CODE_FOR_atomic_exchangehi },
  { 0x15c000f, CODE_FOR_atomic_exchangesi },
  { 0x15c0010, CODE_FOR_atomic_exchangedi },
  { 0x15d000d, CODE_FOR_atomic_fetch_addqi },
  { 0x15d000e, CODE_FOR_atomic_fetch_addhi },
  { 0x15d000f, CODE_FOR_atomic_fetch_addsi },
  { 0x15d0010, CODE_FOR_atomic_fetch_adddi },
  { 0x15e000d, CODE_FOR_atomic_fetch_andqi },
  { 0x15e000e, CODE_FOR_atomic_fetch_andhi },
  { 0x15e000f, CODE_FOR_atomic_fetch_andsi },
  { 0x15e0010, CODE_FOR_atomic_fetch_anddi },
  { 0x15f000d, CODE_FOR_atomic_fetch_nandqi },
  { 0x15f000e, CODE_FOR_atomic_fetch_nandhi },
  { 0x15f000f, CODE_FOR_atomic_fetch_nandsi },
  { 0x15f0010, CODE_FOR_atomic_fetch_nanddi },
  { 0x160000d, CODE_FOR_atomic_fetch_orqi },
  { 0x160000e, CODE_FOR_atomic_fetch_orhi },
  { 0x160000f, CODE_FOR_atomic_fetch_orsi },
  { 0x1600010, CODE_FOR_atomic_fetch_ordi },
  { 0x161000d, CODE_FOR_atomic_fetch_subqi },
  { 0x161000e, CODE_FOR_atomic_fetch_subhi },
  { 0x161000f, CODE_FOR_atomic_fetch_subsi },
  { 0x1610010, CODE_FOR_atomic_fetch_subdi },
  { 0x162000d, CODE_FOR_atomic_fetch_xorqi },
  { 0x162000e, CODE_FOR_atomic_fetch_xorhi },
  { 0x162000f, CODE_FOR_atomic_fetch_xorsi },
  { 0x1620010, CODE_FOR_atomic_fetch_xordi },
  { 0x163000d, CODE_FOR_atomic_loadqi },
  { 0x163000e, CODE_FOR_atomic_loadhi },
  { 0x163000f, CODE_FOR_atomic_loadsi },
  { 0x1630010, CODE_FOR_atomic_loaddi },
  { 0x164000d, CODE_FOR_atomic_nand_fetchqi },
  { 0x164000e, CODE_FOR_atomic_nand_fetchhi },
  { 0x164000f, CODE_FOR_atomic_nand_fetchsi },
  { 0x1640010, CODE_FOR_atomic_nand_fetchdi },
  { 0x165000d, CODE_FOR_atomic_nandqi },
  { 0x165000e, CODE_FOR_atomic_nandhi },
  { 0x165000f, CODE_FOR_atomic_nandsi },
  { 0x1650010, CODE_FOR_atomic_nanddi },
  { 0x166000d, CODE_FOR_atomic_or_fetchqi },
  { 0x166000e, CODE_FOR_atomic_or_fetchhi },
  { 0x166000f, CODE_FOR_atomic_or_fetchsi },
  { 0x1660010, CODE_FOR_atomic_or_fetchdi },
  { 0x167000d, CODE_FOR_atomic_orqi },
  { 0x167000e, CODE_FOR_atomic_orhi },
  { 0x167000f, CODE_FOR_atomic_orsi },
  { 0x1670010, CODE_FOR_atomic_ordi },
  { 0x168000d, CODE_FOR_atomic_storeqi },
  { 0x168000e, CODE_FOR_atomic_storehi },
  { 0x168000f, CODE_FOR_atomic_storesi },
  { 0x1680010, CODE_FOR_atomic_storedi },
  { 0x169000d, CODE_FOR_atomic_sub_fetchqi },
  { 0x169000e, CODE_FOR_atomic_sub_fetchhi },
  { 0x169000f, CODE_FOR_atomic_sub_fetchsi },
  { 0x1690010, CODE_FOR_atomic_sub_fetchdi },
  { 0x16a000d, CODE_FOR_atomic_subqi },
  { 0x16a000e, CODE_FOR_atomic_subhi },
  { 0x16a000f, CODE_FOR_atomic_subsi },
  { 0x16a0010, CODE_FOR_atomic_subdi },
  { 0x16b000d, CODE_FOR_atomic_xor_fetchqi },
  { 0x16b000e, CODE_FOR_atomic_xor_fetchhi },
  { 0x16b000f, CODE_FOR_atomic_xor_fetchsi },
  { 0x16b0010, CODE_FOR_atomic_xor_fetchdi },
  { 0x16c000d, CODE_FOR_atomic_xorqi },
  { 0x16c000e, CODE_FOR_atomic_xorhi },
  { 0x16c000f, CODE_FOR_atomic_xorsi },
  { 0x16c0010, CODE_FOR_atomic_xordi },
  { 0x1720010, CODE_FOR_get_thread_pointerdi },
  { 0x174000f, CODE_FOR_check_raw_ptrssi },
  { 0x1740010, CODE_FOR_check_raw_ptrsdi },
  { 0x175000f, CODE_FOR_check_war_ptrssi },
  { 0x1750010, CODE_FOR_check_war_ptrsdi },
  { 0x176003c, CODE_FOR_vec_duplicatevnx16bi },
  { 0x176003d, CODE_FOR_vec_duplicatevnx8bi },
  { 0x176003e, CODE_FOR_vec_duplicatevnx4bi },
  { 0x176003f, CODE_FOR_vec_duplicatevnx2bi },
  { 0x1760047, CODE_FOR_vec_duplicatevnx16qi },
  { 0x1760048, CODE_FOR_vec_duplicatevnx8hi },
  { 0x1760049, CODE_FOR_vec_duplicatevnx4si },
  { 0x176004a, CODE_FOR_vec_duplicatevnx2di },
  { 0x176004b, CODE_FOR_vec_duplicatevnx2qi },
  { 0x176004c, CODE_FOR_vec_duplicatevnx4qi },
  { 0x176004d, CODE_FOR_vec_duplicatevnx2hi },
  { 0x176004e, CODE_FOR_vec_duplicatevnx8qi },
  { 0x176004f, CODE_FOR_vec_duplicatevnx4hi },
  { 0x1760050, CODE_FOR_vec_duplicatevnx2si },
  { 0x1760083, CODE_FOR_vec_duplicatevnx8bf },
  { 0x1760084, CODE_FOR_vec_duplicatevnx8hf },
  { 0x1760085, CODE_FOR_vec_duplicatevnx4sf },
  { 0x1760086, CODE_FOR_vec_duplicatevnx2df },
  { 0x1760087, CODE_FOR_vec_duplicatevnx2bf },
  { 0x1760088, CODE_FOR_vec_duplicatevnx2hf },
  { 0x1760089, CODE_FOR_vec_duplicatevnx4bf },
  { 0x176008a, CODE_FOR_vec_duplicatevnx4hf },
  { 0x176008b, CODE_FOR_vec_duplicatevnx2sf },
  { 0x1770047, CODE_FOR_vec_seriesvnx16qi },
  { 0x1770048, CODE_FOR_vec_seriesvnx8hi },
  { 0x1770049, CODE_FOR_vec_seriesvnx4si },
  { 0x177004a, CODE_FOR_vec_seriesvnx2di },
  { 0x177004b, CODE_FOR_vec_seriesvnx2qi },
  { 0x177004c, CODE_FOR_vec_seriesvnx4qi },
  { 0x177004d, CODE_FOR_vec_seriesvnx2hi },
  { 0x177004e, CODE_FOR_vec_seriesvnx8qi },
  { 0x177004f, CODE_FOR_vec_seriesvnx4hi },
  { 0x1770050, CODE_FOR_vec_seriesvnx2si },
  { 0x1780047, CODE_FOR_vec_shl_insert_vnx16qi },
  { 0x1780048, CODE_FOR_vec_shl_insert_vnx8hi },
  { 0x1780049, CODE_FOR_vec_shl_insert_vnx4si },
  { 0x178004a, CODE_FOR_vec_shl_insert_vnx2di },
  { 0x1780083, CODE_FOR_vec_shl_insert_vnx8bf },
  { 0x1780084, CODE_FOR_vec_shl_insert_vnx8hf },
  { 0x1780085, CODE_FOR_vec_shl_insert_vnx4sf },
  { 0x1780086, CODE_FOR_vec_shl_insert_vnx2df },
};

void
init_all_optabs (struct target_optabs *optabs)
{
  bool *ena = optabs->pat_enable;
  ena[0] = HAVE_extendqihi2;
  ena[1] = HAVE_extendqisi2;
  ena[2] = HAVE_extendqidi2;
  ena[3] = HAVE_extendhisi2;
  ena[4] = HAVE_extendhidi2;
  ena[5] = HAVE_extendsidi2;
  ena[6] = HAVE_extendhfsf2;
  ena[7] = HAVE_extendhfdf2;
  ena[8] = HAVE_extendsfdf2;
  ena[9] = HAVE_extendv8qiv8hi2;
  ena[10] = HAVE_extendv4hiv4si2;
  ena[11] = HAVE_extendv2siv2di2;
  ena[12] = HAVE_extendvnx2qivnx2di2;
  ena[13] = HAVE_extendvnx2qivnx2hi2;
  ena[14] = HAVE_extendvnx2qivnx2si2;
  ena[15] = HAVE_extendvnx4qivnx4si2;
  ena[16] = HAVE_extendvnx4qivnx4hi2;
  ena[17] = HAVE_extendvnx2hivnx2di2;
  ena[18] = HAVE_extendvnx2hivnx2si2;
  ena[19] = HAVE_extendvnx8qivnx8hi2;
  ena[20] = HAVE_extendvnx4hivnx4si2;
  ena[21] = HAVE_extendvnx2sivnx2di2;
  ena[22] = HAVE_truncsfhf2;
  ena[23] = HAVE_truncdfhf2;
  ena[24] = HAVE_truncdfsf2;
  ena[25] = HAVE_truncv8hiv8qi2;
  ena[26] = HAVE_truncv4siv4hi2;
  ena[27] = HAVE_truncv2div2si2;
  ena[28] = HAVE_truncvnx8hivnx8qi2;
  ena[29] = HAVE_truncvnx4sivnx4qi2;
  ena[30] = HAVE_truncvnx4sivnx4hi2;
  ena[31] = HAVE_truncvnx2divnx2qi2;
  ena[32] = HAVE_truncvnx2divnx2hi2;
  ena[33] = HAVE_truncvnx2divnx2si2;
  ena[34] = HAVE_truncvnx2hivnx2qi2;
  ena[35] = HAVE_truncvnx4hivnx4qi2;
  ena[36] = HAVE_truncvnx2sivnx2qi2;
  ena[37] = HAVE_truncvnx2sivnx2hi2;
  ena[38] = HAVE_zero_extendqihi2;
  ena[39] = HAVE_zero_extendqisi2;
  ena[40] = HAVE_zero_extendqidi2;
  ena[41] = HAVE_zero_extendhisi2;
  ena[42] = HAVE_zero_extendhidi2;
  ena[43] = HAVE_zero_extendsidi2;
  ena[44] = HAVE_zero_extendv8qiv8hi2;
  ena[45] = HAVE_zero_extendv4hiv4si2;
  ena[46] = HAVE_zero_extendv2siv2di2;
  ena[47] = HAVE_zero_extendvnx2qivnx2di2;
  ena[48] = HAVE_zero_extendvnx2qivnx2hi2;
  ena[49] = HAVE_zero_extendvnx2qivnx2si2;
  ena[50] = HAVE_zero_extendvnx4qivnx4si2;
  ena[51] = HAVE_zero_extendvnx4qivnx4hi2;
  ena[52] = HAVE_zero_extendvnx2hivnx2di2;
  ena[53] = HAVE_zero_extendvnx2hivnx2si2;
  ena[54] = HAVE_zero_extendvnx8qivnx8hi2;
  ena[55] = HAVE_zero_extendvnx4hivnx4si2;
  ena[56] = HAVE_zero_extendvnx2sivnx2di2;
  ena[57] = HAVE_fixv4hfv4hi2;
  ena[58] = HAVE_fixv2sfv2si2;
  ena[59] = HAVE_fixv8hfv8hi2;
  ena[60] = HAVE_fixv4sfv4si2;
  ena[61] = HAVE_fixv2dfv2di2;
  ena[62] = HAVE_fixunsv4hfv4hi2;
  ena[63] = HAVE_fixunsv2sfv2si2;
  ena[64] = HAVE_fixunsv8hfv8hi2;
  ena[65] = HAVE_fixunsv4sfv4si2;
  ena[66] = HAVE_fixunsv2dfv2di2;
  ena[67] = HAVE_floathihf2;
  ena[68] = HAVE_floatsihf2;
  ena[69] = HAVE_floatsisf2;
  ena[70] = HAVE_floatsidf2;
  ena[71] = HAVE_floatdihf2;
  ena[72] = HAVE_floatdisf2;
  ena[73] = HAVE_floatdidf2;
  ena[74] = HAVE_floatv4hiv4hf2;
  ena[75] = HAVE_floatv2siv2sf2;
  ena[76] = HAVE_floatv8hiv8hf2;
  ena[77] = HAVE_floatv4siv4sf2;
  ena[78] = HAVE_floatv2div2df2;
  ena[79] = HAVE_floatvnx8hivnx8hf2;
  ena[80] = HAVE_floatvnx4sivnx4sf2;
  ena[81] = HAVE_floatvnx2divnx2df2;
  ena[82] = HAVE_floatunshihf2;
  ena[83] = HAVE_floatunssihf2;
  ena[84] = HAVE_floatunssisf2;
  ena[85] = HAVE_floatunssidf2;
  ena[86] = HAVE_floatunsdihf2;
  ena[87] = HAVE_floatunsdisf2;
  ena[88] = HAVE_floatunsdidf2;
  ena[89] = HAVE_floatunsv4hiv4hf2;
  ena[90] = HAVE_floatunsv2siv2sf2;
  ena[91] = HAVE_floatunsv8hiv8hf2;
  ena[92] = HAVE_floatunsv4siv4sf2;
  ena[93] = HAVE_floatunsv2div2df2;
  ena[94] = HAVE_floatunsvnx8hivnx8hf2;
  ena[95] = HAVE_floatunsvnx4sivnx4sf2;
  ena[96] = HAVE_floatunsvnx2divnx2df2;
  ena[97] = HAVE_lrintsfsi2;
  ena[98] = HAVE_lrintsfdi2;
  ena[99] = HAVE_lrintdfsi2;
  ena[100] = HAVE_lrintdfdi2;
  ena[101] = HAVE_lroundhfhi2;
  ena[102] = HAVE_lroundhfsi2;
  ena[103] = HAVE_lroundhfdi2;
  ena[104] = HAVE_lroundsfsi2;
  ena[105] = HAVE_lroundsfdi2;
  ena[106] = HAVE_lrounddfsi2;
  ena[107] = HAVE_lrounddfdi2;
  ena[108] = HAVE_lroundv4hfv4hi2;
  ena[109] = HAVE_lroundv2sfv2si2;
  ena[110] = HAVE_lroundv8hfv8hi2;
  ena[111] = HAVE_lroundv4sfv4si2;
  ena[112] = HAVE_lroundv2dfv2di2;
  ena[113] = HAVE_lfloorhfhi2;
  ena[114] = HAVE_lfloorhfsi2;
  ena[115] = HAVE_lfloorhfdi2;
  ena[116] = HAVE_lfloorsfsi2;
  ena[117] = HAVE_lfloorsfdi2;
  ena[118] = HAVE_lfloordfsi2;
  ena[119] = HAVE_lfloordfdi2;
  ena[120] = HAVE_lfloorv4hfv4hi2;
  ena[121] = HAVE_lfloorv2sfv2si2;
  ena[122] = HAVE_lfloorv8hfv8hi2;
  ena[123] = HAVE_lfloorv4sfv4si2;
  ena[124] = HAVE_lfloorv2dfv2di2;
  ena[125] = HAVE_lceilhfhi2;
  ena[126] = HAVE_lceilhfsi2;
  ena[127] = HAVE_lceilhfdi2;
  ena[128] = HAVE_lceilsfsi2;
  ena[129] = HAVE_lceilsfdi2;
  ena[130] = HAVE_lceildfsi2;
  ena[131] = HAVE_lceildfdi2;
  ena[132] = HAVE_lceilv4hfv4hi2;
  ena[133] = HAVE_lceilv2sfv2si2;
  ena[134] = HAVE_lceilv8hfv8hi2;
  ena[135] = HAVE_lceilv4sfv4si2;
  ena[136] = HAVE_lceilv2dfv2di2;
  ena[137] = HAVE_fix_trunchfhi2;
  ena[138] = HAVE_fix_trunchfsi2;
  ena[139] = HAVE_fix_trunchfdi2;
  ena[140] = HAVE_fix_truncsfsi2;
  ena[141] = HAVE_fix_truncsfdi2;
  ena[142] = HAVE_fix_truncdfsi2;
  ena[143] = HAVE_fix_truncdfdi2;
  ena[144] = HAVE_fix_truncv4hfv4hi2;
  ena[145] = HAVE_fix_truncv2sfv2si2;
  ena[146] = HAVE_fix_truncv8hfv8hi2;
  ena[147] = HAVE_fix_truncv4sfv4si2;
  ena[148] = HAVE_fix_truncv2dfv2di2;
  ena[149] = HAVE_fix_truncvnx8hfvnx8hi2;
  ena[150] = HAVE_fix_truncvnx4sfvnx4si2;
  ena[151] = HAVE_fix_truncvnx2dfvnx2di2;
  ena[152] = HAVE_fixuns_trunchfhi2;
  ena[153] = HAVE_fixuns_trunchfsi2;
  ena[154] = HAVE_fixuns_trunchfdi2;
  ena[155] = HAVE_fixuns_truncsfsi2;
  ena[156] = HAVE_fixuns_truncsfdi2;
  ena[157] = HAVE_fixuns_truncdfsi2;
  ena[158] = HAVE_fixuns_truncdfdi2;
  ena[159] = HAVE_fixuns_truncv4hfv4hi2;
  ena[160] = HAVE_fixuns_truncv2sfv2si2;
  ena[161] = HAVE_fixuns_truncv8hfv8hi2;
  ena[162] = HAVE_fixuns_truncv4sfv4si2;
  ena[163] = HAVE_fixuns_truncv2dfv2di2;
  ena[164] = HAVE_fixuns_truncvnx8hfvnx8hi2;
  ena[165] = HAVE_fixuns_truncvnx4sfvnx4si2;
  ena[166] = HAVE_fixuns_truncvnx2dfvnx2di2;
  ena[167] = HAVE_mulsidi3;
  ena[168] = HAVE_mulditi3;
  ena[169] = HAVE_umulsidi3;
  ena[170] = HAVE_umulditi3;
  ena[171] = HAVE_maddsidi4;
  ena[172] = HAVE_umaddsidi4;
  ena[173] = HAVE_msubsidi4;
  ena[174] = HAVE_umsubsidi4;
  ena[175] = HAVE_vec_load_lanesv2x16qiv16qi;
  ena[176] = HAVE_vec_load_lanesv3x16qiv16qi;
  ena[177] = HAVE_vec_load_lanesv4x16qiv16qi;
  ena[178] = HAVE_vec_load_lanesv2x8hiv8hi;
  ena[179] = HAVE_vec_load_lanesv3x8hiv8hi;
  ena[180] = HAVE_vec_load_lanesv4x8hiv8hi;
  ena[181] = HAVE_vec_load_lanesv2x4siv4si;
  ena[182] = HAVE_vec_load_lanesv3x4siv4si;
  ena[183] = HAVE_vec_load_lanesv4x4siv4si;
  ena[184] = HAVE_vec_load_lanesv2x2div2di;
  ena[185] = HAVE_vec_load_lanesv3x2div2di;
  ena[186] = HAVE_vec_load_lanesv4x2div2di;
  ena[187] = HAVE_vec_load_lanesvnx32qivnx16qi;
  ena[188] = HAVE_vec_load_lanesvnx48qivnx16qi;
  ena[189] = HAVE_vec_load_lanesvnx64qivnx16qi;
  ena[190] = HAVE_vec_load_lanesvnx16hivnx8hi;
  ena[191] = HAVE_vec_load_lanesvnx24hivnx8hi;
  ena[192] = HAVE_vec_load_lanesvnx32hivnx8hi;
  ena[193] = HAVE_vec_load_lanesvnx8sivnx4si;
  ena[194] = HAVE_vec_load_lanesvnx12sivnx4si;
  ena[195] = HAVE_vec_load_lanesvnx16sivnx4si;
  ena[196] = HAVE_vec_load_lanesvnx4divnx2di;
  ena[197] = HAVE_vec_load_lanesvnx6divnx2di;
  ena[198] = HAVE_vec_load_lanesvnx8divnx2di;
  ena[199] = HAVE_vec_load_lanesv2x8bfv8bf;
  ena[200] = HAVE_vec_load_lanesv3x8bfv8bf;
  ena[201] = HAVE_vec_load_lanesv4x8bfv8bf;
  ena[202] = HAVE_vec_load_lanesv2x8hfv8hf;
  ena[203] = HAVE_vec_load_lanesv3x8hfv8hf;
  ena[204] = HAVE_vec_load_lanesv4x8hfv8hf;
  ena[205] = HAVE_vec_load_lanesv2x4sfv4sf;
  ena[206] = HAVE_vec_load_lanesv3x4sfv4sf;
  ena[207] = HAVE_vec_load_lanesv4x4sfv4sf;
  ena[208] = HAVE_vec_load_lanesv2x2dfv2df;
  ena[209] = HAVE_vec_load_lanesv3x2dfv2df;
  ena[210] = HAVE_vec_load_lanesv4x2dfv2df;
  ena[211] = HAVE_vec_load_lanesvnx16bfvnx8bf;
  ena[212] = HAVE_vec_load_lanesvnx24bfvnx8bf;
  ena[213] = HAVE_vec_load_lanesvnx32bfvnx8bf;
  ena[214] = HAVE_vec_load_lanesvnx16hfvnx8hf;
  ena[215] = HAVE_vec_load_lanesvnx24hfvnx8hf;
  ena[216] = HAVE_vec_load_lanesvnx32hfvnx8hf;
  ena[217] = HAVE_vec_load_lanesvnx8sfvnx4sf;
  ena[218] = HAVE_vec_load_lanesvnx12sfvnx4sf;
  ena[219] = HAVE_vec_load_lanesvnx16sfvnx4sf;
  ena[220] = HAVE_vec_load_lanesvnx4dfvnx2df;
  ena[221] = HAVE_vec_load_lanesvnx6dfvnx2df;
  ena[222] = HAVE_vec_load_lanesvnx8dfvnx2df;
  ena[223] = HAVE_vec_store_lanesv2x16qiv16qi;
  ena[224] = HAVE_vec_store_lanesv3x16qiv16qi;
  ena[225] = HAVE_vec_store_lanesv4x16qiv16qi;
  ena[226] = HAVE_vec_store_lanesv2x8hiv8hi;
  ena[227] = HAVE_vec_store_lanesv3x8hiv8hi;
  ena[228] = HAVE_vec_store_lanesv4x8hiv8hi;
  ena[229] = HAVE_vec_store_lanesv2x4siv4si;
  ena[230] = HAVE_vec_store_lanesv3x4siv4si;
  ena[231] = HAVE_vec_store_lanesv4x4siv4si;
  ena[232] = HAVE_vec_store_lanesv2x2div2di;
  ena[233] = HAVE_vec_store_lanesv3x2div2di;
  ena[234] = HAVE_vec_store_lanesv4x2div2di;
  ena[235] = HAVE_vec_store_lanesvnx32qivnx16qi;
  ena[236] = HAVE_vec_store_lanesvnx48qivnx16qi;
  ena[237] = HAVE_vec_store_lanesvnx64qivnx16qi;
  ena[238] = HAVE_vec_store_lanesvnx16hivnx8hi;
  ena[239] = HAVE_vec_store_lanesvnx24hivnx8hi;
  ena[240] = HAVE_vec_store_lanesvnx32hivnx8hi;
  ena[241] = HAVE_vec_store_lanesvnx8sivnx4si;
  ena[242] = HAVE_vec_store_lanesvnx12sivnx4si;
  ena[243] = HAVE_vec_store_lanesvnx16sivnx4si;
  ena[244] = HAVE_vec_store_lanesvnx4divnx2di;
  ena[245] = HAVE_vec_store_lanesvnx6divnx2di;
  ena[246] = HAVE_vec_store_lanesvnx8divnx2di;
  ena[247] = HAVE_vec_store_lanesv2x8bfv8bf;
  ena[248] = HAVE_vec_store_lanesv3x8bfv8bf;
  ena[249] = HAVE_vec_store_lanesv4x8bfv8bf;
  ena[250] = HAVE_vec_store_lanesv2x8hfv8hf;
  ena[251] = HAVE_vec_store_lanesv3x8hfv8hf;
  ena[252] = HAVE_vec_store_lanesv4x8hfv8hf;
  ena[253] = HAVE_vec_store_lanesv2x4sfv4sf;
  ena[254] = HAVE_vec_store_lanesv3x4sfv4sf;
  ena[255] = HAVE_vec_store_lanesv4x4sfv4sf;
  ena[256] = HAVE_vec_store_lanesv2x2dfv2df;
  ena[257] = HAVE_vec_store_lanesv3x2dfv2df;
  ena[258] = HAVE_vec_store_lanesv4x2dfv2df;
  ena[259] = HAVE_vec_store_lanesvnx16bfvnx8bf;
  ena[260] = HAVE_vec_store_lanesvnx24bfvnx8bf;
  ena[261] = HAVE_vec_store_lanesvnx32bfvnx8bf;
  ena[262] = HAVE_vec_store_lanesvnx16hfvnx8hf;
  ena[263] = HAVE_vec_store_lanesvnx24hfvnx8hf;
  ena[264] = HAVE_vec_store_lanesvnx32hfvnx8hf;
  ena[265] = HAVE_vec_store_lanesvnx8sfvnx4sf;
  ena[266] = HAVE_vec_store_lanesvnx12sfvnx4sf;
  ena[267] = HAVE_vec_store_lanesvnx16sfvnx4sf;
  ena[268] = HAVE_vec_store_lanesvnx4dfvnx2df;
  ena[269] = HAVE_vec_store_lanesvnx6dfvnx2df;
  ena[270] = HAVE_vec_store_lanesvnx8dfvnx2df;
  ena[271] = HAVE_vec_mask_load_lanesvnx32qivnx16qi;
  ena[272] = HAVE_vec_mask_load_lanesvnx48qivnx16qi;
  ena[273] = HAVE_vec_mask_load_lanesvnx64qivnx16qi;
  ena[274] = HAVE_vec_mask_load_lanesvnx16hivnx8hi;
  ena[275] = HAVE_vec_mask_load_lanesvnx24hivnx8hi;
  ena[276] = HAVE_vec_mask_load_lanesvnx32hivnx8hi;
  ena[277] = HAVE_vec_mask_load_lanesvnx8sivnx4si;
  ena[278] = HAVE_vec_mask_load_lanesvnx12sivnx4si;
  ena[279] = HAVE_vec_mask_load_lanesvnx16sivnx4si;
  ena[280] = HAVE_vec_mask_load_lanesvnx4divnx2di;
  ena[281] = HAVE_vec_mask_load_lanesvnx6divnx2di;
  ena[282] = HAVE_vec_mask_load_lanesvnx8divnx2di;
  ena[283] = HAVE_vec_mask_load_lanesvnx16bfvnx8bf;
  ena[284] = HAVE_vec_mask_load_lanesvnx24bfvnx8bf;
  ena[285] = HAVE_vec_mask_load_lanesvnx32bfvnx8bf;
  ena[286] = HAVE_vec_mask_load_lanesvnx16hfvnx8hf;
  ena[287] = HAVE_vec_mask_load_lanesvnx24hfvnx8hf;
  ena[288] = HAVE_vec_mask_load_lanesvnx32hfvnx8hf;
  ena[289] = HAVE_vec_mask_load_lanesvnx8sfvnx4sf;
  ena[290] = HAVE_vec_mask_load_lanesvnx12sfvnx4sf;
  ena[291] = HAVE_vec_mask_load_lanesvnx16sfvnx4sf;
  ena[292] = HAVE_vec_mask_load_lanesvnx4dfvnx2df;
  ena[293] = HAVE_vec_mask_load_lanesvnx6dfvnx2df;
  ena[294] = HAVE_vec_mask_load_lanesvnx8dfvnx2df;
  ena[295] = HAVE_vec_mask_store_lanesvnx32qivnx16qi;
  ena[296] = HAVE_vec_mask_store_lanesvnx48qivnx16qi;
  ena[297] = HAVE_vec_mask_store_lanesvnx64qivnx16qi;
  ena[298] = HAVE_vec_mask_store_lanesvnx16hivnx8hi;
  ena[299] = HAVE_vec_mask_store_lanesvnx24hivnx8hi;
  ena[300] = HAVE_vec_mask_store_lanesvnx32hivnx8hi;
  ena[301] = HAVE_vec_mask_store_lanesvnx8sivnx4si;
  ena[302] = HAVE_vec_mask_store_lanesvnx12sivnx4si;
  ena[303] = HAVE_vec_mask_store_lanesvnx16sivnx4si;
  ena[304] = HAVE_vec_mask_store_lanesvnx4divnx2di;
  ena[305] = HAVE_vec_mask_store_lanesvnx6divnx2di;
  ena[306] = HAVE_vec_mask_store_lanesvnx8divnx2di;
  ena[307] = HAVE_vec_mask_store_lanesvnx16bfvnx8bf;
  ena[308] = HAVE_vec_mask_store_lanesvnx24bfvnx8bf;
  ena[309] = HAVE_vec_mask_store_lanesvnx32bfvnx8bf;
  ena[310] = HAVE_vec_mask_store_lanesvnx16hfvnx8hf;
  ena[311] = HAVE_vec_mask_store_lanesvnx24hfvnx8hf;
  ena[312] = HAVE_vec_mask_store_lanesvnx32hfvnx8hf;
  ena[313] = HAVE_vec_mask_store_lanesvnx8sfvnx4sf;
  ena[314] = HAVE_vec_mask_store_lanesvnx12sfvnx4sf;
  ena[315] = HAVE_vec_mask_store_lanesvnx16sfvnx4sf;
  ena[316] = HAVE_vec_mask_store_lanesvnx4dfvnx2df;
  ena[317] = HAVE_vec_mask_store_lanesvnx6dfvnx2df;
  ena[318] = HAVE_vec_mask_store_lanesvnx8dfvnx2df;
  ena[319] = HAVE_vconddidi;
  ena[320] = HAVE_vcondv8qiv8qi;
  ena[321] = HAVE_vcondv4hiv4hi;
  ena[322] = HAVE_vcondv2siv2si;
  ena[323] = HAVE_vcondv2sfv2si;
  ena[324] = HAVE_vcondv16qiv16qi;
  ena[325] = HAVE_vcondv8hiv8hi;
  ena[326] = HAVE_vcondv4siv4si;
  ena[327] = HAVE_vcondv4sfv4si;
  ena[328] = HAVE_vcondv2div2di;
  ena[329] = HAVE_vcondv2dfv2di;
  ena[330] = HAVE_vcondvnx16qivnx16qi;
  ena[331] = HAVE_vcondvnx8hivnx8hi;
  ena[332] = HAVE_vcondvnx8qivnx8hi;
  ena[333] = HAVE_vcondvnx8bfvnx8hi;
  ena[334] = HAVE_vcondvnx8hfvnx8hi;
  ena[335] = HAVE_vcondvnx4sivnx4si;
  ena[336] = HAVE_vcondvnx4qivnx4si;
  ena[337] = HAVE_vcondvnx4hivnx4si;
  ena[338] = HAVE_vcondvnx4sfvnx4si;
  ena[339] = HAVE_vcondvnx4bfvnx4si;
  ena[340] = HAVE_vcondvnx4hfvnx4si;
  ena[341] = HAVE_vcondvnx2divnx2di;
  ena[342] = HAVE_vcondvnx2qivnx2di;
  ena[343] = HAVE_vcondvnx2hivnx2di;
  ena[344] = HAVE_vcondvnx2sivnx2di;
  ena[345] = HAVE_vcondvnx2dfvnx2di;
  ena[346] = HAVE_vcondvnx2bfvnx2di;
  ena[347] = HAVE_vcondvnx2hfvnx2di;
  ena[348] = HAVE_vcondvnx2sfvnx2di;
  ena[349] = HAVE_vcondvnx2divnx2qi;
  ena[350] = HAVE_vcondvnx2qivnx2qi;
  ena[351] = HAVE_vcondvnx2hivnx2qi;
  ena[352] = HAVE_vcondvnx2sivnx2qi;
  ena[353] = HAVE_vcondvnx2dfvnx2qi;
  ena[354] = HAVE_vcondvnx2bfvnx2qi;
  ena[355] = HAVE_vcondvnx2hfvnx2qi;
  ena[356] = HAVE_vcondvnx2sfvnx2qi;
  ena[357] = HAVE_vcondvnx4sivnx4qi;
  ena[358] = HAVE_vcondvnx4qivnx4qi;
  ena[359] = HAVE_vcondvnx4hivnx4qi;
  ena[360] = HAVE_vcondvnx4sfvnx4qi;
  ena[361] = HAVE_vcondvnx4bfvnx4qi;
  ena[362] = HAVE_vcondvnx4hfvnx4qi;
  ena[363] = HAVE_vcondvnx2divnx2hi;
  ena[364] = HAVE_vcondvnx2qivnx2hi;
  ena[365] = HAVE_vcondvnx2hivnx2hi;
  ena[366] = HAVE_vcondvnx2sivnx2hi;
  ena[367] = HAVE_vcondvnx2dfvnx2hi;
  ena[368] = HAVE_vcondvnx2bfvnx2hi;
  ena[369] = HAVE_vcondvnx2hfvnx2hi;
  ena[370] = HAVE_vcondvnx2sfvnx2hi;
  ena[371] = HAVE_vcondvnx8hivnx8qi;
  ena[372] = HAVE_vcondvnx8qivnx8qi;
  ena[373] = HAVE_vcondvnx8bfvnx8qi;
  ena[374] = HAVE_vcondvnx8hfvnx8qi;
  ena[375] = HAVE_vcondvnx4sivnx4hi;
  ena[376] = HAVE_vcondvnx4qivnx4hi;
  ena[377] = HAVE_vcondvnx4hivnx4hi;
  ena[378] = HAVE_vcondvnx4sfvnx4hi;
  ena[379] = HAVE_vcondvnx4bfvnx4hi;
  ena[380] = HAVE_vcondvnx4hfvnx4hi;
  ena[381] = HAVE_vcondvnx2divnx2si;
  ena[382] = HAVE_vcondvnx2qivnx2si;
  ena[383] = HAVE_vcondvnx2hivnx2si;
  ena[384] = HAVE_vcondvnx2sivnx2si;
  ena[385] = HAVE_vcondvnx2dfvnx2si;
  ena[386] = HAVE_vcondvnx2bfvnx2si;
  ena[387] = HAVE_vcondvnx2hfvnx2si;
  ena[388] = HAVE_vcondvnx2sfvnx2si;
  ena[389] = HAVE_vcondv2siv2sf;
  ena[390] = HAVE_vcondv2sfv2sf;
  ena[391] = HAVE_vcondv4siv4sf;
  ena[392] = HAVE_vcondv4sfv4sf;
  ena[393] = HAVE_vcondv2div2df;
  ena[394] = HAVE_vcondv2dfv2df;
  ena[395] = HAVE_vcondvnx8hivnx8hf;
  ena[396] = HAVE_vcondvnx8bfvnx8hf;
  ena[397] = HAVE_vcondvnx8hfvnx8hf;
  ena[398] = HAVE_vcondvnx4sivnx4sf;
  ena[399] = HAVE_vcondvnx4sfvnx4sf;
  ena[400] = HAVE_vcondvnx2divnx2df;
  ena[401] = HAVE_vcondvnx2dfvnx2df;
  ena[402] = HAVE_vcondudidi;
  ena[403] = HAVE_vconduv8qiv8qi;
  ena[404] = HAVE_vconduv4hiv4hi;
  ena[405] = HAVE_vconduv2siv2si;
  ena[406] = HAVE_vconduv2sfv2si;
  ena[407] = HAVE_vconduv16qiv16qi;
  ena[408] = HAVE_vconduv8hiv8hi;
  ena[409] = HAVE_vconduv4siv4si;
  ena[410] = HAVE_vconduv4sfv4si;
  ena[411] = HAVE_vconduv2div2di;
  ena[412] = HAVE_vconduv2dfv2di;
  ena[413] = HAVE_vconduvnx16qivnx16qi;
  ena[414] = HAVE_vconduvnx8hivnx8hi;
  ena[415] = HAVE_vconduvnx8qivnx8hi;
  ena[416] = HAVE_vconduvnx8bfvnx8hi;
  ena[417] = HAVE_vconduvnx8hfvnx8hi;
  ena[418] = HAVE_vconduvnx4sivnx4si;
  ena[419] = HAVE_vconduvnx4qivnx4si;
  ena[420] = HAVE_vconduvnx4hivnx4si;
  ena[421] = HAVE_vconduvnx4sfvnx4si;
  ena[422] = HAVE_vconduvnx4bfvnx4si;
  ena[423] = HAVE_vconduvnx4hfvnx4si;
  ena[424] = HAVE_vconduvnx2divnx2di;
  ena[425] = HAVE_vconduvnx2qivnx2di;
  ena[426] = HAVE_vconduvnx2hivnx2di;
  ena[427] = HAVE_vconduvnx2sivnx2di;
  ena[428] = HAVE_vconduvnx2dfvnx2di;
  ena[429] = HAVE_vconduvnx2bfvnx2di;
  ena[430] = HAVE_vconduvnx2hfvnx2di;
  ena[431] = HAVE_vconduvnx2sfvnx2di;
  ena[432] = HAVE_vconduvnx2divnx2qi;
  ena[433] = HAVE_vconduvnx2qivnx2qi;
  ena[434] = HAVE_vconduvnx2hivnx2qi;
  ena[435] = HAVE_vconduvnx2sivnx2qi;
  ena[436] = HAVE_vconduvnx2dfvnx2qi;
  ena[437] = HAVE_vconduvnx2bfvnx2qi;
  ena[438] = HAVE_vconduvnx2hfvnx2qi;
  ena[439] = HAVE_vconduvnx2sfvnx2qi;
  ena[440] = HAVE_vconduvnx4sivnx4qi;
  ena[441] = HAVE_vconduvnx4qivnx4qi;
  ena[442] = HAVE_vconduvnx4hivnx4qi;
  ena[443] = HAVE_vconduvnx4sfvnx4qi;
  ena[444] = HAVE_vconduvnx4bfvnx4qi;
  ena[445] = HAVE_vconduvnx4hfvnx4qi;
  ena[446] = HAVE_vconduvnx2divnx2hi;
  ena[447] = HAVE_vconduvnx2qivnx2hi;
  ena[448] = HAVE_vconduvnx2hivnx2hi;
  ena[449] = HAVE_vconduvnx2sivnx2hi;
  ena[450] = HAVE_vconduvnx2dfvnx2hi;
  ena[451] = HAVE_vconduvnx2bfvnx2hi;
  ena[452] = HAVE_vconduvnx2hfvnx2hi;
  ena[453] = HAVE_vconduvnx2sfvnx2hi;
  ena[454] = HAVE_vconduvnx8hivnx8qi;
  ena[455] = HAVE_vconduvnx8qivnx8qi;
  ena[456] = HAVE_vconduvnx8bfvnx8qi;
  ena[457] = HAVE_vconduvnx8hfvnx8qi;
  ena[458] = HAVE_vconduvnx4sivnx4hi;
  ena[459] = HAVE_vconduvnx4qivnx4hi;
  ena[460] = HAVE_vconduvnx4hivnx4hi;
  ena[461] = HAVE_vconduvnx4sfvnx4hi;
  ena[462] = HAVE_vconduvnx4bfvnx4hi;
  ena[463] = HAVE_vconduvnx4hfvnx4hi;
  ena[464] = HAVE_vconduvnx2divnx2si;
  ena[465] = HAVE_vconduvnx2qivnx2si;
  ena[466] = HAVE_vconduvnx2hivnx2si;
  ena[467] = HAVE_vconduvnx2sivnx2si;
  ena[468] = HAVE_vconduvnx2dfvnx2si;
  ena[469] = HAVE_vconduvnx2bfvnx2si;
  ena[470] = HAVE_vconduvnx2hfvnx2si;
  ena[471] = HAVE_vconduvnx2sfvnx2si;
  ena[472] = HAVE_vcond_mask_didi;
  ena[473] = HAVE_vcond_mask_vnx16bivnx16bi;
  ena[474] = HAVE_vcond_mask_vnx16qivnx16bi;
  ena[475] = HAVE_vcond_mask_vnx8bivnx8bi;
  ena[476] = HAVE_vcond_mask_vnx8hivnx8bi;
  ena[477] = HAVE_vcond_mask_vnx8qivnx8bi;
  ena[478] = HAVE_vcond_mask_vnx8bfvnx8bi;
  ena[479] = HAVE_vcond_mask_vnx8hfvnx8bi;
  ena[480] = HAVE_vcond_mask_vnx4bivnx4bi;
  ena[481] = HAVE_vcond_mask_vnx4sivnx4bi;
  ena[482] = HAVE_vcond_mask_vnx4qivnx4bi;
  ena[483] = HAVE_vcond_mask_vnx4hivnx4bi;
  ena[484] = HAVE_vcond_mask_vnx4sfvnx4bi;
  ena[485] = HAVE_vcond_mask_vnx4bfvnx4bi;
  ena[486] = HAVE_vcond_mask_vnx4hfvnx4bi;
  ena[487] = HAVE_vcond_mask_vnx2bivnx2bi;
  ena[488] = HAVE_vcond_mask_vnx2divnx2bi;
  ena[489] = HAVE_vcond_mask_vnx2qivnx2bi;
  ena[490] = HAVE_vcond_mask_vnx2hivnx2bi;
  ena[491] = HAVE_vcond_mask_vnx2sivnx2bi;
  ena[492] = HAVE_vcond_mask_vnx2dfvnx2bi;
  ena[493] = HAVE_vcond_mask_vnx2bfvnx2bi;
  ena[494] = HAVE_vcond_mask_vnx2hfvnx2bi;
  ena[495] = HAVE_vcond_mask_vnx2sfvnx2bi;
  ena[496] = HAVE_vcond_mask_v8qiv8qi;
  ena[497] = HAVE_vcond_mask_v4hiv4hi;
  ena[498] = HAVE_vcond_mask_v2siv2si;
  ena[499] = HAVE_vcond_mask_v2sfv2si;
  ena[500] = HAVE_vcond_mask_v16qiv16qi;
  ena[501] = HAVE_vcond_mask_v8hiv8hi;
  ena[502] = HAVE_vcond_mask_v4siv4si;
  ena[503] = HAVE_vcond_mask_v4sfv4si;
  ena[504] = HAVE_vcond_mask_v2div2di;
  ena[505] = HAVE_vcond_mask_v2dfv2di;
  ena[506] = HAVE_vec_cmpdidi;
  ena[507] = HAVE_vec_cmpvnx16qivnx16bi;
  ena[508] = HAVE_vec_cmpvnx8hivnx8bi;
  ena[509] = HAVE_vec_cmpvnx8qivnx8bi;
  ena[510] = HAVE_vec_cmpvnx8hfvnx8bi;
  ena[511] = HAVE_vec_cmpvnx4sivnx4bi;
  ena[512] = HAVE_vec_cmpvnx4qivnx4bi;
  ena[513] = HAVE_vec_cmpvnx4hivnx4bi;
  ena[514] = HAVE_vec_cmpvnx4sfvnx4bi;
  ena[515] = HAVE_vec_cmpvnx2divnx2bi;
  ena[516] = HAVE_vec_cmpvnx2qivnx2bi;
  ena[517] = HAVE_vec_cmpvnx2hivnx2bi;
  ena[518] = HAVE_vec_cmpvnx2sivnx2bi;
  ena[519] = HAVE_vec_cmpvnx2dfvnx2bi;
  ena[520] = HAVE_vec_cmpv8qiv8qi;
  ena[521] = HAVE_vec_cmpv4hiv4hi;
  ena[522] = HAVE_vec_cmpv2siv2si;
  ena[523] = HAVE_vec_cmpv2sfv2si;
  ena[524] = HAVE_vec_cmpv16qiv16qi;
  ena[525] = HAVE_vec_cmpv8hiv8hi;
  ena[526] = HAVE_vec_cmpv4siv4si;
  ena[527] = HAVE_vec_cmpv4sfv4si;
  ena[528] = HAVE_vec_cmpv2div2di;
  ena[529] = HAVE_vec_cmpv2dfv2di;
  ena[530] = HAVE_vec_cmpudidi;
  ena[531] = HAVE_vec_cmpuvnx16qivnx16bi;
  ena[532] = HAVE_vec_cmpuvnx8hivnx8bi;
  ena[533] = HAVE_vec_cmpuvnx8qivnx8bi;
  ena[534] = HAVE_vec_cmpuvnx4sivnx4bi;
  ena[535] = HAVE_vec_cmpuvnx4qivnx4bi;
  ena[536] = HAVE_vec_cmpuvnx4hivnx4bi;
  ena[537] = HAVE_vec_cmpuvnx2divnx2bi;
  ena[538] = HAVE_vec_cmpuvnx2qivnx2bi;
  ena[539] = HAVE_vec_cmpuvnx2hivnx2bi;
  ena[540] = HAVE_vec_cmpuvnx2sivnx2bi;
  ena[541] = HAVE_vec_cmpuv8qiv8qi;
  ena[542] = HAVE_vec_cmpuv4hiv4hi;
  ena[543] = HAVE_vec_cmpuv2siv2si;
  ena[544] = HAVE_vec_cmpuv16qiv16qi;
  ena[545] = HAVE_vec_cmpuv8hiv8hi;
  ena[546] = HAVE_vec_cmpuv4siv4si;
  ena[547] = HAVE_vec_cmpuv2div2di;
  ena[548] = HAVE_maskloadvnx16qivnx16bi;
  ena[549] = HAVE_maskloadvnx8hivnx8bi;
  ena[550] = HAVE_maskloadvnx8qivnx8bi;
  ena[551] = HAVE_maskloadvnx8bfvnx8bi;
  ena[552] = HAVE_maskloadvnx8hfvnx8bi;
  ena[553] = HAVE_maskloadvnx4sivnx4bi;
  ena[554] = HAVE_maskloadvnx4qivnx4bi;
  ena[555] = HAVE_maskloadvnx4hivnx4bi;
  ena[556] = HAVE_maskloadvnx4sfvnx4bi;
  ena[557] = HAVE_maskloadvnx4bfvnx4bi;
  ena[558] = HAVE_maskloadvnx4hfvnx4bi;
  ena[559] = HAVE_maskloadvnx2divnx2bi;
  ena[560] = HAVE_maskloadvnx2qivnx2bi;
  ena[561] = HAVE_maskloadvnx2hivnx2bi;
  ena[562] = HAVE_maskloadvnx2sivnx2bi;
  ena[563] = HAVE_maskloadvnx2dfvnx2bi;
  ena[564] = HAVE_maskloadvnx2bfvnx2bi;
  ena[565] = HAVE_maskloadvnx2hfvnx2bi;
  ena[566] = HAVE_maskloadvnx2sfvnx2bi;
  ena[567] = HAVE_maskstorevnx16qivnx16bi;
  ena[568] = HAVE_maskstorevnx8hivnx8bi;
  ena[569] = HAVE_maskstorevnx8qivnx8bi;
  ena[570] = HAVE_maskstorevnx8bfvnx8bi;
  ena[571] = HAVE_maskstorevnx8hfvnx8bi;
  ena[572] = HAVE_maskstorevnx4sivnx4bi;
  ena[573] = HAVE_maskstorevnx4qivnx4bi;
  ena[574] = HAVE_maskstorevnx4hivnx4bi;
  ena[575] = HAVE_maskstorevnx4sfvnx4bi;
  ena[576] = HAVE_maskstorevnx4bfvnx4bi;
  ena[577] = HAVE_maskstorevnx4hfvnx4bi;
  ena[578] = HAVE_maskstorevnx2divnx2bi;
  ena[579] = HAVE_maskstorevnx2qivnx2bi;
  ena[580] = HAVE_maskstorevnx2hivnx2bi;
  ena[581] = HAVE_maskstorevnx2sivnx2bi;
  ena[582] = HAVE_maskstorevnx2dfvnx2bi;
  ena[583] = HAVE_maskstorevnx2bfvnx2bi;
  ena[584] = HAVE_maskstorevnx2hfvnx2bi;
  ena[585] = HAVE_maskstorevnx2sfvnx2bi;
  ena[586] = HAVE_gather_loadvnx4sivnx4si;
  ena[587] = HAVE_gather_loadvnx4qivnx4si;
  ena[588] = HAVE_gather_loadvnx4hivnx4si;
  ena[589] = HAVE_gather_loadvnx4sfvnx4si;
  ena[590] = HAVE_gather_loadvnx4bfvnx4si;
  ena[591] = HAVE_gather_loadvnx4hfvnx4si;
  ena[592] = HAVE_gather_loadvnx2divnx2di;
  ena[593] = HAVE_gather_loadvnx2qivnx2di;
  ena[594] = HAVE_gather_loadvnx2hivnx2di;
  ena[595] = HAVE_gather_loadvnx2sivnx2di;
  ena[596] = HAVE_gather_loadvnx2dfvnx2di;
  ena[597] = HAVE_gather_loadvnx2bfvnx2di;
  ena[598] = HAVE_gather_loadvnx2hfvnx2di;
  ena[599] = HAVE_gather_loadvnx2sfvnx2di;
  ena[600] = HAVE_mask_gather_loadvnx4sivnx4si;
  ena[601] = HAVE_mask_gather_loadvnx4qivnx4si;
  ena[602] = HAVE_mask_gather_loadvnx4hivnx4si;
  ena[603] = HAVE_mask_gather_loadvnx4sfvnx4si;
  ena[604] = HAVE_mask_gather_loadvnx4bfvnx4si;
  ena[605] = HAVE_mask_gather_loadvnx4hfvnx4si;
  ena[606] = HAVE_mask_gather_loadvnx2divnx2di;
  ena[607] = HAVE_mask_gather_loadvnx2qivnx2di;
  ena[608] = HAVE_mask_gather_loadvnx2hivnx2di;
  ena[609] = HAVE_mask_gather_loadvnx2sivnx2di;
  ena[610] = HAVE_mask_gather_loadvnx2dfvnx2di;
  ena[611] = HAVE_mask_gather_loadvnx2bfvnx2di;
  ena[612] = HAVE_mask_gather_loadvnx2hfvnx2di;
  ena[613] = HAVE_mask_gather_loadvnx2sfvnx2di;
  ena[614] = HAVE_scatter_storevnx4sivnx4si;
  ena[615] = HAVE_scatter_storevnx4qivnx4si;
  ena[616] = HAVE_scatter_storevnx4hivnx4si;
  ena[617] = HAVE_scatter_storevnx4sfvnx4si;
  ena[618] = HAVE_scatter_storevnx4bfvnx4si;
  ena[619] = HAVE_scatter_storevnx4hfvnx4si;
  ena[620] = HAVE_scatter_storevnx2divnx2di;
  ena[621] = HAVE_scatter_storevnx2qivnx2di;
  ena[622] = HAVE_scatter_storevnx2hivnx2di;
  ena[623] = HAVE_scatter_storevnx2sivnx2di;
  ena[624] = HAVE_scatter_storevnx2dfvnx2di;
  ena[625] = HAVE_scatter_storevnx2bfvnx2di;
  ena[626] = HAVE_scatter_storevnx2hfvnx2di;
  ena[627] = HAVE_scatter_storevnx2sfvnx2di;
  ena[628] = HAVE_mask_scatter_storevnx4sivnx4si;
  ena[629] = HAVE_mask_scatter_storevnx4qivnx4si;
  ena[630] = HAVE_mask_scatter_storevnx4hivnx4si;
  ena[631] = HAVE_mask_scatter_storevnx4sfvnx4si;
  ena[632] = HAVE_mask_scatter_storevnx4bfvnx4si;
  ena[633] = HAVE_mask_scatter_storevnx4hfvnx4si;
  ena[634] = HAVE_mask_scatter_storevnx2divnx2di;
  ena[635] = HAVE_mask_scatter_storevnx2qivnx2di;
  ena[636] = HAVE_mask_scatter_storevnx2hivnx2di;
  ena[637] = HAVE_mask_scatter_storevnx2sivnx2di;
  ena[638] = HAVE_mask_scatter_storevnx2dfvnx2di;
  ena[639] = HAVE_mask_scatter_storevnx2bfvnx2di;
  ena[640] = HAVE_mask_scatter_storevnx2hfvnx2di;
  ena[641] = HAVE_mask_scatter_storevnx2sfvnx2di;
  ena[642] = HAVE_vec_extractvnx16biqi;
  ena[643] = HAVE_vec_extractv8qiqi;
  ena[644] = HAVE_vec_extractv16qiqi;
  ena[645] = HAVE_vec_extractvnx16qiqi;
  ena[646] = HAVE_vec_extractvnx8bihi;
  ena[647] = HAVE_vec_extractv4hihi;
  ena[648] = HAVE_vec_extractv8hihi;
  ena[649] = HAVE_vec_extractvnx8hihi;
  ena[650] = HAVE_vec_extractvnx4bisi;
  ena[651] = HAVE_vec_extractv2sisi;
  ena[652] = HAVE_vec_extractv4sisi;
  ena[653] = HAVE_vec_extractvnx4sisi;
  ena[654] = HAVE_vec_extractvnx2bidi;
  ena[655] = HAVE_vec_extractv2didi;
  ena[656] = HAVE_vec_extractvnx2didi;
  ena[657] = HAVE_vec_extractv4hfhf;
  ena[658] = HAVE_vec_extractv8hfhf;
  ena[659] = HAVE_vec_extractvnx8hfhf;
  ena[660] = HAVE_vec_extractv4bfbf;
  ena[661] = HAVE_vec_extractv8bfbf;
  ena[662] = HAVE_vec_extractvnx8bfbf;
  ena[663] = HAVE_vec_extractv2sfsf;
  ena[664] = HAVE_vec_extractv4sfsf;
  ena[665] = HAVE_vec_extractvnx4sfsf;
  ena[666] = HAVE_vec_extractv2dfdf;
  ena[667] = HAVE_vec_extractvnx2dfdf;
  ena[668] = HAVE_vec_extractv16qiv8qi;
  ena[669] = HAVE_vec_extractv8hiv4hi;
  ena[670] = HAVE_vec_extractv4siv2si;
  ena[671] = HAVE_vec_extractv8bfv4bf;
  ena[672] = HAVE_vec_extractv8hfv4hf;
  ena[673] = HAVE_vec_extractv4sfv2sf;
  ena[674] = HAVE_vec_extractv2dfv1df;
  ena[675] = HAVE_vec_initv8qiqi;
  ena[676] = HAVE_vec_initv16qiqi;
  ena[677] = HAVE_vec_initvnx16qiqi;
  ena[678] = HAVE_vec_initv4hihi;
  ena[679] = HAVE_vec_initv8hihi;
  ena[680] = HAVE_vec_initvnx8hihi;
  ena[681] = HAVE_vec_initv2sisi;
  ena[682] = HAVE_vec_initv4sisi;
  ena[683] = HAVE_vec_initvnx4sisi;
  ena[684] = HAVE_vec_initv2didi;
  ena[685] = HAVE_vec_initvnx2didi;
  ena[686] = HAVE_vec_initv4hfhf;
  ena[687] = HAVE_vec_initv8hfhf;
  ena[688] = HAVE_vec_initvnx8hfhf;
  ena[689] = HAVE_vec_initv4bfbf;
  ena[690] = HAVE_vec_initv8bfbf;
  ena[691] = HAVE_vec_initvnx8bfbf;
  ena[692] = HAVE_vec_initv2sfsf;
  ena[693] = HAVE_vec_initv4sfsf;
  ena[694] = HAVE_vec_initvnx4sfsf;
  ena[695] = HAVE_vec_initv2dfdf;
  ena[696] = HAVE_vec_initvnx2dfdf;
  ena[697] = HAVE_vec_initv16qiv8qi;
  ena[698] = HAVE_vec_initv8hiv4hi;
  ena[699] = HAVE_vec_initv4siv2si;
  ena[700] = HAVE_vec_initv8bfv4bf;
  ena[701] = HAVE_vec_initv8hfv4hf;
  ena[702] = HAVE_vec_initv4sfv2sf;
  ena[703] = HAVE_while_ultsivnx16bi;
  ena[704] = HAVE_while_ultdivnx16bi;
  ena[705] = HAVE_while_ultsivnx8bi;
  ena[706] = HAVE_while_ultdivnx8bi;
  ena[707] = HAVE_while_ultsivnx4bi;
  ena[708] = HAVE_while_ultdivnx4bi;
  ena[709] = HAVE_while_ultsivnx2bi;
  ena[710] = HAVE_while_ultdivnx2bi;
  ena[711] = HAVE_addsi3;
  ena[712] = HAVE_adddi3;
  ena[713] = HAVE_addti3;
  ena[714] = HAVE_addhf3;
  ena[715] = HAVE_addsf3;
  ena[716] = HAVE_adddf3;
  ena[717] = HAVE_addv8qi3;
  ena[718] = HAVE_addv4hi3;
  ena[719] = HAVE_addv2si3;
  ena[720] = HAVE_addv16qi3;
  ena[721] = HAVE_addv8hi3;
  ena[722] = HAVE_addv4si3;
  ena[723] = HAVE_addv2di3;
  ena[724] = HAVE_addvnx16qi3;
  ena[725] = HAVE_addvnx8hi3;
  ena[726] = HAVE_addvnx4si3;
  ena[727] = HAVE_addvnx2di3;
  ena[728] = HAVE_addvnx2qi3;
  ena[729] = HAVE_addvnx4qi3;
  ena[730] = HAVE_addvnx2hi3;
  ena[731] = HAVE_addvnx8qi3;
  ena[732] = HAVE_addvnx4hi3;
  ena[733] = HAVE_addvnx2si3;
  ena[734] = HAVE_addv4hf3;
  ena[735] = HAVE_addv2sf3;
  ena[736] = HAVE_addv8hf3;
  ena[737] = HAVE_addv4sf3;
  ena[738] = HAVE_addv2df3;
  ena[739] = HAVE_addvnx8hf3;
  ena[740] = HAVE_addvnx4sf3;
  ena[741] = HAVE_addvnx2df3;
  ena[742] = HAVE_subsi3;
  ena[743] = HAVE_subdi3;
  ena[744] = HAVE_subti3;
  ena[745] = HAVE_subhf3;
  ena[746] = HAVE_subsf3;
  ena[747] = HAVE_subdf3;
  ena[748] = HAVE_subv8qi3;
  ena[749] = HAVE_subv4hi3;
  ena[750] = HAVE_subv2si3;
  ena[751] = HAVE_subv16qi3;
  ena[752] = HAVE_subv8hi3;
  ena[753] = HAVE_subv4si3;
  ena[754] = HAVE_subv2di3;
  ena[755] = HAVE_subvnx16qi3;
  ena[756] = HAVE_subvnx8hi3;
  ena[757] = HAVE_subvnx4si3;
  ena[758] = HAVE_subvnx2di3;
  ena[759] = HAVE_subvnx2qi3;
  ena[760] = HAVE_subvnx4qi3;
  ena[761] = HAVE_subvnx2hi3;
  ena[762] = HAVE_subvnx8qi3;
  ena[763] = HAVE_subvnx4hi3;
  ena[764] = HAVE_subvnx2si3;
  ena[765] = HAVE_subv4hf3;
  ena[766] = HAVE_subv2sf3;
  ena[767] = HAVE_subv8hf3;
  ena[768] = HAVE_subv4sf3;
  ena[769] = HAVE_subv2df3;
  ena[770] = HAVE_subvnx8hf3;
  ena[771] = HAVE_subvnx4sf3;
  ena[772] = HAVE_subvnx2df3;
  ena[773] = HAVE_mulsi3;
  ena[774] = HAVE_muldi3;
  ena[775] = HAVE_multi3;
  ena[776] = HAVE_mulhf3;
  ena[777] = HAVE_mulsf3;
  ena[778] = HAVE_muldf3;
  ena[779] = HAVE_mulv8qi3;
  ena[780] = HAVE_mulv4hi3;
  ena[781] = HAVE_mulv2si3;
  ena[782] = HAVE_mulv16qi3;
  ena[783] = HAVE_mulv8hi3;
  ena[784] = HAVE_mulv4si3;
  ena[785] = HAVE_mulvnx16qi3;
  ena[786] = HAVE_mulvnx8hi3;
  ena[787] = HAVE_mulvnx4si3;
  ena[788] = HAVE_mulvnx2di3;
  ena[789] = HAVE_mulvnx2qi3;
  ena[790] = HAVE_mulvnx4qi3;
  ena[791] = HAVE_mulvnx2hi3;
  ena[792] = HAVE_mulvnx8qi3;
  ena[793] = HAVE_mulvnx4hi3;
  ena[794] = HAVE_mulvnx2si3;
  ena[795] = HAVE_mulv4hf3;
  ena[796] = HAVE_mulv2sf3;
  ena[797] = HAVE_mulv8hf3;
  ena[798] = HAVE_mulv4sf3;
  ena[799] = HAVE_mulv2df3;
  ena[800] = HAVE_mulvnx8hf3;
  ena[801] = HAVE_mulvnx4sf3;
  ena[802] = HAVE_mulvnx2df3;
  ena[803] = HAVE_divsi3;
  ena[804] = HAVE_divdi3;
  ena[805] = HAVE_divhf3;
  ena[806] = HAVE_divsf3;
  ena[807] = HAVE_divdf3;
  ena[808] = HAVE_divvnx4si3;
  ena[809] = HAVE_divvnx2di3;
  ena[810] = HAVE_divv4hf3;
  ena[811] = HAVE_divv2sf3;
  ena[812] = HAVE_divv8hf3;
  ena[813] = HAVE_divv4sf3;
  ena[814] = HAVE_divv2df3;
  ena[815] = HAVE_divvnx8hf3;
  ena[816] = HAVE_divvnx4sf3;
  ena[817] = HAVE_divvnx2df3;
  ena[818] = HAVE_udivsi3;
  ena[819] = HAVE_udivdi3;
  ena[820] = HAVE_udivvnx4si3;
  ena[821] = HAVE_udivvnx2di3;
  ena[822] = HAVE_modsi3;
  ena[823] = HAVE_moddi3;
  ena[824] = HAVE_ftruncv4hf2;
  ena[825] = HAVE_ftruncv2sf2;
  ena[826] = HAVE_ftruncv8hf2;
  ena[827] = HAVE_ftruncv4sf2;
  ena[828] = HAVE_ftruncv2df2;
  ena[829] = HAVE_andsi3;
  ena[830] = HAVE_anddi3;
  ena[831] = HAVE_andvnx16bi3;
  ena[832] = HAVE_andvnx8bi3;
  ena[833] = HAVE_andvnx4bi3;
  ena[834] = HAVE_andvnx2bi3;
  ena[835] = HAVE_andv8qi3;
  ena[836] = HAVE_andv4hi3;
  ena[837] = HAVE_andv2si3;
  ena[838] = HAVE_andv16qi3;
  ena[839] = HAVE_andv8hi3;
  ena[840] = HAVE_andv4si3;
  ena[841] = HAVE_andv2di3;
  ena[842] = HAVE_andvnx16qi3;
  ena[843] = HAVE_andvnx8hi3;
  ena[844] = HAVE_andvnx4si3;
  ena[845] = HAVE_andvnx2di3;
  ena[846] = HAVE_andvnx2qi3;
  ena[847] = HAVE_andvnx4qi3;
  ena[848] = HAVE_andvnx2hi3;
  ena[849] = HAVE_andvnx8qi3;
  ena[850] = HAVE_andvnx4hi3;
  ena[851] = HAVE_andvnx2si3;
  ena[852] = HAVE_iorsi3;
  ena[853] = HAVE_iordi3;
  ena[854] = HAVE_iorvnx16bi3;
  ena[855] = HAVE_iorvnx8bi3;
  ena[856] = HAVE_iorvnx4bi3;
  ena[857] = HAVE_iorvnx2bi3;
  ena[858] = HAVE_iorv8qi3;
  ena[859] = HAVE_iorv4hi3;
  ena[860] = HAVE_iorv2si3;
  ena[861] = HAVE_iorv16qi3;
  ena[862] = HAVE_iorv8hi3;
  ena[863] = HAVE_iorv4si3;
  ena[864] = HAVE_iorv2di3;
  ena[865] = HAVE_iorvnx16qi3;
  ena[866] = HAVE_iorvnx8hi3;
  ena[867] = HAVE_iorvnx4si3;
  ena[868] = HAVE_iorvnx2di3;
  ena[869] = HAVE_iorvnx2qi3;
  ena[870] = HAVE_iorvnx4qi3;
  ena[871] = HAVE_iorvnx2hi3;
  ena[872] = HAVE_iorvnx8qi3;
  ena[873] = HAVE_iorvnx4hi3;
  ena[874] = HAVE_iorvnx2si3;
  ena[875] = HAVE_xorsi3;
  ena[876] = HAVE_xordi3;
  ena[877] = HAVE_xorvnx16bi3;
  ena[878] = HAVE_xorvnx8bi3;
  ena[879] = HAVE_xorvnx4bi3;
  ena[880] = HAVE_xorvnx2bi3;
  ena[881] = HAVE_xorv8qi3;
  ena[882] = HAVE_xorv4hi3;
  ena[883] = HAVE_xorv2si3;
  ena[884] = HAVE_xorv16qi3;
  ena[885] = HAVE_xorv8hi3;
  ena[886] = HAVE_xorv4si3;
  ena[887] = HAVE_xorv2di3;
  ena[888] = HAVE_xorvnx16qi3;
  ena[889] = HAVE_xorvnx8hi3;
  ena[890] = HAVE_xorvnx4si3;
  ena[891] = HAVE_xorvnx2di3;
  ena[892] = HAVE_xorvnx2qi3;
  ena[893] = HAVE_xorvnx4qi3;
  ena[894] = HAVE_xorvnx2hi3;
  ena[895] = HAVE_xorvnx8qi3;
  ena[896] = HAVE_xorvnx4hi3;
  ena[897] = HAVE_xorvnx2si3;
  ena[898] = HAVE_ashlqi3;
  ena[899] = HAVE_ashlhi3;
  ena[900] = HAVE_ashlsi3;
  ena[901] = HAVE_ashldi3;
  ena[902] = HAVE_ashlv8qi3;
  ena[903] = HAVE_ashlv4hi3;
  ena[904] = HAVE_ashlv2si3;
  ena[905] = HAVE_ashlv16qi3;
  ena[906] = HAVE_ashlv8hi3;
  ena[907] = HAVE_ashlv4si3;
  ena[908] = HAVE_ashlv2di3;
  ena[909] = HAVE_ashlvnx16qi3;
  ena[910] = HAVE_ashlvnx8hi3;
  ena[911] = HAVE_ashlvnx4si3;
  ena[912] = HAVE_ashlvnx2di3;
  ena[913] = HAVE_ashlvnx2qi3;
  ena[914] = HAVE_ashlvnx4qi3;
  ena[915] = HAVE_ashlvnx2hi3;
  ena[916] = HAVE_ashlvnx8qi3;
  ena[917] = HAVE_ashlvnx4hi3;
  ena[918] = HAVE_ashlvnx2si3;
  ena[919] = HAVE_ashrsi3;
  ena[920] = HAVE_ashrdi3;
  ena[921] = HAVE_ashrv8qi3;
  ena[922] = HAVE_ashrv4hi3;
  ena[923] = HAVE_ashrv2si3;
  ena[924] = HAVE_ashrv16qi3;
  ena[925] = HAVE_ashrv8hi3;
  ena[926] = HAVE_ashrv4si3;
  ena[927] = HAVE_ashrv2di3;
  ena[928] = HAVE_ashrvnx16qi3;
  ena[929] = HAVE_ashrvnx8hi3;
  ena[930] = HAVE_ashrvnx4si3;
  ena[931] = HAVE_ashrvnx2di3;
  ena[932] = HAVE_ashrvnx2qi3;
  ena[933] = HAVE_ashrvnx4qi3;
  ena[934] = HAVE_ashrvnx2hi3;
  ena[935] = HAVE_ashrvnx8qi3;
  ena[936] = HAVE_ashrvnx4hi3;
  ena[937] = HAVE_ashrvnx2si3;
  ena[938] = HAVE_lshrsi3;
  ena[939] = HAVE_lshrdi3;
  ena[940] = HAVE_lshrv8qi3;
  ena[941] = HAVE_lshrv4hi3;
  ena[942] = HAVE_lshrv2si3;
  ena[943] = HAVE_lshrv16qi3;
  ena[944] = HAVE_lshrv8hi3;
  ena[945] = HAVE_lshrv4si3;
  ena[946] = HAVE_lshrv2di3;
  ena[947] = HAVE_lshrvnx16qi3;
  ena[948] = HAVE_lshrvnx8hi3;
  ena[949] = HAVE_lshrvnx4si3;
  ena[950] = HAVE_lshrvnx2di3;
  ena[951] = HAVE_lshrvnx2qi3;
  ena[952] = HAVE_lshrvnx4qi3;
  ena[953] = HAVE_lshrvnx2hi3;
  ena[954] = HAVE_lshrvnx8qi3;
  ena[955] = HAVE_lshrvnx4hi3;
  ena[956] = HAVE_lshrvnx2si3;
  ena[957] = HAVE_rotlsi3;
  ena[958] = HAVE_rotldi3;
  ena[959] = HAVE_rotrsi3;
  ena[960] = HAVE_rotrdi3;
  ena[961] = HAVE_vashlv8qi3;
  ena[962] = HAVE_vashlv4hi3;
  ena[963] = HAVE_vashlv2si3;
  ena[964] = HAVE_vashlv16qi3;
  ena[965] = HAVE_vashlv8hi3;
  ena[966] = HAVE_vashlv4si3;
  ena[967] = HAVE_vashlv2di3;
  ena[968] = HAVE_vashlvnx16qi3;
  ena[969] = HAVE_vashlvnx8hi3;
  ena[970] = HAVE_vashlvnx4si3;
  ena[971] = HAVE_vashlvnx2di3;
  ena[972] = HAVE_vashlvnx2qi3;
  ena[973] = HAVE_vashlvnx4qi3;
  ena[974] = HAVE_vashlvnx2hi3;
  ena[975] = HAVE_vashlvnx8qi3;
  ena[976] = HAVE_vashlvnx4hi3;
  ena[977] = HAVE_vashlvnx2si3;
  ena[978] = HAVE_vashrv8qi3;
  ena[979] = HAVE_vashrv4hi3;
  ena[980] = HAVE_vashrv2si3;
  ena[981] = HAVE_vashrv16qi3;
  ena[982] = HAVE_vashrv8hi3;
  ena[983] = HAVE_vashrv4si3;
  ena[984] = HAVE_vashrv2di3;
  ena[985] = HAVE_vashrvnx16qi3;
  ena[986] = HAVE_vashrvnx8hi3;
  ena[987] = HAVE_vashrvnx4si3;
  ena[988] = HAVE_vashrvnx2di3;
  ena[989] = HAVE_vashrvnx2qi3;
  ena[990] = HAVE_vashrvnx4qi3;
  ena[991] = HAVE_vashrvnx2hi3;
  ena[992] = HAVE_vashrvnx8qi3;
  ena[993] = HAVE_vashrvnx4hi3;
  ena[994] = HAVE_vashrvnx2si3;
  ena[995] = HAVE_vlshrv8qi3;
  ena[996] = HAVE_vlshrv4hi3;
  ena[997] = HAVE_vlshrv2si3;
  ena[998] = HAVE_vlshrv16qi3;
  ena[999] = HAVE_vlshrv8hi3;
  ena[1000] = HAVE_vlshrv4si3;
  ena[1001] = HAVE_vlshrv2di3;
  ena[1002] = HAVE_vlshrvnx16qi3;
  ena[1003] = HAVE_vlshrvnx8hi3;
  ena[1004] = HAVE_vlshrvnx4si3;
  ena[1005] = HAVE_vlshrvnx2di3;
  ena[1006] = HAVE_vlshrvnx2qi3;
  ena[1007] = HAVE_vlshrvnx4qi3;
  ena[1008] = HAVE_vlshrvnx2hi3;
  ena[1009] = HAVE_vlshrvnx8qi3;
  ena[1010] = HAVE_vlshrvnx4hi3;
  ena[1011] = HAVE_vlshrvnx2si3;
  ena[1012] = HAVE_sminsf3;
  ena[1013] = HAVE_smindf3;
  ena[1014] = HAVE_sminv8qi3;
  ena[1015] = HAVE_sminv4hi3;
  ena[1016] = HAVE_sminv2si3;
  ena[1017] = HAVE_sminv16qi3;
  ena[1018] = HAVE_sminv8hi3;
  ena[1019] = HAVE_sminv4si3;
  ena[1020] = HAVE_sminv2di3;
  ena[1021] = HAVE_sminvnx16qi3;
  ena[1022] = HAVE_sminvnx8hi3;
  ena[1023] = HAVE_sminvnx4si3;
  ena[1024] = HAVE_sminvnx2di3;
  ena[1025] = HAVE_sminvnx2qi3;
  ena[1026] = HAVE_sminvnx4qi3;
  ena[1027] = HAVE_sminvnx2hi3;
  ena[1028] = HAVE_sminvnx8qi3;
  ena[1029] = HAVE_sminvnx4hi3;
  ena[1030] = HAVE_sminvnx2si3;
  ena[1031] = HAVE_sminv4hf3;
  ena[1032] = HAVE_sminv2sf3;
  ena[1033] = HAVE_sminv8hf3;
  ena[1034] = HAVE_sminv4sf3;
  ena[1035] = HAVE_sminv2df3;
  ena[1036] = HAVE_sminvnx8hf3;
  ena[1037] = HAVE_sminvnx4sf3;
  ena[1038] = HAVE_sminvnx2df3;
  ena[1039] = HAVE_smaxsf3;
  ena[1040] = HAVE_smaxdf3;
  ena[1041] = HAVE_smaxv8qi3;
  ena[1042] = HAVE_smaxv4hi3;
  ena[1043] = HAVE_smaxv2si3;
  ena[1044] = HAVE_smaxv16qi3;
  ena[1045] = HAVE_smaxv8hi3;
  ena[1046] = HAVE_smaxv4si3;
  ena[1047] = HAVE_smaxv2di3;
  ena[1048] = HAVE_smaxvnx16qi3;
  ena[1049] = HAVE_smaxvnx8hi3;
  ena[1050] = HAVE_smaxvnx4si3;
  ena[1051] = HAVE_smaxvnx2di3;
  ena[1052] = HAVE_smaxvnx2qi3;
  ena[1053] = HAVE_smaxvnx4qi3;
  ena[1054] = HAVE_smaxvnx2hi3;
  ena[1055] = HAVE_smaxvnx8qi3;
  ena[1056] = HAVE_smaxvnx4hi3;
  ena[1057] = HAVE_smaxvnx2si3;
  ena[1058] = HAVE_smaxv4hf3;
  ena[1059] = HAVE_smaxv2sf3;
  ena[1060] = HAVE_smaxv8hf3;
  ena[1061] = HAVE_smaxv4sf3;
  ena[1062] = HAVE_smaxv2df3;
  ena[1063] = HAVE_smaxvnx8hf3;
  ena[1064] = HAVE_smaxvnx4sf3;
  ena[1065] = HAVE_smaxvnx2df3;
  ena[1066] = HAVE_uminv8qi3;
  ena[1067] = HAVE_uminv4hi3;
  ena[1068] = HAVE_uminv2si3;
  ena[1069] = HAVE_uminv16qi3;
  ena[1070] = HAVE_uminv8hi3;
  ena[1071] = HAVE_uminv4si3;
  ena[1072] = HAVE_uminv2di3;
  ena[1073] = HAVE_uminvnx16qi3;
  ena[1074] = HAVE_uminvnx8hi3;
  ena[1075] = HAVE_uminvnx4si3;
  ena[1076] = HAVE_uminvnx2di3;
  ena[1077] = HAVE_uminvnx2qi3;
  ena[1078] = HAVE_uminvnx4qi3;
  ena[1079] = HAVE_uminvnx2hi3;
  ena[1080] = HAVE_uminvnx8qi3;
  ena[1081] = HAVE_uminvnx4hi3;
  ena[1082] = HAVE_uminvnx2si3;
  ena[1083] = HAVE_umaxsi3;
  ena[1084] = HAVE_umaxdi3;
  ena[1085] = HAVE_umaxv8qi3;
  ena[1086] = HAVE_umaxv4hi3;
  ena[1087] = HAVE_umaxv2si3;
  ena[1088] = HAVE_umaxv16qi3;
  ena[1089] = HAVE_umaxv8hi3;
  ena[1090] = HAVE_umaxv4si3;
  ena[1091] = HAVE_umaxv2di3;
  ena[1092] = HAVE_umaxvnx16qi3;
  ena[1093] = HAVE_umaxvnx8hi3;
  ena[1094] = HAVE_umaxvnx4si3;
  ena[1095] = HAVE_umaxvnx2di3;
  ena[1096] = HAVE_umaxvnx2qi3;
  ena[1097] = HAVE_umaxvnx4qi3;
  ena[1098] = HAVE_umaxvnx2hi3;
  ena[1099] = HAVE_umaxvnx8qi3;
  ena[1100] = HAVE_umaxvnx4hi3;
  ena[1101] = HAVE_umaxvnx2si3;
  ena[1102] = HAVE_negsi2;
  ena[1103] = HAVE_negdi2;
  ena[1104] = HAVE_neghf2;
  ena[1105] = HAVE_negsf2;
  ena[1106] = HAVE_negdf2;
  ena[1107] = HAVE_negv8qi2;
  ena[1108] = HAVE_negv4hi2;
  ena[1109] = HAVE_negv2si2;
  ena[1110] = HAVE_negv16qi2;
  ena[1111] = HAVE_negv8hi2;
  ena[1112] = HAVE_negv4si2;
  ena[1113] = HAVE_negv2di2;
  ena[1114] = HAVE_negvnx16qi2;
  ena[1115] = HAVE_negvnx8hi2;
  ena[1116] = HAVE_negvnx4si2;
  ena[1117] = HAVE_negvnx2di2;
  ena[1118] = HAVE_negvnx2qi2;
  ena[1119] = HAVE_negvnx4qi2;
  ena[1120] = HAVE_negvnx2hi2;
  ena[1121] = HAVE_negvnx8qi2;
  ena[1122] = HAVE_negvnx4hi2;
  ena[1123] = HAVE_negvnx2si2;
  ena[1124] = HAVE_negv4hf2;
  ena[1125] = HAVE_negv2sf2;
  ena[1126] = HAVE_negv8hf2;
  ena[1127] = HAVE_negv4sf2;
  ena[1128] = HAVE_negv2df2;
  ena[1129] = HAVE_negvnx8hf2;
  ena[1130] = HAVE_negvnx4sf2;
  ena[1131] = HAVE_negvnx2df2;
  ena[1132] = HAVE_abssi2;
  ena[1133] = HAVE_absdi2;
  ena[1134] = HAVE_abshf2;
  ena[1135] = HAVE_abssf2;
  ena[1136] = HAVE_absdf2;
  ena[1137] = HAVE_absv8qi2;
  ena[1138] = HAVE_absv4hi2;
  ena[1139] = HAVE_absv2si2;
  ena[1140] = HAVE_absv16qi2;
  ena[1141] = HAVE_absv8hi2;
  ena[1142] = HAVE_absv4si2;
  ena[1143] = HAVE_absv2di2;
  ena[1144] = HAVE_absvnx16qi2;
  ena[1145] = HAVE_absvnx8hi2;
  ena[1146] = HAVE_absvnx4si2;
  ena[1147] = HAVE_absvnx2di2;
  ena[1148] = HAVE_absvnx2qi2;
  ena[1149] = HAVE_absvnx4qi2;
  ena[1150] = HAVE_absvnx2hi2;
  ena[1151] = HAVE_absvnx8qi2;
  ena[1152] = HAVE_absvnx4hi2;
  ena[1153] = HAVE_absvnx2si2;
  ena[1154] = HAVE_absv4hf2;
  ena[1155] = HAVE_absv2sf2;
  ena[1156] = HAVE_absv8hf2;
  ena[1157] = HAVE_absv4sf2;
  ena[1158] = HAVE_absv2df2;
  ena[1159] = HAVE_absvnx8hf2;
  ena[1160] = HAVE_absvnx4sf2;
  ena[1161] = HAVE_absvnx2df2;
  ena[1162] = HAVE_one_cmplsi2;
  ena[1163] = HAVE_one_cmpldi2;
  ena[1164] = HAVE_one_cmplvnx16bi2;
  ena[1165] = HAVE_one_cmplvnx8bi2;
  ena[1166] = HAVE_one_cmplvnx4bi2;
  ena[1167] = HAVE_one_cmplvnx2bi2;
  ena[1168] = HAVE_one_cmplv8qi2;
  ena[1169] = HAVE_one_cmplv4hi2;
  ena[1170] = HAVE_one_cmplv2si2;
  ena[1171] = HAVE_one_cmplv16qi2;
  ena[1172] = HAVE_one_cmplv8hi2;
  ena[1173] = HAVE_one_cmplv4si2;
  ena[1174] = HAVE_one_cmplv2di2;
  ena[1175] = HAVE_one_cmplvnx16qi2;
  ena[1176] = HAVE_one_cmplvnx8hi2;
  ena[1177] = HAVE_one_cmplvnx4si2;
  ena[1178] = HAVE_one_cmplvnx2di2;
  ena[1179] = HAVE_one_cmplvnx2qi2;
  ena[1180] = HAVE_one_cmplvnx4qi2;
  ena[1181] = HAVE_one_cmplvnx2hi2;
  ena[1182] = HAVE_one_cmplvnx8qi2;
  ena[1183] = HAVE_one_cmplvnx4hi2;
  ena[1184] = HAVE_one_cmplvnx2si2;
  ena[1185] = HAVE_bswaphi2;
  ena[1186] = HAVE_bswapsi2;
  ena[1187] = HAVE_bswapdi2;
  ena[1188] = HAVE_bswapv4hi2;
  ena[1189] = HAVE_bswapv2si2;
  ena[1190] = HAVE_bswapv8hi2;
  ena[1191] = HAVE_bswapv4si2;
  ena[1192] = HAVE_bswapv2di2;
  ena[1193] = HAVE_ffssi2;
  ena[1194] = HAVE_ffsdi2;
  ena[1195] = HAVE_clzsi2;
  ena[1196] = HAVE_clzdi2;
  ena[1197] = HAVE_clzv8qi2;
  ena[1198] = HAVE_clzv4hi2;
  ena[1199] = HAVE_clzv2si2;
  ena[1200] = HAVE_clzv16qi2;
  ena[1201] = HAVE_clzv8hi2;
  ena[1202] = HAVE_clzv4si2;
  ena[1203] = HAVE_clzvnx16qi2;
  ena[1204] = HAVE_clzvnx8hi2;
  ena[1205] = HAVE_clzvnx4si2;
  ena[1206] = HAVE_clzvnx2di2;
  ena[1207] = HAVE_clzvnx2qi2;
  ena[1208] = HAVE_clzvnx4qi2;
  ena[1209] = HAVE_clzvnx2hi2;
  ena[1210] = HAVE_clzvnx8qi2;
  ena[1211] = HAVE_clzvnx4hi2;
  ena[1212] = HAVE_clzvnx2si2;
  ena[1213] = HAVE_ctzsi2;
  ena[1214] = HAVE_ctzdi2;
  ena[1215] = HAVE_ctzv2si2;
  ena[1216] = HAVE_ctzv4si2;
  ena[1217] = HAVE_clrsbsi2;
  ena[1218] = HAVE_clrsbdi2;
  ena[1219] = HAVE_clrsbv8qi2;
  ena[1220] = HAVE_clrsbv4hi2;
  ena[1221] = HAVE_clrsbv2si2;
  ena[1222] = HAVE_clrsbv16qi2;
  ena[1223] = HAVE_clrsbv8hi2;
  ena[1224] = HAVE_clrsbv4si2;
  ena[1225] = HAVE_clrsbvnx16qi2;
  ena[1226] = HAVE_clrsbvnx8hi2;
  ena[1227] = HAVE_clrsbvnx4si2;
  ena[1228] = HAVE_clrsbvnx2di2;
  ena[1229] = HAVE_clrsbvnx2qi2;
  ena[1230] = HAVE_clrsbvnx4qi2;
  ena[1231] = HAVE_clrsbvnx2hi2;
  ena[1232] = HAVE_clrsbvnx8qi2;
  ena[1233] = HAVE_clrsbvnx4hi2;
  ena[1234] = HAVE_clrsbvnx2si2;
  ena[1235] = HAVE_popcountsi2;
  ena[1236] = HAVE_popcountdi2;
  ena[1237] = HAVE_popcountv8qi2;
  ena[1238] = HAVE_popcountv16qi2;
  ena[1239] = HAVE_popcountvnx16qi2;
  ena[1240] = HAVE_popcountvnx8hi2;
  ena[1241] = HAVE_popcountvnx4si2;
  ena[1242] = HAVE_popcountvnx2di2;
  ena[1243] = HAVE_popcountvnx2qi2;
  ena[1244] = HAVE_popcountvnx4qi2;
  ena[1245] = HAVE_popcountvnx2hi2;
  ena[1246] = HAVE_popcountvnx8qi2;
  ena[1247] = HAVE_popcountvnx4hi2;
  ena[1248] = HAVE_popcountvnx2si2;
  ena[1249] = HAVE_sqrthf2;
  ena[1250] = HAVE_sqrtsf2;
  ena[1251] = HAVE_sqrtdf2;
  ena[1252] = HAVE_sqrtv4hf2;
  ena[1253] = HAVE_sqrtv2sf2;
  ena[1254] = HAVE_sqrtv8hf2;
  ena[1255] = HAVE_sqrtv4sf2;
  ena[1256] = HAVE_sqrtv2df2;
  ena[1257] = HAVE_sqrtvnx8hf2;
  ena[1258] = HAVE_sqrtvnx4sf2;
  ena[1259] = HAVE_sqrtvnx2df2;
  ena[1260] = HAVE_movqi;
  ena[1261] = HAVE_movhi;
  ena[1262] = HAVE_movsi;
  ena[1263] = HAVE_movdi;
  ena[1264] = HAVE_movti;
  ena[1265] = HAVE_movoi;
  ena[1266] = HAVE_movci;
  ena[1267] = HAVE_movxi;
  ena[1268] = HAVE_movhf;
  ena[1269] = HAVE_movbf;
  ena[1270] = HAVE_movsf;
  ena[1271] = HAVE_movdf;
  ena[1272] = HAVE_movtf;
  ena[1273] = HAVE_movvnx16bi;
  ena[1274] = HAVE_movvnx8bi;
  ena[1275] = HAVE_movvnx4bi;
  ena[1276] = HAVE_movvnx2bi;
  ena[1277] = HAVE_movv8qi;
  ena[1278] = HAVE_movv4hi;
  ena[1279] = HAVE_movv2si;
  ena[1280] = HAVE_movv16qi;
  ena[1281] = HAVE_movv8hi;
  ena[1282] = HAVE_movv4si;
  ena[1283] = HAVE_movv2di;
  ena[1284] = HAVE_movvnx16qi;
  ena[1285] = HAVE_movvnx8hi;
  ena[1286] = HAVE_movvnx4si;
  ena[1287] = HAVE_movvnx2di;
  ena[1288] = HAVE_movvnx2qi;
  ena[1289] = HAVE_movvnx4qi;
  ena[1290] = HAVE_movvnx2hi;
  ena[1291] = HAVE_movvnx8qi;
  ena[1292] = HAVE_movvnx4hi;
  ena[1293] = HAVE_movvnx2si;
  ena[1294] = HAVE_movv2x8qi;
  ena[1295] = HAVE_movv3x8qi;
  ena[1296] = HAVE_movv4x8qi;
  ena[1297] = HAVE_movv2x4hi;
  ena[1298] = HAVE_movv3x4hi;
  ena[1299] = HAVE_movv4x4hi;
  ena[1300] = HAVE_movv2x2si;
  ena[1301] = HAVE_movv3x2si;
  ena[1302] = HAVE_movv4x2si;
  ena[1303] = HAVE_movv2x1di;
  ena[1304] = HAVE_movv3x1di;
  ena[1305] = HAVE_movv4x1di;
  ena[1306] = HAVE_movv2x16qi;
  ena[1307] = HAVE_movv3x16qi;
  ena[1308] = HAVE_movv4x16qi;
  ena[1309] = HAVE_movv2x8hi;
  ena[1310] = HAVE_movv3x8hi;
  ena[1311] = HAVE_movv4x8hi;
  ena[1312] = HAVE_movv2x4si;
  ena[1313] = HAVE_movv3x4si;
  ena[1314] = HAVE_movv4x4si;
  ena[1315] = HAVE_movv2x2di;
  ena[1316] = HAVE_movv3x2di;
  ena[1317] = HAVE_movv4x2di;
  ena[1318] = HAVE_movvnx32qi;
  ena[1319] = HAVE_movvnx16hi;
  ena[1320] = HAVE_movvnx8si;
  ena[1321] = HAVE_movvnx4di;
  ena[1322] = HAVE_movvnx48qi;
  ena[1323] = HAVE_movvnx24hi;
  ena[1324] = HAVE_movvnx12si;
  ena[1325] = HAVE_movvnx6di;
  ena[1326] = HAVE_movvnx64qi;
  ena[1327] = HAVE_movvnx32hi;
  ena[1328] = HAVE_movvnx16si;
  ena[1329] = HAVE_movvnx8di;
  ena[1330] = HAVE_movv8di;
  ena[1331] = HAVE_movv4bf;
  ena[1332] = HAVE_movv4hf;
  ena[1333] = HAVE_movv2sf;
  ena[1334] = HAVE_movv8bf;
  ena[1335] = HAVE_movv8hf;
  ena[1336] = HAVE_movv4sf;
  ena[1337] = HAVE_movv2df;
  ena[1338] = HAVE_movvnx8bf;
  ena[1339] = HAVE_movvnx8hf;
  ena[1340] = HAVE_movvnx4sf;
  ena[1341] = HAVE_movvnx2df;
  ena[1342] = HAVE_movvnx2bf;
  ena[1343] = HAVE_movvnx2hf;
  ena[1344] = HAVE_movvnx4bf;
  ena[1345] = HAVE_movvnx4hf;
  ena[1346] = HAVE_movvnx2sf;
  ena[1347] = HAVE_movv2x4bf;
  ena[1348] = HAVE_movv2x4hf;
  ena[1349] = HAVE_movv3x4bf;
  ena[1350] = HAVE_movv3x4hf;
  ena[1351] = HAVE_movv4x4bf;
  ena[1352] = HAVE_movv4x4hf;
  ena[1353] = HAVE_movv2x2sf;
  ena[1354] = HAVE_movv3x2sf;
  ena[1355] = HAVE_movv4x2sf;
  ena[1356] = HAVE_movv2x1df;
  ena[1357] = HAVE_movv3x1df;
  ena[1358] = HAVE_movv4x1df;
  ena[1359] = HAVE_movv2x8bf;
  ena[1360] = HAVE_movv2x8hf;
  ena[1361] = HAVE_movv3x8bf;
  ena[1362] = HAVE_movv3x8hf;
  ena[1363] = HAVE_movv4x8bf;
  ena[1364] = HAVE_movv4x8hf;
  ena[1365] = HAVE_movv2x4sf;
  ena[1366] = HAVE_movv3x4sf;
  ena[1367] = HAVE_movv4x4sf;
  ena[1368] = HAVE_movv2x2df;
  ena[1369] = HAVE_movv3x2df;
  ena[1370] = HAVE_movv4x2df;
  ena[1371] = HAVE_movvnx16bf;
  ena[1372] = HAVE_movvnx16hf;
  ena[1373] = HAVE_movvnx8sf;
  ena[1374] = HAVE_movvnx4df;
  ena[1375] = HAVE_movvnx24bf;
  ena[1376] = HAVE_movvnx24hf;
  ena[1377] = HAVE_movvnx12sf;
  ena[1378] = HAVE_movvnx6df;
  ena[1379] = HAVE_movvnx32bf;
  ena[1380] = HAVE_movvnx32hf;
  ena[1381] = HAVE_movvnx16sf;
  ena[1382] = HAVE_movvnx8df;
  ena[1383] = HAVE_movmisalignv8qi;
  ena[1384] = HAVE_movmisalignv4hi;
  ena[1385] = HAVE_movmisalignv2si;
  ena[1386] = HAVE_movmisalignv16qi;
  ena[1387] = HAVE_movmisalignv8hi;
  ena[1388] = HAVE_movmisalignv4si;
  ena[1389] = HAVE_movmisalignv2di;
  ena[1390] = HAVE_movmisalignvnx16qi;
  ena[1391] = HAVE_movmisalignvnx8hi;
  ena[1392] = HAVE_movmisalignvnx4si;
  ena[1393] = HAVE_movmisalignvnx2di;
  ena[1394] = HAVE_movmisalignvnx2qi;
  ena[1395] = HAVE_movmisalignvnx4qi;
  ena[1396] = HAVE_movmisalignvnx2hi;
  ena[1397] = HAVE_movmisalignvnx8qi;
  ena[1398] = HAVE_movmisalignvnx4hi;
  ena[1399] = HAVE_movmisalignvnx2si;
  ena[1400] = HAVE_movmisalignv4bf;
  ena[1401] = HAVE_movmisalignv4hf;
  ena[1402] = HAVE_movmisalignv2sf;
  ena[1403] = HAVE_movmisalignv8bf;
  ena[1404] = HAVE_movmisalignv8hf;
  ena[1405] = HAVE_movmisalignv4sf;
  ena[1406] = HAVE_movmisalignv2df;
  ena[1407] = HAVE_movmisalignvnx8bf;
  ena[1408] = HAVE_movmisalignvnx8hf;
  ena[1409] = HAVE_movmisalignvnx4sf;
  ena[1410] = HAVE_movmisalignvnx2df;
  ena[1411] = HAVE_movmisalignvnx2bf;
  ena[1412] = HAVE_movmisalignvnx2hf;
  ena[1413] = HAVE_movmisalignvnx4bf;
  ena[1414] = HAVE_movmisalignvnx4hf;
  ena[1415] = HAVE_movmisalignvnx2sf;
  ena[1416] = HAVE_insvsi;
  ena[1417] = HAVE_insvdi;
  ena[1418] = HAVE_cbranchcc4;
  ena[1419] = HAVE_cbranchsi4;
  ena[1420] = HAVE_cbranchdi4;
  ena[1421] = HAVE_cbranchsf4;
  ena[1422] = HAVE_cbranchdf4;
  ena[1423] = HAVE_cbranchvnx16bi4;
  ena[1424] = HAVE_cbranchvnx8bi4;
  ena[1425] = HAVE_cbranchvnx4bi4;
  ena[1426] = HAVE_cbranchvnx2bi4;
  ena[1427] = HAVE_negsicc;
  ena[1428] = HAVE_negdicc;
  ena[1429] = HAVE_notsicc;
  ena[1430] = HAVE_notdicc;
  ena[1431] = HAVE_movqicc;
  ena[1432] = HAVE_movhicc;
  ena[1433] = HAVE_movsicc;
  ena[1434] = HAVE_movdicc;
  ena[1435] = HAVE_movsfcc;
  ena[1436] = HAVE_movdfcc;
  ena[1437] = HAVE_cond_addvnx16qi;
  ena[1438] = HAVE_cond_addvnx8hi;
  ena[1439] = HAVE_cond_addvnx4si;
  ena[1440] = HAVE_cond_addvnx2di;
  ena[1441] = HAVE_cond_addvnx2qi;
  ena[1442] = HAVE_cond_addvnx4qi;
  ena[1443] = HAVE_cond_addvnx2hi;
  ena[1444] = HAVE_cond_addvnx8qi;
  ena[1445] = HAVE_cond_addvnx4hi;
  ena[1446] = HAVE_cond_addvnx2si;
  ena[1447] = HAVE_cond_addvnx8hf;
  ena[1448] = HAVE_cond_addvnx4sf;
  ena[1449] = HAVE_cond_addvnx2df;
  ena[1450] = HAVE_cond_subvnx16qi;
  ena[1451] = HAVE_cond_subvnx8hi;
  ena[1452] = HAVE_cond_subvnx4si;
  ena[1453] = HAVE_cond_subvnx2di;
  ena[1454] = HAVE_cond_subvnx2qi;
  ena[1455] = HAVE_cond_subvnx4qi;
  ena[1456] = HAVE_cond_subvnx2hi;
  ena[1457] = HAVE_cond_subvnx8qi;
  ena[1458] = HAVE_cond_subvnx4hi;
  ena[1459] = HAVE_cond_subvnx2si;
  ena[1460] = HAVE_cond_subvnx8hf;
  ena[1461] = HAVE_cond_subvnx4sf;
  ena[1462] = HAVE_cond_subvnx2df;
  ena[1463] = HAVE_cond_mulvnx16qi;
  ena[1464] = HAVE_cond_mulvnx8hi;
  ena[1465] = HAVE_cond_mulvnx4si;
  ena[1466] = HAVE_cond_mulvnx2di;
  ena[1467] = HAVE_cond_mulvnx2qi;
  ena[1468] = HAVE_cond_mulvnx4qi;
  ena[1469] = HAVE_cond_mulvnx2hi;
  ena[1470] = HAVE_cond_mulvnx8qi;
  ena[1471] = HAVE_cond_mulvnx4hi;
  ena[1472] = HAVE_cond_mulvnx2si;
  ena[1473] = HAVE_cond_mulvnx8hf;
  ena[1474] = HAVE_cond_mulvnx4sf;
  ena[1475] = HAVE_cond_mulvnx2df;
  ena[1476] = HAVE_cond_divvnx4si;
  ena[1477] = HAVE_cond_divvnx2di;
  ena[1478] = HAVE_cond_divvnx8hf;
  ena[1479] = HAVE_cond_divvnx4sf;
  ena[1480] = HAVE_cond_divvnx2df;
  ena[1481] = HAVE_cond_udivvnx4si;
  ena[1482] = HAVE_cond_udivvnx2di;
  ena[1483] = HAVE_cond_andvnx16qi;
  ena[1484] = HAVE_cond_andvnx8hi;
  ena[1485] = HAVE_cond_andvnx4si;
  ena[1486] = HAVE_cond_andvnx2di;
  ena[1487] = HAVE_cond_andvnx2qi;
  ena[1488] = HAVE_cond_andvnx4qi;
  ena[1489] = HAVE_cond_andvnx2hi;
  ena[1490] = HAVE_cond_andvnx8qi;
  ena[1491] = HAVE_cond_andvnx4hi;
  ena[1492] = HAVE_cond_andvnx2si;
  ena[1493] = HAVE_cond_iorvnx16qi;
  ena[1494] = HAVE_cond_iorvnx8hi;
  ena[1495] = HAVE_cond_iorvnx4si;
  ena[1496] = HAVE_cond_iorvnx2di;
  ena[1497] = HAVE_cond_iorvnx2qi;
  ena[1498] = HAVE_cond_iorvnx4qi;
  ena[1499] = HAVE_cond_iorvnx2hi;
  ena[1500] = HAVE_cond_iorvnx8qi;
  ena[1501] = HAVE_cond_iorvnx4hi;
  ena[1502] = HAVE_cond_iorvnx2si;
  ena[1503] = HAVE_cond_xorvnx16qi;
  ena[1504] = HAVE_cond_xorvnx8hi;
  ena[1505] = HAVE_cond_xorvnx4si;
  ena[1506] = HAVE_cond_xorvnx2di;
  ena[1507] = HAVE_cond_xorvnx2qi;
  ena[1508] = HAVE_cond_xorvnx4qi;
  ena[1509] = HAVE_cond_xorvnx2hi;
  ena[1510] = HAVE_cond_xorvnx8qi;
  ena[1511] = HAVE_cond_xorvnx4hi;
  ena[1512] = HAVE_cond_xorvnx2si;
  ena[1513] = HAVE_cond_ashlvnx16qi;
  ena[1514] = HAVE_cond_ashlvnx8hi;
  ena[1515] = HAVE_cond_ashlvnx4si;
  ena[1516] = HAVE_cond_ashlvnx2di;
  ena[1517] = HAVE_cond_ashlvnx2qi;
  ena[1518] = HAVE_cond_ashlvnx4qi;
  ena[1519] = HAVE_cond_ashlvnx2hi;
  ena[1520] = HAVE_cond_ashlvnx8qi;
  ena[1521] = HAVE_cond_ashlvnx4hi;
  ena[1522] = HAVE_cond_ashlvnx2si;
  ena[1523] = HAVE_cond_ashrvnx16qi;
  ena[1524] = HAVE_cond_ashrvnx8hi;
  ena[1525] = HAVE_cond_ashrvnx4si;
  ena[1526] = HAVE_cond_ashrvnx2di;
  ena[1527] = HAVE_cond_ashrvnx2qi;
  ena[1528] = HAVE_cond_ashrvnx4qi;
  ena[1529] = HAVE_cond_ashrvnx2hi;
  ena[1530] = HAVE_cond_ashrvnx8qi;
  ena[1531] = HAVE_cond_ashrvnx4hi;
  ena[1532] = HAVE_cond_ashrvnx2si;
  ena[1533] = HAVE_cond_lshrvnx16qi;
  ena[1534] = HAVE_cond_lshrvnx8hi;
  ena[1535] = HAVE_cond_lshrvnx4si;
  ena[1536] = HAVE_cond_lshrvnx2di;
  ena[1537] = HAVE_cond_lshrvnx2qi;
  ena[1538] = HAVE_cond_lshrvnx4qi;
  ena[1539] = HAVE_cond_lshrvnx2hi;
  ena[1540] = HAVE_cond_lshrvnx8qi;
  ena[1541] = HAVE_cond_lshrvnx4hi;
  ena[1542] = HAVE_cond_lshrvnx2si;
  ena[1543] = HAVE_cond_sminvnx16qi;
  ena[1544] = HAVE_cond_sminvnx8hi;
  ena[1545] = HAVE_cond_sminvnx4si;
  ena[1546] = HAVE_cond_sminvnx2di;
  ena[1547] = HAVE_cond_sminvnx2qi;
  ena[1548] = HAVE_cond_sminvnx4qi;
  ena[1549] = HAVE_cond_sminvnx2hi;
  ena[1550] = HAVE_cond_sminvnx8qi;
  ena[1551] = HAVE_cond_sminvnx4hi;
  ena[1552] = HAVE_cond_sminvnx2si;
  ena[1553] = HAVE_cond_sminvnx8hf;
  ena[1554] = HAVE_cond_sminvnx4sf;
  ena[1555] = HAVE_cond_sminvnx2df;
  ena[1556] = HAVE_cond_smaxvnx16qi;
  ena[1557] = HAVE_cond_smaxvnx8hi;
  ena[1558] = HAVE_cond_smaxvnx4si;
  ena[1559] = HAVE_cond_smaxvnx2di;
  ena[1560] = HAVE_cond_smaxvnx2qi;
  ena[1561] = HAVE_cond_smaxvnx4qi;
  ena[1562] = HAVE_cond_smaxvnx2hi;
  ena[1563] = HAVE_cond_smaxvnx8qi;
  ena[1564] = HAVE_cond_smaxvnx4hi;
  ena[1565] = HAVE_cond_smaxvnx2si;
  ena[1566] = HAVE_cond_smaxvnx8hf;
  ena[1567] = HAVE_cond_smaxvnx4sf;
  ena[1568] = HAVE_cond_smaxvnx2df;
  ena[1569] = HAVE_cond_uminvnx16qi;
  ena[1570] = HAVE_cond_uminvnx8hi;
  ena[1571] = HAVE_cond_uminvnx4si;
  ena[1572] = HAVE_cond_uminvnx2di;
  ena[1573] = HAVE_cond_uminvnx2qi;
  ena[1574] = HAVE_cond_uminvnx4qi;
  ena[1575] = HAVE_cond_uminvnx2hi;
  ena[1576] = HAVE_cond_uminvnx8qi;
  ena[1577] = HAVE_cond_uminvnx4hi;
  ena[1578] = HAVE_cond_uminvnx2si;
  ena[1579] = HAVE_cond_umaxvnx16qi;
  ena[1580] = HAVE_cond_umaxvnx8hi;
  ena[1581] = HAVE_cond_umaxvnx4si;
  ena[1582] = HAVE_cond_umaxvnx2di;
  ena[1583] = HAVE_cond_umaxvnx2qi;
  ena[1584] = HAVE_cond_umaxvnx4qi;
  ena[1585] = HAVE_cond_umaxvnx2hi;
  ena[1586] = HAVE_cond_umaxvnx8qi;
  ena[1587] = HAVE_cond_umaxvnx4hi;
  ena[1588] = HAVE_cond_umaxvnx2si;
  ena[1589] = HAVE_cond_fminvnx8hf;
  ena[1590] = HAVE_cond_fminvnx4sf;
  ena[1591] = HAVE_cond_fminvnx2df;
  ena[1592] = HAVE_cond_fmaxvnx8hf;
  ena[1593] = HAVE_cond_fmaxvnx4sf;
  ena[1594] = HAVE_cond_fmaxvnx2df;
  ena[1595] = HAVE_cond_fmavnx16qi;
  ena[1596] = HAVE_cond_fmavnx8hi;
  ena[1597] = HAVE_cond_fmavnx4si;
  ena[1598] = HAVE_cond_fmavnx2di;
  ena[1599] = HAVE_cond_fmavnx2qi;
  ena[1600] = HAVE_cond_fmavnx4qi;
  ena[1601] = HAVE_cond_fmavnx2hi;
  ena[1602] = HAVE_cond_fmavnx8qi;
  ena[1603] = HAVE_cond_fmavnx4hi;
  ena[1604] = HAVE_cond_fmavnx2si;
  ena[1605] = HAVE_cond_fmavnx8hf;
  ena[1606] = HAVE_cond_fmavnx4sf;
  ena[1607] = HAVE_cond_fmavnx2df;
  ena[1608] = HAVE_cond_fmsvnx8hf;
  ena[1609] = HAVE_cond_fmsvnx4sf;
  ena[1610] = HAVE_cond_fmsvnx2df;
  ena[1611] = HAVE_cond_fnmavnx16qi;
  ena[1612] = HAVE_cond_fnmavnx8hi;
  ena[1613] = HAVE_cond_fnmavnx4si;
  ena[1614] = HAVE_cond_fnmavnx2di;
  ena[1615] = HAVE_cond_fnmavnx2qi;
  ena[1616] = HAVE_cond_fnmavnx4qi;
  ena[1617] = HAVE_cond_fnmavnx2hi;
  ena[1618] = HAVE_cond_fnmavnx8qi;
  ena[1619] = HAVE_cond_fnmavnx4hi;
  ena[1620] = HAVE_cond_fnmavnx2si;
  ena[1621] = HAVE_cond_fnmavnx8hf;
  ena[1622] = HAVE_cond_fnmavnx4sf;
  ena[1623] = HAVE_cond_fnmavnx2df;
  ena[1624] = HAVE_cond_fnmsvnx8hf;
  ena[1625] = HAVE_cond_fnmsvnx4sf;
  ena[1626] = HAVE_cond_fnmsvnx2df;
  ena[1627] = HAVE_cond_negvnx16qi;
  ena[1628] = HAVE_cond_negvnx8hi;
  ena[1629] = HAVE_cond_negvnx4si;
  ena[1630] = HAVE_cond_negvnx2di;
  ena[1631] = HAVE_cond_negvnx2qi;
  ena[1632] = HAVE_cond_negvnx4qi;
  ena[1633] = HAVE_cond_negvnx2hi;
  ena[1634] = HAVE_cond_negvnx8qi;
  ena[1635] = HAVE_cond_negvnx4hi;
  ena[1636] = HAVE_cond_negvnx2si;
  ena[1637] = HAVE_cond_negvnx8hf;
  ena[1638] = HAVE_cond_negvnx4sf;
  ena[1639] = HAVE_cond_negvnx2df;
  ena[1640] = HAVE_cmovsi6;
  ena[1641] = HAVE_cmovdi6;
  ena[1642] = HAVE_cmovsf6;
  ena[1643] = HAVE_cmovdf6;
  ena[1644] = HAVE_cstorecc4;
  ena[1645] = HAVE_cstoresi4;
  ena[1646] = HAVE_cstoredi4;
  ena[1647] = HAVE_cstoresf4;
  ena[1648] = HAVE_cstoredf4;
  ena[1649] = HAVE_addvsi4;
  ena[1650] = HAVE_addvdi4;
  ena[1651] = HAVE_addvti4;
  ena[1652] = HAVE_subvsi4;
  ena[1653] = HAVE_subvdi4;
  ena[1654] = HAVE_subvti4;
  ena[1655] = HAVE_uaddvsi4;
  ena[1656] = HAVE_uaddvdi4;
  ena[1657] = HAVE_uaddvti4;
  ena[1658] = HAVE_usubvsi4;
  ena[1659] = HAVE_usubvdi4;
  ena[1660] = HAVE_usubvti4;
  ena[1661] = HAVE_negvsi3;
  ena[1662] = HAVE_negvdi3;
  ena[1663] = HAVE_negvti3;
  ena[1664] = HAVE_smuldi3_highpart;
  ena[1665] = HAVE_smulvnx16qi3_highpart;
  ena[1666] = HAVE_smulvnx8hi3_highpart;
  ena[1667] = HAVE_smulvnx4si3_highpart;
  ena[1668] = HAVE_smulvnx2di3_highpart;
  ena[1669] = HAVE_smulvnx2qi3_highpart;
  ena[1670] = HAVE_smulvnx4qi3_highpart;
  ena[1671] = HAVE_smulvnx2hi3_highpart;
  ena[1672] = HAVE_smulvnx8qi3_highpart;
  ena[1673] = HAVE_smulvnx4hi3_highpart;
  ena[1674] = HAVE_smulvnx2si3_highpart;
  ena[1675] = HAVE_umuldi3_highpart;
  ena[1676] = HAVE_umulvnx16qi3_highpart;
  ena[1677] = HAVE_umulvnx8hi3_highpart;
  ena[1678] = HAVE_umulvnx4si3_highpart;
  ena[1679] = HAVE_umulvnx2di3_highpart;
  ena[1680] = HAVE_umulvnx2qi3_highpart;
  ena[1681] = HAVE_umulvnx4qi3_highpart;
  ena[1682] = HAVE_umulvnx2hi3_highpart;
  ena[1683] = HAVE_umulvnx8qi3_highpart;
  ena[1684] = HAVE_umulvnx4hi3_highpart;
  ena[1685] = HAVE_umulvnx2si3_highpart;
  ena[1686] = HAVE_cpymemdi;
  ena[1687] = HAVE_movmemdi;
  ena[1688] = HAVE_setmemdi;
  ena[1689] = HAVE_fmahf4;
  ena[1690] = HAVE_fmasf4;
  ena[1691] = HAVE_fmadf4;
  ena[1692] = HAVE_fmavnx16qi4;
  ena[1693] = HAVE_fmavnx8hi4;
  ena[1694] = HAVE_fmavnx4si4;
  ena[1695] = HAVE_fmavnx2di4;
  ena[1696] = HAVE_fmavnx2qi4;
  ena[1697] = HAVE_fmavnx4qi4;
  ena[1698] = HAVE_fmavnx2hi4;
  ena[1699] = HAVE_fmavnx8qi4;
  ena[1700] = HAVE_fmavnx4hi4;
  ena[1701] = HAVE_fmavnx2si4;
  ena[1702] = HAVE_fmav4hf4;
  ena[1703] = HAVE_fmav2sf4;
  ena[1704] = HAVE_fmav8hf4;
  ena[1705] = HAVE_fmav4sf4;
  ena[1706] = HAVE_fmav2df4;
  ena[1707] = HAVE_fmavnx8hf4;
  ena[1708] = HAVE_fmavnx4sf4;
  ena[1709] = HAVE_fmavnx2df4;
  ena[1710] = HAVE_fmssf4;
  ena[1711] = HAVE_fmsdf4;
  ena[1712] = HAVE_fmsvnx8hf4;
  ena[1713] = HAVE_fmsvnx4sf4;
  ena[1714] = HAVE_fmsvnx2df4;
  ena[1715] = HAVE_fnmahf4;
  ena[1716] = HAVE_fnmasf4;
  ena[1717] = HAVE_fnmadf4;
  ena[1718] = HAVE_fnmavnx16qi4;
  ena[1719] = HAVE_fnmavnx8hi4;
  ena[1720] = HAVE_fnmavnx4si4;
  ena[1721] = HAVE_fnmavnx2di4;
  ena[1722] = HAVE_fnmavnx2qi4;
  ena[1723] = HAVE_fnmavnx4qi4;
  ena[1724] = HAVE_fnmavnx2hi4;
  ena[1725] = HAVE_fnmavnx8qi4;
  ena[1726] = HAVE_fnmavnx4hi4;
  ena[1727] = HAVE_fnmavnx2si4;
  ena[1728] = HAVE_fnmav4hf4;
  ena[1729] = HAVE_fnmav2sf4;
  ena[1730] = HAVE_fnmav8hf4;
  ena[1731] = HAVE_fnmav4sf4;
  ena[1732] = HAVE_fnmav2df4;
  ena[1733] = HAVE_fnmavnx8hf4;
  ena[1734] = HAVE_fnmavnx4sf4;
  ena[1735] = HAVE_fnmavnx2df4;
  ena[1736] = HAVE_fnmssf4;
  ena[1737] = HAVE_fnmsdf4;
  ena[1738] = HAVE_fnmsvnx8hf4;
  ena[1739] = HAVE_fnmsvnx4sf4;
  ena[1740] = HAVE_fnmsvnx2df4;
  ena[1741] = HAVE_rinthf2;
  ena[1742] = HAVE_rintsf2;
  ena[1743] = HAVE_rintdf2;
  ena[1744] = HAVE_rintv4hf2;
  ena[1745] = HAVE_rintv2sf2;
  ena[1746] = HAVE_rintv8hf2;
  ena[1747] = HAVE_rintv4sf2;
  ena[1748] = HAVE_rintv2df2;
  ena[1749] = HAVE_rintvnx8hf2;
  ena[1750] = HAVE_rintvnx4sf2;
  ena[1751] = HAVE_rintvnx2df2;
  ena[1752] = HAVE_roundhf2;
  ena[1753] = HAVE_roundsf2;
  ena[1754] = HAVE_rounddf2;
  ena[1755] = HAVE_roundv4hf2;
  ena[1756] = HAVE_roundv2sf2;
  ena[1757] = HAVE_roundv8hf2;
  ena[1758] = HAVE_roundv4sf2;
  ena[1759] = HAVE_roundv2df2;
  ena[1760] = HAVE_roundvnx8hf2;
  ena[1761] = HAVE_roundvnx4sf2;
  ena[1762] = HAVE_roundvnx2df2;
  ena[1763] = HAVE_roundevenhf2;
  ena[1764] = HAVE_roundevensf2;
  ena[1765] = HAVE_roundevendf2;
  ena[1766] = HAVE_roundevenv4hf2;
  ena[1767] = HAVE_roundevenv2sf2;
  ena[1768] = HAVE_roundevenv8hf2;
  ena[1769] = HAVE_roundevenv4sf2;
  ena[1770] = HAVE_roundevenv2df2;
  ena[1771] = HAVE_floorhf2;
  ena[1772] = HAVE_floorsf2;
  ena[1773] = HAVE_floordf2;
  ena[1774] = HAVE_floorv4hf2;
  ena[1775] = HAVE_floorv2sf2;
  ena[1776] = HAVE_floorv8hf2;
  ena[1777] = HAVE_floorv4sf2;
  ena[1778] = HAVE_floorv2df2;
  ena[1779] = HAVE_floorvnx8hf2;
  ena[1780] = HAVE_floorvnx4sf2;
  ena[1781] = HAVE_floorvnx2df2;
  ena[1782] = HAVE_ceilhf2;
  ena[1783] = HAVE_ceilsf2;
  ena[1784] = HAVE_ceildf2;
  ena[1785] = HAVE_ceilv4hf2;
  ena[1786] = HAVE_ceilv2sf2;
  ena[1787] = HAVE_ceilv8hf2;
  ena[1788] = HAVE_ceilv4sf2;
  ena[1789] = HAVE_ceilv2df2;
  ena[1790] = HAVE_ceilvnx8hf2;
  ena[1791] = HAVE_ceilvnx4sf2;
  ena[1792] = HAVE_ceilvnx2df2;
  ena[1793] = HAVE_btrunchf2;
  ena[1794] = HAVE_btruncsf2;
  ena[1795] = HAVE_btruncdf2;
  ena[1796] = HAVE_btruncv4hf2;
  ena[1797] = HAVE_btruncv2sf2;
  ena[1798] = HAVE_btruncv8hf2;
  ena[1799] = HAVE_btruncv4sf2;
  ena[1800] = HAVE_btruncv2df2;
  ena[1801] = HAVE_btruncvnx8hf2;
  ena[1802] = HAVE_btruncvnx4sf2;
  ena[1803] = HAVE_btruncvnx2df2;
  ena[1804] = HAVE_nearbyinthf2;
  ena[1805] = HAVE_nearbyintsf2;
  ena[1806] = HAVE_nearbyintdf2;
  ena[1807] = HAVE_nearbyintv4hf2;
  ena[1808] = HAVE_nearbyintv2sf2;
  ena[1809] = HAVE_nearbyintv8hf2;
  ena[1810] = HAVE_nearbyintv4sf2;
  ena[1811] = HAVE_nearbyintv2df2;
  ena[1812] = HAVE_nearbyintvnx8hf2;
  ena[1813] = HAVE_nearbyintvnx4sf2;
  ena[1814] = HAVE_nearbyintvnx2df2;
  ena[1815] = HAVE_copysignsf3;
  ena[1816] = HAVE_copysigndf3;
  ena[1817] = HAVE_copysignv4hf3;
  ena[1818] = HAVE_copysignv2sf3;
  ena[1819] = HAVE_copysignv8hf3;
  ena[1820] = HAVE_copysignv4sf3;
  ena[1821] = HAVE_copysignv2df3;
  ena[1822] = HAVE_copysignvnx8hf3;
  ena[1823] = HAVE_copysignvnx4sf3;
  ena[1824] = HAVE_copysignvnx2df3;
  ena[1825] = HAVE_xorsignsf3;
  ena[1826] = HAVE_xorsigndf3;
  ena[1827] = HAVE_xorsignv4hf3;
  ena[1828] = HAVE_xorsignv2sf3;
  ena[1829] = HAVE_xorsignv8hf3;
  ena[1830] = HAVE_xorsignv4sf3;
  ena[1831] = HAVE_xorsignv2df3;
  ena[1832] = HAVE_xorsignvnx8hf3;
  ena[1833] = HAVE_xorsignvnx4sf3;
  ena[1834] = HAVE_xorsignvnx2df3;
  ena[1835] = HAVE_cadd90vnx16qi3;
  ena[1836] = HAVE_cadd90vnx8hi3;
  ena[1837] = HAVE_cadd90vnx4si3;
  ena[1838] = HAVE_cadd90vnx2di3;
  ena[1839] = HAVE_cadd90v4hf3;
  ena[1840] = HAVE_cadd90v2sf3;
  ena[1841] = HAVE_cadd90v8hf3;
  ena[1842] = HAVE_cadd90v4sf3;
  ena[1843] = HAVE_cadd90v2df3;
  ena[1844] = HAVE_cadd90vnx8hf3;
  ena[1845] = HAVE_cadd90vnx4sf3;
  ena[1846] = HAVE_cadd90vnx2df3;
  ena[1847] = HAVE_cadd270vnx16qi3;
  ena[1848] = HAVE_cadd270vnx8hi3;
  ena[1849] = HAVE_cadd270vnx4si3;
  ena[1850] = HAVE_cadd270vnx2di3;
  ena[1851] = HAVE_cadd270v4hf3;
  ena[1852] = HAVE_cadd270v2sf3;
  ena[1853] = HAVE_cadd270v8hf3;
  ena[1854] = HAVE_cadd270v4sf3;
  ena[1855] = HAVE_cadd270v2df3;
  ena[1856] = HAVE_cadd270vnx8hf3;
  ena[1857] = HAVE_cadd270vnx4sf3;
  ena[1858] = HAVE_cadd270vnx2df3;
  ena[1859] = HAVE_cmulvnx16qi3;
  ena[1860] = HAVE_cmulvnx8hi3;
  ena[1861] = HAVE_cmulvnx4si3;
  ena[1862] = HAVE_cmulvnx2di3;
  ena[1863] = HAVE_cmulv4hf3;
  ena[1864] = HAVE_cmulv2sf3;
  ena[1865] = HAVE_cmulv8hf3;
  ena[1866] = HAVE_cmulv4sf3;
  ena[1867] = HAVE_cmulv2df3;
  ena[1868] = HAVE_cmulvnx8hf3;
  ena[1869] = HAVE_cmulvnx4sf3;
  ena[1870] = HAVE_cmulvnx2df3;
  ena[1871] = HAVE_cmul_conjvnx16qi3;
  ena[1872] = HAVE_cmul_conjvnx8hi3;
  ena[1873] = HAVE_cmul_conjvnx4si3;
  ena[1874] = HAVE_cmul_conjvnx2di3;
  ena[1875] = HAVE_cmul_conjv4hf3;
  ena[1876] = HAVE_cmul_conjv2sf3;
  ena[1877] = HAVE_cmul_conjv8hf3;
  ena[1878] = HAVE_cmul_conjv4sf3;
  ena[1879] = HAVE_cmul_conjv2df3;
  ena[1880] = HAVE_cmul_conjvnx8hf3;
  ena[1881] = HAVE_cmul_conjvnx4sf3;
  ena[1882] = HAVE_cmul_conjvnx2df3;
  ena[1883] = HAVE_cmlavnx16qi4;
  ena[1884] = HAVE_cmlavnx8hi4;
  ena[1885] = HAVE_cmlavnx4si4;
  ena[1886] = HAVE_cmlavnx2di4;
  ena[1887] = HAVE_cmlav4hf4;
  ena[1888] = HAVE_cmlav2sf4;
  ena[1889] = HAVE_cmlav8hf4;
  ena[1890] = HAVE_cmlav4sf4;
  ena[1891] = HAVE_cmlav2df4;
  ena[1892] = HAVE_cmlavnx8hf4;
  ena[1893] = HAVE_cmlavnx4sf4;
  ena[1894] = HAVE_cmlavnx2df4;
  ena[1895] = HAVE_cmla_conjvnx16qi4;
  ena[1896] = HAVE_cmla_conjvnx8hi4;
  ena[1897] = HAVE_cmla_conjvnx4si4;
  ena[1898] = HAVE_cmla_conjvnx2di4;
  ena[1899] = HAVE_cmla_conjv4hf4;
  ena[1900] = HAVE_cmla_conjv2sf4;
  ena[1901] = HAVE_cmla_conjv8hf4;
  ena[1902] = HAVE_cmla_conjv4sf4;
  ena[1903] = HAVE_cmla_conjv2df4;
  ena[1904] = HAVE_cmla_conjvnx8hf4;
  ena[1905] = HAVE_cmla_conjvnx4sf4;
  ena[1906] = HAVE_cmla_conjvnx2df4;
  ena[1907] = HAVE_cmlsvnx16qi4;
  ena[1908] = HAVE_cmlsvnx8hi4;
  ena[1909] = HAVE_cmlsvnx4si4;
  ena[1910] = HAVE_cmlsvnx2di4;
  ena[1911] = HAVE_cmlsv4hf4;
  ena[1912] = HAVE_cmlsv2sf4;
  ena[1913] = HAVE_cmlsv8hf4;
  ena[1914] = HAVE_cmlsv4sf4;
  ena[1915] = HAVE_cmlsv2df4;
  ena[1916] = HAVE_cmlsvnx8hf4;
  ena[1917] = HAVE_cmlsvnx4sf4;
  ena[1918] = HAVE_cmlsvnx2df4;
  ena[1919] = HAVE_cmls_conjvnx16qi4;
  ena[1920] = HAVE_cmls_conjvnx8hi4;
  ena[1921] = HAVE_cmls_conjvnx4si4;
  ena[1922] = HAVE_cmls_conjvnx2di4;
  ena[1923] = HAVE_cmls_conjv4hf4;
  ena[1924] = HAVE_cmls_conjv2sf4;
  ena[1925] = HAVE_cmls_conjv8hf4;
  ena[1926] = HAVE_cmls_conjv4sf4;
  ena[1927] = HAVE_cmls_conjv2df4;
  ena[1928] = HAVE_cmls_conjvnx8hf4;
  ena[1929] = HAVE_cmls_conjvnx4sf4;
  ena[1930] = HAVE_cmls_conjvnx2df4;
  ena[1931] = HAVE_rsqrtsf2;
  ena[1932] = HAVE_rsqrtdf2;
  ena[1933] = HAVE_rsqrtv2sf2;
  ena[1934] = HAVE_rsqrtv4sf2;
  ena[1935] = HAVE_rsqrtv2df2;
  ena[1936] = HAVE_rsqrtvnx4sf2;
  ena[1937] = HAVE_rsqrtvnx2df2;
  ena[1938] = HAVE_signbitv2sf2;
  ena[1939] = HAVE_signbitv4sf2;
  ena[1940] = HAVE_fmaxhf3;
  ena[1941] = HAVE_fmaxsf3;
  ena[1942] = HAVE_fmaxdf3;
  ena[1943] = HAVE_fmaxv4hf3;
  ena[1944] = HAVE_fmaxv2sf3;
  ena[1945] = HAVE_fmaxv8hf3;
  ena[1946] = HAVE_fmaxv4sf3;
  ena[1947] = HAVE_fmaxv2df3;
  ena[1948] = HAVE_fmaxvnx8hf3;
  ena[1949] = HAVE_fmaxvnx4sf3;
  ena[1950] = HAVE_fmaxvnx2df3;
  ena[1951] = HAVE_fminhf3;
  ena[1952] = HAVE_fminsf3;
  ena[1953] = HAVE_fmindf3;
  ena[1954] = HAVE_fminv4hf3;
  ena[1955] = HAVE_fminv2sf3;
  ena[1956] = HAVE_fminv8hf3;
  ena[1957] = HAVE_fminv4sf3;
  ena[1958] = HAVE_fminv2df3;
  ena[1959] = HAVE_fminvnx8hf3;
  ena[1960] = HAVE_fminvnx4sf3;
  ena[1961] = HAVE_fminvnx2df3;
  ena[1962] = HAVE_reduc_fmax_scal_v4hf;
  ena[1963] = HAVE_reduc_fmax_scal_v2sf;
  ena[1964] = HAVE_reduc_fmax_scal_v8hf;
  ena[1965] = HAVE_reduc_fmax_scal_v4sf;
  ena[1966] = HAVE_reduc_fmax_scal_v2df;
  ena[1967] = HAVE_reduc_fmax_scal_vnx8hf;
  ena[1968] = HAVE_reduc_fmax_scal_vnx4sf;
  ena[1969] = HAVE_reduc_fmax_scal_vnx2df;
  ena[1970] = HAVE_reduc_fmin_scal_v4hf;
  ena[1971] = HAVE_reduc_fmin_scal_v2sf;
  ena[1972] = HAVE_reduc_fmin_scal_v8hf;
  ena[1973] = HAVE_reduc_fmin_scal_v4sf;
  ena[1974] = HAVE_reduc_fmin_scal_v2df;
  ena[1975] = HAVE_reduc_fmin_scal_vnx8hf;
  ena[1976] = HAVE_reduc_fmin_scal_vnx4sf;
  ena[1977] = HAVE_reduc_fmin_scal_vnx2df;
  ena[1978] = HAVE_reduc_smax_scal_v8qi;
  ena[1979] = HAVE_reduc_smax_scal_v4hi;
  ena[1980] = HAVE_reduc_smax_scal_v2si;
  ena[1981] = HAVE_reduc_smax_scal_v16qi;
  ena[1982] = HAVE_reduc_smax_scal_v8hi;
  ena[1983] = HAVE_reduc_smax_scal_v4si;
  ena[1984] = HAVE_reduc_smax_scal_vnx16qi;
  ena[1985] = HAVE_reduc_smax_scal_vnx8hi;
  ena[1986] = HAVE_reduc_smax_scal_vnx4si;
  ena[1987] = HAVE_reduc_smax_scal_vnx2di;
  ena[1988] = HAVE_reduc_smax_scal_v4hf;
  ena[1989] = HAVE_reduc_smax_scal_v2sf;
  ena[1990] = HAVE_reduc_smax_scal_v8hf;
  ena[1991] = HAVE_reduc_smax_scal_v4sf;
  ena[1992] = HAVE_reduc_smax_scal_v2df;
  ena[1993] = HAVE_reduc_smax_scal_vnx8hf;
  ena[1994] = HAVE_reduc_smax_scal_vnx4sf;
  ena[1995] = HAVE_reduc_smax_scal_vnx2df;
  ena[1996] = HAVE_reduc_smin_scal_v8qi;
  ena[1997] = HAVE_reduc_smin_scal_v4hi;
  ena[1998] = HAVE_reduc_smin_scal_v2si;
  ena[1999] = HAVE_reduc_smin_scal_v16qi;
  ena[2000] = HAVE_reduc_smin_scal_v8hi;
  ena[2001] = HAVE_reduc_smin_scal_v4si;
  ena[2002] = HAVE_reduc_smin_scal_vnx16qi;
  ena[2003] = HAVE_reduc_smin_scal_vnx8hi;
  ena[2004] = HAVE_reduc_smin_scal_vnx4si;
  ena[2005] = HAVE_reduc_smin_scal_vnx2di;
  ena[2006] = HAVE_reduc_smin_scal_v4hf;
  ena[2007] = HAVE_reduc_smin_scal_v2sf;
  ena[2008] = HAVE_reduc_smin_scal_v8hf;
  ena[2009] = HAVE_reduc_smin_scal_v4sf;
  ena[2010] = HAVE_reduc_smin_scal_v2df;
  ena[2011] = HAVE_reduc_smin_scal_vnx8hf;
  ena[2012] = HAVE_reduc_smin_scal_vnx4sf;
  ena[2013] = HAVE_reduc_smin_scal_vnx2df;
  ena[2014] = HAVE_reduc_plus_scal_v8qi;
  ena[2015] = HAVE_reduc_plus_scal_v4hi;
  ena[2016] = HAVE_reduc_plus_scal_v2si;
  ena[2017] = HAVE_reduc_plus_scal_v16qi;
  ena[2018] = HAVE_reduc_plus_scal_v8hi;
  ena[2019] = HAVE_reduc_plus_scal_v4si;
  ena[2020] = HAVE_reduc_plus_scal_v2di;
  ena[2021] = HAVE_reduc_plus_scal_vnx16qi;
  ena[2022] = HAVE_reduc_plus_scal_vnx8hi;
  ena[2023] = HAVE_reduc_plus_scal_vnx4si;
  ena[2024] = HAVE_reduc_plus_scal_vnx2di;
  ena[2025] = HAVE_reduc_plus_scal_v2sf;
  ena[2026] = HAVE_reduc_plus_scal_v4sf;
  ena[2027] = HAVE_reduc_plus_scal_v2df;
  ena[2028] = HAVE_reduc_plus_scal_vnx8hf;
  ena[2029] = HAVE_reduc_plus_scal_vnx4sf;
  ena[2030] = HAVE_reduc_plus_scal_vnx2df;
  ena[2031] = HAVE_reduc_umax_scal_v8qi;
  ena[2032] = HAVE_reduc_umax_scal_v4hi;
  ena[2033] = HAVE_reduc_umax_scal_v2si;
  ena[2034] = HAVE_reduc_umax_scal_v16qi;
  ena[2035] = HAVE_reduc_umax_scal_v8hi;
  ena[2036] = HAVE_reduc_umax_scal_v4si;
  ena[2037] = HAVE_reduc_umax_scal_vnx16qi;
  ena[2038] = HAVE_reduc_umax_scal_vnx8hi;
  ena[2039] = HAVE_reduc_umax_scal_vnx4si;
  ena[2040] = HAVE_reduc_umax_scal_vnx2di;
  ena[2041] = HAVE_reduc_umin_scal_v8qi;
  ena[2042] = HAVE_reduc_umin_scal_v4hi;
  ena[2043] = HAVE_reduc_umin_scal_v2si;
  ena[2044] = HAVE_reduc_umin_scal_v16qi;
  ena[2045] = HAVE_reduc_umin_scal_v8hi;
  ena[2046] = HAVE_reduc_umin_scal_v4si;
  ena[2047] = HAVE_reduc_umin_scal_vnx16qi;
  ena[2048] = HAVE_reduc_umin_scal_vnx8hi;
  ena[2049] = HAVE_reduc_umin_scal_vnx4si;
  ena[2050] = HAVE_reduc_umin_scal_vnx2di;
  ena[2051] = HAVE_reduc_and_scal_vnx16qi;
  ena[2052] = HAVE_reduc_and_scal_vnx8hi;
  ena[2053] = HAVE_reduc_and_scal_vnx4si;
  ena[2054] = HAVE_reduc_and_scal_vnx2di;
  ena[2055] = HAVE_reduc_ior_scal_vnx16qi;
  ena[2056] = HAVE_reduc_ior_scal_vnx8hi;
  ena[2057] = HAVE_reduc_ior_scal_vnx4si;
  ena[2058] = HAVE_reduc_ior_scal_vnx2di;
  ena[2059] = HAVE_reduc_xor_scal_vnx16qi;
  ena[2060] = HAVE_reduc_xor_scal_vnx8hi;
  ena[2061] = HAVE_reduc_xor_scal_vnx4si;
  ena[2062] = HAVE_reduc_xor_scal_vnx2di;
  ena[2063] = HAVE_fold_left_plus_vnx8hf;
  ena[2064] = HAVE_fold_left_plus_vnx4sf;
  ena[2065] = HAVE_fold_left_plus_vnx2df;
  ena[2066] = HAVE_mask_fold_left_plus_vnx8hf;
  ena[2067] = HAVE_mask_fold_left_plus_vnx4sf;
  ena[2068] = HAVE_mask_fold_left_plus_vnx2df;
  ena[2069] = HAVE_extract_last_vnx16qi;
  ena[2070] = HAVE_extract_last_vnx8hi;
  ena[2071] = HAVE_extract_last_vnx4si;
  ena[2072] = HAVE_extract_last_vnx2di;
  ena[2073] = HAVE_extract_last_vnx8bf;
  ena[2074] = HAVE_extract_last_vnx8hf;
  ena[2075] = HAVE_extract_last_vnx4sf;
  ena[2076] = HAVE_extract_last_vnx2df;
  ena[2077] = HAVE_fold_extract_last_vnx16qi;
  ena[2078] = HAVE_fold_extract_last_vnx8hi;
  ena[2079] = HAVE_fold_extract_last_vnx4si;
  ena[2080] = HAVE_fold_extract_last_vnx2di;
  ena[2081] = HAVE_fold_extract_last_vnx8bf;
  ena[2082] = HAVE_fold_extract_last_vnx8hf;
  ena[2083] = HAVE_fold_extract_last_vnx4sf;
  ena[2084] = HAVE_fold_extract_last_vnx2df;
  ena[2085] = HAVE_avgv8qi3_floor;
  ena[2086] = HAVE_avgv4hi3_floor;
  ena[2087] = HAVE_avgv2si3_floor;
  ena[2088] = HAVE_avgv16qi3_floor;
  ena[2089] = HAVE_avgv8hi3_floor;
  ena[2090] = HAVE_avgv4si3_floor;
  ena[2091] = HAVE_avgvnx16qi3_floor;
  ena[2092] = HAVE_avgvnx8hi3_floor;
  ena[2093] = HAVE_avgvnx4si3_floor;
  ena[2094] = HAVE_avgvnx2di3_floor;
  ena[2095] = HAVE_uavgv8qi3_floor;
  ena[2096] = HAVE_uavgv4hi3_floor;
  ena[2097] = HAVE_uavgv2si3_floor;
  ena[2098] = HAVE_uavgv16qi3_floor;
  ena[2099] = HAVE_uavgv8hi3_floor;
  ena[2100] = HAVE_uavgv4si3_floor;
  ena[2101] = HAVE_uavgvnx16qi3_floor;
  ena[2102] = HAVE_uavgvnx8hi3_floor;
  ena[2103] = HAVE_uavgvnx4si3_floor;
  ena[2104] = HAVE_uavgvnx2di3_floor;
  ena[2105] = HAVE_avgv8qi3_ceil;
  ena[2106] = HAVE_avgv4hi3_ceil;
  ena[2107] = HAVE_avgv2si3_ceil;
  ena[2108] = HAVE_avgv16qi3_ceil;
  ena[2109] = HAVE_avgv8hi3_ceil;
  ena[2110] = HAVE_avgv4si3_ceil;
  ena[2111] = HAVE_avgvnx16qi3_ceil;
  ena[2112] = HAVE_avgvnx8hi3_ceil;
  ena[2113] = HAVE_avgvnx4si3_ceil;
  ena[2114] = HAVE_avgvnx2di3_ceil;
  ena[2115] = HAVE_uavgv8qi3_ceil;
  ena[2116] = HAVE_uavgv4hi3_ceil;
  ena[2117] = HAVE_uavgv2si3_ceil;
  ena[2118] = HAVE_uavgv16qi3_ceil;
  ena[2119] = HAVE_uavgv8hi3_ceil;
  ena[2120] = HAVE_uavgv4si3_ceil;
  ena[2121] = HAVE_uavgvnx16qi3_ceil;
  ena[2122] = HAVE_uavgvnx8hi3_ceil;
  ena[2123] = HAVE_uavgvnx4si3_ceil;
  ena[2124] = HAVE_uavgvnx2di3_ceil;
  ena[2125] = HAVE_sdot_prodv8qi;
  ena[2126] = HAVE_sdot_prodv16qi;
  ena[2127] = HAVE_sdot_prodvnx16qi;
  ena[2128] = HAVE_sdot_prodvnx8hi;
  ena[2129] = HAVE_widen_ssumv8qi3;
  ena[2130] = HAVE_widen_ssumv4hi3;
  ena[2131] = HAVE_widen_ssumv2si3;
  ena[2132] = HAVE_widen_ssumv16qi3;
  ena[2133] = HAVE_widen_ssumv8hi3;
  ena[2134] = HAVE_widen_ssumv4si3;
  ena[2135] = HAVE_udot_prodv8qi;
  ena[2136] = HAVE_udot_prodv16qi;
  ena[2137] = HAVE_udot_prodvnx16qi;
  ena[2138] = HAVE_udot_prodvnx8hi;
  ena[2139] = HAVE_usdot_prodv8qi;
  ena[2140] = HAVE_usdot_prodv16qi;
  ena[2141] = HAVE_usdot_prodvnx16qi;
  ena[2142] = HAVE_widen_usumv8qi3;
  ena[2143] = HAVE_widen_usumv4hi3;
  ena[2144] = HAVE_widen_usumv2si3;
  ena[2145] = HAVE_widen_usumv16qi3;
  ena[2146] = HAVE_widen_usumv8hi3;
  ena[2147] = HAVE_widen_usumv4si3;
  ena[2148] = HAVE_usadv16qi;
  ena[2149] = HAVE_usadvnx16qi;
  ena[2150] = HAVE_usadvnx8hi;
  ena[2151] = HAVE_ssadv16qi;
  ena[2152] = HAVE_ssadvnx16qi;
  ena[2153] = HAVE_ssadvnx8hi;
  ena[2154] = HAVE_smulhsvnx16qi3;
  ena[2155] = HAVE_smulhsvnx8hi3;
  ena[2156] = HAVE_smulhsvnx4si3;
  ena[2157] = HAVE_smulhrsvnx16qi3;
  ena[2158] = HAVE_smulhrsvnx8hi3;
  ena[2159] = HAVE_smulhrsvnx4si3;
  ena[2160] = HAVE_umulhsvnx16qi3;
  ena[2161] = HAVE_umulhsvnx8hi3;
  ena[2162] = HAVE_umulhsvnx4si3;
  ena[2163] = HAVE_umulhrsvnx16qi3;
  ena[2164] = HAVE_umulhrsvnx8hi3;
  ena[2165] = HAVE_umulhrsvnx4si3;
  ena[2166] = HAVE_sdiv_pow2vnx16qi3;
  ena[2167] = HAVE_sdiv_pow2vnx8hi3;
  ena[2168] = HAVE_sdiv_pow2vnx4si3;
  ena[2169] = HAVE_sdiv_pow2vnx2di3;
  ena[2170] = HAVE_sdiv_pow2vnx2qi3;
  ena[2171] = HAVE_sdiv_pow2vnx4qi3;
  ena[2172] = HAVE_sdiv_pow2vnx2hi3;
  ena[2173] = HAVE_sdiv_pow2vnx8qi3;
  ena[2174] = HAVE_sdiv_pow2vnx4hi3;
  ena[2175] = HAVE_sdiv_pow2vnx2si3;
  ena[2176] = HAVE_vec_pack_sfix_trunc_vnx2df;
  ena[2177] = HAVE_vec_pack_trunc_di;
  ena[2178] = HAVE_vec_pack_trunc_df;
  ena[2179] = HAVE_vec_pack_trunc_vnx8bi;
  ena[2180] = HAVE_vec_pack_trunc_vnx4bi;
  ena[2181] = HAVE_vec_pack_trunc_vnx2bi;
  ena[2182] = HAVE_vec_pack_trunc_v4hi;
  ena[2183] = HAVE_vec_pack_trunc_v2si;
  ena[2184] = HAVE_vec_pack_trunc_v8hi;
  ena[2185] = HAVE_vec_pack_trunc_v4si;
  ena[2186] = HAVE_vec_pack_trunc_v2di;
  ena[2187] = HAVE_vec_pack_trunc_vnx8hi;
  ena[2188] = HAVE_vec_pack_trunc_vnx4si;
  ena[2189] = HAVE_vec_pack_trunc_vnx2di;
  ena[2190] = HAVE_vec_pack_trunc_v2df;
  ena[2191] = HAVE_vec_pack_trunc_vnx4sf;
  ena[2192] = HAVE_vec_pack_trunc_vnx2df;
  ena[2193] = HAVE_vec_pack_ufix_trunc_vnx2df;
  ena[2194] = HAVE_vec_permv8qi;
  ena[2195] = HAVE_vec_permv16qi;
  ena[2196] = HAVE_vec_permvnx16qi;
  ena[2197] = HAVE_vec_permvnx8hi;
  ena[2198] = HAVE_vec_permvnx4si;
  ena[2199] = HAVE_vec_permvnx2di;
  ena[2200] = HAVE_vec_permvnx8bf;
  ena[2201] = HAVE_vec_permvnx8hf;
  ena[2202] = HAVE_vec_permvnx4sf;
  ena[2203] = HAVE_vec_permvnx2df;
  ena[2204] = HAVE_vec_setv8qi;
  ena[2205] = HAVE_vec_setv4hi;
  ena[2206] = HAVE_vec_setv2si;
  ena[2207] = HAVE_vec_setv16qi;
  ena[2208] = HAVE_vec_setv8hi;
  ena[2209] = HAVE_vec_setv4si;
  ena[2210] = HAVE_vec_setv2di;
  ena[2211] = HAVE_vec_setv4bf;
  ena[2212] = HAVE_vec_setv4hf;
  ena[2213] = HAVE_vec_setv2sf;
  ena[2214] = HAVE_vec_setv8bf;
  ena[2215] = HAVE_vec_setv8hf;
  ena[2216] = HAVE_vec_setv4sf;
  ena[2217] = HAVE_vec_setv2df;
  ena[2218] = HAVE_vec_shr_v8qi;
  ena[2219] = HAVE_vec_shr_v4hi;
  ena[2220] = HAVE_vec_shr_v2si;
  ena[2221] = HAVE_vec_shr_v4bf;
  ena[2222] = HAVE_vec_shr_v4hf;
  ena[2223] = HAVE_vec_shr_v2sf;
  ena[2224] = HAVE_vec_unpacks_float_hi_vnx4si;
  ena[2225] = HAVE_vec_unpacks_float_lo_vnx4si;
  ena[2226] = HAVE_vec_unpacks_hi_vnx16bi;
  ena[2227] = HAVE_vec_unpacks_hi_vnx8bi;
  ena[2228] = HAVE_vec_unpacks_hi_vnx4bi;
  ena[2229] = HAVE_vec_unpacks_hi_v16qi;
  ena[2230] = HAVE_vec_unpacks_hi_v8hi;
  ena[2231] = HAVE_vec_unpacks_hi_v4si;
  ena[2232] = HAVE_vec_unpacks_hi_vnx16qi;
  ena[2233] = HAVE_vec_unpacks_hi_vnx8hi;
  ena[2234] = HAVE_vec_unpacks_hi_vnx4si;
  ena[2235] = HAVE_vec_unpacks_hi_v8hf;
  ena[2236] = HAVE_vec_unpacks_hi_v4sf;
  ena[2237] = HAVE_vec_unpacks_hi_vnx8hf;
  ena[2238] = HAVE_vec_unpacks_hi_vnx4sf;
  ena[2239] = HAVE_vec_unpacks_lo_vnx16bi;
  ena[2240] = HAVE_vec_unpacks_lo_vnx8bi;
  ena[2241] = HAVE_vec_unpacks_lo_vnx4bi;
  ena[2242] = HAVE_vec_unpacks_lo_v16qi;
  ena[2243] = HAVE_vec_unpacks_lo_v8hi;
  ena[2244] = HAVE_vec_unpacks_lo_v4si;
  ena[2245] = HAVE_vec_unpacks_lo_vnx16qi;
  ena[2246] = HAVE_vec_unpacks_lo_vnx8hi;
  ena[2247] = HAVE_vec_unpacks_lo_vnx4si;
  ena[2248] = HAVE_vec_unpacks_lo_v8hf;
  ena[2249] = HAVE_vec_unpacks_lo_v4sf;
  ena[2250] = HAVE_vec_unpacks_lo_vnx8hf;
  ena[2251] = HAVE_vec_unpacks_lo_vnx4sf;
  ena[2252] = HAVE_vec_unpacku_float_hi_vnx4si;
  ena[2253] = HAVE_vec_unpacku_float_lo_vnx4si;
  ena[2254] = HAVE_vec_unpacku_hi_vnx16bi;
  ena[2255] = HAVE_vec_unpacku_hi_vnx8bi;
  ena[2256] = HAVE_vec_unpacku_hi_vnx4bi;
  ena[2257] = HAVE_vec_unpacku_hi_v16qi;
  ena[2258] = HAVE_vec_unpacku_hi_v8hi;
  ena[2259] = HAVE_vec_unpacku_hi_v4si;
  ena[2260] = HAVE_vec_unpacku_hi_vnx16qi;
  ena[2261] = HAVE_vec_unpacku_hi_vnx8hi;
  ena[2262] = HAVE_vec_unpacku_hi_vnx4si;
  ena[2263] = HAVE_vec_unpacku_lo_vnx16bi;
  ena[2264] = HAVE_vec_unpacku_lo_vnx8bi;
  ena[2265] = HAVE_vec_unpacku_lo_vnx4bi;
  ena[2266] = HAVE_vec_unpacku_lo_v16qi;
  ena[2267] = HAVE_vec_unpacku_lo_v8hi;
  ena[2268] = HAVE_vec_unpacku_lo_v4si;
  ena[2269] = HAVE_vec_unpacku_lo_vnx16qi;
  ena[2270] = HAVE_vec_unpacku_lo_vnx8hi;
  ena[2271] = HAVE_vec_unpacku_lo_vnx4si;
  ena[2272] = HAVE_vec_widen_smult_hi_v16qi;
  ena[2273] = HAVE_vec_widen_smult_hi_v8hi;
  ena[2274] = HAVE_vec_widen_smult_hi_v4si;
  ena[2275] = HAVE_vec_widen_smult_lo_v16qi;
  ena[2276] = HAVE_vec_widen_smult_lo_v8hi;
  ena[2277] = HAVE_vec_widen_smult_lo_v4si;
  ena[2278] = HAVE_vec_widen_ssubl_hi_v16qi;
  ena[2279] = HAVE_vec_widen_ssubl_hi_v8hi;
  ena[2280] = HAVE_vec_widen_ssubl_hi_v4si;
  ena[2281] = HAVE_vec_widen_ssubl_lo_v16qi;
  ena[2282] = HAVE_vec_widen_ssubl_lo_v8hi;
  ena[2283] = HAVE_vec_widen_ssubl_lo_v4si;
  ena[2284] = HAVE_vec_widen_saddl_hi_v16qi;
  ena[2285] = HAVE_vec_widen_saddl_hi_v8hi;
  ena[2286] = HAVE_vec_widen_saddl_hi_v4si;
  ena[2287] = HAVE_vec_widen_saddl_lo_v16qi;
  ena[2288] = HAVE_vec_widen_saddl_lo_v8hi;
  ena[2289] = HAVE_vec_widen_saddl_lo_v4si;
  ena[2290] = HAVE_vec_widen_sshiftl_hi_v16qi;
  ena[2291] = HAVE_vec_widen_sshiftl_hi_v8hi;
  ena[2292] = HAVE_vec_widen_sshiftl_hi_v4si;
  ena[2293] = HAVE_vec_widen_sshiftl_lo_v16qi;
  ena[2294] = HAVE_vec_widen_sshiftl_lo_v8hi;
  ena[2295] = HAVE_vec_widen_sshiftl_lo_v4si;
  ena[2296] = HAVE_vec_widen_umult_hi_v16qi;
  ena[2297] = HAVE_vec_widen_umult_hi_v8hi;
  ena[2298] = HAVE_vec_widen_umult_hi_v4si;
  ena[2299] = HAVE_vec_widen_umult_lo_v16qi;
  ena[2300] = HAVE_vec_widen_umult_lo_v8hi;
  ena[2301] = HAVE_vec_widen_umult_lo_v4si;
  ena[2302] = HAVE_vec_widen_ushiftl_hi_v16qi;
  ena[2303] = HAVE_vec_widen_ushiftl_hi_v8hi;
  ena[2304] = HAVE_vec_widen_ushiftl_hi_v4si;
  ena[2305] = HAVE_vec_widen_ushiftl_lo_v16qi;
  ena[2306] = HAVE_vec_widen_ushiftl_lo_v8hi;
  ena[2307] = HAVE_vec_widen_ushiftl_lo_v4si;
  ena[2308] = HAVE_vec_widen_usubl_hi_v16qi;
  ena[2309] = HAVE_vec_widen_usubl_hi_v8hi;
  ena[2310] = HAVE_vec_widen_usubl_hi_v4si;
  ena[2311] = HAVE_vec_widen_usubl_lo_v16qi;
  ena[2312] = HAVE_vec_widen_usubl_lo_v8hi;
  ena[2313] = HAVE_vec_widen_usubl_lo_v4si;
  ena[2314] = HAVE_vec_widen_uaddl_hi_v16qi;
  ena[2315] = HAVE_vec_widen_uaddl_hi_v8hi;
  ena[2316] = HAVE_vec_widen_uaddl_hi_v4si;
  ena[2317] = HAVE_vec_widen_uaddl_lo_v16qi;
  ena[2318] = HAVE_vec_widen_uaddl_lo_v8hi;
  ena[2319] = HAVE_vec_widen_uaddl_lo_v4si;
  ena[2320] = HAVE_atomic_add_fetchqi;
  ena[2321] = HAVE_atomic_add_fetchhi;
  ena[2322] = HAVE_atomic_add_fetchsi;
  ena[2323] = HAVE_atomic_add_fetchdi;
  ena[2324] = HAVE_atomic_addqi;
  ena[2325] = HAVE_atomic_addhi;
  ena[2326] = HAVE_atomic_addsi;
  ena[2327] = HAVE_atomic_adddi;
  ena[2328] = HAVE_atomic_and_fetchqi;
  ena[2329] = HAVE_atomic_and_fetchhi;
  ena[2330] = HAVE_atomic_and_fetchsi;
  ena[2331] = HAVE_atomic_and_fetchdi;
  ena[2332] = HAVE_atomic_andqi;
  ena[2333] = HAVE_atomic_andhi;
  ena[2334] = HAVE_atomic_andsi;
  ena[2335] = HAVE_atomic_anddi;
  ena[2336] = HAVE_atomic_compare_and_swapqi;
  ena[2337] = HAVE_atomic_compare_and_swaphi;
  ena[2338] = HAVE_atomic_compare_and_swapsi;
  ena[2339] = HAVE_atomic_compare_and_swapdi;
  ena[2340] = HAVE_atomic_compare_and_swapti;
  ena[2341] = HAVE_atomic_exchangeqi;
  ena[2342] = HAVE_atomic_exchangehi;
  ena[2343] = HAVE_atomic_exchangesi;
  ena[2344] = HAVE_atomic_exchangedi;
  ena[2345] = HAVE_atomic_fetch_addqi;
  ena[2346] = HAVE_atomic_fetch_addhi;
  ena[2347] = HAVE_atomic_fetch_addsi;
  ena[2348] = HAVE_atomic_fetch_adddi;
  ena[2349] = HAVE_atomic_fetch_andqi;
  ena[2350] = HAVE_atomic_fetch_andhi;
  ena[2351] = HAVE_atomic_fetch_andsi;
  ena[2352] = HAVE_atomic_fetch_anddi;
  ena[2353] = HAVE_atomic_fetch_nandqi;
  ena[2354] = HAVE_atomic_fetch_nandhi;
  ena[2355] = HAVE_atomic_fetch_nandsi;
  ena[2356] = HAVE_atomic_fetch_nanddi;
  ena[2357] = HAVE_atomic_fetch_orqi;
  ena[2358] = HAVE_atomic_fetch_orhi;
  ena[2359] = HAVE_atomic_fetch_orsi;
  ena[2360] = HAVE_atomic_fetch_ordi;
  ena[2361] = HAVE_atomic_fetch_subqi;
  ena[2362] = HAVE_atomic_fetch_subhi;
  ena[2363] = HAVE_atomic_fetch_subsi;
  ena[2364] = HAVE_atomic_fetch_subdi;
  ena[2365] = HAVE_atomic_fetch_xorqi;
  ena[2366] = HAVE_atomic_fetch_xorhi;
  ena[2367] = HAVE_atomic_fetch_xorsi;
  ena[2368] = HAVE_atomic_fetch_xordi;
  ena[2369] = HAVE_atomic_loadqi;
  ena[2370] = HAVE_atomic_loadhi;
  ena[2371] = HAVE_atomic_loadsi;
  ena[2372] = HAVE_atomic_loaddi;
  ena[2373] = HAVE_atomic_nand_fetchqi;
  ena[2374] = HAVE_atomic_nand_fetchhi;
  ena[2375] = HAVE_atomic_nand_fetchsi;
  ena[2376] = HAVE_atomic_nand_fetchdi;
  ena[2377] = HAVE_atomic_nandqi;
  ena[2378] = HAVE_atomic_nandhi;
  ena[2379] = HAVE_atomic_nandsi;
  ena[2380] = HAVE_atomic_nanddi;
  ena[2381] = HAVE_atomic_or_fetchqi;
  ena[2382] = HAVE_atomic_or_fetchhi;
  ena[2383] = HAVE_atomic_or_fetchsi;
  ena[2384] = HAVE_atomic_or_fetchdi;
  ena[2385] = HAVE_atomic_orqi;
  ena[2386] = HAVE_atomic_orhi;
  ena[2387] = HAVE_atomic_orsi;
  ena[2388] = HAVE_atomic_ordi;
  ena[2389] = HAVE_atomic_storeqi;
  ena[2390] = HAVE_atomic_storehi;
  ena[2391] = HAVE_atomic_storesi;
  ena[2392] = HAVE_atomic_storedi;
  ena[2393] = HAVE_atomic_sub_fetchqi;
  ena[2394] = HAVE_atomic_sub_fetchhi;
  ena[2395] = HAVE_atomic_sub_fetchsi;
  ena[2396] = HAVE_atomic_sub_fetchdi;
  ena[2397] = HAVE_atomic_subqi;
  ena[2398] = HAVE_atomic_subhi;
  ena[2399] = HAVE_atomic_subsi;
  ena[2400] = HAVE_atomic_subdi;
  ena[2401] = HAVE_atomic_xor_fetchqi;
  ena[2402] = HAVE_atomic_xor_fetchhi;
  ena[2403] = HAVE_atomic_xor_fetchsi;
  ena[2404] = HAVE_atomic_xor_fetchdi;
  ena[2405] = HAVE_atomic_xorqi;
  ena[2406] = HAVE_atomic_xorhi;
  ena[2407] = HAVE_atomic_xorsi;
  ena[2408] = HAVE_atomic_xordi;
  ena[2409] = HAVE_get_thread_pointerdi;
  ena[2410] = HAVE_check_raw_ptrssi;
  ena[2411] = HAVE_check_raw_ptrsdi;
  ena[2412] = HAVE_check_war_ptrssi;
  ena[2413] = HAVE_check_war_ptrsdi;
  ena[2414] = HAVE_vec_duplicatevnx16bi;
  ena[2415] = HAVE_vec_duplicatevnx8bi;
  ena[2416] = HAVE_vec_duplicatevnx4bi;
  ena[2417] = HAVE_vec_duplicatevnx2bi;
  ena[2418] = HAVE_vec_duplicatevnx16qi;
  ena[2419] = HAVE_vec_duplicatevnx8hi;
  ena[2420] = HAVE_vec_duplicatevnx4si;
  ena[2421] = HAVE_vec_duplicatevnx2di;
  ena[2422] = HAVE_vec_duplicatevnx2qi;
  ena[2423] = HAVE_vec_duplicatevnx4qi;
  ena[2424] = HAVE_vec_duplicatevnx2hi;
  ena[2425] = HAVE_vec_duplicatevnx8qi;
  ena[2426] = HAVE_vec_duplicatevnx4hi;
  ena[2427] = HAVE_vec_duplicatevnx2si;
  ena[2428] = HAVE_vec_duplicatevnx8bf;
  ena[2429] = HAVE_vec_duplicatevnx8hf;
  ena[2430] = HAVE_vec_duplicatevnx4sf;
  ena[2431] = HAVE_vec_duplicatevnx2df;
  ena[2432] = HAVE_vec_duplicatevnx2bf;
  ena[2433] = HAVE_vec_duplicatevnx2hf;
  ena[2434] = HAVE_vec_duplicatevnx4bf;
  ena[2435] = HAVE_vec_duplicatevnx4hf;
  ena[2436] = HAVE_vec_duplicatevnx2sf;
  ena[2437] = HAVE_vec_seriesvnx16qi;
  ena[2438] = HAVE_vec_seriesvnx8hi;
  ena[2439] = HAVE_vec_seriesvnx4si;
  ena[2440] = HAVE_vec_seriesvnx2di;
  ena[2441] = HAVE_vec_seriesvnx2qi;
  ena[2442] = HAVE_vec_seriesvnx4qi;
  ena[2443] = HAVE_vec_seriesvnx2hi;
  ena[2444] = HAVE_vec_seriesvnx8qi;
  ena[2445] = HAVE_vec_seriesvnx4hi;
  ena[2446] = HAVE_vec_seriesvnx2si;
  ena[2447] = HAVE_vec_shl_insert_vnx16qi;
  ena[2448] = HAVE_vec_shl_insert_vnx8hi;
  ena[2449] = HAVE_vec_shl_insert_vnx4si;
  ena[2450] = HAVE_vec_shl_insert_vnx2di;
  ena[2451] = HAVE_vec_shl_insert_vnx8bf;
  ena[2452] = HAVE_vec_shl_insert_vnx8hf;
  ena[2453] = HAVE_vec_shl_insert_vnx4sf;
  ena[2454] = HAVE_vec_shl_insert_vnx2df;
}

/* Returns TRUE if the target supports any of the partial vector
   optabs: while_ult_optab, len_load_optab or len_store_optab,
   for any mode.  */
bool
partial_vectors_supported_p (void)
{
	return HAVE_while_ultsivnx16bi || HAVE_while_ultdivnx16bi || HAVE_while_ultsivnx8bi || HAVE_while_ultdivnx8bi || HAVE_while_ultsivnx4bi || HAVE_while_ultdivnx4bi || HAVE_while_ultsivnx2bi || HAVE_while_ultdivnx2bi;
}
static int
lookup_handler (unsigned scode)
{
  int l = 0, h = ARRAY_SIZE (pats), m;
  while (h > l)
    {
      m = (h + l) / 2;
      if (scode == pats[m].scode)
        return m;
      else if (scode < pats[m].scode)
        h = m;
      else
        l = m + 1;
    }
  return -1;
}

enum insn_code
raw_optab_handler (unsigned scode)
{
  int i = lookup_handler (scode);
  return (i >= 0 && this_fn_optabs->pat_enable[i]
          ? pats[i].icode : CODE_FOR_nothing);
}

bool
swap_optab_enable (optab op, machine_mode m, bool set)
{
  unsigned scode = (op << 16) | m;
  int i = lookup_handler (scode);
  if (i >= 0)
    {
      bool ret = this_fn_optabs->pat_enable[i];
      this_fn_optabs->pat_enable[i] = set;
      return ret;
    }
  else
    {
      gcc_assert (!set);
      return false;
    }
}

const struct convert_optab_libcall_d convlib_def[NUM_CONVLIB_OPTABS] = {
  { "extend", gen_extend_conv_libfunc },
  { "trunc", gen_trunc_conv_libfunc },
  { NULL, NULL },
  { "fix", gen_fp_to_int_conv_libfunc },
  { "fixuns", gen_fp_to_int_conv_libfunc },
  { "float", gen_int_to_fp_conv_libfunc },
  { NULL, gen_ufloat_conv_libfunc },
  { "lrint", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lround", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lfloor", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lceil", gen_int_to_fp_nondecimal_conv_libfunc },
  { "fract", gen_fract_conv_libfunc },
  { "fractuns", gen_fractuns_conv_libfunc },
  { "satfract", gen_satfract_conv_libfunc },
  { "satfractuns", gen_satfractuns_conv_libfunc },
};

const struct optab_libcall_d normlib_def[NUM_NORMLIB_OPTABS] = {
  { '3', "add", gen_int_fp_fixed_libfunc },
  { '3', "add", gen_intv_fp_libfunc },
  { '3', "ssadd", gen_signed_fixed_libfunc },
  { '3', "usadd", gen_unsigned_fixed_libfunc },
  { '3', "sub", gen_int_fp_fixed_libfunc },
  { '3', "sub", gen_intv_fp_libfunc },
  { '3', "sssub", gen_signed_fixed_libfunc },
  { '3', "ussub", gen_unsigned_fixed_libfunc },
  { '3', "mul", gen_int_fp_fixed_libfunc },
  { '3', "mul", gen_intv_fp_libfunc },
  { '3', "ssmul", gen_signed_fixed_libfunc },
  { '3', "usmul", gen_unsigned_fixed_libfunc },
  { '3', "div", gen_int_fp_signed_fixed_libfunc },
  { '3', "divv", gen_int_libfunc },
  { '3', "ssdiv", gen_signed_fixed_libfunc },
  { '3', "udiv", gen_int_unsigned_fixed_libfunc },
  { '3', "usdiv", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "mod", gen_int_libfunc },
  { '3', "umod", gen_int_libfunc },
  { '2', "ftrunc", gen_fp_libfunc },
  { '3', "and", gen_int_libfunc },
  { '3', "ior", gen_int_libfunc },
  { '3', "xor", gen_int_libfunc },
  { '3', "ashl", gen_int_fixed_libfunc },
  { '3', "ssashl", gen_signed_fixed_libfunc },
  { '3', "usashl", gen_unsigned_fixed_libfunc },
  { '3', "ashr", gen_int_signed_fixed_libfunc },
  { '3', "lshr", gen_int_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "min", gen_int_fp_libfunc },
  { '3', "max", gen_int_fp_libfunc },
  { '3', "umin", gen_int_libfunc },
  { '3', "umax", gen_int_libfunc },
  { '2', "neg", gen_int_fp_fixed_libfunc },
  { '2', "neg", gen_intv_fp_libfunc },
  { '2', "ssneg", gen_signed_fixed_libfunc },
  { '2', "usneg", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '2', "one_cmpl", gen_int_libfunc },
  { '\0', NULL, NULL },
  { '2', "ffs", gen_int_libfunc },
  { '2', "clz", gen_int_libfunc },
  { '2', "ctz", gen_int_libfunc },
  { '2', "clrsb", gen_int_libfunc },
  { '2', "popcount", gen_int_libfunc },
  { '2', "parity", gen_int_libfunc },
  { '2', "cmp", gen_int_fp_fixed_libfunc },
  { '2', "ucmp", gen_int_libfunc },
  { '2', "eq", gen_fp_libfunc },
  { '2', "ne", gen_fp_libfunc },
  { '2', "gt", gen_fp_libfunc },
  { '2', "ge", gen_fp_libfunc },
  { '2', "lt", gen_fp_libfunc },
  { '2', "le", gen_fp_libfunc },
  { '2', "unord", gen_fp_libfunc },
  { '2', "powi", gen_fp_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
};

enum rtx_code const optab_to_code_[NUM_OPTABS] = {
  UNKNOWN,
  SIGN_EXTEND,
  TRUNCATE,
  ZERO_EXTEND,
  FIX,
  UNSIGNED_FIX,
  FLOAT,
  UNSIGNED_FLOAT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FRACT_CONVERT,
  UNSIGNED_FRACT_CONVERT,
  SAT_FRACT,
  UNSIGNED_SAT_FRACT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  PLUS,
  PLUS,
  SS_PLUS,
  US_PLUS,
  MINUS,
  MINUS,
  SS_MINUS,
  US_MINUS,
  MULT,
  MULT,
  SS_MULT,
  US_MULT,
  DIV,
  DIV,
  SS_DIV,
  UDIV,
  US_DIV,
  UNKNOWN,
  UNKNOWN,
  MOD,
  UMOD,
  UNKNOWN,
  AND,
  IOR,
  XOR,
  ASHIFT,
  SS_ASHIFT,
  US_ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  SMIN,
  SMAX,
  UMIN,
  UMAX,
  NEG,
  NEG,
  SS_NEG,
  US_NEG,
  ABS,
  ABS,
  NOT,
  BSWAP,
  FFS,
  CLZ,
  CTZ,
  CLRSB,
  POPCOUNT,
  PARITY,
  UNKNOWN,
  UNKNOWN,
  EQ,
  NE,
  GT,
  GE,
  LT,
  LE,
  UNORDERED,
  UNKNOWN,
  SQRT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  SET,
  STRICT_LOW_PART,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  COMPARE,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FMA,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  VEC_DUPLICATE,
  VEC_SERIES,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
};

const optab code_to_optab_[NUM_RTX_CODE] = {
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  mov_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  movstrict_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  cbranch_optab,
  add_optab,
  sub_optab,
  neg_optab,
  smul_optab,
  ssmul_optab,
  usmul_optab,
  unknown_optab,
  unknown_optab,
  sdiv_optab,
  ssdiv_optab,
  usdiv_optab,
  smod_optab,
  udiv_optab,
  umod_optab,
  and_optab,
  ior_optab,
  xor_optab,
  one_cmpl_optab,
  ashl_optab,
  rotl_optab,
  ashr_optab,
  lshr_optab,
  rotr_optab,
  smin_optab,
  smax_optab,
  umin_optab,
  umax_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  ne_optab,
  eq_optab,
  ge_optab,
  gt_optab,
  le_optab,
  lt_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unord_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  abs_optab,
  sqrt_optab,
  bswap_optab,
  ffs_optab,
  clrsb_optab,
  clz_optab,
  ctz_optab,
  popcount_optab,
  parity_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  vec_duplicate_optab,
  vec_series_optab,
  ssadd_optab,
  usadd_optab,
  sssub_optab,
  ssneg_optab,
  usneg_optab,
  unknown_optab,
  ssashl_optab,
  usashl_optab,
  ussub_optab,
  unknown_optab,
  unknown_optab,
  fma_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
};

