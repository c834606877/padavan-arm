/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 9894:  /* *cond_ursqrtevnx4si */
    case 9893:  /* *cond_urecpevnx4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      break;

    case 9878:  /* aarch64_cdot270_lane_vnx2di */
    case 9877:  /* aarch64_cdot180_lane_vnx2di */
    case 9876:  /* aarch64_cdot90_lane_vnx2di */
    case 9875:  /* aarch64_cdot_lane_vnx2di */
    case 9874:  /* aarch64_cdot270_lane_vnx4si */
    case 9873:  /* aarch64_cdot180_lane_vnx4si */
    case 9872:  /* aarch64_cdot90_lane_vnx4si */
    case 9871:  /* aarch64_cdot_lane_vnx4si */
    case 9862:  /* aarch64_sqrdcmlah270_lane_vnx4si */
    case 9861:  /* aarch64_sqrdcmlah180_lane_vnx4si */
    case 9860:  /* aarch64_sqrdcmlah90_lane_vnx4si */
    case 9859:  /* aarch64_sqrdcmlah_lane_vnx4si */
    case 9858:  /* aarch64_cmla270_lane_vnx4si */
    case 9857:  /* aarch64_cmla180_lane_vnx4si */
    case 9856:  /* aarch64_cmla90_lane_vnx4si */
    case 9855:  /* aarch64_cmla_lane_vnx4si */
    case 9854:  /* aarch64_sqrdcmlah270_lane_vnx8hi */
    case 9853:  /* aarch64_sqrdcmlah180_lane_vnx8hi */
    case 9852:  /* aarch64_sqrdcmlah90_lane_vnx8hi */
    case 9851:  /* aarch64_sqrdcmlah_lane_vnx8hi */
    case 9850:  /* aarch64_cmla270_lane_vnx8hi */
    case 9849:  /* aarch64_cmla180_lane_vnx8hi */
    case 9848:  /* aarch64_cmla90_lane_vnx8hi */
    case 9847:  /* aarch64_cmla_lane_vnx8hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 1));
      break;

    case 9798:  /* *cond_uadalpvnx2di_z */
    case 9797:  /* *cond_sadalpvnx2di_z */
    case 9796:  /* *cond_uadalpvnx4si_z */
    case 9795:  /* *cond_sadalpvnx4si_z */
    case 9794:  /* *cond_uadalpvnx8hi_z */
    case 9793:  /* *cond_sadalpvnx8hi_z */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      break;

    case 9792:  /* *cond_uadalpvnx2di_2 */
    case 9791:  /* *cond_sadalpvnx2di_2 */
    case 9790:  /* *cond_uadalpvnx4si_2 */
    case 9789:  /* *cond_sadalpvnx4si_2 */
    case 9788:  /* *cond_uadalpvnx8hi_2 */
    case 9787:  /* *cond_sadalpvnx8hi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 2;
      break;

    case 9653:  /* aarch64_sve_qsub_sqdmullt_lane_vnx2di */
    case 9652:  /* aarch64_sve_qsub_sqdmullb_lane_vnx2di */
    case 9651:  /* aarch64_sve_qsub_sqdmullt_lane_vnx4si */
    case 9650:  /* aarch64_sve_qsub_sqdmullb_lane_vnx4si */
    case 9640:  /* aarch64_sve_sub_umullt_lane_vnx2di */
    case 9639:  /* aarch64_sve_sub_umullb_lane_vnx2di */
    case 9638:  /* aarch64_sve_sub_smullt_lane_vnx2di */
    case 9637:  /* aarch64_sve_sub_smullb_lane_vnx2di */
    case 9636:  /* aarch64_sve_sub_umullt_lane_vnx4si */
    case 9635:  /* aarch64_sve_sub_umullb_lane_vnx4si */
    case 9634:  /* aarch64_sve_sub_smullt_lane_vnx4si */
    case 9633:  /* aarch64_sve_sub_smullb_lane_vnx4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1), 0, 1));
      break;

    case 9620:  /* aarch64_sve_qadd_sqdmullt_lane_vnx2di */
    case 9619:  /* aarch64_sve_qadd_sqdmullb_lane_vnx2di */
    case 9618:  /* aarch64_sve_qadd_sqdmullt_lane_vnx4si */
    case 9617:  /* aarch64_sve_qadd_sqdmullb_lane_vnx4si */
    case 9607:  /* aarch64_sve_add_umullt_lane_vnx2di */
    case 9606:  /* aarch64_sve_add_umullb_lane_vnx2di */
    case 9605:  /* aarch64_sve_add_smullt_lane_vnx2di */
    case 9604:  /* aarch64_sve_add_smullb_lane_vnx2di */
    case 9603:  /* aarch64_sve_add_umullt_lane_vnx4si */
    case 9602:  /* aarch64_sve_add_umullb_lane_vnx4si */
    case 9601:  /* aarch64_sve_add_smullt_lane_vnx4si */
    case 9600:  /* aarch64_sve_add_smullb_lane_vnx4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1), 0, 1));
      break;

    case 9464:  /* *aarch64_sve2_uabavnx2di */
    case 9463:  /* *aarch64_sve2_sabavnx2di */
    case 9462:  /* *aarch64_sve2_uabavnx4si */
    case 9461:  /* *aarch64_sve2_sabavnx4si */
    case 9460:  /* *aarch64_sve2_uabavnx8hi */
    case 9459:  /* *aarch64_sve2_sabavnx8hi */
    case 9458:  /* *aarch64_sve2_uabavnx16qi */
    case 9457:  /* *aarch64_sve2_sabavnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 9432:  /* *aarch64_sve2_bsl2nvnx2di */
    case 9430:  /* *aarch64_sve2_bsl2nvnx4si */
    case 9428:  /* *aarch64_sve2_bsl2nvnx8hi */
    case 9426:  /* *aarch64_sve2_bsl2nvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1), 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 9431:  /* *aarch64_sve2_bsl2nvnx2di */
    case 9429:  /* *aarch64_sve2_bsl2nvnx4si */
    case 9427:  /* *aarch64_sve2_bsl2nvnx8hi */
    case 9425:  /* *aarch64_sve2_bsl2nvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 9424:  /* *aarch64_sve2_bsl2nvnx2di */
    case 9422:  /* *aarch64_sve2_bsl2nvnx4si */
    case 9420:  /* *aarch64_sve2_bsl2nvnx8hi */
    case 9418:  /* *aarch64_sve2_bsl2nvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 9423:  /* *aarch64_sve2_bsl2nvnx2di */
    case 9421:  /* *aarch64_sve2_bsl2nvnx4si */
    case 9419:  /* *aarch64_sve2_bsl2nvnx8hi */
    case 9417:  /* *aarch64_sve2_bsl2nvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 9416:  /* *aarch64_sve2_bsl1nvnx2di */
    case 9414:  /* *aarch64_sve2_bsl1nvnx4si */
    case 9412:  /* *aarch64_sve2_bsl1nvnx8hi */
    case 9410:  /* *aarch64_sve2_bsl1nvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 9415:  /* *aarch64_sve2_bsl1nvnx2di */
    case 9413:  /* *aarch64_sve2_bsl1nvnx4si */
    case 9411:  /* *aarch64_sve2_bsl1nvnx8hi */
    case 9409:  /* *aarch64_sve2_bsl1nvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 9408:  /* *aarch64_sve2_nbslvnx2di */
    case 9406:  /* *aarch64_sve2_nbslvnx4si */
    case 9404:  /* *aarch64_sve2_nbslvnx8hi */
    case 9402:  /* *aarch64_sve2_nbslvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 9407:  /* *aarch64_sve2_nbslvnx2di */
    case 9405:  /* *aarch64_sve2_nbslvnx4si */
    case 9403:  /* *aarch64_sve2_nbslvnx8hi */
    case 9401:  /* *aarch64_sve2_nbslvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 9400:  /* *aarch64_sve2_bslvnx2di */
    case 9398:  /* *aarch64_sve2_bslvnx4si */
    case 9396:  /* *aarch64_sve2_bslvnx8hi */
    case 9394:  /* *aarch64_sve2_bslvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 9399:  /* *aarch64_sve2_bslvnx2di */
    case 9397:  /* *aarch64_sve2_bslvnx4si */
    case 9395:  /* *aarch64_sve2_bslvnx8hi */
    case 9393:  /* *aarch64_sve2_bslvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 9392:  /* *aarch64_sve2_nandvnx2di */
    case 9391:  /* *aarch64_sve2_nandvnx4si */
    case 9390:  /* *aarch64_sve2_nandvnx8hi */
    case 9389:  /* *aarch64_sve2_nandvnx16qi */
    case 9388:  /* *aarch64_sve2_norvnx2di */
    case 9387:  /* *aarch64_sve2_norvnx4si */
    case 9386:  /* *aarch64_sve2_norvnx8hi */
    case 9385:  /* *aarch64_sve2_norvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 9380:  /* *aarch64_sve2_bcaxvnx2di */
    case 9379:  /* *aarch64_sve2_bcaxvnx4si */
    case 9378:  /* *aarch64_sve2_bcaxvnx8hi */
    case 9377:  /* *aarch64_sve2_bcaxvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      break;

    case 9372:  /* aarch64_sve_sub_mul_lane_vnx2di */
    case 9371:  /* aarch64_sve_sub_mul_lane_vnx4si */
    case 9370:  /* aarch64_sve_sub_mul_lane_vnx8hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 1));
      break;

    case 9369:  /* aarch64_sve_add_mul_lane_vnx2di */
    case 9368:  /* aarch64_sve_add_mul_lane_vnx4si */
    case 9367:  /* aarch64_sve_add_mul_lane_vnx8hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 9366:  /* aarch64_sve_sqrdmlsh_lane_vnx2di */
    case 9365:  /* aarch64_sve_sqrdmlah_lane_vnx2di */
    case 9364:  /* aarch64_sve_sqrdmlsh_lane_vnx4si */
    case 9363:  /* aarch64_sve_sqrdmlah_lane_vnx4si */
    case 9362:  /* aarch64_sve_sqrdmlsh_lane_vnx8hi */
    case 9361:  /* aarch64_sve_sqrdmlah_lane_vnx8hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1));
      break;

    case 9320:  /* *cond_uqshlvnx2di_3 */
    case 9319:  /* *cond_sqshlvnx2di_3 */
    case 9318:  /* *cond_uqshlvnx4si_3 */
    case 9317:  /* *cond_sqshlvnx4si_3 */
    case 9316:  /* *cond_uqshlvnx8hi_3 */
    case 9315:  /* *cond_sqshlvnx8hi_3 */
    case 9314:  /* *cond_uqshlvnx16qi_3 */
    case 9313:  /* *cond_sqshlvnx16qi_3 */
    case 9234:  /* *cond_urshlvnx2di_3 */
    case 9233:  /* *cond_urhaddvnx2di_3 */
    case 9232:  /* *cond_uqrshlvnx2di_3 */
    case 9231:  /* *cond_uhsubvnx2di_3 */
    case 9230:  /* *cond_uhaddvnx2di_3 */
    case 9229:  /* *cond_srshlvnx2di_3 */
    case 9228:  /* *cond_srhaddvnx2di_3 */
    case 9227:  /* *cond_sqrshlvnx2di_3 */
    case 9226:  /* *cond_shsubvnx2di_3 */
    case 9225:  /* *cond_shaddvnx2di_3 */
    case 9224:  /* *cond_urshlvnx4si_3 */
    case 9223:  /* *cond_urhaddvnx4si_3 */
    case 9222:  /* *cond_uqrshlvnx4si_3 */
    case 9221:  /* *cond_uhsubvnx4si_3 */
    case 9220:  /* *cond_uhaddvnx4si_3 */
    case 9219:  /* *cond_srshlvnx4si_3 */
    case 9218:  /* *cond_srhaddvnx4si_3 */
    case 9217:  /* *cond_sqrshlvnx4si_3 */
    case 9216:  /* *cond_shsubvnx4si_3 */
    case 9215:  /* *cond_shaddvnx4si_3 */
    case 9214:  /* *cond_urshlvnx8hi_3 */
    case 9213:  /* *cond_urhaddvnx8hi_3 */
    case 9212:  /* *cond_uqrshlvnx8hi_3 */
    case 9211:  /* *cond_uhsubvnx8hi_3 */
    case 9210:  /* *cond_uhaddvnx8hi_3 */
    case 9209:  /* *cond_srshlvnx8hi_3 */
    case 9208:  /* *cond_srhaddvnx8hi_3 */
    case 9207:  /* *cond_sqrshlvnx8hi_3 */
    case 9206:  /* *cond_shsubvnx8hi_3 */
    case 9205:  /* *cond_shaddvnx8hi_3 */
    case 9204:  /* *cond_urshlvnx16qi_3 */
    case 9203:  /* *cond_urhaddvnx16qi_3 */
    case 9202:  /* *cond_uqrshlvnx16qi_3 */
    case 9201:  /* *cond_uhsubvnx16qi_3 */
    case 9200:  /* *cond_uhaddvnx16qi_3 */
    case 9199:  /* *cond_srshlvnx16qi_3 */
    case 9198:  /* *cond_srhaddvnx16qi_3 */
    case 9197:  /* *cond_sqrshlvnx16qi_3 */
    case 9196:  /* *cond_shsubvnx16qi_3 */
    case 9195:  /* *cond_shaddvnx16qi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 3;
      break;

    case 9099:  /* aarch64_scatter_stnt_vnx2divnx2si */
    case 9098:  /* aarch64_scatter_stnt_vnx2divnx2hi */
    case 9097:  /* aarch64_scatter_stnt_vnx4sivnx4hi */
    case 9096:  /* aarch64_scatter_stnt_vnx2divnx2qi */
    case 9095:  /* aarch64_scatter_stnt_vnx4sivnx4qi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      break;

    case 9090:  /* aarch64_gather_ldnt_zero_extendvnx2divnx2si */
    case 9089:  /* aarch64_gather_ldnt_extendvnx2divnx2si */
    case 9088:  /* aarch64_gather_ldnt_zero_extendvnx2divnx2hi */
    case 9087:  /* aarch64_gather_ldnt_extendvnx2divnx2hi */
    case 9086:  /* aarch64_gather_ldnt_zero_extendvnx4sivnx4hi */
    case 9085:  /* aarch64_gather_ldnt_extendvnx4sivnx4hi */
    case 9084:  /* aarch64_gather_ldnt_zero_extendvnx2divnx2qi */
    case 9083:  /* aarch64_gather_ldnt_extendvnx2divnx2qi */
    case 9082:  /* aarch64_gather_ldnt_zero_extendvnx4sivnx4qi */
    case 9081:  /* aarch64_gather_ldnt_extendvnx4sivnx4qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 9076:  /* *aarch64_sve_uqdecvnx8hi_cntp */
    case 9075:  /* *aarch64_sve_sqdecvnx8hi_cntp */
    case 9074:  /* *aarch64_sve_decvnx8hi_cntp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 0));
      break;

    case 9070:  /* *aarch64_sve_uqdecvnx2di_cntp */
    case 9069:  /* *aarch64_sve_sqdecvnx2di_cntp */
    case 9068:  /* *aarch64_sve_decvnx2di_cntp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 0));
      break;

    case 9067:  /* *aarch64_sve_uqdecsivnx2bi_cntp */
    case 9066:  /* *aarch64_sve_sqdecsivnx2bi_cntp */
    case 9065:  /* *aarch64_sve_uqdecsivnx4bi_cntp */
    case 9064:  /* *aarch64_sve_sqdecsivnx4bi_cntp */
    case 9063:  /* *aarch64_sve_uqdecsivnx8bi_cntp */
    case 9062:  /* *aarch64_sve_sqdecsivnx8bi_cntp */
    case 9061:  /* *aarch64_sve_uqdecsivnx16bi_cntp */
    case 9060:  /* *aarch64_sve_sqdecsivnx16bi_cntp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 9059:  /* *aarch64_decsivnx2bi_cntp */
    case 9058:  /* *aarch64_decsivnx4bi_cntp */
    case 9057:  /* *aarch64_decsivnx8bi_cntp */
    case 9056:  /* *aarch64_decsivnx16bi_cntp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 9073:  /* *aarch64_sve_uqdecvnx4si_cntp */
    case 9072:  /* *aarch64_sve_sqdecvnx4si_cntp */
    case 9071:  /* *aarch64_sve_decvnx4si_cntp */
    case 9055:  /* *aarch64_sve_uqdecdivnx2bi_cntp */
    case 9054:  /* *aarch64_sve_sqdecdivnx2bi_cntp */
    case 9053:  /* *aarch64_sve_decdivnx2bi_cntp */
    case 9052:  /* *aarch64_sve_uqdecdivnx4bi_cntp */
    case 9051:  /* *aarch64_sve_sqdecdivnx4bi_cntp */
    case 9050:  /* *aarch64_sve_decdivnx4bi_cntp */
    case 9049:  /* *aarch64_sve_uqdecdivnx8bi_cntp */
    case 9048:  /* *aarch64_sve_sqdecdivnx8bi_cntp */
    case 9047:  /* *aarch64_sve_decdivnx8bi_cntp */
    case 9046:  /* *aarch64_sve_uqdecdivnx16bi_cntp */
    case 9045:  /* *aarch64_sve_sqdecdivnx16bi_cntp */
    case 9044:  /* *aarch64_sve_decdivnx16bi_cntp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 9043:  /* *aarch64_sve_uqincvnx8hi_cntp */
    case 9042:  /* *aarch64_sve_sqincvnx8hi_cntp */
    case 9041:  /* *aarch64_sve_incvnx8hi_cntp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 0));
      break;

    case 9037:  /* *aarch64_sve_uqincvnx2di_cntp */
    case 9036:  /* *aarch64_sve_sqincvnx2di_cntp */
    case 9035:  /* *aarch64_sve_incvnx2di_cntp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 0));
      break;

    case 9034:  /* *aarch64_sve_uqincsivnx2bi_cntp */
    case 9033:  /* *aarch64_sve_sqincsivnx2bi_cntp */
    case 9032:  /* *aarch64_sve_uqincsivnx4bi_cntp */
    case 9031:  /* *aarch64_sve_sqincsivnx4bi_cntp */
    case 9030:  /* *aarch64_sve_uqincsivnx8bi_cntp */
    case 9029:  /* *aarch64_sve_sqincsivnx8bi_cntp */
    case 9028:  /* *aarch64_sve_uqincsivnx16bi_cntp */
    case 9027:  /* *aarch64_sve_sqincsivnx16bi_cntp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      break;

    case 9026:  /* *aarch64_incsivnx2bi_cntp */
    case 9025:  /* *aarch64_incsivnx4bi_cntp */
    case 9024:  /* *aarch64_incsivnx8bi_cntp */
    case 9023:  /* *aarch64_incsivnx16bi_cntp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 9040:  /* *aarch64_sve_uqincvnx4si_cntp */
    case 9039:  /* *aarch64_sve_sqincvnx4si_cntp */
    case 9038:  /* *aarch64_sve_incvnx4si_cntp */
    case 9022:  /* *aarch64_sve_uqincdivnx2bi_cntp */
    case 9021:  /* *aarch64_sve_sqincdivnx2bi_cntp */
    case 9020:  /* *aarch64_sve_incdivnx2bi_cntp */
    case 9019:  /* *aarch64_sve_uqincdivnx4bi_cntp */
    case 9018:  /* *aarch64_sve_sqincdivnx4bi_cntp */
    case 9017:  /* *aarch64_sve_incdivnx4bi_cntp */
    case 9016:  /* *aarch64_sve_uqincdivnx8bi_cntp */
    case 9015:  /* *aarch64_sve_sqincdivnx8bi_cntp */
    case 9014:  /* *aarch64_sve_incdivnx8bi_cntp */
    case 9013:  /* *aarch64_sve_uqincdivnx16bi_cntp */
    case 9012:  /* *aarch64_sve_sqincdivnx16bi_cntp */
    case 9011:  /* *aarch64_sve_incdivnx16bi_cntp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      break;

    case 9006:  /* *aarch64_sve_uqdecvnx8hi_pat */
    case 9005:  /* *aarch64_sve_sqdecvnx8hi_pat */
    case 9004:  /* *aarch64_sve_decvnx8hi_pat */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 9000:  /* aarch64_sve_uqdecvnx2di_pat */
    case 8999:  /* aarch64_sve_sqdecvnx2di_pat */
    case 8998:  /* aarch64_sve_decvnx2di_pat */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 2));
      break;

    case 8997:  /* aarch64_sve_uqdecsi_pat */
    case 8996:  /* aarch64_sve_sqdecsi_pat */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      break;

    case 9003:  /* aarch64_sve_uqdecvnx4si_pat */
    case 9002:  /* aarch64_sve_sqdecvnx4si_pat */
    case 9001:  /* aarch64_sve_decvnx4si_pat */
    case 8994:  /* aarch64_sve_uqdecdi_pat */
    case 8993:  /* aarch64_sve_sqdecdi_pat */
    case 8992:  /* aarch64_sve_decdi_pat */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 2));
      break;

    case 8991:  /* *aarch64_sve_uqincvnx8hi_pat */
    case 8990:  /* *aarch64_sve_sqincvnx8hi_pat */
    case 8989:  /* *aarch64_sve_incvnx8hi_pat */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 8985:  /* aarch64_sve_uqincvnx2di_pat */
    case 8984:  /* aarch64_sve_sqincvnx2di_pat */
    case 8983:  /* aarch64_sve_incvnx2di_pat */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 2));
      break;

    case 8982:  /* aarch64_sve_uqincsi_pat */
    case 8981:  /* aarch64_sve_sqincsi_pat */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      break;

    case 8988:  /* aarch64_sve_uqincvnx4si_pat */
    case 8987:  /* aarch64_sve_sqincvnx4si_pat */
    case 8986:  /* aarch64_sve_incvnx4si_pat */
    case 8979:  /* aarch64_sve_uqincdi_pat */
    case 8978:  /* aarch64_sve_sqincdi_pat */
    case 8977:  /* aarch64_sve_incdi_pat */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      break;

    case 9010:  /* aarch64_pred_cntpvnx2bi */
    case 9009:  /* aarch64_pred_cntpvnx4bi */
    case 9008:  /* aarch64_pred_cntpvnx8bi */
    case 9007:  /* aarch64_pred_cntpvnx16bi */
    case 8976:  /* aarch64_sve_cnt_pat */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 8975:  /* *aarch64_sve_pnextvnx2bi_ptest */
    case 8974:  /* *aarch64_sve_pnextvnx4bi_ptest */
    case 8973:  /* *aarch64_sve_pnextvnx8bi_ptest */
    case 8972:  /* *aarch64_sve_pnextvnx16bi_ptest */
    case 8971:  /* *aarch64_sve_pfirstvnx16bi_ptest */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 1));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 2));
      break;

    case 8970:  /* *aarch64_sve_pnextvnx2bi_cc */
    case 8969:  /* *aarch64_sve_pnextvnx4bi_cc */
    case 8968:  /* *aarch64_sve_pnextvnx8bi_cc */
    case 8967:  /* *aarch64_sve_pnextvnx16bi_cc */
    case 8966:  /* *aarch64_sve_pfirstvnx16bi_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 1));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 4;
      break;

    case 8965:  /* aarch64_sve_pnextvnx2bi */
    case 8964:  /* aarch64_sve_pnextvnx4bi */
    case 8963:  /* aarch64_sve_pnextvnx8bi */
    case 8962:  /* aarch64_sve_pnextvnx16bi */
    case 8961:  /* aarch64_sve_pfirstvnx16bi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 8956:  /* *aarch64_brkn_ptest */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 8955:  /* *aarch64_brkn_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 8960:  /* *aarch64_brkpb_ptest */
    case 8959:  /* *aarch64_brkpa_ptest */
    case 8951:  /* *aarch64_brkb_ptest */
    case 8950:  /* *aarch64_brka_ptest */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1);
      recog_data.dup_num[1] = 1;
      break;

    case 8958:  /* *aarch64_brkpb_cc */
    case 8957:  /* *aarch64_brkpa_cc */
    case 8949:  /* *aarch64_brkb_cc */
    case 8948:  /* *aarch64_brka_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1);
      recog_data.dup_num[4] = 1;
      break;

    case 9890:  /* aarch64_sve2_cvtxntvnx2df */
    case 9886:  /* aarch64_sve_cvtntvnx4sf */
    case 9885:  /* aarch64_sve_cvtntvnx8hf */
    case 8930:  /* aarch64_sve_cvtntvnx8bf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 8936:  /* *cond_fcvt_nontruncvnx4sfvnx2df */
    case 8935:  /* *cond_fcvt_nontruncvnx8hfvnx2df */
    case 8934:  /* *cond_fcvt_nontruncvnx8hfvnx4sf */
    case 8929:  /* *cond_fcvt_truncvnx4sfvnx8bf */
    case 8927:  /* *cond_fcvt_truncvnx2dfvnx4sf */
    case 8926:  /* *cond_fcvt_truncvnx2dfvnx8hf */
    case 8925:  /* *cond_fcvt_truncvnx4sfvnx8hf */
    case 8921:  /* *cond_floatuns_extendvnx4sivnx2df */
    case 8920:  /* *cond_float_extendvnx4sivnx2df */
    case 8881:  /* *cond_fixuns_trunc_truncvnx2dfvnx4si */
    case 8880:  /* *cond_fix_trunc_truncvnx2dfvnx4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0);
      recog_data.dup_num[0] = 1;
      break;

    case 9094:  /* aarch64_scatter_stntvnx2df */
    case 9093:  /* aarch64_scatter_stntvnx4sf */
    case 9092:  /* aarch64_scatter_stntvnx2di */
    case 9091:  /* aarch64_scatter_stntvnx4si */
    case 8462:  /* aarch64_ptestvnx2bi */
    case 8461:  /* aarch64_ptestvnx4bi */
    case 8460:  /* aarch64_ptestvnx8bi */
    case 8459:  /* aarch64_ptestvnx16bi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 8458:  /* vcond_mask_vnx2bivnx2bi */
    case 8457:  /* vcond_mask_vnx4bivnx4bi */
    case 8456:  /* vcond_mask_vnx8bivnx8bi */
    case 8455:  /* vcond_mask_vnx16bivnx16bi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 8454:  /* *aarch64_pred_facltvnx2df_strict */
    case 8453:  /* *aarch64_pred_faclevnx2df_strict */
    case 8452:  /* *aarch64_pred_facgtvnx2df_strict */
    case 8451:  /* *aarch64_pred_facgevnx2df_strict */
    case 8450:  /* *aarch64_pred_facltvnx4sf_strict */
    case 8449:  /* *aarch64_pred_faclevnx4sf_strict */
    case 8448:  /* *aarch64_pred_facgtvnx4sf_strict */
    case 8447:  /* *aarch64_pred_facgevnx4sf_strict */
    case 8446:  /* *aarch64_pred_facltvnx8hf_strict */
    case 8445:  /* *aarch64_pred_faclevnx8hf_strict */
    case 8444:  /* *aarch64_pred_facgtvnx8hf_strict */
    case 8443:  /* *aarch64_pred_facgevnx8hf_strict */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 1));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0, 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 8442:  /* *aarch64_pred_facltvnx2df_relaxed */
    case 8441:  /* *aarch64_pred_faclevnx2df_relaxed */
    case 8440:  /* *aarch64_pred_facgtvnx2df_relaxed */
    case 8439:  /* *aarch64_pred_facgevnx2df_relaxed */
    case 8438:  /* *aarch64_pred_facltvnx4sf_relaxed */
    case 8437:  /* *aarch64_pred_faclevnx4sf_relaxed */
    case 8436:  /* *aarch64_pred_facgtvnx4sf_relaxed */
    case 8435:  /* *aarch64_pred_facgevnx4sf_relaxed */
    case 8434:  /* *aarch64_pred_facltvnx8hf_relaxed */
    case 8433:  /* *aarch64_pred_faclevnx8hf_relaxed */
    case 8432:  /* *aarch64_pred_facgtvnx8hf_relaxed */
    case 8431:  /* *aarch64_pred_facgevnx8hf_relaxed */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0, 0));
      break;

    case 8430:  /* *fcmuovnx2df_nor_combine */
    case 8429:  /* *fcmuovnx4sf_nor_combine */
    case 8428:  /* *fcmuovnx8hf_nor_combine */
    case 8424:  /* *fcmnevnx2df_nor_combine */
    case 8423:  /* *fcmltvnx2df_nor_combine */
    case 8422:  /* *fcmlevnx2df_nor_combine */
    case 8421:  /* *fcmgtvnx2df_nor_combine */
    case 8420:  /* *fcmgevnx2df_nor_combine */
    case 8419:  /* *fcmeqvnx2df_nor_combine */
    case 8418:  /* *fcmnevnx4sf_nor_combine */
    case 8417:  /* *fcmltvnx4sf_nor_combine */
    case 8416:  /* *fcmlevnx4sf_nor_combine */
    case 8415:  /* *fcmgtvnx4sf_nor_combine */
    case 8414:  /* *fcmgevnx4sf_nor_combine */
    case 8413:  /* *fcmeqvnx4sf_nor_combine */
    case 8412:  /* *fcmnevnx8hf_nor_combine */
    case 8411:  /* *fcmltvnx8hf_nor_combine */
    case 8410:  /* *fcmlevnx8hf_nor_combine */
    case 8409:  /* *fcmgtvnx8hf_nor_combine */
    case 8408:  /* *fcmgevnx8hf_nor_combine */
    case 8407:  /* *fcmeqvnx8hf_nor_combine */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0, 3));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8427:  /* *fcmuovnx2df_bic_combine */
    case 8426:  /* *fcmuovnx4sf_bic_combine */
    case 8425:  /* *fcmuovnx8hf_bic_combine */
    case 8406:  /* *fcmnevnx2df_bic_combine */
    case 8405:  /* *fcmltvnx2df_bic_combine */
    case 8404:  /* *fcmlevnx2df_bic_combine */
    case 8403:  /* *fcmgtvnx2df_bic_combine */
    case 8402:  /* *fcmgevnx2df_bic_combine */
    case 8401:  /* *fcmeqvnx2df_bic_combine */
    case 8400:  /* *fcmnevnx4sf_bic_combine */
    case 8399:  /* *fcmltvnx4sf_bic_combine */
    case 8398:  /* *fcmlevnx4sf_bic_combine */
    case 8397:  /* *fcmgtvnx4sf_bic_combine */
    case 8396:  /* *fcmgevnx4sf_bic_combine */
    case 8395:  /* *fcmeqvnx4sf_bic_combine */
    case 8394:  /* *fcmnevnx8hf_bic_combine */
    case 8393:  /* *fcmltvnx8hf_bic_combine */
    case 8392:  /* *fcmlevnx8hf_bic_combine */
    case 8391:  /* *fcmgtvnx8hf_bic_combine */
    case 8390:  /* *fcmgevnx8hf_bic_combine */
    case 8389:  /* *fcmeqvnx8hf_bic_combine */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0, 3));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8388:  /* *fcmuovnx2df_and_combine */
    case 8387:  /* *fcmuovnx4sf_and_combine */
    case 8386:  /* *fcmuovnx8hf_and_combine */
    case 8385:  /* *fcmnevnx2df_and_combine */
    case 8384:  /* *fcmltvnx2df_and_combine */
    case 8383:  /* *fcmlevnx2df_and_combine */
    case 8382:  /* *fcmgtvnx2df_and_combine */
    case 8381:  /* *fcmgevnx2df_and_combine */
    case 8380:  /* *fcmeqvnx2df_and_combine */
    case 8379:  /* *fcmnevnx4sf_and_combine */
    case 8378:  /* *fcmltvnx4sf_and_combine */
    case 8377:  /* *fcmlevnx4sf_and_combine */
    case 8376:  /* *fcmgtvnx4sf_and_combine */
    case 8375:  /* *fcmgevnx4sf_and_combine */
    case 8374:  /* *fcmeqvnx4sf_and_combine */
    case 8373:  /* *fcmnevnx8hf_and_combine */
    case 8372:  /* *fcmltvnx8hf_and_combine */
    case 8371:  /* *fcmlevnx8hf_and_combine */
    case 8370:  /* *fcmgtvnx8hf_and_combine */
    case 8369:  /* *fcmgevnx8hf_and_combine */
    case 8368:  /* *fcmeqvnx8hf_and_combine */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8346:  /* while_wrdivnx2bi_ptest */
    case 8345:  /* while_rwdivnx2bi_ptest */
    case 8344:  /* while_ugedivnx2bi_ptest */
    case 8343:  /* while_ugtdivnx2bi_ptest */
    case 8342:  /* while_gtdivnx2bi_ptest */
    case 8341:  /* while_gedivnx2bi_ptest */
    case 8340:  /* while_ltdivnx2bi_ptest */
    case 8339:  /* while_uledivnx2bi_ptest */
    case 8338:  /* while_ultdivnx2bi_ptest */
    case 8337:  /* while_ledivnx2bi_ptest */
    case 8336:  /* while_wrsivnx2bi_ptest */
    case 8335:  /* while_rwsivnx2bi_ptest */
    case 8334:  /* while_ugesivnx2bi_ptest */
    case 8333:  /* while_ugtsivnx2bi_ptest */
    case 8332:  /* while_gtsivnx2bi_ptest */
    case 8331:  /* while_gesivnx2bi_ptest */
    case 8330:  /* while_ltsivnx2bi_ptest */
    case 8329:  /* while_ulesivnx2bi_ptest */
    case 8328:  /* while_ultsivnx2bi_ptest */
    case 8327:  /* while_lesivnx2bi_ptest */
    case 8326:  /* while_wrdivnx4bi_ptest */
    case 8325:  /* while_rwdivnx4bi_ptest */
    case 8324:  /* while_ugedivnx4bi_ptest */
    case 8323:  /* while_ugtdivnx4bi_ptest */
    case 8322:  /* while_gtdivnx4bi_ptest */
    case 8321:  /* while_gedivnx4bi_ptest */
    case 8320:  /* while_ltdivnx4bi_ptest */
    case 8319:  /* while_uledivnx4bi_ptest */
    case 8318:  /* while_ultdivnx4bi_ptest */
    case 8317:  /* while_ledivnx4bi_ptest */
    case 8316:  /* while_wrsivnx4bi_ptest */
    case 8315:  /* while_rwsivnx4bi_ptest */
    case 8314:  /* while_ugesivnx4bi_ptest */
    case 8313:  /* while_ugtsivnx4bi_ptest */
    case 8312:  /* while_gtsivnx4bi_ptest */
    case 8311:  /* while_gesivnx4bi_ptest */
    case 8310:  /* while_ltsivnx4bi_ptest */
    case 8309:  /* while_ulesivnx4bi_ptest */
    case 8308:  /* while_ultsivnx4bi_ptest */
    case 8307:  /* while_lesivnx4bi_ptest */
    case 8306:  /* while_wrdivnx8bi_ptest */
    case 8305:  /* while_rwdivnx8bi_ptest */
    case 8304:  /* while_ugedivnx8bi_ptest */
    case 8303:  /* while_ugtdivnx8bi_ptest */
    case 8302:  /* while_gtdivnx8bi_ptest */
    case 8301:  /* while_gedivnx8bi_ptest */
    case 8300:  /* while_ltdivnx8bi_ptest */
    case 8299:  /* while_uledivnx8bi_ptest */
    case 8298:  /* while_ultdivnx8bi_ptest */
    case 8297:  /* while_ledivnx8bi_ptest */
    case 8296:  /* while_wrsivnx8bi_ptest */
    case 8295:  /* while_rwsivnx8bi_ptest */
    case 8294:  /* while_ugesivnx8bi_ptest */
    case 8293:  /* while_ugtsivnx8bi_ptest */
    case 8292:  /* while_gtsivnx8bi_ptest */
    case 8291:  /* while_gesivnx8bi_ptest */
    case 8290:  /* while_ltsivnx8bi_ptest */
    case 8289:  /* while_ulesivnx8bi_ptest */
    case 8288:  /* while_ultsivnx8bi_ptest */
    case 8287:  /* while_lesivnx8bi_ptest */
    case 8286:  /* while_wrdivnx16bi_ptest */
    case 8285:  /* while_rwdivnx16bi_ptest */
    case 8284:  /* while_ugedivnx16bi_ptest */
    case 8283:  /* while_ugtdivnx16bi_ptest */
    case 8282:  /* while_gtdivnx16bi_ptest */
    case 8281:  /* while_gedivnx16bi_ptest */
    case 8280:  /* while_ltdivnx16bi_ptest */
    case 8279:  /* while_uledivnx16bi_ptest */
    case 8278:  /* while_ultdivnx16bi_ptest */
    case 8277:  /* while_ledivnx16bi_ptest */
    case 8276:  /* while_wrsivnx16bi_ptest */
    case 8275:  /* while_rwsivnx16bi_ptest */
    case 8274:  /* while_ugesivnx16bi_ptest */
    case 8273:  /* while_ugtsivnx16bi_ptest */
    case 8272:  /* while_gtsivnx16bi_ptest */
    case 8271:  /* while_gesivnx16bi_ptest */
    case 8270:  /* while_ltsivnx16bi_ptest */
    case 8269:  /* while_ulesivnx16bi_ptest */
    case 8268:  /* while_ultsivnx16bi_ptest */
    case 8267:  /* while_lesivnx16bi_ptest */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 8266:  /* *while_wrdivnx2bi_cc */
    case 8265:  /* *while_rwdivnx2bi_cc */
    case 8264:  /* *while_ugedivnx2bi_cc */
    case 8263:  /* *while_ugtdivnx2bi_cc */
    case 8262:  /* *while_gtdivnx2bi_cc */
    case 8261:  /* *while_gedivnx2bi_cc */
    case 8260:  /* *while_ltdivnx2bi_cc */
    case 8259:  /* *while_uledivnx2bi_cc */
    case 8258:  /* *while_ultdivnx2bi_cc */
    case 8257:  /* *while_ledivnx2bi_cc */
    case 8256:  /* *while_wrsivnx2bi_cc */
    case 8255:  /* *while_rwsivnx2bi_cc */
    case 8254:  /* *while_ugesivnx2bi_cc */
    case 8253:  /* *while_ugtsivnx2bi_cc */
    case 8252:  /* *while_gtsivnx2bi_cc */
    case 8251:  /* *while_gesivnx2bi_cc */
    case 8250:  /* *while_ltsivnx2bi_cc */
    case 8249:  /* *while_ulesivnx2bi_cc */
    case 8248:  /* *while_ultsivnx2bi_cc */
    case 8247:  /* *while_lesivnx2bi_cc */
    case 8246:  /* *while_wrdivnx4bi_cc */
    case 8245:  /* *while_rwdivnx4bi_cc */
    case 8244:  /* *while_ugedivnx4bi_cc */
    case 8243:  /* *while_ugtdivnx4bi_cc */
    case 8242:  /* *while_gtdivnx4bi_cc */
    case 8241:  /* *while_gedivnx4bi_cc */
    case 8240:  /* *while_ltdivnx4bi_cc */
    case 8239:  /* *while_uledivnx4bi_cc */
    case 8238:  /* *while_ultdivnx4bi_cc */
    case 8237:  /* *while_ledivnx4bi_cc */
    case 8236:  /* *while_wrsivnx4bi_cc */
    case 8235:  /* *while_rwsivnx4bi_cc */
    case 8234:  /* *while_ugesivnx4bi_cc */
    case 8233:  /* *while_ugtsivnx4bi_cc */
    case 8232:  /* *while_gtsivnx4bi_cc */
    case 8231:  /* *while_gesivnx4bi_cc */
    case 8230:  /* *while_ltsivnx4bi_cc */
    case 8229:  /* *while_ulesivnx4bi_cc */
    case 8228:  /* *while_ultsivnx4bi_cc */
    case 8227:  /* *while_lesivnx4bi_cc */
    case 8226:  /* *while_wrdivnx8bi_cc */
    case 8225:  /* *while_rwdivnx8bi_cc */
    case 8224:  /* *while_ugedivnx8bi_cc */
    case 8223:  /* *while_ugtdivnx8bi_cc */
    case 8222:  /* *while_gtdivnx8bi_cc */
    case 8221:  /* *while_gedivnx8bi_cc */
    case 8220:  /* *while_ltdivnx8bi_cc */
    case 8219:  /* *while_uledivnx8bi_cc */
    case 8218:  /* *while_ultdivnx8bi_cc */
    case 8217:  /* *while_ledivnx8bi_cc */
    case 8216:  /* *while_wrsivnx8bi_cc */
    case 8215:  /* *while_rwsivnx8bi_cc */
    case 8214:  /* *while_ugesivnx8bi_cc */
    case 8213:  /* *while_ugtsivnx8bi_cc */
    case 8212:  /* *while_gtsivnx8bi_cc */
    case 8211:  /* *while_gesivnx8bi_cc */
    case 8210:  /* *while_ltsivnx8bi_cc */
    case 8209:  /* *while_ulesivnx8bi_cc */
    case 8208:  /* *while_ultsivnx8bi_cc */
    case 8207:  /* *while_lesivnx8bi_cc */
    case 8206:  /* *while_wrdivnx16bi_cc */
    case 8205:  /* *while_rwdivnx16bi_cc */
    case 8204:  /* *while_ugedivnx16bi_cc */
    case 8203:  /* *while_ugtdivnx16bi_cc */
    case 8202:  /* *while_gtdivnx16bi_cc */
    case 8201:  /* *while_gedivnx16bi_cc */
    case 8200:  /* *while_ltdivnx16bi_cc */
    case 8199:  /* *while_uledivnx16bi_cc */
    case 8198:  /* *while_ultdivnx16bi_cc */
    case 8197:  /* *while_ledivnx16bi_cc */
    case 8196:  /* *while_wrsivnx16bi_cc */
    case 8195:  /* *while_rwsivnx16bi_cc */
    case 8194:  /* *while_ugesivnx16bi_cc */
    case 8193:  /* *while_ugtsivnx16bi_cc */
    case 8192:  /* *while_gtsivnx16bi_cc */
    case 8191:  /* *while_gesivnx16bi_cc */
    case 8190:  /* *while_ltsivnx16bi_cc */
    case 8189:  /* *while_ulesivnx16bi_cc */
    case 8188:  /* *while_ultsivnx16bi_cc */
    case 8187:  /* *while_lesivnx16bi_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 8186:  /* while_wrdivnx2bi */
    case 8185:  /* while_rwdivnx2bi */
    case 8184:  /* while_ugedivnx2bi */
    case 8183:  /* while_ugtdivnx2bi */
    case 8182:  /* while_gtdivnx2bi */
    case 8181:  /* while_gedivnx2bi */
    case 8180:  /* while_ltdivnx2bi */
    case 8179:  /* while_uledivnx2bi */
    case 8178:  /* while_ultdivnx2bi */
    case 8177:  /* while_ledivnx2bi */
    case 8176:  /* while_wrsivnx2bi */
    case 8175:  /* while_rwsivnx2bi */
    case 8174:  /* while_ugesivnx2bi */
    case 8173:  /* while_ugtsivnx2bi */
    case 8172:  /* while_gtsivnx2bi */
    case 8171:  /* while_gesivnx2bi */
    case 8170:  /* while_ltsivnx2bi */
    case 8169:  /* while_ulesivnx2bi */
    case 8168:  /* while_ultsivnx2bi */
    case 8167:  /* while_lesivnx2bi */
    case 8166:  /* while_wrdivnx4bi */
    case 8165:  /* while_rwdivnx4bi */
    case 8164:  /* while_ugedivnx4bi */
    case 8163:  /* while_ugtdivnx4bi */
    case 8162:  /* while_gtdivnx4bi */
    case 8161:  /* while_gedivnx4bi */
    case 8160:  /* while_ltdivnx4bi */
    case 8159:  /* while_uledivnx4bi */
    case 8158:  /* while_ultdivnx4bi */
    case 8157:  /* while_ledivnx4bi */
    case 8156:  /* while_wrsivnx4bi */
    case 8155:  /* while_rwsivnx4bi */
    case 8154:  /* while_ugesivnx4bi */
    case 8153:  /* while_ugtsivnx4bi */
    case 8152:  /* while_gtsivnx4bi */
    case 8151:  /* while_gesivnx4bi */
    case 8150:  /* while_ltsivnx4bi */
    case 8149:  /* while_ulesivnx4bi */
    case 8148:  /* while_ultsivnx4bi */
    case 8147:  /* while_lesivnx4bi */
    case 8146:  /* while_wrdivnx8bi */
    case 8145:  /* while_rwdivnx8bi */
    case 8144:  /* while_ugedivnx8bi */
    case 8143:  /* while_ugtdivnx8bi */
    case 8142:  /* while_gtdivnx8bi */
    case 8141:  /* while_gedivnx8bi */
    case 8140:  /* while_ltdivnx8bi */
    case 8139:  /* while_uledivnx8bi */
    case 8138:  /* while_ultdivnx8bi */
    case 8137:  /* while_ledivnx8bi */
    case 8136:  /* while_wrsivnx8bi */
    case 8135:  /* while_rwsivnx8bi */
    case 8134:  /* while_ugesivnx8bi */
    case 8133:  /* while_ugtsivnx8bi */
    case 8132:  /* while_gtsivnx8bi */
    case 8131:  /* while_gesivnx8bi */
    case 8130:  /* while_ltsivnx8bi */
    case 8129:  /* while_ulesivnx8bi */
    case 8128:  /* while_ultsivnx8bi */
    case 8127:  /* while_lesivnx8bi */
    case 8126:  /* while_wrdivnx16bi */
    case 8125:  /* while_rwdivnx16bi */
    case 8124:  /* while_ugedivnx16bi */
    case 8123:  /* while_ugtdivnx16bi */
    case 8122:  /* while_gtdivnx16bi */
    case 8121:  /* while_gedivnx16bi */
    case 8120:  /* while_ltdivnx16bi */
    case 8119:  /* while_uledivnx16bi */
    case 8118:  /* while_ultdivnx16bi */
    case 8117:  /* while_ledivnx16bi */
    case 8116:  /* while_wrsivnx16bi */
    case 8115:  /* while_rwsivnx16bi */
    case 8114:  /* while_ugesivnx16bi */
    case 8113:  /* while_ugtsivnx16bi */
    case 8112:  /* while_gtsivnx16bi */
    case 8111:  /* while_gesivnx16bi */
    case 8110:  /* while_ltsivnx16bi */
    case 8109:  /* while_ulesivnx16bi */
    case 8108:  /* while_ultsivnx16bi */
    case 8107:  /* while_lesivnx16bi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 9957:  /* *aarch64_pred_nmatchvnx8hi_ptest */
    case 9956:  /* *aarch64_pred_matchvnx8hi_ptest */
    case 9955:  /* *aarch64_pred_nmatchvnx16qi_ptest */
    case 9954:  /* *aarch64_pred_matchvnx16qi_ptest */
    case 8106:  /* *aarch64_pred_cmpnevnx4si_wide_ptest */
    case 8105:  /* *aarch64_pred_cmpltvnx4si_wide_ptest */
    case 8104:  /* *aarch64_pred_cmplsvnx4si_wide_ptest */
    case 8103:  /* *aarch64_pred_cmplovnx4si_wide_ptest */
    case 8102:  /* *aarch64_pred_cmplevnx4si_wide_ptest */
    case 8101:  /* *aarch64_pred_cmphsvnx4si_wide_ptest */
    case 8100:  /* *aarch64_pred_cmphivnx4si_wide_ptest */
    case 8099:  /* *aarch64_pred_cmpgtvnx4si_wide_ptest */
    case 8098:  /* *aarch64_pred_cmpgevnx4si_wide_ptest */
    case 8097:  /* *aarch64_pred_cmpeqvnx4si_wide_ptest */
    case 8096:  /* *aarch64_pred_cmpnevnx8hi_wide_ptest */
    case 8095:  /* *aarch64_pred_cmpltvnx8hi_wide_ptest */
    case 8094:  /* *aarch64_pred_cmplsvnx8hi_wide_ptest */
    case 8093:  /* *aarch64_pred_cmplovnx8hi_wide_ptest */
    case 8092:  /* *aarch64_pred_cmplevnx8hi_wide_ptest */
    case 8091:  /* *aarch64_pred_cmphsvnx8hi_wide_ptest */
    case 8090:  /* *aarch64_pred_cmphivnx8hi_wide_ptest */
    case 8089:  /* *aarch64_pred_cmpgtvnx8hi_wide_ptest */
    case 8088:  /* *aarch64_pred_cmpgevnx8hi_wide_ptest */
    case 8087:  /* *aarch64_pred_cmpeqvnx8hi_wide_ptest */
    case 8086:  /* *aarch64_pred_cmpnevnx16qi_wide_ptest */
    case 8085:  /* *aarch64_pred_cmpltvnx16qi_wide_ptest */
    case 8084:  /* *aarch64_pred_cmplsvnx16qi_wide_ptest */
    case 8083:  /* *aarch64_pred_cmplovnx16qi_wide_ptest */
    case 8082:  /* *aarch64_pred_cmplevnx16qi_wide_ptest */
    case 8081:  /* *aarch64_pred_cmphsvnx16qi_wide_ptest */
    case 8080:  /* *aarch64_pred_cmphivnx16qi_wide_ptest */
    case 8079:  /* *aarch64_pred_cmpgtvnx16qi_wide_ptest */
    case 8078:  /* *aarch64_pred_cmpgevnx16qi_wide_ptest */
    case 8077:  /* *aarch64_pred_cmpeqvnx16qi_wide_ptest */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 2), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 2), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 0));
      ro[7] = *(ro_loc[7] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 1));
      break;

    case 9953:  /* *aarch64_pred_nmatchvnx8hi_cc */
    case 9952:  /* *aarch64_pred_matchvnx8hi_cc */
    case 9951:  /* *aarch64_pred_nmatchvnx16qi_cc */
    case 9950:  /* *aarch64_pred_matchvnx16qi_cc */
    case 8076:  /* *aarch64_pred_cmpnevnx4si_wide_cc */
    case 8075:  /* *aarch64_pred_cmpltvnx4si_wide_cc */
    case 8074:  /* *aarch64_pred_cmplsvnx4si_wide_cc */
    case 8073:  /* *aarch64_pred_cmplovnx4si_wide_cc */
    case 8072:  /* *aarch64_pred_cmplevnx4si_wide_cc */
    case 8071:  /* *aarch64_pred_cmphsvnx4si_wide_cc */
    case 8070:  /* *aarch64_pred_cmphivnx4si_wide_cc */
    case 8069:  /* *aarch64_pred_cmpgtvnx4si_wide_cc */
    case 8068:  /* *aarch64_pred_cmpgevnx4si_wide_cc */
    case 8067:  /* *aarch64_pred_cmpeqvnx4si_wide_cc */
    case 8066:  /* *aarch64_pred_cmpnevnx8hi_wide_cc */
    case 8065:  /* *aarch64_pred_cmpltvnx8hi_wide_cc */
    case 8064:  /* *aarch64_pred_cmplsvnx8hi_wide_cc */
    case 8063:  /* *aarch64_pred_cmplovnx8hi_wide_cc */
    case 8062:  /* *aarch64_pred_cmplevnx8hi_wide_cc */
    case 8061:  /* *aarch64_pred_cmphsvnx8hi_wide_cc */
    case 8060:  /* *aarch64_pred_cmphivnx8hi_wide_cc */
    case 8059:  /* *aarch64_pred_cmpgtvnx8hi_wide_cc */
    case 8058:  /* *aarch64_pred_cmpgevnx8hi_wide_cc */
    case 8057:  /* *aarch64_pred_cmpeqvnx8hi_wide_cc */
    case 8056:  /* *aarch64_pred_cmpnevnx16qi_wide_cc */
    case 8055:  /* *aarch64_pred_cmpltvnx16qi_wide_cc */
    case 8054:  /* *aarch64_pred_cmplsvnx16qi_wide_cc */
    case 8053:  /* *aarch64_pred_cmplovnx16qi_wide_cc */
    case 8052:  /* *aarch64_pred_cmplevnx16qi_wide_cc */
    case 8051:  /* *aarch64_pred_cmphsvnx16qi_wide_cc */
    case 8050:  /* *aarch64_pred_cmphivnx16qi_wide_cc */
    case 8049:  /* *aarch64_pred_cmpgtvnx16qi_wide_cc */
    case 8048:  /* *aarch64_pred_cmpgevnx16qi_wide_cc */
    case 8047:  /* *aarch64_pred_cmpeqvnx16qi_wide_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 2), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 2), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 0));
      ro[7] = *(ro_loc[7] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 7;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 6;
      break;

    case 9949:  /* aarch64_pred_nmatchvnx8hi */
    case 9948:  /* aarch64_pred_matchvnx8hi */
    case 9947:  /* aarch64_pred_nmatchvnx16qi */
    case 9946:  /* aarch64_pred_matchvnx16qi */
    case 8046:  /* aarch64_pred_cmpnevnx4si_wide */
    case 8045:  /* aarch64_pred_cmpltvnx4si_wide */
    case 8044:  /* aarch64_pred_cmplsvnx4si_wide */
    case 8043:  /* aarch64_pred_cmplovnx4si_wide */
    case 8042:  /* aarch64_pred_cmplevnx4si_wide */
    case 8041:  /* aarch64_pred_cmphsvnx4si_wide */
    case 8040:  /* aarch64_pred_cmphivnx4si_wide */
    case 8039:  /* aarch64_pred_cmpgtvnx4si_wide */
    case 8038:  /* aarch64_pred_cmpgevnx4si_wide */
    case 8037:  /* aarch64_pred_cmpeqvnx4si_wide */
    case 8036:  /* aarch64_pred_cmpnevnx8hi_wide */
    case 8035:  /* aarch64_pred_cmpltvnx8hi_wide */
    case 8034:  /* aarch64_pred_cmplsvnx8hi_wide */
    case 8033:  /* aarch64_pred_cmplovnx8hi_wide */
    case 8032:  /* aarch64_pred_cmplevnx8hi_wide */
    case 8031:  /* aarch64_pred_cmphsvnx8hi_wide */
    case 8030:  /* aarch64_pred_cmphivnx8hi_wide */
    case 8029:  /* aarch64_pred_cmpgtvnx8hi_wide */
    case 8028:  /* aarch64_pred_cmpgevnx8hi_wide */
    case 8027:  /* aarch64_pred_cmpeqvnx8hi_wide */
    case 8026:  /* aarch64_pred_cmpnevnx16qi_wide */
    case 8025:  /* aarch64_pred_cmpltvnx16qi_wide */
    case 8024:  /* aarch64_pred_cmplsvnx16qi_wide */
    case 8023:  /* aarch64_pred_cmplovnx16qi_wide */
    case 8022:  /* aarch64_pred_cmplevnx16qi_wide */
    case 8021:  /* aarch64_pred_cmphsvnx16qi_wide */
    case 8020:  /* aarch64_pred_cmphivnx16qi_wide */
    case 8019:  /* aarch64_pred_cmpgtvnx16qi_wide */
    case 8018:  /* aarch64_pred_cmpgevnx16qi_wide */
    case 8017:  /* aarch64_pred_cmpeqvnx16qi_wide */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0, 1));
      break;

    case 8016:  /* *cmphivnx2di_and */
    case 8015:  /* *cmphsvnx2di_and */
    case 8014:  /* *cmplsvnx2di_and */
    case 8013:  /* *cmplovnx2di_and */
    case 8012:  /* *cmpgtvnx2di_and */
    case 8011:  /* *cmpgevnx2di_and */
    case 8010:  /* *cmpnevnx2di_and */
    case 8009:  /* *cmpeqvnx2di_and */
    case 8008:  /* *cmplevnx2di_and */
    case 8007:  /* *cmpltvnx2di_and */
    case 8006:  /* *cmphivnx2si_and */
    case 8005:  /* *cmphsvnx2si_and */
    case 8004:  /* *cmplsvnx2si_and */
    case 8003:  /* *cmplovnx2si_and */
    case 8002:  /* *cmpgtvnx2si_and */
    case 8001:  /* *cmpgevnx2si_and */
    case 8000:  /* *cmpnevnx2si_and */
    case 7999:  /* *cmpeqvnx2si_and */
    case 7998:  /* *cmplevnx2si_and */
    case 7997:  /* *cmpltvnx2si_and */
    case 7996:  /* *cmphivnx4si_and */
    case 7995:  /* *cmphsvnx4si_and */
    case 7994:  /* *cmplsvnx4si_and */
    case 7993:  /* *cmplovnx4si_and */
    case 7992:  /* *cmpgtvnx4si_and */
    case 7991:  /* *cmpgevnx4si_and */
    case 7990:  /* *cmpnevnx4si_and */
    case 7989:  /* *cmpeqvnx4si_and */
    case 7988:  /* *cmplevnx4si_and */
    case 7987:  /* *cmpltvnx4si_and */
    case 7986:  /* *cmphivnx2hi_and */
    case 7985:  /* *cmphsvnx2hi_and */
    case 7984:  /* *cmplsvnx2hi_and */
    case 7983:  /* *cmplovnx2hi_and */
    case 7982:  /* *cmpgtvnx2hi_and */
    case 7981:  /* *cmpgevnx2hi_and */
    case 7980:  /* *cmpnevnx2hi_and */
    case 7979:  /* *cmpeqvnx2hi_and */
    case 7978:  /* *cmplevnx2hi_and */
    case 7977:  /* *cmpltvnx2hi_and */
    case 7976:  /* *cmphivnx4hi_and */
    case 7975:  /* *cmphsvnx4hi_and */
    case 7974:  /* *cmplsvnx4hi_and */
    case 7973:  /* *cmplovnx4hi_and */
    case 7972:  /* *cmpgtvnx4hi_and */
    case 7971:  /* *cmpgevnx4hi_and */
    case 7970:  /* *cmpnevnx4hi_and */
    case 7969:  /* *cmpeqvnx4hi_and */
    case 7968:  /* *cmplevnx4hi_and */
    case 7967:  /* *cmpltvnx4hi_and */
    case 7966:  /* *cmphivnx8hi_and */
    case 7965:  /* *cmphsvnx8hi_and */
    case 7964:  /* *cmplsvnx8hi_and */
    case 7963:  /* *cmplovnx8hi_and */
    case 7962:  /* *cmpgtvnx8hi_and */
    case 7961:  /* *cmpgevnx8hi_and */
    case 7960:  /* *cmpnevnx8hi_and */
    case 7959:  /* *cmpeqvnx8hi_and */
    case 7958:  /* *cmplevnx8hi_and */
    case 7957:  /* *cmpltvnx8hi_and */
    case 7956:  /* *cmphivnx2qi_and */
    case 7955:  /* *cmphsvnx2qi_and */
    case 7954:  /* *cmplsvnx2qi_and */
    case 7953:  /* *cmplovnx2qi_and */
    case 7952:  /* *cmpgtvnx2qi_and */
    case 7951:  /* *cmpgevnx2qi_and */
    case 7950:  /* *cmpnevnx2qi_and */
    case 7949:  /* *cmpeqvnx2qi_and */
    case 7948:  /* *cmplevnx2qi_and */
    case 7947:  /* *cmpltvnx2qi_and */
    case 7946:  /* *cmphivnx4qi_and */
    case 7945:  /* *cmphsvnx4qi_and */
    case 7944:  /* *cmplsvnx4qi_and */
    case 7943:  /* *cmplovnx4qi_and */
    case 7942:  /* *cmpgtvnx4qi_and */
    case 7941:  /* *cmpgevnx4qi_and */
    case 7940:  /* *cmpnevnx4qi_and */
    case 7939:  /* *cmpeqvnx4qi_and */
    case 7938:  /* *cmplevnx4qi_and */
    case 7937:  /* *cmpltvnx4qi_and */
    case 7936:  /* *cmphivnx8qi_and */
    case 7935:  /* *cmphsvnx8qi_and */
    case 7934:  /* *cmplsvnx8qi_and */
    case 7933:  /* *cmplovnx8qi_and */
    case 7932:  /* *cmpgtvnx8qi_and */
    case 7931:  /* *cmpgevnx8qi_and */
    case 7930:  /* *cmpnevnx8qi_and */
    case 7929:  /* *cmpeqvnx8qi_and */
    case 7928:  /* *cmplevnx8qi_and */
    case 7927:  /* *cmpltvnx8qi_and */
    case 7926:  /* *cmphivnx16qi_and */
    case 7925:  /* *cmphsvnx16qi_and */
    case 7924:  /* *cmplsvnx16qi_and */
    case 7923:  /* *cmplovnx16qi_and */
    case 7922:  /* *cmpgtvnx16qi_and */
    case 7921:  /* *cmpgevnx16qi_and */
    case 7920:  /* *cmpnevnx16qi_and */
    case 7919:  /* *cmpeqvnx16qi_and */
    case 7918:  /* *cmplevnx16qi_and */
    case 7917:  /* *cmpltvnx16qi_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      break;

    case 7916:  /* *cmphivnx2di_ptest */
    case 7915:  /* *cmphsvnx2di_ptest */
    case 7914:  /* *cmplsvnx2di_ptest */
    case 7913:  /* *cmplovnx2di_ptest */
    case 7912:  /* *cmpgtvnx2di_ptest */
    case 7911:  /* *cmpgevnx2di_ptest */
    case 7910:  /* *cmpnevnx2di_ptest */
    case 7909:  /* *cmpeqvnx2di_ptest */
    case 7908:  /* *cmplevnx2di_ptest */
    case 7907:  /* *cmpltvnx2di_ptest */
    case 7906:  /* *cmphivnx2si_ptest */
    case 7905:  /* *cmphsvnx2si_ptest */
    case 7904:  /* *cmplsvnx2si_ptest */
    case 7903:  /* *cmplovnx2si_ptest */
    case 7902:  /* *cmpgtvnx2si_ptest */
    case 7901:  /* *cmpgevnx2si_ptest */
    case 7900:  /* *cmpnevnx2si_ptest */
    case 7899:  /* *cmpeqvnx2si_ptest */
    case 7898:  /* *cmplevnx2si_ptest */
    case 7897:  /* *cmpltvnx2si_ptest */
    case 7896:  /* *cmphivnx4si_ptest */
    case 7895:  /* *cmphsvnx4si_ptest */
    case 7894:  /* *cmplsvnx4si_ptest */
    case 7893:  /* *cmplovnx4si_ptest */
    case 7892:  /* *cmpgtvnx4si_ptest */
    case 7891:  /* *cmpgevnx4si_ptest */
    case 7890:  /* *cmpnevnx4si_ptest */
    case 7889:  /* *cmpeqvnx4si_ptest */
    case 7888:  /* *cmplevnx4si_ptest */
    case 7887:  /* *cmpltvnx4si_ptest */
    case 7886:  /* *cmphivnx2hi_ptest */
    case 7885:  /* *cmphsvnx2hi_ptest */
    case 7884:  /* *cmplsvnx2hi_ptest */
    case 7883:  /* *cmplovnx2hi_ptest */
    case 7882:  /* *cmpgtvnx2hi_ptest */
    case 7881:  /* *cmpgevnx2hi_ptest */
    case 7880:  /* *cmpnevnx2hi_ptest */
    case 7879:  /* *cmpeqvnx2hi_ptest */
    case 7878:  /* *cmplevnx2hi_ptest */
    case 7877:  /* *cmpltvnx2hi_ptest */
    case 7876:  /* *cmphivnx4hi_ptest */
    case 7875:  /* *cmphsvnx4hi_ptest */
    case 7874:  /* *cmplsvnx4hi_ptest */
    case 7873:  /* *cmplovnx4hi_ptest */
    case 7872:  /* *cmpgtvnx4hi_ptest */
    case 7871:  /* *cmpgevnx4hi_ptest */
    case 7870:  /* *cmpnevnx4hi_ptest */
    case 7869:  /* *cmpeqvnx4hi_ptest */
    case 7868:  /* *cmplevnx4hi_ptest */
    case 7867:  /* *cmpltvnx4hi_ptest */
    case 7866:  /* *cmphivnx8hi_ptest */
    case 7865:  /* *cmphsvnx8hi_ptest */
    case 7864:  /* *cmplsvnx8hi_ptest */
    case 7863:  /* *cmplovnx8hi_ptest */
    case 7862:  /* *cmpgtvnx8hi_ptest */
    case 7861:  /* *cmpgevnx8hi_ptest */
    case 7860:  /* *cmpnevnx8hi_ptest */
    case 7859:  /* *cmpeqvnx8hi_ptest */
    case 7858:  /* *cmplevnx8hi_ptest */
    case 7857:  /* *cmpltvnx8hi_ptest */
    case 7856:  /* *cmphivnx2qi_ptest */
    case 7855:  /* *cmphsvnx2qi_ptest */
    case 7854:  /* *cmplsvnx2qi_ptest */
    case 7853:  /* *cmplovnx2qi_ptest */
    case 7852:  /* *cmpgtvnx2qi_ptest */
    case 7851:  /* *cmpgevnx2qi_ptest */
    case 7850:  /* *cmpnevnx2qi_ptest */
    case 7849:  /* *cmpeqvnx2qi_ptest */
    case 7848:  /* *cmplevnx2qi_ptest */
    case 7847:  /* *cmpltvnx2qi_ptest */
    case 7846:  /* *cmphivnx4qi_ptest */
    case 7845:  /* *cmphsvnx4qi_ptest */
    case 7844:  /* *cmplsvnx4qi_ptest */
    case 7843:  /* *cmplovnx4qi_ptest */
    case 7842:  /* *cmpgtvnx4qi_ptest */
    case 7841:  /* *cmpgevnx4qi_ptest */
    case 7840:  /* *cmpnevnx4qi_ptest */
    case 7839:  /* *cmpeqvnx4qi_ptest */
    case 7838:  /* *cmplevnx4qi_ptest */
    case 7837:  /* *cmpltvnx4qi_ptest */
    case 7836:  /* *cmphivnx8qi_ptest */
    case 7835:  /* *cmphsvnx8qi_ptest */
    case 7834:  /* *cmplsvnx8qi_ptest */
    case 7833:  /* *cmplovnx8qi_ptest */
    case 7832:  /* *cmpgtvnx8qi_ptest */
    case 7831:  /* *cmpgevnx8qi_ptest */
    case 7830:  /* *cmpnevnx8qi_ptest */
    case 7829:  /* *cmpeqvnx8qi_ptest */
    case 7828:  /* *cmplevnx8qi_ptest */
    case 7827:  /* *cmpltvnx8qi_ptest */
    case 7826:  /* *cmphivnx16qi_ptest */
    case 7825:  /* *cmphsvnx16qi_ptest */
    case 7824:  /* *cmplsvnx16qi_ptest */
    case 7823:  /* *cmplovnx16qi_ptest */
    case 7822:  /* *cmpgtvnx16qi_ptest */
    case 7821:  /* *cmpgevnx16qi_ptest */
    case 7820:  /* *cmpnevnx16qi_ptest */
    case 7819:  /* *cmpeqvnx16qi_ptest */
    case 7818:  /* *cmplevnx16qi_ptest */
    case 7817:  /* *cmpltvnx16qi_ptest */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 0));
      ro[7] = *(ro_loc[7] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 1));
      break;

    case 7816:  /* *cmphivnx2di_cc */
    case 7815:  /* *cmphsvnx2di_cc */
    case 7814:  /* *cmplsvnx2di_cc */
    case 7813:  /* *cmplovnx2di_cc */
    case 7812:  /* *cmpgtvnx2di_cc */
    case 7811:  /* *cmpgevnx2di_cc */
    case 7810:  /* *cmpnevnx2di_cc */
    case 7809:  /* *cmpeqvnx2di_cc */
    case 7808:  /* *cmplevnx2di_cc */
    case 7807:  /* *cmpltvnx2di_cc */
    case 7806:  /* *cmphivnx2si_cc */
    case 7805:  /* *cmphsvnx2si_cc */
    case 7804:  /* *cmplsvnx2si_cc */
    case 7803:  /* *cmplovnx2si_cc */
    case 7802:  /* *cmpgtvnx2si_cc */
    case 7801:  /* *cmpgevnx2si_cc */
    case 7800:  /* *cmpnevnx2si_cc */
    case 7799:  /* *cmpeqvnx2si_cc */
    case 7798:  /* *cmplevnx2si_cc */
    case 7797:  /* *cmpltvnx2si_cc */
    case 7796:  /* *cmphivnx4si_cc */
    case 7795:  /* *cmphsvnx4si_cc */
    case 7794:  /* *cmplsvnx4si_cc */
    case 7793:  /* *cmplovnx4si_cc */
    case 7792:  /* *cmpgtvnx4si_cc */
    case 7791:  /* *cmpgevnx4si_cc */
    case 7790:  /* *cmpnevnx4si_cc */
    case 7789:  /* *cmpeqvnx4si_cc */
    case 7788:  /* *cmplevnx4si_cc */
    case 7787:  /* *cmpltvnx4si_cc */
    case 7786:  /* *cmphivnx2hi_cc */
    case 7785:  /* *cmphsvnx2hi_cc */
    case 7784:  /* *cmplsvnx2hi_cc */
    case 7783:  /* *cmplovnx2hi_cc */
    case 7782:  /* *cmpgtvnx2hi_cc */
    case 7781:  /* *cmpgevnx2hi_cc */
    case 7780:  /* *cmpnevnx2hi_cc */
    case 7779:  /* *cmpeqvnx2hi_cc */
    case 7778:  /* *cmplevnx2hi_cc */
    case 7777:  /* *cmpltvnx2hi_cc */
    case 7776:  /* *cmphivnx4hi_cc */
    case 7775:  /* *cmphsvnx4hi_cc */
    case 7774:  /* *cmplsvnx4hi_cc */
    case 7773:  /* *cmplovnx4hi_cc */
    case 7772:  /* *cmpgtvnx4hi_cc */
    case 7771:  /* *cmpgevnx4hi_cc */
    case 7770:  /* *cmpnevnx4hi_cc */
    case 7769:  /* *cmpeqvnx4hi_cc */
    case 7768:  /* *cmplevnx4hi_cc */
    case 7767:  /* *cmpltvnx4hi_cc */
    case 7766:  /* *cmphivnx8hi_cc */
    case 7765:  /* *cmphsvnx8hi_cc */
    case 7764:  /* *cmplsvnx8hi_cc */
    case 7763:  /* *cmplovnx8hi_cc */
    case 7762:  /* *cmpgtvnx8hi_cc */
    case 7761:  /* *cmpgevnx8hi_cc */
    case 7760:  /* *cmpnevnx8hi_cc */
    case 7759:  /* *cmpeqvnx8hi_cc */
    case 7758:  /* *cmplevnx8hi_cc */
    case 7757:  /* *cmpltvnx8hi_cc */
    case 7756:  /* *cmphivnx2qi_cc */
    case 7755:  /* *cmphsvnx2qi_cc */
    case 7754:  /* *cmplsvnx2qi_cc */
    case 7753:  /* *cmplovnx2qi_cc */
    case 7752:  /* *cmpgtvnx2qi_cc */
    case 7751:  /* *cmpgevnx2qi_cc */
    case 7750:  /* *cmpnevnx2qi_cc */
    case 7749:  /* *cmpeqvnx2qi_cc */
    case 7748:  /* *cmplevnx2qi_cc */
    case 7747:  /* *cmpltvnx2qi_cc */
    case 7746:  /* *cmphivnx4qi_cc */
    case 7745:  /* *cmphsvnx4qi_cc */
    case 7744:  /* *cmplsvnx4qi_cc */
    case 7743:  /* *cmplovnx4qi_cc */
    case 7742:  /* *cmpgtvnx4qi_cc */
    case 7741:  /* *cmpgevnx4qi_cc */
    case 7740:  /* *cmpnevnx4qi_cc */
    case 7739:  /* *cmpeqvnx4qi_cc */
    case 7738:  /* *cmplevnx4qi_cc */
    case 7737:  /* *cmpltvnx4qi_cc */
    case 7736:  /* *cmphivnx8qi_cc */
    case 7735:  /* *cmphsvnx8qi_cc */
    case 7734:  /* *cmplsvnx8qi_cc */
    case 7733:  /* *cmplovnx8qi_cc */
    case 7732:  /* *cmpgtvnx8qi_cc */
    case 7731:  /* *cmpgevnx8qi_cc */
    case 7730:  /* *cmpnevnx8qi_cc */
    case 7729:  /* *cmpeqvnx8qi_cc */
    case 7728:  /* *cmplevnx8qi_cc */
    case 7727:  /* *cmpltvnx8qi_cc */
    case 7726:  /* *cmphivnx16qi_cc */
    case 7725:  /* *cmphsvnx16qi_cc */
    case 7724:  /* *cmplsvnx16qi_cc */
    case 7723:  /* *cmplovnx16qi_cc */
    case 7722:  /* *cmpgtvnx16qi_cc */
    case 7721:  /* *cmpgevnx16qi_cc */
    case 7720:  /* *cmpnevnx16qi_cc */
    case 7719:  /* *cmpeqvnx16qi_cc */
    case 7718:  /* *cmplevnx16qi_cc */
    case 7717:  /* *cmpltvnx16qi_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 0));
      ro[7] = *(ro_loc[7] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2), 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 7;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 6;
      break;

    case 7716:  /* aarch64_pred_cmphivnx2di */
    case 7715:  /* aarch64_pred_cmphsvnx2di */
    case 7714:  /* aarch64_pred_cmplsvnx2di */
    case 7713:  /* aarch64_pred_cmplovnx2di */
    case 7712:  /* aarch64_pred_cmpgtvnx2di */
    case 7711:  /* aarch64_pred_cmpgevnx2di */
    case 7710:  /* aarch64_pred_cmpnevnx2di */
    case 7709:  /* aarch64_pred_cmpeqvnx2di */
    case 7708:  /* aarch64_pred_cmplevnx2di */
    case 7707:  /* aarch64_pred_cmpltvnx2di */
    case 7706:  /* aarch64_pred_cmphivnx2si */
    case 7705:  /* aarch64_pred_cmphsvnx2si */
    case 7704:  /* aarch64_pred_cmplsvnx2si */
    case 7703:  /* aarch64_pred_cmplovnx2si */
    case 7702:  /* aarch64_pred_cmpgtvnx2si */
    case 7701:  /* aarch64_pred_cmpgevnx2si */
    case 7700:  /* aarch64_pred_cmpnevnx2si */
    case 7699:  /* aarch64_pred_cmpeqvnx2si */
    case 7698:  /* aarch64_pred_cmplevnx2si */
    case 7697:  /* aarch64_pred_cmpltvnx2si */
    case 7696:  /* aarch64_pred_cmphivnx4si */
    case 7695:  /* aarch64_pred_cmphsvnx4si */
    case 7694:  /* aarch64_pred_cmplsvnx4si */
    case 7693:  /* aarch64_pred_cmplovnx4si */
    case 7692:  /* aarch64_pred_cmpgtvnx4si */
    case 7691:  /* aarch64_pred_cmpgevnx4si */
    case 7690:  /* aarch64_pred_cmpnevnx4si */
    case 7689:  /* aarch64_pred_cmpeqvnx4si */
    case 7688:  /* aarch64_pred_cmplevnx4si */
    case 7687:  /* aarch64_pred_cmpltvnx4si */
    case 7686:  /* aarch64_pred_cmphivnx2hi */
    case 7685:  /* aarch64_pred_cmphsvnx2hi */
    case 7684:  /* aarch64_pred_cmplsvnx2hi */
    case 7683:  /* aarch64_pred_cmplovnx2hi */
    case 7682:  /* aarch64_pred_cmpgtvnx2hi */
    case 7681:  /* aarch64_pred_cmpgevnx2hi */
    case 7680:  /* aarch64_pred_cmpnevnx2hi */
    case 7679:  /* aarch64_pred_cmpeqvnx2hi */
    case 7678:  /* aarch64_pred_cmplevnx2hi */
    case 7677:  /* aarch64_pred_cmpltvnx2hi */
    case 7676:  /* aarch64_pred_cmphivnx4hi */
    case 7675:  /* aarch64_pred_cmphsvnx4hi */
    case 7674:  /* aarch64_pred_cmplsvnx4hi */
    case 7673:  /* aarch64_pred_cmplovnx4hi */
    case 7672:  /* aarch64_pred_cmpgtvnx4hi */
    case 7671:  /* aarch64_pred_cmpgevnx4hi */
    case 7670:  /* aarch64_pred_cmpnevnx4hi */
    case 7669:  /* aarch64_pred_cmpeqvnx4hi */
    case 7668:  /* aarch64_pred_cmplevnx4hi */
    case 7667:  /* aarch64_pred_cmpltvnx4hi */
    case 7666:  /* aarch64_pred_cmphivnx8hi */
    case 7665:  /* aarch64_pred_cmphsvnx8hi */
    case 7664:  /* aarch64_pred_cmplsvnx8hi */
    case 7663:  /* aarch64_pred_cmplovnx8hi */
    case 7662:  /* aarch64_pred_cmpgtvnx8hi */
    case 7661:  /* aarch64_pred_cmpgevnx8hi */
    case 7660:  /* aarch64_pred_cmpnevnx8hi */
    case 7659:  /* aarch64_pred_cmpeqvnx8hi */
    case 7658:  /* aarch64_pred_cmplevnx8hi */
    case 7657:  /* aarch64_pred_cmpltvnx8hi */
    case 7656:  /* aarch64_pred_cmphivnx2qi */
    case 7655:  /* aarch64_pred_cmphsvnx2qi */
    case 7654:  /* aarch64_pred_cmplsvnx2qi */
    case 7653:  /* aarch64_pred_cmplovnx2qi */
    case 7652:  /* aarch64_pred_cmpgtvnx2qi */
    case 7651:  /* aarch64_pred_cmpgevnx2qi */
    case 7650:  /* aarch64_pred_cmpnevnx2qi */
    case 7649:  /* aarch64_pred_cmpeqvnx2qi */
    case 7648:  /* aarch64_pred_cmplevnx2qi */
    case 7647:  /* aarch64_pred_cmpltvnx2qi */
    case 7646:  /* aarch64_pred_cmphivnx4qi */
    case 7645:  /* aarch64_pred_cmphsvnx4qi */
    case 7644:  /* aarch64_pred_cmplsvnx4qi */
    case 7643:  /* aarch64_pred_cmplovnx4qi */
    case 7642:  /* aarch64_pred_cmpgtvnx4qi */
    case 7641:  /* aarch64_pred_cmpgevnx4qi */
    case 7640:  /* aarch64_pred_cmpnevnx4qi */
    case 7639:  /* aarch64_pred_cmpeqvnx4qi */
    case 7638:  /* aarch64_pred_cmplevnx4qi */
    case 7637:  /* aarch64_pred_cmpltvnx4qi */
    case 7636:  /* aarch64_pred_cmphivnx8qi */
    case 7635:  /* aarch64_pred_cmphsvnx8qi */
    case 7634:  /* aarch64_pred_cmplsvnx8qi */
    case 7633:  /* aarch64_pred_cmplovnx8qi */
    case 7632:  /* aarch64_pred_cmpgtvnx8qi */
    case 7631:  /* aarch64_pred_cmpgevnx8qi */
    case 7630:  /* aarch64_pred_cmpnevnx8qi */
    case 7629:  /* aarch64_pred_cmpeqvnx8qi */
    case 7628:  /* aarch64_pred_cmplevnx8qi */
    case 7627:  /* aarch64_pred_cmpltvnx8qi */
    case 7626:  /* aarch64_pred_cmphivnx16qi */
    case 7625:  /* aarch64_pred_cmphsvnx16qi */
    case 7624:  /* aarch64_pred_cmplsvnx16qi */
    case 7623:  /* aarch64_pred_cmplovnx16qi */
    case 7622:  /* aarch64_pred_cmpgtvnx16qi */
    case 7621:  /* aarch64_pred_cmpgevnx16qi */
    case 7620:  /* aarch64_pred_cmpnevnx16qi */
    case 7619:  /* aarch64_pred_cmpeqvnx16qi */
    case 7618:  /* aarch64_pred_cmplevnx16qi */
    case 7617:  /* aarch64_pred_cmpltvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 1));
      break;

    case 7616:  /* aarch64_sel_dupvnx2df */
    case 7615:  /* aarch64_sel_dupvnx2di */
    case 7614:  /* aarch64_sel_dupvnx2sf */
    case 7613:  /* aarch64_sel_dupvnx4sf */
    case 7612:  /* aarch64_sel_dupvnx2si */
    case 7611:  /* aarch64_sel_dupvnx4si */
    case 7610:  /* aarch64_sel_dupvnx2bf */
    case 7609:  /* aarch64_sel_dupvnx4bf */
    case 7608:  /* aarch64_sel_dupvnx8bf */
    case 7607:  /* aarch64_sel_dupvnx2hf */
    case 7606:  /* aarch64_sel_dupvnx4hf */
    case 7605:  /* aarch64_sel_dupvnx8hf */
    case 7604:  /* aarch64_sel_dupvnx2hi */
    case 7603:  /* aarch64_sel_dupvnx4hi */
    case 7602:  /* aarch64_sel_dupvnx8hi */
    case 7601:  /* aarch64_sel_dupvnx2qi */
    case 7600:  /* aarch64_sel_dupvnx4qi */
    case 7599:  /* aarch64_sel_dupvnx8qi */
    case 7598:  /* aarch64_sel_dupvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 8547:  /* mask_fold_left_plus_vnx2df */
    case 8546:  /* mask_fold_left_plus_vnx4sf */
    case 8545:  /* mask_fold_left_plus_vnx8hf */
    case 7597:  /* *vcond_mask_vnx2dfvnx2bi */
    case 7596:  /* *vcond_mask_vnx2divnx2bi */
    case 7595:  /* *vcond_mask_vnx2sfvnx2bi */
    case 7594:  /* *vcond_mask_vnx4sfvnx4bi */
    case 7593:  /* *vcond_mask_vnx2sivnx2bi */
    case 7592:  /* *vcond_mask_vnx4sivnx4bi */
    case 7591:  /* *vcond_mask_vnx2bfvnx2bi */
    case 7590:  /* *vcond_mask_vnx4bfvnx4bi */
    case 7589:  /* *vcond_mask_vnx8bfvnx8bi */
    case 7588:  /* *vcond_mask_vnx2hfvnx2bi */
    case 7587:  /* *vcond_mask_vnx4hfvnx4bi */
    case 7586:  /* *vcond_mask_vnx8hfvnx8bi */
    case 7585:  /* *vcond_mask_vnx2hivnx2bi */
    case 7584:  /* *vcond_mask_vnx4hivnx4bi */
    case 7583:  /* *vcond_mask_vnx8hivnx8bi */
    case 7582:  /* *vcond_mask_vnx2qivnx2bi */
    case 7581:  /* *vcond_mask_vnx4qivnx4bi */
    case 7580:  /* *vcond_mask_vnx8qivnx8bi */
    case 7579:  /* *vcond_mask_vnx16qivnx16bi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 7558:  /* *cond_fcmla270vnx2df_any_strict */
    case 7557:  /* *cond_fcmla180vnx2df_any_strict */
    case 7556:  /* *cond_fcmla90vnx2df_any_strict */
    case 7555:  /* *cond_fcmlavnx2df_any_strict */
    case 7554:  /* *cond_fcmla270vnx4sf_any_strict */
    case 7553:  /* *cond_fcmla180vnx4sf_any_strict */
    case 7552:  /* *cond_fcmla90vnx4sf_any_strict */
    case 7551:  /* *cond_fcmlavnx4sf_any_strict */
    case 7550:  /* *cond_fcmla270vnx8hf_any_strict */
    case 7549:  /* *cond_fcmla180vnx8hf_any_strict */
    case 7548:  /* *cond_fcmla90vnx8hf_any_strict */
    case 7547:  /* *cond_fcmlavnx8hf_any_strict */
    case 7492:  /* *cond_fmsvnx2df_any_strict */
    case 7491:  /* *cond_fnmsvnx2df_any_strict */
    case 7490:  /* *cond_fnmavnx2df_any_strict */
    case 7489:  /* *cond_fmavnx2df_any_strict */
    case 7488:  /* *cond_fmsvnx4sf_any_strict */
    case 7487:  /* *cond_fnmsvnx4sf_any_strict */
    case 7486:  /* *cond_fnmavnx4sf_any_strict */
    case 7485:  /* *cond_fmavnx4sf_any_strict */
    case 7484:  /* *cond_fmsvnx8hf_any_strict */
    case 7483:  /* *cond_fnmsvnx8hf_any_strict */
    case 7482:  /* *cond_fnmavnx8hf_any_strict */
    case 7481:  /* *cond_fmavnx8hf_any_strict */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0);
      recog_data.dup_num[0] = 1;
      break;

    case 7546:  /* *cond_fcmla270vnx2df_any_relaxed */
    case 7545:  /* *cond_fcmla180vnx2df_any_relaxed */
    case 7544:  /* *cond_fcmla90vnx2df_any_relaxed */
    case 7543:  /* *cond_fcmlavnx2df_any_relaxed */
    case 7542:  /* *cond_fcmla270vnx4sf_any_relaxed */
    case 7541:  /* *cond_fcmla180vnx4sf_any_relaxed */
    case 7540:  /* *cond_fcmla90vnx4sf_any_relaxed */
    case 7539:  /* *cond_fcmlavnx4sf_any_relaxed */
    case 7538:  /* *cond_fcmla270vnx8hf_any_relaxed */
    case 7537:  /* *cond_fcmla180vnx8hf_any_relaxed */
    case 7536:  /* *cond_fcmla90vnx8hf_any_relaxed */
    case 7535:  /* *cond_fcmlavnx8hf_any_relaxed */
    case 7480:  /* *cond_fmsvnx2df_any_relaxed */
    case 7479:  /* *cond_fnmsvnx2df_any_relaxed */
    case 7478:  /* *cond_fnmavnx2df_any_relaxed */
    case 7477:  /* *cond_fmavnx2df_any_relaxed */
    case 7476:  /* *cond_fmsvnx4sf_any_relaxed */
    case 7475:  /* *cond_fnmsvnx4sf_any_relaxed */
    case 7474:  /* *cond_fnmavnx4sf_any_relaxed */
    case 7473:  /* *cond_fmavnx4sf_any_relaxed */
    case 7472:  /* *cond_fmsvnx8hf_any_relaxed */
    case 7471:  /* *cond_fnmsvnx8hf_any_relaxed */
    case 7470:  /* *cond_fnmavnx8hf_any_relaxed */
    case 7469:  /* *cond_fmavnx8hf_any_relaxed */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      break;

    case 7534:  /* *cond_fcmla270vnx2df_4_strict */
    case 7533:  /* *cond_fcmla180vnx2df_4_strict */
    case 7532:  /* *cond_fcmla90vnx2df_4_strict */
    case 7531:  /* *cond_fcmlavnx2df_4_strict */
    case 7530:  /* *cond_fcmla270vnx4sf_4_strict */
    case 7529:  /* *cond_fcmla180vnx4sf_4_strict */
    case 7528:  /* *cond_fcmla90vnx4sf_4_strict */
    case 7527:  /* *cond_fcmlavnx4sf_4_strict */
    case 7526:  /* *cond_fcmla270vnx8hf_4_strict */
    case 7525:  /* *cond_fcmla180vnx8hf_4_strict */
    case 7524:  /* *cond_fcmla90vnx8hf_4_strict */
    case 7523:  /* *cond_fcmlavnx8hf_4_strict */
    case 7468:  /* *cond_fmsvnx2df_4_strict */
    case 7467:  /* *cond_fnmsvnx2df_4_strict */
    case 7466:  /* *cond_fnmavnx2df_4_strict */
    case 7465:  /* *cond_fmavnx2df_4_strict */
    case 7464:  /* *cond_fmsvnx4sf_4_strict */
    case 7463:  /* *cond_fnmsvnx4sf_4_strict */
    case 7462:  /* *cond_fnmavnx4sf_4_strict */
    case 7461:  /* *cond_fmavnx4sf_4_strict */
    case 7460:  /* *cond_fmsvnx8hf_4_strict */
    case 7459:  /* *cond_fnmsvnx8hf_4_strict */
    case 7458:  /* *cond_fnmavnx8hf_4_strict */
    case 7457:  /* *cond_fmavnx8hf_4_strict */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 7522:  /* *cond_fcmla270vnx2df_4_relaxed */
    case 7521:  /* *cond_fcmla180vnx2df_4_relaxed */
    case 7520:  /* *cond_fcmla90vnx2df_4_relaxed */
    case 7519:  /* *cond_fcmlavnx2df_4_relaxed */
    case 7518:  /* *cond_fcmla270vnx4sf_4_relaxed */
    case 7517:  /* *cond_fcmla180vnx4sf_4_relaxed */
    case 7516:  /* *cond_fcmla90vnx4sf_4_relaxed */
    case 7515:  /* *cond_fcmlavnx4sf_4_relaxed */
    case 7514:  /* *cond_fcmla270vnx8hf_4_relaxed */
    case 7513:  /* *cond_fcmla180vnx8hf_4_relaxed */
    case 7512:  /* *cond_fcmla90vnx8hf_4_relaxed */
    case 7511:  /* *cond_fcmlavnx8hf_4_relaxed */
    case 7456:  /* *cond_fmsvnx2df_4_relaxed */
    case 7455:  /* *cond_fnmsvnx2df_4_relaxed */
    case 7454:  /* *cond_fnmavnx2df_4_relaxed */
    case 7453:  /* *cond_fmavnx2df_4_relaxed */
    case 7452:  /* *cond_fmsvnx4sf_4_relaxed */
    case 7451:  /* *cond_fnmsvnx4sf_4_relaxed */
    case 7450:  /* *cond_fnmavnx4sf_4_relaxed */
    case 7449:  /* *cond_fmavnx4sf_4_relaxed */
    case 7448:  /* *cond_fmsvnx8hf_4_relaxed */
    case 7447:  /* *cond_fnmsvnx8hf_4_relaxed */
    case 7446:  /* *cond_fnmavnx8hf_4_relaxed */
    case 7445:  /* *cond_fmavnx8hf_4_relaxed */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 4;
      break;

    case 7444:  /* *cond_fmsvnx2df_2_strict */
    case 7443:  /* *cond_fnmsvnx2df_2_strict */
    case 7442:  /* *cond_fnmavnx2df_2_strict */
    case 7441:  /* *cond_fmavnx2df_2_strict */
    case 7440:  /* *cond_fmsvnx4sf_2_strict */
    case 7439:  /* *cond_fnmsvnx4sf_2_strict */
    case 7438:  /* *cond_fnmavnx4sf_2_strict */
    case 7437:  /* *cond_fmavnx4sf_2_strict */
    case 7436:  /* *cond_fmsvnx8hf_2_strict */
    case 7435:  /* *cond_fnmsvnx8hf_2_strict */
    case 7434:  /* *cond_fnmavnx8hf_2_strict */
    case 7433:  /* *cond_fmavnx8hf_2_strict */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 7432:  /* *cond_fmsvnx2df_2_relaxed */
    case 7431:  /* *cond_fnmsvnx2df_2_relaxed */
    case 7430:  /* *cond_fnmavnx2df_2_relaxed */
    case 7429:  /* *cond_fmavnx2df_2_relaxed */
    case 7428:  /* *cond_fmsvnx4sf_2_relaxed */
    case 7427:  /* *cond_fnmsvnx4sf_2_relaxed */
    case 7426:  /* *cond_fnmavnx4sf_2_relaxed */
    case 7425:  /* *cond_fmavnx4sf_2_relaxed */
    case 7424:  /* *cond_fmsvnx8hf_2_relaxed */
    case 7423:  /* *cond_fnmsvnx8hf_2_relaxed */
    case 7422:  /* *cond_fnmavnx8hf_2_relaxed */
    case 7421:  /* *cond_fmavnx8hf_2_relaxed */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 2;
      break;

    case 7510:  /* aarch64_pred_fcmla270vnx2df */
    case 7509:  /* aarch64_pred_fcmla180vnx2df */
    case 7508:  /* aarch64_pred_fcmla90vnx2df */
    case 7507:  /* aarch64_pred_fcmlavnx2df */
    case 7506:  /* aarch64_pred_fcmla270vnx4sf */
    case 7505:  /* aarch64_pred_fcmla180vnx4sf */
    case 7504:  /* aarch64_pred_fcmla90vnx4sf */
    case 7503:  /* aarch64_pred_fcmlavnx4sf */
    case 7502:  /* aarch64_pred_fcmla270vnx8hf */
    case 7501:  /* aarch64_pred_fcmla180vnx8hf */
    case 7500:  /* aarch64_pred_fcmla90vnx8hf */
    case 7499:  /* aarch64_pred_fcmlavnx8hf */
    case 7420:  /* aarch64_pred_fmsvnx2df */
    case 7419:  /* aarch64_pred_fnmsvnx2df */
    case 7418:  /* aarch64_pred_fnmavnx2df */
    case 7417:  /* aarch64_pred_fmavnx2df */
    case 7416:  /* aarch64_pred_fmsvnx4sf */
    case 7415:  /* aarch64_pred_fnmsvnx4sf */
    case 7414:  /* aarch64_pred_fnmavnx4sf */
    case 7413:  /* aarch64_pred_fmavnx4sf */
    case 7412:  /* aarch64_pred_fmsvnx8hf */
    case 7411:  /* aarch64_pred_fnmsvnx8hf */
    case 7410:  /* aarch64_pred_fnmavnx8hf */
    case 7409:  /* aarch64_pred_fmavnx8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 7405:  /* aarch64_sudot_prod_lanevnx16qi */
    case 7404:  /* aarch64_usdot_prod_lanevnx16qi */
    case 7402:  /* aarch64_udot_prod_lanevnx8hi */
    case 7401:  /* aarch64_sdot_prod_lanevnx8hi */
    case 7400:  /* aarch64_udot_prod_lanevnx16qi */
    case 7399:  /* aarch64_sdot_prod_lanevnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 7394:  /* *cond_fnmavnx2di_any */
    case 7393:  /* *cond_fnmavnx2si_any */
    case 7392:  /* *cond_fnmavnx4si_any */
    case 7391:  /* *cond_fnmavnx2hi_any */
    case 7390:  /* *cond_fnmavnx4hi_any */
    case 7389:  /* *cond_fnmavnx8hi_any */
    case 7388:  /* *cond_fnmavnx2qi_any */
    case 7387:  /* *cond_fnmavnx4qi_any */
    case 7386:  /* *cond_fnmavnx8qi_any */
    case 7385:  /* *cond_fnmavnx16qi_any */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 7384:  /* *cond_fnmavnx2di_4 */
    case 7383:  /* *cond_fnmavnx2si_4 */
    case 7382:  /* *cond_fnmavnx4si_4 */
    case 7381:  /* *cond_fnmavnx2hi_4 */
    case 7380:  /* *cond_fnmavnx4hi_4 */
    case 7379:  /* *cond_fnmavnx8hi_4 */
    case 7378:  /* *cond_fnmavnx2qi_4 */
    case 7377:  /* *cond_fnmavnx4qi_4 */
    case 7376:  /* *cond_fnmavnx8qi_4 */
    case 7375:  /* *cond_fnmavnx16qi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 4;
      break;

    case 7374:  /* *cond_fnmavnx2di_2 */
    case 7373:  /* *cond_fnmavnx2si_2 */
    case 7372:  /* *cond_fnmavnx4si_2 */
    case 7371:  /* *cond_fnmavnx2hi_2 */
    case 7370:  /* *cond_fnmavnx4hi_2 */
    case 7369:  /* *cond_fnmavnx8hi_2 */
    case 7368:  /* *cond_fnmavnx2qi_2 */
    case 7367:  /* *cond_fnmavnx4qi_2 */
    case 7366:  /* *cond_fnmavnx8qi_2 */
    case 7365:  /* *cond_fnmavnx16qi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 2;
      break;

    case 7364:  /* aarch64_pred_fnmavnx2di */
    case 7363:  /* aarch64_pred_fnmavnx2si */
    case 7362:  /* aarch64_pred_fnmavnx4si */
    case 7361:  /* aarch64_pred_fnmavnx2hi */
    case 7360:  /* aarch64_pred_fnmavnx4hi */
    case 7359:  /* aarch64_pred_fnmavnx8hi */
    case 7358:  /* aarch64_pred_fnmavnx2qi */
    case 7357:  /* aarch64_pred_fnmavnx4qi */
    case 7356:  /* aarch64_pred_fnmavnx8qi */
    case 7355:  /* aarch64_pred_fnmavnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 7354:  /* *cond_fmavnx2di_any */
    case 7353:  /* *cond_fmavnx2si_any */
    case 7352:  /* *cond_fmavnx4si_any */
    case 7351:  /* *cond_fmavnx2hi_any */
    case 7350:  /* *cond_fmavnx4hi_any */
    case 7349:  /* *cond_fmavnx8hi_any */
    case 7348:  /* *cond_fmavnx2qi_any */
    case 7347:  /* *cond_fmavnx4qi_any */
    case 7346:  /* *cond_fmavnx8qi_any */
    case 7345:  /* *cond_fmavnx16qi_any */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 7344:  /* *cond_fmavnx2di_4 */
    case 7343:  /* *cond_fmavnx2si_4 */
    case 7342:  /* *cond_fmavnx4si_4 */
    case 7341:  /* *cond_fmavnx2hi_4 */
    case 7340:  /* *cond_fmavnx4hi_4 */
    case 7339:  /* *cond_fmavnx8hi_4 */
    case 7338:  /* *cond_fmavnx2qi_4 */
    case 7337:  /* *cond_fmavnx4qi_4 */
    case 7336:  /* *cond_fmavnx8qi_4 */
    case 7335:  /* *cond_fmavnx16qi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 4;
      break;

    case 7334:  /* *cond_fmavnx2di_2 */
    case 7333:  /* *cond_fmavnx2si_2 */
    case 7332:  /* *cond_fmavnx4si_2 */
    case 7331:  /* *cond_fmavnx2hi_2 */
    case 7330:  /* *cond_fmavnx4hi_2 */
    case 7329:  /* *cond_fmavnx8hi_2 */
    case 7328:  /* *cond_fmavnx2qi_2 */
    case 7327:  /* *cond_fmavnx4qi_2 */
    case 7326:  /* *cond_fmavnx8qi_2 */
    case 7325:  /* *cond_fmavnx16qi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 2;
      break;

    case 7324:  /* aarch64_pred_fmavnx2di */
    case 7323:  /* aarch64_pred_fmavnx2si */
    case 7322:  /* aarch64_pred_fmavnx4si */
    case 7321:  /* aarch64_pred_fmavnx2hi */
    case 7320:  /* aarch64_pred_fmavnx4hi */
    case 7319:  /* aarch64_pred_fmavnx8hi */
    case 7318:  /* aarch64_pred_fmavnx2qi */
    case 7317:  /* aarch64_pred_fmavnx4qi */
    case 7316:  /* aarch64_pred_fmavnx8qi */
    case 7315:  /* aarch64_pred_fmavnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 7314:  /* *nandvnx2bi3_ptest */
    case 7313:  /* *norvnx2bi3_ptest */
    case 7312:  /* *nandvnx4bi3_ptest */
    case 7311:  /* *norvnx4bi3_ptest */
    case 7310:  /* *nandvnx8bi3_ptest */
    case 7309:  /* *norvnx8bi3_ptest */
    case 7308:  /* *nandvnx16bi3_ptest */
    case 7307:  /* *norvnx16bi3_ptest */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 1);
      recog_data.dup_num[0] = 4;
      break;

    case 7306:  /* *nandvnx2bi3_cc */
    case 7305:  /* *norvnx2bi3_cc */
    case 7304:  /* *nandvnx4bi3_cc */
    case 7303:  /* *norvnx4bi3_cc */
    case 7302:  /* *nandvnx8bi3_cc */
    case 7301:  /* *norvnx8bi3_cc */
    case 7300:  /* *nandvnx16bi3_cc */
    case 7299:  /* *norvnx16bi3_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 1);
      recog_data.dup_num[3] = 4;
      break;

    case 7290:  /* *ornvnx2bi3_ptest */
    case 7289:  /* *bicvnx2bi3_ptest */
    case 7288:  /* *ornvnx4bi3_ptest */
    case 7287:  /* *bicvnx4bi3_ptest */
    case 7286:  /* *ornvnx8bi3_ptest */
    case 7285:  /* *bicvnx8bi3_ptest */
    case 7284:  /* *ornvnx16bi3_ptest */
    case 7283:  /* *bicvnx16bi3_ptest */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 1);
      recog_data.dup_num[0] = 4;
      break;

    case 7282:  /* *ornvnx2bi3_cc */
    case 7281:  /* *bicvnx2bi3_cc */
    case 7280:  /* *ornvnx4bi3_cc */
    case 7279:  /* *bicvnx4bi3_cc */
    case 7278:  /* *ornvnx8bi3_cc */
    case 7277:  /* *bicvnx8bi3_cc */
    case 7276:  /* *ornvnx16bi3_cc */
    case 7275:  /* *bicvnx16bi3_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 1);
      recog_data.dup_num[3] = 4;
      break;

    case 7266:  /* *xorvnx2bi3_ptest */
    case 7265:  /* *iorvnx2bi3_ptest */
    case 7264:  /* *andvnx2bi3_ptest */
    case 7263:  /* *xorvnx4bi3_ptest */
    case 7262:  /* *iorvnx4bi3_ptest */
    case 7261:  /* *andvnx4bi3_ptest */
    case 7260:  /* *xorvnx8bi3_ptest */
    case 7259:  /* *iorvnx8bi3_ptest */
    case 7258:  /* *andvnx8bi3_ptest */
    case 7257:  /* *xorvnx16bi3_ptest */
    case 7256:  /* *iorvnx16bi3_ptest */
    case 7255:  /* *andvnx16bi3_ptest */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 1);
      recog_data.dup_num[0] = 4;
      break;

    case 7254:  /* *xorvnx2bi3_cc */
    case 7253:  /* *iorvnx2bi3_cc */
    case 7252:  /* *andvnx2bi3_cc */
    case 7251:  /* *xorvnx4bi3_cc */
    case 7250:  /* *iorvnx4bi3_cc */
    case 7249:  /* *andvnx4bi3_cc */
    case 7248:  /* *xorvnx8bi3_cc */
    case 7247:  /* *iorvnx8bi3_cc */
    case 7246:  /* *andvnx8bi3_cc */
    case 7245:  /* *xorvnx16bi3_cc */
    case 7244:  /* *iorvnx16bi3_cc */
    case 7243:  /* *andvnx16bi3_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 1);
      recog_data.dup_num[3] = 4;
      break;

    case 7199:  /* *aarch64_cond_abdvnx2df_any_strict */
    case 7198:  /* *aarch64_cond_abdvnx4sf_any_strict */
    case 7197:  /* *aarch64_cond_abdvnx8hf_any_strict */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 7196:  /* *aarch64_cond_abdvnx2df_any_relaxed */
    case 7195:  /* *aarch64_cond_abdvnx4sf_any_relaxed */
    case 7194:  /* *aarch64_cond_abdvnx8hf_any_relaxed */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 0));
      break;

    case 7193:  /* *aarch64_cond_abdvnx2df_3_strict */
    case 7192:  /* *aarch64_cond_abdvnx4sf_3_strict */
    case 7191:  /* *aarch64_cond_abdvnx8hf_3_strict */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 7190:  /* *aarch64_cond_abdvnx2df_3_relaxed */
    case 7189:  /* *aarch64_cond_abdvnx4sf_3_relaxed */
    case 7188:  /* *aarch64_cond_abdvnx8hf_3_relaxed */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 3;
      break;

    case 7187:  /* *aarch64_cond_abdvnx2df_2_strict */
    case 7186:  /* *aarch64_cond_abdvnx4sf_2_strict */
    case 7185:  /* *aarch64_cond_abdvnx8hf_2_strict */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 7184:  /* *aarch64_cond_abdvnx2df_2_relaxed */
    case 7183:  /* *aarch64_cond_abdvnx4sf_2_relaxed */
    case 7182:  /* *aarch64_cond_abdvnx8hf_2_relaxed */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 2;
      break;

    case 7181:  /* *aarch64_pred_abdvnx2df_strict */
    case 7180:  /* *aarch64_pred_abdvnx4sf_strict */
    case 7179:  /* *aarch64_pred_abdvnx8hf_strict */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 0);
      recog_data.dup_num[0] = 1;
      break;

    case 7178:  /* *aarch64_pred_abdvnx2df_relaxed */
    case 7177:  /* *aarch64_pred_abdvnx4sf_relaxed */
    case 7176:  /* *aarch64_pred_abdvnx8hf_relaxed */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 0));
      break;

    case 7169:  /* *cond_subvnx2df_3_const_strict */
    case 7168:  /* *cond_subvnx4sf_3_const_strict */
    case 7167:  /* *cond_subvnx8hf_3_const_strict */
    case 7031:  /* *cond_subvnx2df_3_strict */
    case 7030:  /* *cond_mulxvnx2df_3_strict */
    case 7029:  /* *cond_mulvnx2df_3_strict */
    case 7028:  /* *cond_sminvnx2df_3_strict */
    case 7027:  /* *cond_fmin_nanvnx2df_3_strict */
    case 7026:  /* *cond_smaxvnx2df_3_strict */
    case 7025:  /* *cond_fmax_nanvnx2df_3_strict */
    case 7024:  /* *cond_divvnx2df_3_strict */
    case 7023:  /* *cond_addvnx2df_3_strict */
    case 7022:  /* *cond_subvnx4sf_3_strict */
    case 7021:  /* *cond_mulxvnx4sf_3_strict */
    case 7020:  /* *cond_mulvnx4sf_3_strict */
    case 7019:  /* *cond_sminvnx4sf_3_strict */
    case 7018:  /* *cond_fmin_nanvnx4sf_3_strict */
    case 7017:  /* *cond_smaxvnx4sf_3_strict */
    case 7016:  /* *cond_fmax_nanvnx4sf_3_strict */
    case 7015:  /* *cond_divvnx4sf_3_strict */
    case 7014:  /* *cond_addvnx4sf_3_strict */
    case 7013:  /* *cond_subvnx8hf_3_strict */
    case 7012:  /* *cond_mulxvnx8hf_3_strict */
    case 7011:  /* *cond_mulvnx8hf_3_strict */
    case 7010:  /* *cond_sminvnx8hf_3_strict */
    case 7009:  /* *cond_fmin_nanvnx8hf_3_strict */
    case 7008:  /* *cond_smaxvnx8hf_3_strict */
    case 7007:  /* *cond_fmax_nanvnx8hf_3_strict */
    case 7006:  /* *cond_divvnx8hf_3_strict */
    case 7005:  /* *cond_addvnx8hf_3_strict */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 3));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 7166:  /* *cond_subvnx2df_3_const_relaxed */
    case 7165:  /* *cond_subvnx4sf_3_const_relaxed */
    case 7164:  /* *cond_subvnx8hf_3_const_relaxed */
    case 7004:  /* *cond_subvnx2df_3_relaxed */
    case 7003:  /* *cond_mulxvnx2df_3_relaxed */
    case 7002:  /* *cond_mulvnx2df_3_relaxed */
    case 7001:  /* *cond_sminvnx2df_3_relaxed */
    case 7000:  /* *cond_fmin_nanvnx2df_3_relaxed */
    case 6999:  /* *cond_smaxvnx2df_3_relaxed */
    case 6998:  /* *cond_fmax_nanvnx2df_3_relaxed */
    case 6997:  /* *cond_divvnx2df_3_relaxed */
    case 6996:  /* *cond_addvnx2df_3_relaxed */
    case 6995:  /* *cond_subvnx4sf_3_relaxed */
    case 6994:  /* *cond_mulxvnx4sf_3_relaxed */
    case 6993:  /* *cond_mulvnx4sf_3_relaxed */
    case 6992:  /* *cond_sminvnx4sf_3_relaxed */
    case 6991:  /* *cond_fmin_nanvnx4sf_3_relaxed */
    case 6990:  /* *cond_smaxvnx4sf_3_relaxed */
    case 6989:  /* *cond_fmax_nanvnx4sf_3_relaxed */
    case 6988:  /* *cond_divvnx4sf_3_relaxed */
    case 6987:  /* *cond_addvnx4sf_3_relaxed */
    case 6986:  /* *cond_subvnx8hf_3_relaxed */
    case 6985:  /* *cond_mulxvnx8hf_3_relaxed */
    case 6984:  /* *cond_mulvnx8hf_3_relaxed */
    case 6983:  /* *cond_sminvnx8hf_3_relaxed */
    case 6982:  /* *cond_fmin_nanvnx8hf_3_relaxed */
    case 6981:  /* *cond_smaxvnx8hf_3_relaxed */
    case 6980:  /* *cond_fmax_nanvnx8hf_3_relaxed */
    case 6979:  /* *cond_divvnx8hf_3_relaxed */
    case 6978:  /* *cond_addvnx8hf_3_relaxed */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 3;
      break;

    case 7175:  /* *cond_subvnx2df_const_strict */
    case 7174:  /* *cond_subvnx4sf_const_strict */
    case 7173:  /* *cond_subvnx8hf_const_strict */
    case 7160:  /* *cond_cadd270vnx2df_any_strict */
    case 7159:  /* *cond_cadd90vnx2df_any_strict */
    case 7158:  /* *cond_cadd270vnx4sf_any_strict */
    case 7157:  /* *cond_cadd90vnx4sf_any_strict */
    case 7156:  /* *cond_cadd270vnx8hf_any_strict */
    case 7155:  /* *cond_cadd90vnx8hf_any_strict */
    case 7130:  /* *cond_addvnx2df_any_const_strict */
    case 7129:  /* *cond_addvnx4sf_any_const_strict */
    case 7128:  /* *cond_addvnx8hf_any_const_strict */
    case 7115:  /* *cond_mulvnx2df_any_const_strict */
    case 7114:  /* *cond_sminvnx2df_any_const_strict */
    case 7113:  /* *cond_fmin_nanvnx2df_any_const_strict */
    case 7112:  /* *cond_smaxvnx2df_any_const_strict */
    case 7111:  /* *cond_fmax_nanvnx2df_any_const_strict */
    case 7110:  /* *cond_mulvnx4sf_any_const_strict */
    case 7109:  /* *cond_sminvnx4sf_any_const_strict */
    case 7108:  /* *cond_fmin_nanvnx4sf_any_const_strict */
    case 7107:  /* *cond_smaxvnx4sf_any_const_strict */
    case 7106:  /* *cond_fmax_nanvnx4sf_any_const_strict */
    case 7105:  /* *cond_mulvnx8hf_any_const_strict */
    case 7104:  /* *cond_sminvnx8hf_any_const_strict */
    case 7103:  /* *cond_fmin_nanvnx8hf_any_const_strict */
    case 7102:  /* *cond_smaxvnx8hf_any_const_strict */
    case 7101:  /* *cond_fmax_nanvnx8hf_any_const_strict */
    case 7085:  /* *cond_subvnx2df_any_strict */
    case 7084:  /* *cond_mulxvnx2df_any_strict */
    case 7083:  /* *cond_mulvnx2df_any_strict */
    case 7082:  /* *cond_sminvnx2df_any_strict */
    case 7081:  /* *cond_fmin_nanvnx2df_any_strict */
    case 7080:  /* *cond_smaxvnx2df_any_strict */
    case 7079:  /* *cond_fmax_nanvnx2df_any_strict */
    case 7078:  /* *cond_divvnx2df_any_strict */
    case 7077:  /* *cond_addvnx2df_any_strict */
    case 7076:  /* *cond_subvnx4sf_any_strict */
    case 7075:  /* *cond_mulxvnx4sf_any_strict */
    case 7074:  /* *cond_mulvnx4sf_any_strict */
    case 7073:  /* *cond_sminvnx4sf_any_strict */
    case 7072:  /* *cond_fmin_nanvnx4sf_any_strict */
    case 7071:  /* *cond_smaxvnx4sf_any_strict */
    case 7070:  /* *cond_fmax_nanvnx4sf_any_strict */
    case 7069:  /* *cond_divvnx4sf_any_strict */
    case 7068:  /* *cond_addvnx4sf_any_strict */
    case 7067:  /* *cond_subvnx8hf_any_strict */
    case 7066:  /* *cond_mulxvnx8hf_any_strict */
    case 7065:  /* *cond_mulvnx8hf_any_strict */
    case 7064:  /* *cond_sminvnx8hf_any_strict */
    case 7063:  /* *cond_fmin_nanvnx8hf_any_strict */
    case 7062:  /* *cond_smaxvnx8hf_any_strict */
    case 7061:  /* *cond_fmax_nanvnx8hf_any_strict */
    case 7060:  /* *cond_divvnx8hf_any_strict */
    case 7059:  /* *cond_addvnx8hf_any_strict */
    case 6872:  /* *cond_fscalevnx2df_any_strict */
    case 6871:  /* *cond_fscalevnx4sf_any_strict */
    case 6870:  /* *cond_fscalevnx8hf_any_strict */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0);
      recog_data.dup_num[0] = 1;
      break;

    case 7172:  /* *cond_subvnx2df_const_relaxed */
    case 7171:  /* *cond_subvnx4sf_const_relaxed */
    case 7170:  /* *cond_subvnx8hf_const_relaxed */
    case 7154:  /* *cond_cadd270vnx2df_any_relaxed */
    case 7153:  /* *cond_cadd90vnx2df_any_relaxed */
    case 7152:  /* *cond_cadd270vnx4sf_any_relaxed */
    case 7151:  /* *cond_cadd90vnx4sf_any_relaxed */
    case 7150:  /* *cond_cadd270vnx8hf_any_relaxed */
    case 7149:  /* *cond_cadd90vnx8hf_any_relaxed */
    case 7127:  /* *cond_addvnx2df_any_const_relaxed */
    case 7126:  /* *cond_addvnx4sf_any_const_relaxed */
    case 7125:  /* *cond_addvnx8hf_any_const_relaxed */
    case 7100:  /* *cond_mulvnx2df_any_const_relaxed */
    case 7099:  /* *cond_sminvnx2df_any_const_relaxed */
    case 7098:  /* *cond_fmin_nanvnx2df_any_const_relaxed */
    case 7097:  /* *cond_smaxvnx2df_any_const_relaxed */
    case 7096:  /* *cond_fmax_nanvnx2df_any_const_relaxed */
    case 7095:  /* *cond_mulvnx4sf_any_const_relaxed */
    case 7094:  /* *cond_sminvnx4sf_any_const_relaxed */
    case 7093:  /* *cond_fmin_nanvnx4sf_any_const_relaxed */
    case 7092:  /* *cond_smaxvnx4sf_any_const_relaxed */
    case 7091:  /* *cond_fmax_nanvnx4sf_any_const_relaxed */
    case 7090:  /* *cond_mulvnx8hf_any_const_relaxed */
    case 7089:  /* *cond_sminvnx8hf_any_const_relaxed */
    case 7088:  /* *cond_fmin_nanvnx8hf_any_const_relaxed */
    case 7087:  /* *cond_smaxvnx8hf_any_const_relaxed */
    case 7086:  /* *cond_fmax_nanvnx8hf_any_const_relaxed */
    case 7058:  /* *cond_subvnx2df_any_relaxed */
    case 7057:  /* *cond_mulxvnx2df_any_relaxed */
    case 7056:  /* *cond_mulvnx2df_any_relaxed */
    case 7055:  /* *cond_sminvnx2df_any_relaxed */
    case 7054:  /* *cond_fmin_nanvnx2df_any_relaxed */
    case 7053:  /* *cond_smaxvnx2df_any_relaxed */
    case 7052:  /* *cond_fmax_nanvnx2df_any_relaxed */
    case 7051:  /* *cond_divvnx2df_any_relaxed */
    case 7050:  /* *cond_addvnx2df_any_relaxed */
    case 7049:  /* *cond_subvnx4sf_any_relaxed */
    case 7048:  /* *cond_mulxvnx4sf_any_relaxed */
    case 7047:  /* *cond_mulvnx4sf_any_relaxed */
    case 7046:  /* *cond_sminvnx4sf_any_relaxed */
    case 7045:  /* *cond_fmin_nanvnx4sf_any_relaxed */
    case 7044:  /* *cond_smaxvnx4sf_any_relaxed */
    case 7043:  /* *cond_fmax_nanvnx4sf_any_relaxed */
    case 7042:  /* *cond_divvnx4sf_any_relaxed */
    case 7041:  /* *cond_addvnx4sf_any_relaxed */
    case 7040:  /* *cond_subvnx8hf_any_relaxed */
    case 7039:  /* *cond_mulxvnx8hf_any_relaxed */
    case 7038:  /* *cond_mulvnx8hf_any_relaxed */
    case 7037:  /* *cond_sminvnx8hf_any_relaxed */
    case 7036:  /* *cond_fmin_nanvnx8hf_any_relaxed */
    case 7035:  /* *cond_smaxvnx8hf_any_relaxed */
    case 7034:  /* *cond_fmax_nanvnx8hf_any_relaxed */
    case 7033:  /* *cond_divvnx8hf_any_relaxed */
    case 7032:  /* *cond_addvnx8hf_any_relaxed */
    case 6869:  /* *cond_fscalevnx2df_any_relaxed */
    case 6868:  /* *cond_fscalevnx4sf_any_relaxed */
    case 6867:  /* *cond_fscalevnx8hf_any_relaxed */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      break;

    case 7148:  /* *cond_cadd270vnx2df_2_strict */
    case 7147:  /* *cond_cadd90vnx2df_2_strict */
    case 7146:  /* *cond_cadd270vnx4sf_2_strict */
    case 7145:  /* *cond_cadd90vnx4sf_2_strict */
    case 7144:  /* *cond_cadd270vnx8hf_2_strict */
    case 7143:  /* *cond_cadd90vnx8hf_2_strict */
    case 7124:  /* *cond_addvnx2df_2_const_strict */
    case 7123:  /* *cond_addvnx4sf_2_const_strict */
    case 7122:  /* *cond_addvnx8hf_2_const_strict */
    case 6977:  /* *cond_mulvnx2df_2_const_strict */
    case 6976:  /* *cond_sminvnx2df_2_const_strict */
    case 6975:  /* *cond_fmin_nanvnx2df_2_const_strict */
    case 6974:  /* *cond_smaxvnx2df_2_const_strict */
    case 6973:  /* *cond_fmax_nanvnx2df_2_const_strict */
    case 6972:  /* *cond_mulvnx4sf_2_const_strict */
    case 6971:  /* *cond_sminvnx4sf_2_const_strict */
    case 6970:  /* *cond_fmin_nanvnx4sf_2_const_strict */
    case 6969:  /* *cond_smaxvnx4sf_2_const_strict */
    case 6968:  /* *cond_fmax_nanvnx4sf_2_const_strict */
    case 6967:  /* *cond_mulvnx8hf_2_const_strict */
    case 6966:  /* *cond_sminvnx8hf_2_const_strict */
    case 6965:  /* *cond_fmin_nanvnx8hf_2_const_strict */
    case 6964:  /* *cond_smaxvnx8hf_2_const_strict */
    case 6963:  /* *cond_fmax_nanvnx8hf_2_const_strict */
    case 6947:  /* *cond_subvnx2df_2_strict */
    case 6946:  /* *cond_mulxvnx2df_2_strict */
    case 6945:  /* *cond_mulvnx2df_2_strict */
    case 6944:  /* *cond_sminvnx2df_2_strict */
    case 6943:  /* *cond_fmin_nanvnx2df_2_strict */
    case 6942:  /* *cond_smaxvnx2df_2_strict */
    case 6941:  /* *cond_fmax_nanvnx2df_2_strict */
    case 6940:  /* *cond_divvnx2df_2_strict */
    case 6939:  /* *cond_addvnx2df_2_strict */
    case 6938:  /* *cond_subvnx4sf_2_strict */
    case 6937:  /* *cond_mulxvnx4sf_2_strict */
    case 6936:  /* *cond_mulvnx4sf_2_strict */
    case 6935:  /* *cond_sminvnx4sf_2_strict */
    case 6934:  /* *cond_fmin_nanvnx4sf_2_strict */
    case 6933:  /* *cond_smaxvnx4sf_2_strict */
    case 6932:  /* *cond_fmax_nanvnx4sf_2_strict */
    case 6931:  /* *cond_divvnx4sf_2_strict */
    case 6930:  /* *cond_addvnx4sf_2_strict */
    case 6929:  /* *cond_subvnx8hf_2_strict */
    case 6928:  /* *cond_mulxvnx8hf_2_strict */
    case 6927:  /* *cond_mulvnx8hf_2_strict */
    case 6926:  /* *cond_sminvnx8hf_2_strict */
    case 6925:  /* *cond_fmin_nanvnx8hf_2_strict */
    case 6924:  /* *cond_smaxvnx8hf_2_strict */
    case 6923:  /* *cond_fmax_nanvnx8hf_2_strict */
    case 6922:  /* *cond_divvnx8hf_2_strict */
    case 6921:  /* *cond_addvnx8hf_2_strict */
    case 6866:  /* *cond_fscalevnx2df_2_strict */
    case 6865:  /* *cond_fscalevnx4sf_2_strict */
    case 6864:  /* *cond_fscalevnx8hf_2_strict */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 3));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 7142:  /* *cond_cadd270vnx2df_2_relaxed */
    case 7141:  /* *cond_cadd90vnx2df_2_relaxed */
    case 7140:  /* *cond_cadd270vnx4sf_2_relaxed */
    case 7139:  /* *cond_cadd90vnx4sf_2_relaxed */
    case 7138:  /* *cond_cadd270vnx8hf_2_relaxed */
    case 7137:  /* *cond_cadd90vnx8hf_2_relaxed */
    case 7121:  /* *cond_addvnx2df_2_const_relaxed */
    case 7120:  /* *cond_addvnx4sf_2_const_relaxed */
    case 7119:  /* *cond_addvnx8hf_2_const_relaxed */
    case 6962:  /* *cond_mulvnx2df_2_const_relaxed */
    case 6961:  /* *cond_sminvnx2df_2_const_relaxed */
    case 6960:  /* *cond_fmin_nanvnx2df_2_const_relaxed */
    case 6959:  /* *cond_smaxvnx2df_2_const_relaxed */
    case 6958:  /* *cond_fmax_nanvnx2df_2_const_relaxed */
    case 6957:  /* *cond_mulvnx4sf_2_const_relaxed */
    case 6956:  /* *cond_sminvnx4sf_2_const_relaxed */
    case 6955:  /* *cond_fmin_nanvnx4sf_2_const_relaxed */
    case 6954:  /* *cond_smaxvnx4sf_2_const_relaxed */
    case 6953:  /* *cond_fmax_nanvnx4sf_2_const_relaxed */
    case 6952:  /* *cond_mulvnx8hf_2_const_relaxed */
    case 6951:  /* *cond_sminvnx8hf_2_const_relaxed */
    case 6950:  /* *cond_fmin_nanvnx8hf_2_const_relaxed */
    case 6949:  /* *cond_smaxvnx8hf_2_const_relaxed */
    case 6948:  /* *cond_fmax_nanvnx8hf_2_const_relaxed */
    case 6920:  /* *cond_subvnx2df_2_relaxed */
    case 6919:  /* *cond_mulxvnx2df_2_relaxed */
    case 6918:  /* *cond_mulvnx2df_2_relaxed */
    case 6917:  /* *cond_sminvnx2df_2_relaxed */
    case 6916:  /* *cond_fmin_nanvnx2df_2_relaxed */
    case 6915:  /* *cond_smaxvnx2df_2_relaxed */
    case 6914:  /* *cond_fmax_nanvnx2df_2_relaxed */
    case 6913:  /* *cond_divvnx2df_2_relaxed */
    case 6912:  /* *cond_addvnx2df_2_relaxed */
    case 6911:  /* *cond_subvnx4sf_2_relaxed */
    case 6910:  /* *cond_mulxvnx4sf_2_relaxed */
    case 6909:  /* *cond_mulvnx4sf_2_relaxed */
    case 6908:  /* *cond_sminvnx4sf_2_relaxed */
    case 6907:  /* *cond_fmin_nanvnx4sf_2_relaxed */
    case 6906:  /* *cond_smaxvnx4sf_2_relaxed */
    case 6905:  /* *cond_fmax_nanvnx4sf_2_relaxed */
    case 6904:  /* *cond_divvnx4sf_2_relaxed */
    case 6903:  /* *cond_addvnx4sf_2_relaxed */
    case 6902:  /* *cond_subvnx8hf_2_relaxed */
    case 6901:  /* *cond_mulxvnx8hf_2_relaxed */
    case 6900:  /* *cond_mulvnx8hf_2_relaxed */
    case 6899:  /* *cond_sminvnx8hf_2_relaxed */
    case 6898:  /* *cond_fmin_nanvnx8hf_2_relaxed */
    case 6897:  /* *cond_smaxvnx8hf_2_relaxed */
    case 6896:  /* *cond_fmax_nanvnx8hf_2_relaxed */
    case 6895:  /* *cond_divvnx8hf_2_relaxed */
    case 6894:  /* *cond_addvnx8hf_2_relaxed */
    case 6863:  /* *cond_fscalevnx2df_2_relaxed */
    case 6862:  /* *cond_fscalevnx4sf_2_relaxed */
    case 6861:  /* *cond_fscalevnx8hf_2_relaxed */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 2;
      break;

    case 7226:  /* aarch64_pred_sminvnx2df */
    case 7225:  /* aarch64_pred_fmin_nanvnx2df */
    case 7224:  /* aarch64_pred_smaxvnx2df */
    case 7223:  /* aarch64_pred_fmax_nanvnx2df */
    case 7222:  /* aarch64_pred_sminvnx4sf */
    case 7221:  /* aarch64_pred_fmin_nanvnx4sf */
    case 7220:  /* aarch64_pred_smaxvnx4sf */
    case 7219:  /* aarch64_pred_fmax_nanvnx4sf */
    case 7218:  /* aarch64_pred_sminvnx8hf */
    case 7217:  /* aarch64_pred_fmin_nanvnx8hf */
    case 7216:  /* aarch64_pred_smaxvnx8hf */
    case 7215:  /* aarch64_pred_fmax_nanvnx8hf */
    case 7202:  /* aarch64_pred_mulvnx2df */
    case 7201:  /* aarch64_pred_mulvnx4sf */
    case 7200:  /* aarch64_pred_mulvnx8hf */
    case 7163:  /* aarch64_pred_subvnx2df */
    case 7162:  /* aarch64_pred_subvnx4sf */
    case 7161:  /* aarch64_pred_subvnx8hf */
    case 7136:  /* aarch64_pred_cadd270vnx2df */
    case 7135:  /* aarch64_pred_cadd90vnx2df */
    case 7134:  /* aarch64_pred_cadd270vnx4sf */
    case 7133:  /* aarch64_pred_cadd90vnx4sf */
    case 7132:  /* aarch64_pred_cadd270vnx8hf */
    case 7131:  /* aarch64_pred_cadd90vnx8hf */
    case 7118:  /* aarch64_pred_addvnx2df */
    case 7117:  /* aarch64_pred_addvnx4sf */
    case 7116:  /* aarch64_pred_addvnx8hf */
    case 6893:  /* aarch64_pred_mulxvnx2df */
    case 6892:  /* aarch64_pred_divvnx2df */
    case 6891:  /* aarch64_pred_mulxvnx4sf */
    case 6890:  /* aarch64_pred_divvnx4sf */
    case 6889:  /* aarch64_pred_mulxvnx8hf */
    case 6888:  /* aarch64_pred_divvnx8hf */
    case 6860:  /* aarch64_pred_fscalevnx2df */
    case 6859:  /* aarch64_pred_fscalevnx4sf */
    case 6858:  /* aarch64_pred_fscalevnx8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 9328:  /* *cond_uqshlvnx2di_any */
    case 9327:  /* *cond_sqshlvnx2di_any */
    case 9326:  /* *cond_uqshlvnx4si_any */
    case 9325:  /* *cond_sqshlvnx4si_any */
    case 9324:  /* *cond_uqshlvnx8hi_any */
    case 9323:  /* *cond_sqshlvnx8hi_any */
    case 9322:  /* *cond_uqshlvnx16qi_any */
    case 9321:  /* *cond_sqshlvnx16qi_any */
    case 9282:  /* *cond_usqaddvnx2di_z */
    case 9281:  /* *cond_suqaddvnx2di_z */
    case 9280:  /* *cond_usqaddvnx4si_z */
    case 9279:  /* *cond_suqaddvnx4si_z */
    case 9278:  /* *cond_usqaddvnx8hi_z */
    case 9277:  /* *cond_suqaddvnx8hi_z */
    case 9276:  /* *cond_usqaddvnx16qi_z */
    case 9275:  /* *cond_suqaddvnx16qi_z */
    case 9274:  /* *cond_urshlvnx2di_any */
    case 9273:  /* *cond_urhaddvnx2di_any */
    case 9272:  /* *cond_uqrshlvnx2di_any */
    case 9271:  /* *cond_uhsubvnx2di_any */
    case 9270:  /* *cond_uhaddvnx2di_any */
    case 9269:  /* *cond_srshlvnx2di_any */
    case 9268:  /* *cond_srhaddvnx2di_any */
    case 9267:  /* *cond_sqrshlvnx2di_any */
    case 9266:  /* *cond_shsubvnx2di_any */
    case 9265:  /* *cond_shaddvnx2di_any */
    case 9264:  /* *cond_urshlvnx4si_any */
    case 9263:  /* *cond_urhaddvnx4si_any */
    case 9262:  /* *cond_uqrshlvnx4si_any */
    case 9261:  /* *cond_uhsubvnx4si_any */
    case 9260:  /* *cond_uhaddvnx4si_any */
    case 9259:  /* *cond_srshlvnx4si_any */
    case 9258:  /* *cond_srhaddvnx4si_any */
    case 9257:  /* *cond_sqrshlvnx4si_any */
    case 9256:  /* *cond_shsubvnx4si_any */
    case 9255:  /* *cond_shaddvnx4si_any */
    case 9254:  /* *cond_urshlvnx8hi_any */
    case 9253:  /* *cond_urhaddvnx8hi_any */
    case 9252:  /* *cond_uqrshlvnx8hi_any */
    case 9251:  /* *cond_uhsubvnx8hi_any */
    case 9250:  /* *cond_uhaddvnx8hi_any */
    case 9249:  /* *cond_srshlvnx8hi_any */
    case 9248:  /* *cond_srhaddvnx8hi_any */
    case 9247:  /* *cond_sqrshlvnx8hi_any */
    case 9246:  /* *cond_shsubvnx8hi_any */
    case 9245:  /* *cond_shaddvnx8hi_any */
    case 9244:  /* *cond_urshlvnx16qi_any */
    case 9243:  /* *cond_urhaddvnx16qi_any */
    case 9242:  /* *cond_uqrshlvnx16qi_any */
    case 9241:  /* *cond_uhsubvnx16qi_any */
    case 9240:  /* *cond_uhaddvnx16qi_any */
    case 9239:  /* *cond_srshlvnx16qi_any */
    case 9238:  /* *cond_srhaddvnx16qi_any */
    case 9237:  /* *cond_sqrshlvnx16qi_any */
    case 9236:  /* *cond_shsubvnx16qi_any */
    case 9235:  /* *cond_shaddvnx16qi_any */
    case 6851:  /* *cond_urshrvnx2di_any */
    case 6850:  /* *cond_srshrvnx2di_any */
    case 6849:  /* *cond_sqshluvnx2di_any */
    case 6848:  /* *cond_asrdvnx2di_any */
    case 6847:  /* *cond_urshrvnx2si_any */
    case 6846:  /* *cond_srshrvnx2si_any */
    case 6845:  /* *cond_sqshluvnx2si_any */
    case 6844:  /* *cond_asrdvnx2si_any */
    case 6843:  /* *cond_urshrvnx4si_any */
    case 6842:  /* *cond_srshrvnx4si_any */
    case 6841:  /* *cond_sqshluvnx4si_any */
    case 6840:  /* *cond_asrdvnx4si_any */
    case 6839:  /* *cond_urshrvnx2hi_any */
    case 6838:  /* *cond_srshrvnx2hi_any */
    case 6837:  /* *cond_sqshluvnx2hi_any */
    case 6836:  /* *cond_asrdvnx2hi_any */
    case 6835:  /* *cond_urshrvnx4hi_any */
    case 6834:  /* *cond_srshrvnx4hi_any */
    case 6833:  /* *cond_sqshluvnx4hi_any */
    case 6832:  /* *cond_asrdvnx4hi_any */
    case 6831:  /* *cond_urshrvnx8hi_any */
    case 6830:  /* *cond_srshrvnx8hi_any */
    case 6829:  /* *cond_sqshluvnx8hi_any */
    case 6828:  /* *cond_asrdvnx8hi_any */
    case 6827:  /* *cond_urshrvnx2qi_any */
    case 6826:  /* *cond_srshrvnx2qi_any */
    case 6825:  /* *cond_sqshluvnx2qi_any */
    case 6824:  /* *cond_asrdvnx2qi_any */
    case 6823:  /* *cond_urshrvnx4qi_any */
    case 6822:  /* *cond_srshrvnx4qi_any */
    case 6821:  /* *cond_sqshluvnx4qi_any */
    case 6820:  /* *cond_asrdvnx4qi_any */
    case 6819:  /* *cond_urshrvnx8qi_any */
    case 6818:  /* *cond_srshrvnx8qi_any */
    case 6817:  /* *cond_sqshluvnx8qi_any */
    case 6816:  /* *cond_asrdvnx8qi_any */
    case 6815:  /* *cond_urshrvnx16qi_any */
    case 6814:  /* *cond_srshrvnx16qi_any */
    case 6813:  /* *cond_sqshluvnx16qi_any */
    case 6812:  /* *cond_asrdvnx16qi_any */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      break;

    case 9312:  /* *cond_uqshlvnx2di_2 */
    case 9311:  /* *cond_sqshlvnx2di_2 */
    case 9310:  /* *cond_uqshlvnx4si_2 */
    case 9309:  /* *cond_sqshlvnx4si_2 */
    case 9308:  /* *cond_uqshlvnx8hi_2 */
    case 9307:  /* *cond_sqshlvnx8hi_2 */
    case 9306:  /* *cond_uqshlvnx16qi_2 */
    case 9305:  /* *cond_sqshlvnx16qi_2 */
    case 9194:  /* *cond_usqaddvnx2di_2 */
    case 9193:  /* *cond_urshlvnx2di_2 */
    case 9192:  /* *cond_urhaddvnx2di_2 */
    case 9191:  /* *cond_uqrshlvnx2di_2 */
    case 9190:  /* *cond_uhsubvnx2di_2 */
    case 9189:  /* *cond_uhaddvnx2di_2 */
    case 9188:  /* *cond_suqaddvnx2di_2 */
    case 9187:  /* *cond_srshlvnx2di_2 */
    case 9186:  /* *cond_srhaddvnx2di_2 */
    case 9185:  /* *cond_sqrshlvnx2di_2 */
    case 9184:  /* *cond_shsubvnx2di_2 */
    case 9183:  /* *cond_shaddvnx2di_2 */
    case 9182:  /* *cond_usqaddvnx4si_2 */
    case 9181:  /* *cond_urshlvnx4si_2 */
    case 9180:  /* *cond_urhaddvnx4si_2 */
    case 9179:  /* *cond_uqrshlvnx4si_2 */
    case 9178:  /* *cond_uhsubvnx4si_2 */
    case 9177:  /* *cond_uhaddvnx4si_2 */
    case 9176:  /* *cond_suqaddvnx4si_2 */
    case 9175:  /* *cond_srshlvnx4si_2 */
    case 9174:  /* *cond_srhaddvnx4si_2 */
    case 9173:  /* *cond_sqrshlvnx4si_2 */
    case 9172:  /* *cond_shsubvnx4si_2 */
    case 9171:  /* *cond_shaddvnx4si_2 */
    case 9170:  /* *cond_usqaddvnx8hi_2 */
    case 9169:  /* *cond_urshlvnx8hi_2 */
    case 9168:  /* *cond_urhaddvnx8hi_2 */
    case 9167:  /* *cond_uqrshlvnx8hi_2 */
    case 9166:  /* *cond_uhsubvnx8hi_2 */
    case 9165:  /* *cond_uhaddvnx8hi_2 */
    case 9164:  /* *cond_suqaddvnx8hi_2 */
    case 9163:  /* *cond_srshlvnx8hi_2 */
    case 9162:  /* *cond_srhaddvnx8hi_2 */
    case 9161:  /* *cond_sqrshlvnx8hi_2 */
    case 9160:  /* *cond_shsubvnx8hi_2 */
    case 9159:  /* *cond_shaddvnx8hi_2 */
    case 9158:  /* *cond_usqaddvnx16qi_2 */
    case 9157:  /* *cond_urshlvnx16qi_2 */
    case 9156:  /* *cond_urhaddvnx16qi_2 */
    case 9155:  /* *cond_uqrshlvnx16qi_2 */
    case 9154:  /* *cond_uhsubvnx16qi_2 */
    case 9153:  /* *cond_uhaddvnx16qi_2 */
    case 9152:  /* *cond_suqaddvnx16qi_2 */
    case 9151:  /* *cond_srshlvnx16qi_2 */
    case 9150:  /* *cond_srhaddvnx16qi_2 */
    case 9149:  /* *cond_sqrshlvnx16qi_2 */
    case 9148:  /* *cond_shsubvnx16qi_2 */
    case 9147:  /* *cond_shaddvnx16qi_2 */
    case 6811:  /* *cond_urshrvnx2di_2 */
    case 6810:  /* *cond_srshrvnx2di_2 */
    case 6809:  /* *cond_sqshluvnx2di_2 */
    case 6808:  /* *cond_asrdvnx2di_2 */
    case 6807:  /* *cond_urshrvnx2si_2 */
    case 6806:  /* *cond_srshrvnx2si_2 */
    case 6805:  /* *cond_sqshluvnx2si_2 */
    case 6804:  /* *cond_asrdvnx2si_2 */
    case 6803:  /* *cond_urshrvnx4si_2 */
    case 6802:  /* *cond_srshrvnx4si_2 */
    case 6801:  /* *cond_sqshluvnx4si_2 */
    case 6800:  /* *cond_asrdvnx4si_2 */
    case 6799:  /* *cond_urshrvnx2hi_2 */
    case 6798:  /* *cond_srshrvnx2hi_2 */
    case 6797:  /* *cond_sqshluvnx2hi_2 */
    case 6796:  /* *cond_asrdvnx2hi_2 */
    case 6795:  /* *cond_urshrvnx4hi_2 */
    case 6794:  /* *cond_srshrvnx4hi_2 */
    case 6793:  /* *cond_sqshluvnx4hi_2 */
    case 6792:  /* *cond_asrdvnx4hi_2 */
    case 6791:  /* *cond_urshrvnx8hi_2 */
    case 6790:  /* *cond_srshrvnx8hi_2 */
    case 6789:  /* *cond_sqshluvnx8hi_2 */
    case 6788:  /* *cond_asrdvnx8hi_2 */
    case 6787:  /* *cond_urshrvnx2qi_2 */
    case 6786:  /* *cond_srshrvnx2qi_2 */
    case 6785:  /* *cond_sqshluvnx2qi_2 */
    case 6784:  /* *cond_asrdvnx2qi_2 */
    case 6783:  /* *cond_urshrvnx4qi_2 */
    case 6782:  /* *cond_srshrvnx4qi_2 */
    case 6781:  /* *cond_sqshluvnx4qi_2 */
    case 6780:  /* *cond_asrdvnx4qi_2 */
    case 6779:  /* *cond_urshrvnx8qi_2 */
    case 6778:  /* *cond_srshrvnx8qi_2 */
    case 6777:  /* *cond_sqshluvnx8qi_2 */
    case 6776:  /* *cond_asrdvnx8qi_2 */
    case 6775:  /* *cond_urshrvnx16qi_2 */
    case 6774:  /* *cond_srshrvnx16qi_2 */
    case 6773:  /* *cond_sqshluvnx16qi_2 */
    case 6772:  /* *cond_asrdvnx16qi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 2;
      break;

    case 6614:  /* *cond_bicvnx2di_any */
    case 6613:  /* *cond_bicvnx2si_any */
    case 6612:  /* *cond_bicvnx4si_any */
    case 6611:  /* *cond_bicvnx2hi_any */
    case 6610:  /* *cond_bicvnx4hi_any */
    case 6609:  /* *cond_bicvnx8hi_any */
    case 6608:  /* *cond_bicvnx2qi_any */
    case 6607:  /* *cond_bicvnx4qi_any */
    case 6606:  /* *cond_bicvnx8qi_any */
    case 6605:  /* *cond_bicvnx16qi_any */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 6604:  /* *cond_bicvnx2di_2 */
    case 6603:  /* *cond_bicvnx2si_2 */
    case 6602:  /* *cond_bicvnx4si_2 */
    case 6601:  /* *cond_bicvnx2hi_2 */
    case 6600:  /* *cond_bicvnx4hi_2 */
    case 6599:  /* *cond_bicvnx8hi_2 */
    case 6598:  /* *cond_bicvnx2qi_2 */
    case 6597:  /* *cond_bicvnx4qi_2 */
    case 6596:  /* *cond_bicvnx8qi_2 */
    case 6595:  /* *cond_bicvnx16qi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 2;
      break;

    case 6594:  /* *bicvnx2di3 */
    case 6593:  /* *bicvnx2si3 */
    case 6592:  /* *bicvnx4si3 */
    case 6591:  /* *bicvnx2hi3 */
    case 6590:  /* *bicvnx4hi3 */
    case 6589:  /* *bicvnx8hi3 */
    case 6588:  /* *bicvnx2qi3 */
    case 6587:  /* *bicvnx4qi3 */
    case 6586:  /* *bicvnx8qi3 */
    case 6585:  /* *bicvnx16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 9661:  /* aarch64_fmlslt_lane_vnx4sf */
    case 9660:  /* aarch64_fmlslb_lane_vnx4sf */
    case 9659:  /* aarch64_fmlalt_lane_vnx4sf */
    case 9658:  /* aarch64_fmlalb_lane_vnx4sf */
    case 7566:  /* aarch64_fcmla270_lane_vnx4sf */
    case 7565:  /* aarch64_fcmla180_lane_vnx4sf */
    case 7564:  /* aarch64_fcmla90_lane_vnx4sf */
    case 7563:  /* aarch64_fcmla_lane_vnx4sf */
    case 7562:  /* aarch64_fcmla270_lane_vnx8hf */
    case 7561:  /* aarch64_fcmla180_lane_vnx8hf */
    case 7560:  /* aarch64_fcmla90_lane_vnx8hf */
    case 7559:  /* aarch64_fcmla_lane_vnx8hf */
    case 7498:  /* aarch64_fnma_lane_vnx2df */
    case 7497:  /* aarch64_fma_lane_vnx2df */
    case 7496:  /* aarch64_fnma_lane_vnx4sf */
    case 7495:  /* aarch64_fma_lane_vnx4sf */
    case 7494:  /* aarch64_fnma_lane_vnx8hf */
    case 7493:  /* aarch64_fma_lane_vnx8hf */
    case 6761:  /* *cond_lsrvnx4si_z */
    case 6760:  /* *cond_asrvnx4si_z */
    case 6759:  /* *cond_lslvnx4si_z */
    case 6758:  /* *cond_lsrvnx8hi_z */
    case 6757:  /* *cond_asrvnx8hi_z */
    case 6756:  /* *cond_lslvnx8hi_z */
    case 6755:  /* *cond_lsrvnx16qi_z */
    case 6754:  /* *cond_asrvnx16qi_z */
    case 6753:  /* *cond_lslvnx16qi_z */
    case 6538:  /* *cond_umulhvnx2di_z */
    case 6537:  /* *cond_smulhvnx2di_z */
    case 6536:  /* *cond_umulhvnx4si_z */
    case 6535:  /* *cond_smulhvnx4si_z */
    case 6534:  /* *cond_umulhvnx8hi_z */
    case 6533:  /* *cond_smulhvnx8hi_z */
    case 6532:  /* *cond_umulhvnx16qi_z */
    case 6531:  /* *cond_smulhvnx16qi_z */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 6752:  /* *cond_lsrvnx4si_m */
    case 6751:  /* *cond_asrvnx4si_m */
    case 6750:  /* *cond_lslvnx4si_m */
    case 6749:  /* *cond_lsrvnx8hi_m */
    case 6748:  /* *cond_asrvnx8hi_m */
    case 6747:  /* *cond_lslvnx8hi_m */
    case 6746:  /* *cond_lsrvnx16qi_m */
    case 6745:  /* *cond_asrvnx16qi_m */
    case 6744:  /* *cond_lslvnx16qi_m */
    case 6530:  /* *cond_umulhvnx2di_2 */
    case 6529:  /* *cond_smulhvnx2di_2 */
    case 6528:  /* *cond_umulhvnx4si_2 */
    case 6527:  /* *cond_smulhvnx4si_2 */
    case 6526:  /* *cond_umulhvnx8hi_2 */
    case 6525:  /* *cond_smulhvnx8hi_2 */
    case 6524:  /* *cond_umulhvnx16qi_2 */
    case 6523:  /* *cond_smulhvnx16qi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 2;
      break;

    case 9563:  /* aarch64_sve_umullt_lane_vnx2di */
    case 9562:  /* aarch64_sve_umullb_lane_vnx2di */
    case 9561:  /* aarch64_sve_sqdmullt_lane_vnx2di */
    case 9560:  /* aarch64_sve_sqdmullb_lane_vnx2di */
    case 9559:  /* aarch64_sve_smullt_lane_vnx2di */
    case 9558:  /* aarch64_sve_smullb_lane_vnx2di */
    case 9557:  /* aarch64_sve_umullt_lane_vnx4si */
    case 9556:  /* aarch64_sve_umullb_lane_vnx4si */
    case 9555:  /* aarch64_sve_sqdmullt_lane_vnx4si */
    case 9554:  /* aarch64_sve_sqdmullb_lane_vnx4si */
    case 9553:  /* aarch64_sve_smullt_lane_vnx4si */
    case 9552:  /* aarch64_sve_smullb_lane_vnx4si */
    case 9304:  /* aarch64_pred_uqshlvnx2di */
    case 9303:  /* aarch64_pred_sqshlvnx2di */
    case 9302:  /* aarch64_pred_uqshlvnx4si */
    case 9301:  /* aarch64_pred_sqshlvnx4si */
    case 9300:  /* aarch64_pred_uqshlvnx8hi */
    case 9299:  /* aarch64_pred_sqshlvnx8hi */
    case 9298:  /* aarch64_pred_uqshlvnx16qi */
    case 9297:  /* aarch64_pred_sqshlvnx16qi */
    case 9296:  /* aarch64_sve_sqrdmulh_lane_vnx2di */
    case 9295:  /* aarch64_sve_sqdmulh_lane_vnx2di */
    case 9294:  /* aarch64_sve_sqrdmulh_lane_vnx4si */
    case 9293:  /* aarch64_sve_sqdmulh_lane_vnx4si */
    case 9292:  /* aarch64_sve_sqrdmulh_lane_vnx8hi */
    case 9291:  /* aarch64_sve_sqdmulh_lane_vnx8hi */
    case 9146:  /* aarch64_pred_urshlvnx2di */
    case 9145:  /* aarch64_pred_urhaddvnx2di */
    case 9144:  /* aarch64_pred_uqrshlvnx2di */
    case 9143:  /* aarch64_pred_uhsubvnx2di */
    case 9142:  /* aarch64_pred_uhaddvnx2di */
    case 9141:  /* aarch64_pred_srshlvnx2di */
    case 9140:  /* aarch64_pred_srhaddvnx2di */
    case 9139:  /* aarch64_pred_sqrshlvnx2di */
    case 9138:  /* aarch64_pred_shsubvnx2di */
    case 9137:  /* aarch64_pred_shaddvnx2di */
    case 9136:  /* aarch64_pred_urshlvnx4si */
    case 9135:  /* aarch64_pred_urhaddvnx4si */
    case 9134:  /* aarch64_pred_uqrshlvnx4si */
    case 9133:  /* aarch64_pred_uhsubvnx4si */
    case 9132:  /* aarch64_pred_uhaddvnx4si */
    case 9131:  /* aarch64_pred_srshlvnx4si */
    case 9130:  /* aarch64_pred_srhaddvnx4si */
    case 9129:  /* aarch64_pred_sqrshlvnx4si */
    case 9128:  /* aarch64_pred_shsubvnx4si */
    case 9127:  /* aarch64_pred_shaddvnx4si */
    case 9126:  /* aarch64_pred_urshlvnx8hi */
    case 9125:  /* aarch64_pred_urhaddvnx8hi */
    case 9124:  /* aarch64_pred_uqrshlvnx8hi */
    case 9123:  /* aarch64_pred_uhsubvnx8hi */
    case 9122:  /* aarch64_pred_uhaddvnx8hi */
    case 9121:  /* aarch64_pred_srshlvnx8hi */
    case 9120:  /* aarch64_pred_srhaddvnx8hi */
    case 9119:  /* aarch64_pred_sqrshlvnx8hi */
    case 9118:  /* aarch64_pred_shsubvnx8hi */
    case 9117:  /* aarch64_pred_shaddvnx8hi */
    case 9116:  /* aarch64_pred_urshlvnx16qi */
    case 9115:  /* aarch64_pred_urhaddvnx16qi */
    case 9114:  /* aarch64_pred_uqrshlvnx16qi */
    case 9113:  /* aarch64_pred_uhsubvnx16qi */
    case 9112:  /* aarch64_pred_uhaddvnx16qi */
    case 9111:  /* aarch64_pred_srshlvnx16qi */
    case 9110:  /* aarch64_pred_srhaddvnx16qi */
    case 9109:  /* aarch64_pred_sqrshlvnx16qi */
    case 9108:  /* aarch64_pred_shsubvnx16qi */
    case 9107:  /* aarch64_pred_shaddvnx16qi */
    case 6771:  /* *sdiv_pow2vnx2di3 */
    case 6770:  /* *sdiv_pow2vnx2si3 */
    case 6769:  /* *sdiv_pow2vnx4si3 */
    case 6768:  /* *sdiv_pow2vnx2hi3 */
    case 6767:  /* *sdiv_pow2vnx4hi3 */
    case 6766:  /* *sdiv_pow2vnx8hi3 */
    case 6765:  /* *sdiv_pow2vnx2qi3 */
    case 6764:  /* *sdiv_pow2vnx4qi3 */
    case 6763:  /* *sdiv_pow2vnx8qi3 */
    case 6762:  /* *sdiv_pow2vnx16qi3 */
    case 6522:  /* aarch64_pred_umulhvnx2di */
    case 6521:  /* aarch64_pred_smulhvnx2di */
    case 6520:  /* aarch64_pred_umulhvnx2si */
    case 6519:  /* aarch64_pred_smulhvnx2si */
    case 6518:  /* aarch64_pred_umulhvnx4si */
    case 6517:  /* aarch64_pred_smulhvnx4si */
    case 6516:  /* aarch64_pred_umulhvnx2hi */
    case 6515:  /* aarch64_pred_smulhvnx2hi */
    case 6514:  /* aarch64_pred_umulhvnx4hi */
    case 6513:  /* aarch64_pred_smulhvnx4hi */
    case 6512:  /* aarch64_pred_umulhvnx8hi */
    case 6511:  /* aarch64_pred_smulhvnx8hi */
    case 6510:  /* aarch64_pred_umulhvnx2qi */
    case 6509:  /* aarch64_pred_smulhvnx2qi */
    case 6508:  /* aarch64_pred_umulhvnx4qi */
    case 6507:  /* aarch64_pred_smulhvnx4qi */
    case 6506:  /* aarch64_pred_umulhvnx8qi */
    case 6505:  /* aarch64_pred_smulhvnx8qi */
    case 6504:  /* aarch64_pred_umulhvnx16qi */
    case 6503:  /* aarch64_pred_smulhvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1));
      break;

    case 6486:  /* *aarch64_cond_uabdvnx2di_any */
    case 6485:  /* *aarch64_cond_sabdvnx2di_any */
    case 6484:  /* *aarch64_cond_uabdvnx2si_any */
    case 6483:  /* *aarch64_cond_sabdvnx2si_any */
    case 6482:  /* *aarch64_cond_uabdvnx4si_any */
    case 6481:  /* *aarch64_cond_sabdvnx4si_any */
    case 6480:  /* *aarch64_cond_uabdvnx2hi_any */
    case 6479:  /* *aarch64_cond_sabdvnx2hi_any */
    case 6478:  /* *aarch64_cond_uabdvnx4hi_any */
    case 6477:  /* *aarch64_cond_sabdvnx4hi_any */
    case 6476:  /* *aarch64_cond_uabdvnx8hi_any */
    case 6475:  /* *aarch64_cond_sabdvnx8hi_any */
    case 6474:  /* *aarch64_cond_uabdvnx2qi_any */
    case 6473:  /* *aarch64_cond_sabdvnx2qi_any */
    case 6472:  /* *aarch64_cond_uabdvnx4qi_any */
    case 6471:  /* *aarch64_cond_sabdvnx4qi_any */
    case 6470:  /* *aarch64_cond_uabdvnx8qi_any */
    case 6469:  /* *aarch64_cond_sabdvnx8qi_any */
    case 6468:  /* *aarch64_cond_uabdvnx16qi_any */
    case 6467:  /* *aarch64_cond_sabdvnx16qi_any */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0, 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 6466:  /* *aarch64_cond_uabdvnx2di_3 */
    case 6465:  /* *aarch64_cond_sabdvnx2di_3 */
    case 6464:  /* *aarch64_cond_uabdvnx2si_3 */
    case 6463:  /* *aarch64_cond_sabdvnx2si_3 */
    case 6462:  /* *aarch64_cond_uabdvnx4si_3 */
    case 6461:  /* *aarch64_cond_sabdvnx4si_3 */
    case 6460:  /* *aarch64_cond_uabdvnx2hi_3 */
    case 6459:  /* *aarch64_cond_sabdvnx2hi_3 */
    case 6458:  /* *aarch64_cond_uabdvnx4hi_3 */
    case 6457:  /* *aarch64_cond_sabdvnx4hi_3 */
    case 6456:  /* *aarch64_cond_uabdvnx8hi_3 */
    case 6455:  /* *aarch64_cond_sabdvnx8hi_3 */
    case 6454:  /* *aarch64_cond_uabdvnx2qi_3 */
    case 6453:  /* *aarch64_cond_sabdvnx2qi_3 */
    case 6452:  /* *aarch64_cond_uabdvnx4qi_3 */
    case 6451:  /* *aarch64_cond_sabdvnx4qi_3 */
    case 6450:  /* *aarch64_cond_uabdvnx8qi_3 */
    case 6449:  /* *aarch64_cond_sabdvnx8qi_3 */
    case 6448:  /* *aarch64_cond_uabdvnx16qi_3 */
    case 6447:  /* *aarch64_cond_sabdvnx16qi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0, 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0, 1), 1);
      recog_data.dup_num[2] = 3;
      break;

    case 6446:  /* *aarch64_cond_uabdvnx2di_2 */
    case 6445:  /* *aarch64_cond_sabdvnx2di_2 */
    case 6444:  /* *aarch64_cond_uabdvnx2si_2 */
    case 6443:  /* *aarch64_cond_sabdvnx2si_2 */
    case 6442:  /* *aarch64_cond_uabdvnx4si_2 */
    case 6441:  /* *aarch64_cond_sabdvnx4si_2 */
    case 6440:  /* *aarch64_cond_uabdvnx2hi_2 */
    case 6439:  /* *aarch64_cond_sabdvnx2hi_2 */
    case 6438:  /* *aarch64_cond_uabdvnx4hi_2 */
    case 6437:  /* *aarch64_cond_sabdvnx4hi_2 */
    case 6436:  /* *aarch64_cond_uabdvnx8hi_2 */
    case 6435:  /* *aarch64_cond_sabdvnx8hi_2 */
    case 6434:  /* *aarch64_cond_uabdvnx2qi_2 */
    case 6433:  /* *aarch64_cond_sabdvnx2qi_2 */
    case 6432:  /* *aarch64_cond_uabdvnx4qi_2 */
    case 6431:  /* *aarch64_cond_sabdvnx4qi_2 */
    case 6430:  /* *aarch64_cond_uabdvnx8qi_2 */
    case 6429:  /* *aarch64_cond_sabdvnx8qi_2 */
    case 6428:  /* *aarch64_cond_uabdvnx16qi_2 */
    case 6427:  /* *aarch64_cond_sabdvnx16qi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0, 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0, 1), 1);
      recog_data.dup_num[2] = 3;
      break;

    case 6426:  /* aarch64_pred_uabdvnx2di */
    case 6425:  /* aarch64_pred_sabdvnx2di */
    case 6424:  /* aarch64_pred_uabdvnx2si */
    case 6423:  /* aarch64_pred_sabdvnx2si */
    case 6422:  /* aarch64_pred_uabdvnx4si */
    case 6421:  /* aarch64_pred_sabdvnx4si */
    case 6420:  /* aarch64_pred_uabdvnx2hi */
    case 6419:  /* aarch64_pred_sabdvnx2hi */
    case 6418:  /* aarch64_pred_uabdvnx4hi */
    case 6417:  /* aarch64_pred_sabdvnx4hi */
    case 6416:  /* aarch64_pred_uabdvnx8hi */
    case 6415:  /* aarch64_pred_sabdvnx8hi */
    case 6414:  /* aarch64_pred_uabdvnx2qi */
    case 6413:  /* aarch64_pred_sabdvnx2qi */
    case 6412:  /* aarch64_pred_uabdvnx4qi */
    case 6411:  /* aarch64_pred_sabdvnx4qi */
    case 6410:  /* aarch64_pred_uabdvnx8qi */
    case 6409:  /* aarch64_pred_sabdvnx8qi */
    case 6408:  /* aarch64_pred_uabdvnx16qi */
    case 6407:  /* aarch64_pred_sabdvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1), 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 6406:  /* *aarch64_adr_shift_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 6405:  /* *aarch64_adr_shift_sxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1), 0), 0, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1), 0), 0, 0));
      break;

    case 9440:  /* *aarch64_sve2_sravnx2di */
    case 9439:  /* *aarch64_sve2_sravnx2di */
    case 9438:  /* *aarch64_sve2_sravnx4si */
    case 9437:  /* *aarch64_sve2_sravnx4si */
    case 9436:  /* *aarch64_sve2_sravnx8hi */
    case 9435:  /* *aarch64_sve2_sravnx8hi */
    case 9434:  /* *aarch64_sve2_sravnx16qi */
    case 9433:  /* *aarch64_sve2_sravnx16qi */
    case 6404:  /* *aarch64_adrvnx4si_shift */
    case 6403:  /* *aarch64_adrvnx4hi_shift */
    case 6402:  /* *aarch64_adrvnx4qi_shift */
    case 6401:  /* *aarch64_adrvnx2di_shift */
    case 6400:  /* *aarch64_adrvnx2si_shift */
    case 6399:  /* *aarch64_adrvnx2hi_shift */
    case 6398:  /* *aarch64_adrvnx2qi_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 6395:  /* *aarch64_adr_sxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      break;

    case 6550:  /* *cond_udivvnx2di_3 */
    case 6549:  /* *cond_divvnx2di_3 */
    case 6548:  /* *cond_udivvnx4si_3 */
    case 6547:  /* *cond_divvnx4si_3 */
    case 6202:  /* *cond_ussubvnx2di_3 */
    case 6201:  /* *cond_sssubvnx2di_3 */
    case 6200:  /* *cond_usaddvnx2di_3 */
    case 6199:  /* *cond_ssaddvnx2di_3 */
    case 6198:  /* *cond_xorvnx2di_3 */
    case 6197:  /* *cond_iorvnx2di_3 */
    case 6196:  /* *cond_andvnx2di_3 */
    case 6195:  /* *cond_lshrvnx2di_3 */
    case 6194:  /* *cond_ashrvnx2di_3 */
    case 6193:  /* *cond_ashlvnx2di_3 */
    case 6192:  /* *cond_uminvnx2di_3 */
    case 6191:  /* *cond_sminvnx2di_3 */
    case 6190:  /* *cond_umaxvnx2di_3 */
    case 6189:  /* *cond_smaxvnx2di_3 */
    case 6188:  /* *cond_mulvnx2di_3 */
    case 6187:  /* *cond_subvnx2di_3 */
    case 6186:  /* *cond_addvnx2di_3 */
    case 6185:  /* *cond_ussubvnx2si_3 */
    case 6184:  /* *cond_sssubvnx2si_3 */
    case 6183:  /* *cond_usaddvnx2si_3 */
    case 6182:  /* *cond_ssaddvnx2si_3 */
    case 6181:  /* *cond_xorvnx2si_3 */
    case 6180:  /* *cond_iorvnx2si_3 */
    case 6179:  /* *cond_andvnx2si_3 */
    case 6178:  /* *cond_lshrvnx2si_3 */
    case 6177:  /* *cond_ashrvnx2si_3 */
    case 6176:  /* *cond_ashlvnx2si_3 */
    case 6175:  /* *cond_uminvnx2si_3 */
    case 6174:  /* *cond_sminvnx2si_3 */
    case 6173:  /* *cond_umaxvnx2si_3 */
    case 6172:  /* *cond_smaxvnx2si_3 */
    case 6171:  /* *cond_mulvnx2si_3 */
    case 6170:  /* *cond_subvnx2si_3 */
    case 6169:  /* *cond_addvnx2si_3 */
    case 6168:  /* *cond_ussubvnx4si_3 */
    case 6167:  /* *cond_sssubvnx4si_3 */
    case 6166:  /* *cond_usaddvnx4si_3 */
    case 6165:  /* *cond_ssaddvnx4si_3 */
    case 6164:  /* *cond_xorvnx4si_3 */
    case 6163:  /* *cond_iorvnx4si_3 */
    case 6162:  /* *cond_andvnx4si_3 */
    case 6161:  /* *cond_lshrvnx4si_3 */
    case 6160:  /* *cond_ashrvnx4si_3 */
    case 6159:  /* *cond_ashlvnx4si_3 */
    case 6158:  /* *cond_uminvnx4si_3 */
    case 6157:  /* *cond_sminvnx4si_3 */
    case 6156:  /* *cond_umaxvnx4si_3 */
    case 6155:  /* *cond_smaxvnx4si_3 */
    case 6154:  /* *cond_mulvnx4si_3 */
    case 6153:  /* *cond_subvnx4si_3 */
    case 6152:  /* *cond_addvnx4si_3 */
    case 6151:  /* *cond_ussubvnx2hi_3 */
    case 6150:  /* *cond_sssubvnx2hi_3 */
    case 6149:  /* *cond_usaddvnx2hi_3 */
    case 6148:  /* *cond_ssaddvnx2hi_3 */
    case 6147:  /* *cond_xorvnx2hi_3 */
    case 6146:  /* *cond_iorvnx2hi_3 */
    case 6145:  /* *cond_andvnx2hi_3 */
    case 6144:  /* *cond_lshrvnx2hi_3 */
    case 6143:  /* *cond_ashrvnx2hi_3 */
    case 6142:  /* *cond_ashlvnx2hi_3 */
    case 6141:  /* *cond_uminvnx2hi_3 */
    case 6140:  /* *cond_sminvnx2hi_3 */
    case 6139:  /* *cond_umaxvnx2hi_3 */
    case 6138:  /* *cond_smaxvnx2hi_3 */
    case 6137:  /* *cond_mulvnx2hi_3 */
    case 6136:  /* *cond_subvnx2hi_3 */
    case 6135:  /* *cond_addvnx2hi_3 */
    case 6134:  /* *cond_ussubvnx4hi_3 */
    case 6133:  /* *cond_sssubvnx4hi_3 */
    case 6132:  /* *cond_usaddvnx4hi_3 */
    case 6131:  /* *cond_ssaddvnx4hi_3 */
    case 6130:  /* *cond_xorvnx4hi_3 */
    case 6129:  /* *cond_iorvnx4hi_3 */
    case 6128:  /* *cond_andvnx4hi_3 */
    case 6127:  /* *cond_lshrvnx4hi_3 */
    case 6126:  /* *cond_ashrvnx4hi_3 */
    case 6125:  /* *cond_ashlvnx4hi_3 */
    case 6124:  /* *cond_uminvnx4hi_3 */
    case 6123:  /* *cond_sminvnx4hi_3 */
    case 6122:  /* *cond_umaxvnx4hi_3 */
    case 6121:  /* *cond_smaxvnx4hi_3 */
    case 6120:  /* *cond_mulvnx4hi_3 */
    case 6119:  /* *cond_subvnx4hi_3 */
    case 6118:  /* *cond_addvnx4hi_3 */
    case 6117:  /* *cond_ussubvnx8hi_3 */
    case 6116:  /* *cond_sssubvnx8hi_3 */
    case 6115:  /* *cond_usaddvnx8hi_3 */
    case 6114:  /* *cond_ssaddvnx8hi_3 */
    case 6113:  /* *cond_xorvnx8hi_3 */
    case 6112:  /* *cond_iorvnx8hi_3 */
    case 6111:  /* *cond_andvnx8hi_3 */
    case 6110:  /* *cond_lshrvnx8hi_3 */
    case 6109:  /* *cond_ashrvnx8hi_3 */
    case 6108:  /* *cond_ashlvnx8hi_3 */
    case 6107:  /* *cond_uminvnx8hi_3 */
    case 6106:  /* *cond_sminvnx8hi_3 */
    case 6105:  /* *cond_umaxvnx8hi_3 */
    case 6104:  /* *cond_smaxvnx8hi_3 */
    case 6103:  /* *cond_mulvnx8hi_3 */
    case 6102:  /* *cond_subvnx8hi_3 */
    case 6101:  /* *cond_addvnx8hi_3 */
    case 6100:  /* *cond_ussubvnx2qi_3 */
    case 6099:  /* *cond_sssubvnx2qi_3 */
    case 6098:  /* *cond_usaddvnx2qi_3 */
    case 6097:  /* *cond_ssaddvnx2qi_3 */
    case 6096:  /* *cond_xorvnx2qi_3 */
    case 6095:  /* *cond_iorvnx2qi_3 */
    case 6094:  /* *cond_andvnx2qi_3 */
    case 6093:  /* *cond_lshrvnx2qi_3 */
    case 6092:  /* *cond_ashrvnx2qi_3 */
    case 6091:  /* *cond_ashlvnx2qi_3 */
    case 6090:  /* *cond_uminvnx2qi_3 */
    case 6089:  /* *cond_sminvnx2qi_3 */
    case 6088:  /* *cond_umaxvnx2qi_3 */
    case 6087:  /* *cond_smaxvnx2qi_3 */
    case 6086:  /* *cond_mulvnx2qi_3 */
    case 6085:  /* *cond_subvnx2qi_3 */
    case 6084:  /* *cond_addvnx2qi_3 */
    case 6083:  /* *cond_ussubvnx4qi_3 */
    case 6082:  /* *cond_sssubvnx4qi_3 */
    case 6081:  /* *cond_usaddvnx4qi_3 */
    case 6080:  /* *cond_ssaddvnx4qi_3 */
    case 6079:  /* *cond_xorvnx4qi_3 */
    case 6078:  /* *cond_iorvnx4qi_3 */
    case 6077:  /* *cond_andvnx4qi_3 */
    case 6076:  /* *cond_lshrvnx4qi_3 */
    case 6075:  /* *cond_ashrvnx4qi_3 */
    case 6074:  /* *cond_ashlvnx4qi_3 */
    case 6073:  /* *cond_uminvnx4qi_3 */
    case 6072:  /* *cond_sminvnx4qi_3 */
    case 6071:  /* *cond_umaxvnx4qi_3 */
    case 6070:  /* *cond_smaxvnx4qi_3 */
    case 6069:  /* *cond_mulvnx4qi_3 */
    case 6068:  /* *cond_subvnx4qi_3 */
    case 6067:  /* *cond_addvnx4qi_3 */
    case 6066:  /* *cond_ussubvnx8qi_3 */
    case 6065:  /* *cond_sssubvnx8qi_3 */
    case 6064:  /* *cond_usaddvnx8qi_3 */
    case 6063:  /* *cond_ssaddvnx8qi_3 */
    case 6062:  /* *cond_xorvnx8qi_3 */
    case 6061:  /* *cond_iorvnx8qi_3 */
    case 6060:  /* *cond_andvnx8qi_3 */
    case 6059:  /* *cond_lshrvnx8qi_3 */
    case 6058:  /* *cond_ashrvnx8qi_3 */
    case 6057:  /* *cond_ashlvnx8qi_3 */
    case 6056:  /* *cond_uminvnx8qi_3 */
    case 6055:  /* *cond_sminvnx8qi_3 */
    case 6054:  /* *cond_umaxvnx8qi_3 */
    case 6053:  /* *cond_smaxvnx8qi_3 */
    case 6052:  /* *cond_mulvnx8qi_3 */
    case 6051:  /* *cond_subvnx8qi_3 */
    case 6050:  /* *cond_addvnx8qi_3 */
    case 6049:  /* *cond_ussubvnx16qi_3 */
    case 6048:  /* *cond_sssubvnx16qi_3 */
    case 6047:  /* *cond_usaddvnx16qi_3 */
    case 6046:  /* *cond_ssaddvnx16qi_3 */
    case 6045:  /* *cond_xorvnx16qi_3 */
    case 6044:  /* *cond_iorvnx16qi_3 */
    case 6043:  /* *cond_andvnx16qi_3 */
    case 6042:  /* *cond_lshrvnx16qi_3 */
    case 6041:  /* *cond_ashrvnx16qi_3 */
    case 6040:  /* *cond_ashlvnx16qi_3 */
    case 6039:  /* *cond_uminvnx16qi_3 */
    case 6038:  /* *cond_sminvnx16qi_3 */
    case 6037:  /* *cond_umaxvnx16qi_3 */
    case 6036:  /* *cond_smaxvnx16qi_3 */
    case 6035:  /* *cond_mulvnx16qi_3 */
    case 6034:  /* *cond_subvnx16qi_3 */
    case 6033:  /* *cond_addvnx16qi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 3;
      break;

    case 6644:  /* aarch64_pred_lshrvnx2di */
    case 6643:  /* aarch64_pred_ashrvnx2di */
    case 6642:  /* aarch64_pred_ashlvnx2di */
    case 6641:  /* aarch64_pred_lshrvnx2si */
    case 6640:  /* aarch64_pred_ashrvnx2si */
    case 6639:  /* aarch64_pred_ashlvnx2si */
    case 6638:  /* aarch64_pred_lshrvnx4si */
    case 6637:  /* aarch64_pred_ashrvnx4si */
    case 6636:  /* aarch64_pred_ashlvnx4si */
    case 6635:  /* aarch64_pred_lshrvnx2hi */
    case 6634:  /* aarch64_pred_ashrvnx2hi */
    case 6633:  /* aarch64_pred_ashlvnx2hi */
    case 6632:  /* aarch64_pred_lshrvnx4hi */
    case 6631:  /* aarch64_pred_ashrvnx4hi */
    case 6630:  /* aarch64_pred_ashlvnx4hi */
    case 6629:  /* aarch64_pred_lshrvnx8hi */
    case 6628:  /* aarch64_pred_ashrvnx8hi */
    case 6627:  /* aarch64_pred_ashlvnx8hi */
    case 6626:  /* aarch64_pred_lshrvnx2qi */
    case 6625:  /* aarch64_pred_ashrvnx2qi */
    case 6624:  /* aarch64_pred_ashlvnx2qi */
    case 6623:  /* aarch64_pred_lshrvnx4qi */
    case 6622:  /* aarch64_pred_ashrvnx4qi */
    case 6621:  /* aarch64_pred_ashlvnx4qi */
    case 6620:  /* aarch64_pred_lshrvnx8qi */
    case 6619:  /* aarch64_pred_ashrvnx8qi */
    case 6618:  /* aarch64_pred_ashlvnx8qi */
    case 6617:  /* aarch64_pred_lshrvnx16qi */
    case 6616:  /* aarch64_pred_ashrvnx16qi */
    case 6615:  /* aarch64_pred_ashlvnx16qi */
    case 6542:  /* aarch64_pred_udivvnx2di */
    case 6541:  /* aarch64_pred_divvnx2di */
    case 6540:  /* aarch64_pred_udivvnx4si */
    case 6539:  /* aarch64_pred_divvnx4si */
    case 6396:  /* *aarch64_adr_uxtw_unspec */
    case 5812:  /* aarch64_pred_uminvnx2di */
    case 5811:  /* aarch64_pred_umaxvnx2di */
    case 5810:  /* aarch64_pred_sminvnx2di */
    case 5809:  /* aarch64_pred_smaxvnx2di */
    case 5808:  /* aarch64_pred_mulvnx2di */
    case 5807:  /* aarch64_pred_uminvnx2si */
    case 5806:  /* aarch64_pred_umaxvnx2si */
    case 5805:  /* aarch64_pred_sminvnx2si */
    case 5804:  /* aarch64_pred_smaxvnx2si */
    case 5803:  /* aarch64_pred_mulvnx2si */
    case 5802:  /* aarch64_pred_uminvnx4si */
    case 5801:  /* aarch64_pred_umaxvnx4si */
    case 5800:  /* aarch64_pred_sminvnx4si */
    case 5799:  /* aarch64_pred_smaxvnx4si */
    case 5798:  /* aarch64_pred_mulvnx4si */
    case 5797:  /* aarch64_pred_uminvnx2hi */
    case 5796:  /* aarch64_pred_umaxvnx2hi */
    case 5795:  /* aarch64_pred_sminvnx2hi */
    case 5794:  /* aarch64_pred_smaxvnx2hi */
    case 5793:  /* aarch64_pred_mulvnx2hi */
    case 5792:  /* aarch64_pred_uminvnx4hi */
    case 5791:  /* aarch64_pred_umaxvnx4hi */
    case 5790:  /* aarch64_pred_sminvnx4hi */
    case 5789:  /* aarch64_pred_smaxvnx4hi */
    case 5788:  /* aarch64_pred_mulvnx4hi */
    case 5787:  /* aarch64_pred_uminvnx8hi */
    case 5786:  /* aarch64_pred_umaxvnx8hi */
    case 5785:  /* aarch64_pred_sminvnx8hi */
    case 5784:  /* aarch64_pred_smaxvnx8hi */
    case 5783:  /* aarch64_pred_mulvnx8hi */
    case 5782:  /* aarch64_pred_uminvnx2qi */
    case 5781:  /* aarch64_pred_umaxvnx2qi */
    case 5780:  /* aarch64_pred_sminvnx2qi */
    case 5779:  /* aarch64_pred_smaxvnx2qi */
    case 5778:  /* aarch64_pred_mulvnx2qi */
    case 5777:  /* aarch64_pred_uminvnx4qi */
    case 5776:  /* aarch64_pred_umaxvnx4qi */
    case 5775:  /* aarch64_pred_sminvnx4qi */
    case 5774:  /* aarch64_pred_smaxvnx4qi */
    case 5773:  /* aarch64_pred_mulvnx4qi */
    case 5772:  /* aarch64_pred_uminvnx8qi */
    case 5771:  /* aarch64_pred_umaxvnx8qi */
    case 5770:  /* aarch64_pred_sminvnx8qi */
    case 5769:  /* aarch64_pred_smaxvnx8qi */
    case 5768:  /* aarch64_pred_mulvnx8qi */
    case 5767:  /* aarch64_pred_uminvnx16qi */
    case 5766:  /* aarch64_pred_umaxvnx16qi */
    case 5765:  /* aarch64_pred_sminvnx16qi */
    case 5764:  /* aarch64_pred_smaxvnx16qi */
    case 5763:  /* aarch64_pred_mulvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      break;

    case 9903:  /* *cond_flogbvnx2df_strict */
    case 9902:  /* *cond_flogbvnx4sf_strict */
    case 9901:  /* *cond_flogbvnx8hf_strict */
    case 9889:  /* *cond_fcvtxvnx4sf_any_strict */
    case 9884:  /* *cond_fcvtltvnx2df_strict */
    case 9883:  /* *cond_fcvtltvnx4sf_strict */
    case 8919:  /* *cond_floatuns_nonextendvnx2divnx2df_strict */
    case 8918:  /* *cond_float_nonextendvnx2divnx2df_strict */
    case 8917:  /* *cond_floatuns_nonextendvnx2divnx4sf_strict */
    case 8916:  /* *cond_float_nonextendvnx2divnx4sf_strict */
    case 8915:  /* *cond_floatuns_nonextendvnx2divnx8hf_strict */
    case 8914:  /* *cond_float_nonextendvnx2divnx8hf_strict */
    case 8913:  /* *cond_floatuns_nonextendvnx4sivnx4sf_strict */
    case 8912:  /* *cond_float_nonextendvnx4sivnx4sf_strict */
    case 8911:  /* *cond_floatuns_nonextendvnx4sivnx8hf_strict */
    case 8910:  /* *cond_float_nonextendvnx4sivnx8hf_strict */
    case 8909:  /* *cond_floatuns_nonextendvnx8hivnx8hf_strict */
    case 8908:  /* *cond_float_nonextendvnx8hivnx8hf_strict */
    case 8879:  /* *cond_fixuns_trunc_nontruncvnx2dfvnx2di_strict */
    case 8878:  /* *cond_fix_trunc_nontruncvnx2dfvnx2di_strict */
    case 8877:  /* *cond_fixuns_trunc_nontruncvnx4sfvnx2di_strict */
    case 8876:  /* *cond_fix_trunc_nontruncvnx4sfvnx2di_strict */
    case 8875:  /* *cond_fixuns_trunc_nontruncvnx8hfvnx2di_strict */
    case 8874:  /* *cond_fix_trunc_nontruncvnx8hfvnx2di_strict */
    case 8873:  /* *cond_fixuns_trunc_nontruncvnx4sfvnx4si_strict */
    case 8872:  /* *cond_fix_trunc_nontruncvnx4sfvnx4si_strict */
    case 8871:  /* *cond_fixuns_trunc_nontruncvnx8hfvnx4si_strict */
    case 8870:  /* *cond_fix_trunc_nontruncvnx8hfvnx4si_strict */
    case 8869:  /* *cond_fixuns_trunc_nontruncvnx8hfvnx8hi_strict */
    case 8868:  /* *cond_fix_trunc_nontruncvnx8hfvnx8hi_strict */
    case 5758:  /* *cond_sqrtvnx2df_any_strict */
    case 5757:  /* *cond_btruncvnx2df_any_strict */
    case 5756:  /* *cond_rintvnx2df_any_strict */
    case 5755:  /* *cond_ceilvnx2df_any_strict */
    case 5754:  /* *cond_frintnvnx2df_any_strict */
    case 5753:  /* *cond_floorvnx2df_any_strict */
    case 5752:  /* *cond_nearbyintvnx2df_any_strict */
    case 5751:  /* *cond_roundvnx2df_any_strict */
    case 5750:  /* *cond_frecpxvnx2df_any_strict */
    case 5749:  /* *cond_negvnx2df_any_strict */
    case 5748:  /* *cond_absvnx2df_any_strict */
    case 5747:  /* *cond_sqrtvnx4sf_any_strict */
    case 5746:  /* *cond_btruncvnx4sf_any_strict */
    case 5745:  /* *cond_rintvnx4sf_any_strict */
    case 5744:  /* *cond_ceilvnx4sf_any_strict */
    case 5743:  /* *cond_frintnvnx4sf_any_strict */
    case 5742:  /* *cond_floorvnx4sf_any_strict */
    case 5741:  /* *cond_nearbyintvnx4sf_any_strict */
    case 5740:  /* *cond_roundvnx4sf_any_strict */
    case 5739:  /* *cond_frecpxvnx4sf_any_strict */
    case 5738:  /* *cond_negvnx4sf_any_strict */
    case 5737:  /* *cond_absvnx4sf_any_strict */
    case 5736:  /* *cond_sqrtvnx8hf_any_strict */
    case 5735:  /* *cond_btruncvnx8hf_any_strict */
    case 5734:  /* *cond_rintvnx8hf_any_strict */
    case 5733:  /* *cond_ceilvnx8hf_any_strict */
    case 5732:  /* *cond_frintnvnx8hf_any_strict */
    case 5731:  /* *cond_floorvnx8hf_any_strict */
    case 5730:  /* *cond_nearbyintvnx8hf_any_strict */
    case 5729:  /* *cond_roundvnx8hf_any_strict */
    case 5728:  /* *cond_frecpxvnx8hf_any_strict */
    case 5727:  /* *cond_negvnx8hf_any_strict */
    case 5726:  /* *cond_absvnx8hf_any_strict */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0);
      recog_data.dup_num[0] = 1;
      break;

    case 9900:  /* *cond_flogbvnx2df */
    case 9899:  /* *cond_flogbvnx4sf */
    case 9898:  /* *cond_flogbvnx8hf */
    case 9888:  /* *cond_fcvtxvnx4sf_any_relaxed */
    case 9882:  /* *cond_fcvtltvnx2df_relaxed */
    case 9881:  /* *cond_fcvtltvnx4sf_relaxed */
    case 8907:  /* *cond_floatuns_nonextendvnx2divnx2df_relaxed */
    case 8906:  /* *cond_float_nonextendvnx2divnx2df_relaxed */
    case 8905:  /* *cond_floatuns_nonextendvnx2divnx4sf_relaxed */
    case 8904:  /* *cond_float_nonextendvnx2divnx4sf_relaxed */
    case 8903:  /* *cond_floatuns_nonextendvnx2divnx8hf_relaxed */
    case 8902:  /* *cond_float_nonextendvnx2divnx8hf_relaxed */
    case 8901:  /* *cond_floatuns_nonextendvnx4sivnx4sf_relaxed */
    case 8900:  /* *cond_float_nonextendvnx4sivnx4sf_relaxed */
    case 8899:  /* *cond_floatuns_nonextendvnx4sivnx8hf_relaxed */
    case 8898:  /* *cond_float_nonextendvnx4sivnx8hf_relaxed */
    case 8897:  /* *cond_floatuns_nonextendvnx8hivnx8hf_relaxed */
    case 8896:  /* *cond_float_nonextendvnx8hivnx8hf_relaxed */
    case 8867:  /* *cond_fixuns_trunc_nontruncvnx2dfvnx2di_relaxed */
    case 8866:  /* *cond_fix_trunc_nontruncvnx2dfvnx2di_relaxed */
    case 8865:  /* *cond_fixuns_trunc_nontruncvnx4sfvnx2di_relaxed */
    case 8864:  /* *cond_fix_trunc_nontruncvnx4sfvnx2di_relaxed */
    case 8863:  /* *cond_fixuns_trunc_nontruncvnx8hfvnx2di_relaxed */
    case 8862:  /* *cond_fix_trunc_nontruncvnx8hfvnx2di_relaxed */
    case 8861:  /* *cond_fixuns_trunc_nontruncvnx4sfvnx4si_relaxed */
    case 8860:  /* *cond_fix_trunc_nontruncvnx4sfvnx4si_relaxed */
    case 8859:  /* *cond_fixuns_trunc_nontruncvnx8hfvnx4si_relaxed */
    case 8858:  /* *cond_fix_trunc_nontruncvnx8hfvnx4si_relaxed */
    case 8857:  /* *cond_fixuns_trunc_nontruncvnx8hfvnx8hi_relaxed */
    case 8856:  /* *cond_fix_trunc_nontruncvnx8hfvnx8hi_relaxed */
    case 5725:  /* *cond_sqrtvnx2df_any_relaxed */
    case 5724:  /* *cond_btruncvnx2df_any_relaxed */
    case 5723:  /* *cond_rintvnx2df_any_relaxed */
    case 5722:  /* *cond_ceilvnx2df_any_relaxed */
    case 5721:  /* *cond_frintnvnx2df_any_relaxed */
    case 5720:  /* *cond_floorvnx2df_any_relaxed */
    case 5719:  /* *cond_nearbyintvnx2df_any_relaxed */
    case 5718:  /* *cond_roundvnx2df_any_relaxed */
    case 5717:  /* *cond_frecpxvnx2df_any_relaxed */
    case 5716:  /* *cond_negvnx2df_any_relaxed */
    case 5715:  /* *cond_absvnx2df_any_relaxed */
    case 5714:  /* *cond_sqrtvnx4sf_any_relaxed */
    case 5713:  /* *cond_btruncvnx4sf_any_relaxed */
    case 5712:  /* *cond_rintvnx4sf_any_relaxed */
    case 5711:  /* *cond_ceilvnx4sf_any_relaxed */
    case 5710:  /* *cond_frintnvnx4sf_any_relaxed */
    case 5709:  /* *cond_floorvnx4sf_any_relaxed */
    case 5708:  /* *cond_nearbyintvnx4sf_any_relaxed */
    case 5707:  /* *cond_roundvnx4sf_any_relaxed */
    case 5706:  /* *cond_frecpxvnx4sf_any_relaxed */
    case 5705:  /* *cond_negvnx4sf_any_relaxed */
    case 5704:  /* *cond_absvnx4sf_any_relaxed */
    case 5703:  /* *cond_sqrtvnx8hf_any_relaxed */
    case 5702:  /* *cond_btruncvnx8hf_any_relaxed */
    case 5701:  /* *cond_rintvnx8hf_any_relaxed */
    case 5700:  /* *cond_ceilvnx8hf_any_relaxed */
    case 5699:  /* *cond_frintnvnx8hf_any_relaxed */
    case 5698:  /* *cond_floorvnx8hf_any_relaxed */
    case 5697:  /* *cond_nearbyintvnx8hf_any_relaxed */
    case 5696:  /* *cond_roundvnx8hf_any_relaxed */
    case 5695:  /* *cond_frecpxvnx8hf_any_relaxed */
    case 5694:  /* *cond_negvnx8hf_any_relaxed */
    case 5693:  /* *cond_absvnx8hf_any_relaxed */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      break;

    case 5692:  /* *cond_sqrtvnx2df_2_strict */
    case 5691:  /* *cond_btruncvnx2df_2_strict */
    case 5690:  /* *cond_rintvnx2df_2_strict */
    case 5689:  /* *cond_ceilvnx2df_2_strict */
    case 5688:  /* *cond_frintnvnx2df_2_strict */
    case 5687:  /* *cond_floorvnx2df_2_strict */
    case 5686:  /* *cond_nearbyintvnx2df_2_strict */
    case 5685:  /* *cond_roundvnx2df_2_strict */
    case 5684:  /* *cond_frecpxvnx2df_2_strict */
    case 5683:  /* *cond_negvnx2df_2_strict */
    case 5682:  /* *cond_absvnx2df_2_strict */
    case 5681:  /* *cond_sqrtvnx4sf_2_strict */
    case 5680:  /* *cond_btruncvnx4sf_2_strict */
    case 5679:  /* *cond_rintvnx4sf_2_strict */
    case 5678:  /* *cond_ceilvnx4sf_2_strict */
    case 5677:  /* *cond_frintnvnx4sf_2_strict */
    case 5676:  /* *cond_floorvnx4sf_2_strict */
    case 5675:  /* *cond_nearbyintvnx4sf_2_strict */
    case 5674:  /* *cond_roundvnx4sf_2_strict */
    case 5673:  /* *cond_frecpxvnx4sf_2_strict */
    case 5672:  /* *cond_negvnx4sf_2_strict */
    case 5671:  /* *cond_absvnx4sf_2_strict */
    case 5670:  /* *cond_sqrtvnx8hf_2_strict */
    case 5669:  /* *cond_btruncvnx8hf_2_strict */
    case 5668:  /* *cond_rintvnx8hf_2_strict */
    case 5667:  /* *cond_ceilvnx8hf_2_strict */
    case 5666:  /* *cond_frintnvnx8hf_2_strict */
    case 5665:  /* *cond_floorvnx8hf_2_strict */
    case 5664:  /* *cond_nearbyintvnx8hf_2_strict */
    case 5663:  /* *cond_roundvnx8hf_2_strict */
    case 5662:  /* *cond_frecpxvnx8hf_2_strict */
    case 5661:  /* *cond_negvnx8hf_2_strict */
    case 5660:  /* *cond_absvnx8hf_2_strict */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 5659:  /* *cond_sqrtvnx2df_2_relaxed */
    case 5658:  /* *cond_btruncvnx2df_2_relaxed */
    case 5657:  /* *cond_rintvnx2df_2_relaxed */
    case 5656:  /* *cond_ceilvnx2df_2_relaxed */
    case 5655:  /* *cond_frintnvnx2df_2_relaxed */
    case 5654:  /* *cond_floorvnx2df_2_relaxed */
    case 5653:  /* *cond_nearbyintvnx2df_2_relaxed */
    case 5652:  /* *cond_roundvnx2df_2_relaxed */
    case 5651:  /* *cond_frecpxvnx2df_2_relaxed */
    case 5650:  /* *cond_negvnx2df_2_relaxed */
    case 5649:  /* *cond_absvnx2df_2_relaxed */
    case 5648:  /* *cond_sqrtvnx4sf_2_relaxed */
    case 5647:  /* *cond_btruncvnx4sf_2_relaxed */
    case 5646:  /* *cond_rintvnx4sf_2_relaxed */
    case 5645:  /* *cond_ceilvnx4sf_2_relaxed */
    case 5644:  /* *cond_frintnvnx4sf_2_relaxed */
    case 5643:  /* *cond_floorvnx4sf_2_relaxed */
    case 5642:  /* *cond_nearbyintvnx4sf_2_relaxed */
    case 5641:  /* *cond_roundvnx4sf_2_relaxed */
    case 5640:  /* *cond_frecpxvnx4sf_2_relaxed */
    case 5639:  /* *cond_negvnx4sf_2_relaxed */
    case 5638:  /* *cond_absvnx4sf_2_relaxed */
    case 5637:  /* *cond_sqrtvnx8hf_2_relaxed */
    case 5636:  /* *cond_btruncvnx8hf_2_relaxed */
    case 5635:  /* *cond_rintvnx8hf_2_relaxed */
    case 5634:  /* *cond_ceilvnx8hf_2_relaxed */
    case 5633:  /* *cond_frintnvnx8hf_2_relaxed */
    case 5632:  /* *cond_floorvnx8hf_2_relaxed */
    case 5631:  /* *cond_nearbyintvnx8hf_2_relaxed */
    case 5630:  /* *cond_roundvnx8hf_2_relaxed */
    case 5629:  /* *cond_frecpxvnx8hf_2_relaxed */
    case 5628:  /* *cond_negvnx8hf_2_relaxed */
    case 5627:  /* *cond_absvnx8hf_2_relaxed */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 2;
      break;

    case 9897:  /* aarch64_pred_flogbvnx2df */
    case 9896:  /* aarch64_pred_flogbvnx4sf */
    case 9895:  /* aarch64_pred_flogbvnx8hf */
    case 9887:  /* aarch64_pred_fcvtxvnx4sf */
    case 9880:  /* aarch64_pred_fcvtltvnx2df */
    case 9879:  /* aarch64_pred_fcvtltvnx4sf */
    case 8933:  /* aarch64_sve_fcvt_nontruncvnx4sfvnx2df */
    case 8932:  /* aarch64_sve_fcvt_nontruncvnx8hfvnx2df */
    case 8931:  /* aarch64_sve_fcvt_nontruncvnx8hfvnx4sf */
    case 8928:  /* aarch64_sve_fcvt_truncvnx4sfvnx8bf */
    case 8924:  /* aarch64_sve_fcvt_truncvnx2dfvnx4sf */
    case 8923:  /* aarch64_sve_fcvt_truncvnx2dfvnx8hf */
    case 8922:  /* aarch64_sve_fcvt_truncvnx4sfvnx8hf */
    case 8895:  /* aarch64_sve_floatuns_extendvnx4sivnx2df */
    case 8894:  /* aarch64_sve_float_extendvnx4sivnx2df */
    case 8893:  /* aarch64_sve_floatuns_nonextendvnx2divnx2df */
    case 8892:  /* aarch64_sve_float_nonextendvnx2divnx2df */
    case 8891:  /* aarch64_sve_floatuns_nonextendvnx2divnx4sf */
    case 8890:  /* aarch64_sve_float_nonextendvnx2divnx4sf */
    case 8889:  /* aarch64_sve_floatuns_nonextendvnx2divnx8hf */
    case 8888:  /* aarch64_sve_float_nonextendvnx2divnx8hf */
    case 8887:  /* aarch64_sve_floatuns_nonextendvnx4sivnx4sf */
    case 8886:  /* aarch64_sve_float_nonextendvnx4sivnx4sf */
    case 8885:  /* aarch64_sve_floatuns_nonextendvnx4sivnx8hf */
    case 8884:  /* aarch64_sve_float_nonextendvnx4sivnx8hf */
    case 8883:  /* aarch64_sve_floatuns_nonextendvnx8hivnx8hf */
    case 8882:  /* aarch64_sve_float_nonextendvnx8hivnx8hf */
    case 8855:  /* aarch64_sve_fixuns_trunc_truncvnx2dfvnx4si */
    case 8854:  /* aarch64_sve_fix_trunc_truncvnx2dfvnx4si */
    case 8853:  /* aarch64_sve_fixuns_trunc_nontruncvnx2dfvnx2di */
    case 8852:  /* aarch64_sve_fix_trunc_nontruncvnx2dfvnx2di */
    case 8851:  /* aarch64_sve_fixuns_trunc_nontruncvnx4sfvnx2di */
    case 8850:  /* aarch64_sve_fix_trunc_nontruncvnx4sfvnx2di */
    case 8849:  /* aarch64_sve_fixuns_trunc_nontruncvnx8hfvnx2di */
    case 8848:  /* aarch64_sve_fix_trunc_nontruncvnx8hfvnx2di */
    case 8847:  /* aarch64_sve_fixuns_trunc_nontruncvnx4sfvnx4si */
    case 8846:  /* aarch64_sve_fix_trunc_nontruncvnx4sfvnx4si */
    case 8845:  /* aarch64_sve_fixuns_trunc_nontruncvnx8hfvnx4si */
    case 8844:  /* aarch64_sve_fix_trunc_nontruncvnx8hfvnx4si */
    case 8843:  /* aarch64_sve_fixuns_trunc_nontruncvnx8hfvnx8hi */
    case 8842:  /* aarch64_sve_fix_trunc_nontruncvnx8hfvnx8hi */
    case 5626:  /* aarch64_pred_sqrtvnx2df */
    case 5625:  /* aarch64_pred_btruncvnx2df */
    case 5624:  /* aarch64_pred_rintvnx2df */
    case 5623:  /* aarch64_pred_ceilvnx2df */
    case 5622:  /* aarch64_pred_frintnvnx2df */
    case 5621:  /* aarch64_pred_floorvnx2df */
    case 5620:  /* aarch64_pred_nearbyintvnx2df */
    case 5619:  /* aarch64_pred_roundvnx2df */
    case 5618:  /* aarch64_pred_frecpxvnx2df */
    case 5617:  /* aarch64_pred_negvnx2df */
    case 5616:  /* aarch64_pred_absvnx2df */
    case 5615:  /* aarch64_pred_sqrtvnx4sf */
    case 5614:  /* aarch64_pred_btruncvnx4sf */
    case 5613:  /* aarch64_pred_rintvnx4sf */
    case 5612:  /* aarch64_pred_ceilvnx4sf */
    case 5611:  /* aarch64_pred_frintnvnx4sf */
    case 5610:  /* aarch64_pred_floorvnx4sf */
    case 5609:  /* aarch64_pred_nearbyintvnx4sf */
    case 5608:  /* aarch64_pred_roundvnx4sf */
    case 5607:  /* aarch64_pred_frecpxvnx4sf */
    case 5606:  /* aarch64_pred_negvnx4sf */
    case 5605:  /* aarch64_pred_absvnx4sf */
    case 5604:  /* aarch64_pred_sqrtvnx8hf */
    case 5603:  /* aarch64_pred_btruncvnx8hf */
    case 5602:  /* aarch64_pred_rintvnx8hf */
    case 5601:  /* aarch64_pred_ceilvnx8hf */
    case 5600:  /* aarch64_pred_frintnvnx8hf */
    case 5599:  /* aarch64_pred_floorvnx8hf */
    case 5598:  /* aarch64_pred_nearbyintvnx8hf */
    case 5597:  /* aarch64_pred_roundvnx8hf */
    case 5596:  /* aarch64_pred_frecpxvnx8hf */
    case 5595:  /* aarch64_pred_negvnx8hf */
    case 5594:  /* aarch64_pred_absvnx8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5584:  /* *cond_cnotvnx2di_any */
    case 5583:  /* *cond_cnotvnx2si_any */
    case 5582:  /* *cond_cnotvnx4si_any */
    case 5581:  /* *cond_cnotvnx2hi_any */
    case 5580:  /* *cond_cnotvnx4hi_any */
    case 5579:  /* *cond_cnotvnx8hi_any */
    case 5578:  /* *cond_cnotvnx2qi_any */
    case 5577:  /* *cond_cnotvnx4qi_any */
    case 5576:  /* *cond_cnotvnx8qi_any */
    case 5575:  /* *cond_cnotvnx16qi_any */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2);
      recog_data.dup_num[0] = 3;
      break;

    case 5574:  /* *cond_cnotvnx2di_2 */
    case 5573:  /* *cond_cnotvnx2si_2 */
    case 5572:  /* *cond_cnotvnx4si_2 */
    case 5571:  /* *cond_cnotvnx2hi_2 */
    case 5570:  /* *cond_cnotvnx4hi_2 */
    case 5569:  /* *cond_cnotvnx8hi_2 */
    case 5568:  /* *cond_cnotvnx2qi_2 */
    case 5567:  /* *cond_cnotvnx4qi_2 */
    case 5566:  /* *cond_cnotvnx8qi_2 */
    case 5565:  /* *cond_cnotvnx16qi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 2);
      recog_data.dup_num[1] = 3;
      break;

    case 5564:  /* *cnotvnx2di */
    case 5563:  /* *cnotvnx2si */
    case 5562:  /* *cnotvnx4si */
    case 5561:  /* *cnotvnx2hi */
    case 5560:  /* *cnotvnx4hi */
    case 5559:  /* *cnotvnx8hi */
    case 5558:  /* *cnotvnx2qi */
    case 5557:  /* *cnotvnx4qi */
    case 5556:  /* *cnotvnx8qi */
    case 5555:  /* *cnotvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 3;
      break;

    case 6734:  /* *cond_lshrvnx2di_any_const */
    case 6733:  /* *cond_ashrvnx2di_any_const */
    case 6732:  /* *cond_ashlvnx2di_any_const */
    case 6731:  /* *cond_lshrvnx2si_any_const */
    case 6730:  /* *cond_ashrvnx2si_any_const */
    case 6729:  /* *cond_ashlvnx2si_any_const */
    case 6728:  /* *cond_lshrvnx4si_any_const */
    case 6727:  /* *cond_ashrvnx4si_any_const */
    case 6726:  /* *cond_ashlvnx4si_any_const */
    case 6725:  /* *cond_lshrvnx2hi_any_const */
    case 6724:  /* *cond_ashrvnx2hi_any_const */
    case 6723:  /* *cond_ashlvnx2hi_any_const */
    case 6722:  /* *cond_lshrvnx4hi_any_const */
    case 6721:  /* *cond_ashrvnx4hi_any_const */
    case 6720:  /* *cond_ashlvnx4hi_any_const */
    case 6719:  /* *cond_lshrvnx8hi_any_const */
    case 6718:  /* *cond_ashrvnx8hi_any_const */
    case 6717:  /* *cond_ashlvnx8hi_any_const */
    case 6716:  /* *cond_lshrvnx2qi_any_const */
    case 6715:  /* *cond_ashrvnx2qi_any_const */
    case 6714:  /* *cond_ashlvnx2qi_any_const */
    case 6713:  /* *cond_lshrvnx4qi_any_const */
    case 6712:  /* *cond_ashrvnx4qi_any_const */
    case 6711:  /* *cond_ashlvnx4qi_any_const */
    case 6710:  /* *cond_lshrvnx8qi_any_const */
    case 6709:  /* *cond_ashrvnx8qi_any_const */
    case 6708:  /* *cond_ashlvnx8qi_any_const */
    case 6707:  /* *cond_lshrvnx16qi_any_const */
    case 6706:  /* *cond_ashrvnx16qi_any_const */
    case 6705:  /* *cond_ashlvnx16qi_any_const */
    case 6554:  /* *cond_udivvnx2di_any */
    case 6553:  /* *cond_divvnx2di_any */
    case 6552:  /* *cond_udivvnx4si_any */
    case 6551:  /* *cond_divvnx4si_any */
    case 6372:  /* *cond_ussubvnx2di_any */
    case 6371:  /* *cond_sssubvnx2di_any */
    case 6370:  /* *cond_usaddvnx2di_any */
    case 6369:  /* *cond_ssaddvnx2di_any */
    case 6368:  /* *cond_xorvnx2di_any */
    case 6367:  /* *cond_iorvnx2di_any */
    case 6366:  /* *cond_andvnx2di_any */
    case 6365:  /* *cond_lshrvnx2di_any */
    case 6364:  /* *cond_ashrvnx2di_any */
    case 6363:  /* *cond_ashlvnx2di_any */
    case 6362:  /* *cond_uminvnx2di_any */
    case 6361:  /* *cond_sminvnx2di_any */
    case 6360:  /* *cond_umaxvnx2di_any */
    case 6359:  /* *cond_smaxvnx2di_any */
    case 6358:  /* *cond_mulvnx2di_any */
    case 6357:  /* *cond_subvnx2di_any */
    case 6356:  /* *cond_addvnx2di_any */
    case 6355:  /* *cond_ussubvnx2si_any */
    case 6354:  /* *cond_sssubvnx2si_any */
    case 6353:  /* *cond_usaddvnx2si_any */
    case 6352:  /* *cond_ssaddvnx2si_any */
    case 6351:  /* *cond_xorvnx2si_any */
    case 6350:  /* *cond_iorvnx2si_any */
    case 6349:  /* *cond_andvnx2si_any */
    case 6348:  /* *cond_lshrvnx2si_any */
    case 6347:  /* *cond_ashrvnx2si_any */
    case 6346:  /* *cond_ashlvnx2si_any */
    case 6345:  /* *cond_uminvnx2si_any */
    case 6344:  /* *cond_sminvnx2si_any */
    case 6343:  /* *cond_umaxvnx2si_any */
    case 6342:  /* *cond_smaxvnx2si_any */
    case 6341:  /* *cond_mulvnx2si_any */
    case 6340:  /* *cond_subvnx2si_any */
    case 6339:  /* *cond_addvnx2si_any */
    case 6338:  /* *cond_ussubvnx4si_any */
    case 6337:  /* *cond_sssubvnx4si_any */
    case 6336:  /* *cond_usaddvnx4si_any */
    case 6335:  /* *cond_ssaddvnx4si_any */
    case 6334:  /* *cond_xorvnx4si_any */
    case 6333:  /* *cond_iorvnx4si_any */
    case 6332:  /* *cond_andvnx4si_any */
    case 6331:  /* *cond_lshrvnx4si_any */
    case 6330:  /* *cond_ashrvnx4si_any */
    case 6329:  /* *cond_ashlvnx4si_any */
    case 6328:  /* *cond_uminvnx4si_any */
    case 6327:  /* *cond_sminvnx4si_any */
    case 6326:  /* *cond_umaxvnx4si_any */
    case 6325:  /* *cond_smaxvnx4si_any */
    case 6324:  /* *cond_mulvnx4si_any */
    case 6323:  /* *cond_subvnx4si_any */
    case 6322:  /* *cond_addvnx4si_any */
    case 6321:  /* *cond_ussubvnx2hi_any */
    case 6320:  /* *cond_sssubvnx2hi_any */
    case 6319:  /* *cond_usaddvnx2hi_any */
    case 6318:  /* *cond_ssaddvnx2hi_any */
    case 6317:  /* *cond_xorvnx2hi_any */
    case 6316:  /* *cond_iorvnx2hi_any */
    case 6315:  /* *cond_andvnx2hi_any */
    case 6314:  /* *cond_lshrvnx2hi_any */
    case 6313:  /* *cond_ashrvnx2hi_any */
    case 6312:  /* *cond_ashlvnx2hi_any */
    case 6311:  /* *cond_uminvnx2hi_any */
    case 6310:  /* *cond_sminvnx2hi_any */
    case 6309:  /* *cond_umaxvnx2hi_any */
    case 6308:  /* *cond_smaxvnx2hi_any */
    case 6307:  /* *cond_mulvnx2hi_any */
    case 6306:  /* *cond_subvnx2hi_any */
    case 6305:  /* *cond_addvnx2hi_any */
    case 6304:  /* *cond_ussubvnx4hi_any */
    case 6303:  /* *cond_sssubvnx4hi_any */
    case 6302:  /* *cond_usaddvnx4hi_any */
    case 6301:  /* *cond_ssaddvnx4hi_any */
    case 6300:  /* *cond_xorvnx4hi_any */
    case 6299:  /* *cond_iorvnx4hi_any */
    case 6298:  /* *cond_andvnx4hi_any */
    case 6297:  /* *cond_lshrvnx4hi_any */
    case 6296:  /* *cond_ashrvnx4hi_any */
    case 6295:  /* *cond_ashlvnx4hi_any */
    case 6294:  /* *cond_uminvnx4hi_any */
    case 6293:  /* *cond_sminvnx4hi_any */
    case 6292:  /* *cond_umaxvnx4hi_any */
    case 6291:  /* *cond_smaxvnx4hi_any */
    case 6290:  /* *cond_mulvnx4hi_any */
    case 6289:  /* *cond_subvnx4hi_any */
    case 6288:  /* *cond_addvnx4hi_any */
    case 6287:  /* *cond_ussubvnx8hi_any */
    case 6286:  /* *cond_sssubvnx8hi_any */
    case 6285:  /* *cond_usaddvnx8hi_any */
    case 6284:  /* *cond_ssaddvnx8hi_any */
    case 6283:  /* *cond_xorvnx8hi_any */
    case 6282:  /* *cond_iorvnx8hi_any */
    case 6281:  /* *cond_andvnx8hi_any */
    case 6280:  /* *cond_lshrvnx8hi_any */
    case 6279:  /* *cond_ashrvnx8hi_any */
    case 6278:  /* *cond_ashlvnx8hi_any */
    case 6277:  /* *cond_uminvnx8hi_any */
    case 6276:  /* *cond_sminvnx8hi_any */
    case 6275:  /* *cond_umaxvnx8hi_any */
    case 6274:  /* *cond_smaxvnx8hi_any */
    case 6273:  /* *cond_mulvnx8hi_any */
    case 6272:  /* *cond_subvnx8hi_any */
    case 6271:  /* *cond_addvnx8hi_any */
    case 6270:  /* *cond_ussubvnx2qi_any */
    case 6269:  /* *cond_sssubvnx2qi_any */
    case 6268:  /* *cond_usaddvnx2qi_any */
    case 6267:  /* *cond_ssaddvnx2qi_any */
    case 6266:  /* *cond_xorvnx2qi_any */
    case 6265:  /* *cond_iorvnx2qi_any */
    case 6264:  /* *cond_andvnx2qi_any */
    case 6263:  /* *cond_lshrvnx2qi_any */
    case 6262:  /* *cond_ashrvnx2qi_any */
    case 6261:  /* *cond_ashlvnx2qi_any */
    case 6260:  /* *cond_uminvnx2qi_any */
    case 6259:  /* *cond_sminvnx2qi_any */
    case 6258:  /* *cond_umaxvnx2qi_any */
    case 6257:  /* *cond_smaxvnx2qi_any */
    case 6256:  /* *cond_mulvnx2qi_any */
    case 6255:  /* *cond_subvnx2qi_any */
    case 6254:  /* *cond_addvnx2qi_any */
    case 6253:  /* *cond_ussubvnx4qi_any */
    case 6252:  /* *cond_sssubvnx4qi_any */
    case 6251:  /* *cond_usaddvnx4qi_any */
    case 6250:  /* *cond_ssaddvnx4qi_any */
    case 6249:  /* *cond_xorvnx4qi_any */
    case 6248:  /* *cond_iorvnx4qi_any */
    case 6247:  /* *cond_andvnx4qi_any */
    case 6246:  /* *cond_lshrvnx4qi_any */
    case 6245:  /* *cond_ashrvnx4qi_any */
    case 6244:  /* *cond_ashlvnx4qi_any */
    case 6243:  /* *cond_uminvnx4qi_any */
    case 6242:  /* *cond_sminvnx4qi_any */
    case 6241:  /* *cond_umaxvnx4qi_any */
    case 6240:  /* *cond_smaxvnx4qi_any */
    case 6239:  /* *cond_mulvnx4qi_any */
    case 6238:  /* *cond_subvnx4qi_any */
    case 6237:  /* *cond_addvnx4qi_any */
    case 6236:  /* *cond_ussubvnx8qi_any */
    case 6235:  /* *cond_sssubvnx8qi_any */
    case 6234:  /* *cond_usaddvnx8qi_any */
    case 6233:  /* *cond_ssaddvnx8qi_any */
    case 6232:  /* *cond_xorvnx8qi_any */
    case 6231:  /* *cond_iorvnx8qi_any */
    case 6230:  /* *cond_andvnx8qi_any */
    case 6229:  /* *cond_lshrvnx8qi_any */
    case 6228:  /* *cond_ashrvnx8qi_any */
    case 6227:  /* *cond_ashlvnx8qi_any */
    case 6226:  /* *cond_uminvnx8qi_any */
    case 6225:  /* *cond_sminvnx8qi_any */
    case 6224:  /* *cond_umaxvnx8qi_any */
    case 6223:  /* *cond_smaxvnx8qi_any */
    case 6222:  /* *cond_mulvnx8qi_any */
    case 6221:  /* *cond_subvnx8qi_any */
    case 6220:  /* *cond_addvnx8qi_any */
    case 6219:  /* *cond_ussubvnx16qi_any */
    case 6218:  /* *cond_sssubvnx16qi_any */
    case 6217:  /* *cond_usaddvnx16qi_any */
    case 6216:  /* *cond_ssaddvnx16qi_any */
    case 6215:  /* *cond_xorvnx16qi_any */
    case 6214:  /* *cond_iorvnx16qi_any */
    case 6213:  /* *cond_andvnx16qi_any */
    case 6212:  /* *cond_lshrvnx16qi_any */
    case 6211:  /* *cond_ashrvnx16qi_any */
    case 6210:  /* *cond_ashlvnx16qi_any */
    case 6209:  /* *cond_uminvnx16qi_any */
    case 6208:  /* *cond_sminvnx16qi_any */
    case 6207:  /* *cond_umaxvnx16qi_any */
    case 6206:  /* *cond_smaxvnx16qi_any */
    case 6205:  /* *cond_mulvnx16qi_any */
    case 6204:  /* *cond_subvnx16qi_any */
    case 6203:  /* *cond_addvnx16qi_any */
    case 5544:  /* *cond_uxtvnx2di_any */
    case 5543:  /* *cond_uxtvnx2si_any */
    case 5542:  /* *cond_uxtvnx4si_any */
    case 5541:  /* *cond_uxtvnx2hi_any */
    case 5540:  /* *cond_uxtvnx4hi_any */
    case 5539:  /* *cond_uxtvnx8hi_any */
    case 5538:  /* *cond_uxtvnx2qi_any */
    case 5537:  /* *cond_uxtvnx4qi_any */
    case 5536:  /* *cond_uxtvnx8qi_any */
    case 5535:  /* *cond_uxtvnx16qi_any */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 6704:  /* *cond_lshrvnx2di_2_const */
    case 6703:  /* *cond_ashrvnx2di_2_const */
    case 6702:  /* *cond_ashlvnx2di_2_const */
    case 6701:  /* *cond_lshrvnx2si_2_const */
    case 6700:  /* *cond_ashrvnx2si_2_const */
    case 6699:  /* *cond_ashlvnx2si_2_const */
    case 6698:  /* *cond_lshrvnx4si_2_const */
    case 6697:  /* *cond_ashrvnx4si_2_const */
    case 6696:  /* *cond_ashlvnx4si_2_const */
    case 6695:  /* *cond_lshrvnx2hi_2_const */
    case 6694:  /* *cond_ashrvnx2hi_2_const */
    case 6693:  /* *cond_ashlvnx2hi_2_const */
    case 6692:  /* *cond_lshrvnx4hi_2_const */
    case 6691:  /* *cond_ashrvnx4hi_2_const */
    case 6690:  /* *cond_ashlvnx4hi_2_const */
    case 6689:  /* *cond_lshrvnx8hi_2_const */
    case 6688:  /* *cond_ashrvnx8hi_2_const */
    case 6687:  /* *cond_ashlvnx8hi_2_const */
    case 6686:  /* *cond_lshrvnx2qi_2_const */
    case 6685:  /* *cond_ashrvnx2qi_2_const */
    case 6684:  /* *cond_ashlvnx2qi_2_const */
    case 6683:  /* *cond_lshrvnx4qi_2_const */
    case 6682:  /* *cond_ashrvnx4qi_2_const */
    case 6681:  /* *cond_ashlvnx4qi_2_const */
    case 6680:  /* *cond_lshrvnx8qi_2_const */
    case 6679:  /* *cond_ashrvnx8qi_2_const */
    case 6678:  /* *cond_ashlvnx8qi_2_const */
    case 6677:  /* *cond_lshrvnx16qi_2_const */
    case 6676:  /* *cond_ashrvnx16qi_2_const */
    case 6675:  /* *cond_ashlvnx16qi_2_const */
    case 6546:  /* *cond_udivvnx2di_2 */
    case 6545:  /* *cond_divvnx2di_2 */
    case 6544:  /* *cond_udivvnx4si_2 */
    case 6543:  /* *cond_divvnx4si_2 */
    case 6032:  /* *cond_ussubvnx2di_2 */
    case 6031:  /* *cond_sssubvnx2di_2 */
    case 6030:  /* *cond_usaddvnx2di_2 */
    case 6029:  /* *cond_ssaddvnx2di_2 */
    case 6028:  /* *cond_xorvnx2di_2 */
    case 6027:  /* *cond_iorvnx2di_2 */
    case 6026:  /* *cond_andvnx2di_2 */
    case 6025:  /* *cond_lshrvnx2di_2 */
    case 6024:  /* *cond_ashrvnx2di_2 */
    case 6023:  /* *cond_ashlvnx2di_2 */
    case 6022:  /* *cond_uminvnx2di_2 */
    case 6021:  /* *cond_sminvnx2di_2 */
    case 6020:  /* *cond_umaxvnx2di_2 */
    case 6019:  /* *cond_smaxvnx2di_2 */
    case 6018:  /* *cond_mulvnx2di_2 */
    case 6017:  /* *cond_subvnx2di_2 */
    case 6016:  /* *cond_addvnx2di_2 */
    case 6015:  /* *cond_ussubvnx2si_2 */
    case 6014:  /* *cond_sssubvnx2si_2 */
    case 6013:  /* *cond_usaddvnx2si_2 */
    case 6012:  /* *cond_ssaddvnx2si_2 */
    case 6011:  /* *cond_xorvnx2si_2 */
    case 6010:  /* *cond_iorvnx2si_2 */
    case 6009:  /* *cond_andvnx2si_2 */
    case 6008:  /* *cond_lshrvnx2si_2 */
    case 6007:  /* *cond_ashrvnx2si_2 */
    case 6006:  /* *cond_ashlvnx2si_2 */
    case 6005:  /* *cond_uminvnx2si_2 */
    case 6004:  /* *cond_sminvnx2si_2 */
    case 6003:  /* *cond_umaxvnx2si_2 */
    case 6002:  /* *cond_smaxvnx2si_2 */
    case 6001:  /* *cond_mulvnx2si_2 */
    case 6000:  /* *cond_subvnx2si_2 */
    case 5999:  /* *cond_addvnx2si_2 */
    case 5998:  /* *cond_ussubvnx4si_2 */
    case 5997:  /* *cond_sssubvnx4si_2 */
    case 5996:  /* *cond_usaddvnx4si_2 */
    case 5995:  /* *cond_ssaddvnx4si_2 */
    case 5994:  /* *cond_xorvnx4si_2 */
    case 5993:  /* *cond_iorvnx4si_2 */
    case 5992:  /* *cond_andvnx4si_2 */
    case 5991:  /* *cond_lshrvnx4si_2 */
    case 5990:  /* *cond_ashrvnx4si_2 */
    case 5989:  /* *cond_ashlvnx4si_2 */
    case 5988:  /* *cond_uminvnx4si_2 */
    case 5987:  /* *cond_sminvnx4si_2 */
    case 5986:  /* *cond_umaxvnx4si_2 */
    case 5985:  /* *cond_smaxvnx4si_2 */
    case 5984:  /* *cond_mulvnx4si_2 */
    case 5983:  /* *cond_subvnx4si_2 */
    case 5982:  /* *cond_addvnx4si_2 */
    case 5981:  /* *cond_ussubvnx2hi_2 */
    case 5980:  /* *cond_sssubvnx2hi_2 */
    case 5979:  /* *cond_usaddvnx2hi_2 */
    case 5978:  /* *cond_ssaddvnx2hi_2 */
    case 5977:  /* *cond_xorvnx2hi_2 */
    case 5976:  /* *cond_iorvnx2hi_2 */
    case 5975:  /* *cond_andvnx2hi_2 */
    case 5974:  /* *cond_lshrvnx2hi_2 */
    case 5973:  /* *cond_ashrvnx2hi_2 */
    case 5972:  /* *cond_ashlvnx2hi_2 */
    case 5971:  /* *cond_uminvnx2hi_2 */
    case 5970:  /* *cond_sminvnx2hi_2 */
    case 5969:  /* *cond_umaxvnx2hi_2 */
    case 5968:  /* *cond_smaxvnx2hi_2 */
    case 5967:  /* *cond_mulvnx2hi_2 */
    case 5966:  /* *cond_subvnx2hi_2 */
    case 5965:  /* *cond_addvnx2hi_2 */
    case 5964:  /* *cond_ussubvnx4hi_2 */
    case 5963:  /* *cond_sssubvnx4hi_2 */
    case 5962:  /* *cond_usaddvnx4hi_2 */
    case 5961:  /* *cond_ssaddvnx4hi_2 */
    case 5960:  /* *cond_xorvnx4hi_2 */
    case 5959:  /* *cond_iorvnx4hi_2 */
    case 5958:  /* *cond_andvnx4hi_2 */
    case 5957:  /* *cond_lshrvnx4hi_2 */
    case 5956:  /* *cond_ashrvnx4hi_2 */
    case 5955:  /* *cond_ashlvnx4hi_2 */
    case 5954:  /* *cond_uminvnx4hi_2 */
    case 5953:  /* *cond_sminvnx4hi_2 */
    case 5952:  /* *cond_umaxvnx4hi_2 */
    case 5951:  /* *cond_smaxvnx4hi_2 */
    case 5950:  /* *cond_mulvnx4hi_2 */
    case 5949:  /* *cond_subvnx4hi_2 */
    case 5948:  /* *cond_addvnx4hi_2 */
    case 5947:  /* *cond_ussubvnx8hi_2 */
    case 5946:  /* *cond_sssubvnx8hi_2 */
    case 5945:  /* *cond_usaddvnx8hi_2 */
    case 5944:  /* *cond_ssaddvnx8hi_2 */
    case 5943:  /* *cond_xorvnx8hi_2 */
    case 5942:  /* *cond_iorvnx8hi_2 */
    case 5941:  /* *cond_andvnx8hi_2 */
    case 5940:  /* *cond_lshrvnx8hi_2 */
    case 5939:  /* *cond_ashrvnx8hi_2 */
    case 5938:  /* *cond_ashlvnx8hi_2 */
    case 5937:  /* *cond_uminvnx8hi_2 */
    case 5936:  /* *cond_sminvnx8hi_2 */
    case 5935:  /* *cond_umaxvnx8hi_2 */
    case 5934:  /* *cond_smaxvnx8hi_2 */
    case 5933:  /* *cond_mulvnx8hi_2 */
    case 5932:  /* *cond_subvnx8hi_2 */
    case 5931:  /* *cond_addvnx8hi_2 */
    case 5930:  /* *cond_ussubvnx2qi_2 */
    case 5929:  /* *cond_sssubvnx2qi_2 */
    case 5928:  /* *cond_usaddvnx2qi_2 */
    case 5927:  /* *cond_ssaddvnx2qi_2 */
    case 5926:  /* *cond_xorvnx2qi_2 */
    case 5925:  /* *cond_iorvnx2qi_2 */
    case 5924:  /* *cond_andvnx2qi_2 */
    case 5923:  /* *cond_lshrvnx2qi_2 */
    case 5922:  /* *cond_ashrvnx2qi_2 */
    case 5921:  /* *cond_ashlvnx2qi_2 */
    case 5920:  /* *cond_uminvnx2qi_2 */
    case 5919:  /* *cond_sminvnx2qi_2 */
    case 5918:  /* *cond_umaxvnx2qi_2 */
    case 5917:  /* *cond_smaxvnx2qi_2 */
    case 5916:  /* *cond_mulvnx2qi_2 */
    case 5915:  /* *cond_subvnx2qi_2 */
    case 5914:  /* *cond_addvnx2qi_2 */
    case 5913:  /* *cond_ussubvnx4qi_2 */
    case 5912:  /* *cond_sssubvnx4qi_2 */
    case 5911:  /* *cond_usaddvnx4qi_2 */
    case 5910:  /* *cond_ssaddvnx4qi_2 */
    case 5909:  /* *cond_xorvnx4qi_2 */
    case 5908:  /* *cond_iorvnx4qi_2 */
    case 5907:  /* *cond_andvnx4qi_2 */
    case 5906:  /* *cond_lshrvnx4qi_2 */
    case 5905:  /* *cond_ashrvnx4qi_2 */
    case 5904:  /* *cond_ashlvnx4qi_2 */
    case 5903:  /* *cond_uminvnx4qi_2 */
    case 5902:  /* *cond_sminvnx4qi_2 */
    case 5901:  /* *cond_umaxvnx4qi_2 */
    case 5900:  /* *cond_smaxvnx4qi_2 */
    case 5899:  /* *cond_mulvnx4qi_2 */
    case 5898:  /* *cond_subvnx4qi_2 */
    case 5897:  /* *cond_addvnx4qi_2 */
    case 5896:  /* *cond_ussubvnx8qi_2 */
    case 5895:  /* *cond_sssubvnx8qi_2 */
    case 5894:  /* *cond_usaddvnx8qi_2 */
    case 5893:  /* *cond_ssaddvnx8qi_2 */
    case 5892:  /* *cond_xorvnx8qi_2 */
    case 5891:  /* *cond_iorvnx8qi_2 */
    case 5890:  /* *cond_andvnx8qi_2 */
    case 5889:  /* *cond_lshrvnx8qi_2 */
    case 5888:  /* *cond_ashrvnx8qi_2 */
    case 5887:  /* *cond_ashlvnx8qi_2 */
    case 5886:  /* *cond_uminvnx8qi_2 */
    case 5885:  /* *cond_sminvnx8qi_2 */
    case 5884:  /* *cond_umaxvnx8qi_2 */
    case 5883:  /* *cond_smaxvnx8qi_2 */
    case 5882:  /* *cond_mulvnx8qi_2 */
    case 5881:  /* *cond_subvnx8qi_2 */
    case 5880:  /* *cond_addvnx8qi_2 */
    case 5879:  /* *cond_ussubvnx16qi_2 */
    case 5878:  /* *cond_sssubvnx16qi_2 */
    case 5877:  /* *cond_usaddvnx16qi_2 */
    case 5876:  /* *cond_ssaddvnx16qi_2 */
    case 5875:  /* *cond_xorvnx16qi_2 */
    case 5874:  /* *cond_iorvnx16qi_2 */
    case 5873:  /* *cond_andvnx16qi_2 */
    case 5872:  /* *cond_lshrvnx16qi_2 */
    case 5871:  /* *cond_ashrvnx16qi_2 */
    case 5870:  /* *cond_ashlvnx16qi_2 */
    case 5869:  /* *cond_uminvnx16qi_2 */
    case 5868:  /* *cond_sminvnx16qi_2 */
    case 5867:  /* *cond_umaxvnx16qi_2 */
    case 5866:  /* *cond_smaxvnx16qi_2 */
    case 5865:  /* *cond_mulvnx16qi_2 */
    case 5864:  /* *cond_subvnx16qi_2 */
    case 5863:  /* *cond_addvnx16qi_2 */
    case 5534:  /* *cond_uxtvnx2di_2 */
    case 5533:  /* *cond_uxtvnx2si_2 */
    case 5532:  /* *cond_uxtvnx4si_2 */
    case 5531:  /* *cond_uxtvnx2hi_2 */
    case 5530:  /* *cond_uxtvnx4hi_2 */
    case 5529:  /* *cond_uxtvnx8hi_2 */
    case 5528:  /* *cond_uxtvnx2qi_2 */
    case 5527:  /* *cond_uxtvnx4qi_2 */
    case 5526:  /* *cond_uxtvnx8qi_2 */
    case 5525:  /* *cond_uxtvnx16qi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 2;
      break;

    case 5524:  /* aarch64_cond_sxtvnx2divnx2si */
    case 5523:  /* aarch64_cond_sxtvnx2divnx2hi */
    case 5522:  /* aarch64_cond_sxtvnx2divnx2qi */
    case 5521:  /* aarch64_cond_sxtvnx4sivnx4hi */
    case 5520:  /* aarch64_cond_sxtvnx4sivnx4qi */
    case 5519:  /* aarch64_cond_sxtvnx8hivnx8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 5518:  /* aarch64_pred_sxtvnx2divnx2si */
    case 5517:  /* aarch64_pred_sxtvnx2divnx2hi */
    case 5516:  /* aarch64_pred_sxtvnx2divnx2qi */
    case 5515:  /* aarch64_pred_sxtvnx4sivnx4hi */
    case 5514:  /* aarch64_pred_sxtvnx4sivnx4qi */
    case 5513:  /* aarch64_pred_sxtvnx8hivnx8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0));
      break;

    case 5492:  /* cond_revwvnx2di */
    case 5491:  /* cond_revhvnx2di */
    case 5490:  /* cond_revbvnx2di */
    case 5489:  /* cond_rbitvnx2di */
    case 5488:  /* cond_revhvnx4si */
    case 5487:  /* cond_revbvnx4si */
    case 5486:  /* cond_rbitvnx4si */
    case 5485:  /* cond_revbvnx8hi */
    case 5484:  /* cond_rbitvnx8hi */
    case 5483:  /* cond_rbitvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 9892:  /* aarch64_pred_ursqrtevnx4si */
    case 9891:  /* aarch64_pred_urecpevnx4si */
    case 5482:  /* aarch64_sve_revbhw_vnx4sfvnx2bi */
    case 5481:  /* aarch64_sve_revbhw_vnx4sivnx2bi */
    case 5480:  /* aarch64_sve_revbhw_vnx4bfvnx2bi */
    case 5479:  /* aarch64_sve_revbhw_vnx8bfvnx2bi */
    case 5478:  /* aarch64_sve_revbhw_vnx4hfvnx2bi */
    case 5477:  /* aarch64_sve_revbhw_vnx8hfvnx2bi */
    case 5476:  /* aarch64_sve_revbhw_vnx4hivnx2bi */
    case 5475:  /* aarch64_sve_revbhw_vnx8hivnx2bi */
    case 5474:  /* aarch64_sve_revbhw_vnx4qivnx2bi */
    case 5473:  /* aarch64_sve_revbhw_vnx8qivnx2bi */
    case 5472:  /* aarch64_sve_revbhw_vnx16qivnx2bi */
    case 5471:  /* aarch64_sve_revbhw_vnx8bfvnx4bi */
    case 5470:  /* aarch64_sve_revbhw_vnx8hfvnx4bi */
    case 5469:  /* aarch64_sve_revbhw_vnx8hivnx4bi */
    case 5468:  /* aarch64_sve_revbhw_vnx8qivnx4bi */
    case 5467:  /* aarch64_sve_revbhw_vnx16qivnx4bi */
    case 5466:  /* aarch64_sve_revbhw_vnx16qivnx8bi */
    case 5465:  /* aarch64_pred_revwvnx2di */
    case 5464:  /* aarch64_pred_revhvnx2di */
    case 5463:  /* aarch64_pred_revbvnx2di */
    case 5462:  /* aarch64_pred_rbitvnx2di */
    case 5461:  /* aarch64_pred_revhvnx4si */
    case 5460:  /* aarch64_pred_revbvnx4si */
    case 5459:  /* aarch64_pred_rbitvnx4si */
    case 5458:  /* aarch64_pred_revbvnx8hi */
    case 5457:  /* aarch64_pred_rbitvnx8hi */
    case 5456:  /* aarch64_pred_rbitvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0, 0));
      break;

    case 5375:  /* *cond_qnegvnx2di_2 */
    case 5374:  /* *cond_qabsvnx2di_2 */
    case 5373:  /* *cond_popcountvnx2di_2 */
    case 5372:  /* *cond_clzvnx2di_2 */
    case 5371:  /* *cond_clrsbvnx2di_2 */
    case 5370:  /* *cond_one_cmplvnx2di_2 */
    case 5369:  /* *cond_negvnx2di_2 */
    case 5368:  /* *cond_absvnx2di_2 */
    case 5367:  /* *cond_qnegvnx2si_2 */
    case 5366:  /* *cond_qabsvnx2si_2 */
    case 5365:  /* *cond_popcountvnx2si_2 */
    case 5364:  /* *cond_clzvnx2si_2 */
    case 5363:  /* *cond_clrsbvnx2si_2 */
    case 5362:  /* *cond_one_cmplvnx2si_2 */
    case 5361:  /* *cond_negvnx2si_2 */
    case 5360:  /* *cond_absvnx2si_2 */
    case 5359:  /* *cond_qnegvnx4si_2 */
    case 5358:  /* *cond_qabsvnx4si_2 */
    case 5357:  /* *cond_popcountvnx4si_2 */
    case 5356:  /* *cond_clzvnx4si_2 */
    case 5355:  /* *cond_clrsbvnx4si_2 */
    case 5354:  /* *cond_one_cmplvnx4si_2 */
    case 5353:  /* *cond_negvnx4si_2 */
    case 5352:  /* *cond_absvnx4si_2 */
    case 5351:  /* *cond_qnegvnx2hi_2 */
    case 5350:  /* *cond_qabsvnx2hi_2 */
    case 5349:  /* *cond_popcountvnx2hi_2 */
    case 5348:  /* *cond_clzvnx2hi_2 */
    case 5347:  /* *cond_clrsbvnx2hi_2 */
    case 5346:  /* *cond_one_cmplvnx2hi_2 */
    case 5345:  /* *cond_negvnx2hi_2 */
    case 5344:  /* *cond_absvnx2hi_2 */
    case 5343:  /* *cond_qnegvnx4hi_2 */
    case 5342:  /* *cond_qabsvnx4hi_2 */
    case 5341:  /* *cond_popcountvnx4hi_2 */
    case 5340:  /* *cond_clzvnx4hi_2 */
    case 5339:  /* *cond_clrsbvnx4hi_2 */
    case 5338:  /* *cond_one_cmplvnx4hi_2 */
    case 5337:  /* *cond_negvnx4hi_2 */
    case 5336:  /* *cond_absvnx4hi_2 */
    case 5335:  /* *cond_qnegvnx8hi_2 */
    case 5334:  /* *cond_qabsvnx8hi_2 */
    case 5333:  /* *cond_popcountvnx8hi_2 */
    case 5332:  /* *cond_clzvnx8hi_2 */
    case 5331:  /* *cond_clrsbvnx8hi_2 */
    case 5330:  /* *cond_one_cmplvnx8hi_2 */
    case 5329:  /* *cond_negvnx8hi_2 */
    case 5328:  /* *cond_absvnx8hi_2 */
    case 5327:  /* *cond_qnegvnx2qi_2 */
    case 5326:  /* *cond_qabsvnx2qi_2 */
    case 5325:  /* *cond_popcountvnx2qi_2 */
    case 5324:  /* *cond_clzvnx2qi_2 */
    case 5323:  /* *cond_clrsbvnx2qi_2 */
    case 5322:  /* *cond_one_cmplvnx2qi_2 */
    case 5321:  /* *cond_negvnx2qi_2 */
    case 5320:  /* *cond_absvnx2qi_2 */
    case 5319:  /* *cond_qnegvnx4qi_2 */
    case 5318:  /* *cond_qabsvnx4qi_2 */
    case 5317:  /* *cond_popcountvnx4qi_2 */
    case 5316:  /* *cond_clzvnx4qi_2 */
    case 5315:  /* *cond_clrsbvnx4qi_2 */
    case 5314:  /* *cond_one_cmplvnx4qi_2 */
    case 5313:  /* *cond_negvnx4qi_2 */
    case 5312:  /* *cond_absvnx4qi_2 */
    case 5311:  /* *cond_qnegvnx8qi_2 */
    case 5310:  /* *cond_qabsvnx8qi_2 */
    case 5309:  /* *cond_popcountvnx8qi_2 */
    case 5308:  /* *cond_clzvnx8qi_2 */
    case 5307:  /* *cond_clrsbvnx8qi_2 */
    case 5306:  /* *cond_one_cmplvnx8qi_2 */
    case 5305:  /* *cond_negvnx8qi_2 */
    case 5304:  /* *cond_absvnx8qi_2 */
    case 5303:  /* *cond_qnegvnx16qi_2 */
    case 5302:  /* *cond_qabsvnx16qi_2 */
    case 5301:  /* *cond_popcountvnx16qi_2 */
    case 5300:  /* *cond_clzvnx16qi_2 */
    case 5299:  /* *cond_clrsbvnx16qi_2 */
    case 5298:  /* *cond_one_cmplvnx16qi_2 */
    case 5297:  /* *cond_negvnx16qi_2 */
    case 5296:  /* *cond_absvnx16qi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 2;
      break;

    case 5455:  /* *cond_qnegvnx2di_any */
    case 5454:  /* *cond_qabsvnx2di_any */
    case 5453:  /* *cond_popcountvnx2di_any */
    case 5452:  /* *cond_clzvnx2di_any */
    case 5451:  /* *cond_clrsbvnx2di_any */
    case 5450:  /* *cond_one_cmplvnx2di_any */
    case 5449:  /* *cond_negvnx2di_any */
    case 5448:  /* *cond_absvnx2di_any */
    case 5447:  /* *cond_qnegvnx2si_any */
    case 5446:  /* *cond_qabsvnx2si_any */
    case 5445:  /* *cond_popcountvnx2si_any */
    case 5444:  /* *cond_clzvnx2si_any */
    case 5443:  /* *cond_clrsbvnx2si_any */
    case 5442:  /* *cond_one_cmplvnx2si_any */
    case 5441:  /* *cond_negvnx2si_any */
    case 5440:  /* *cond_absvnx2si_any */
    case 5439:  /* *cond_qnegvnx4si_any */
    case 5438:  /* *cond_qabsvnx4si_any */
    case 5437:  /* *cond_popcountvnx4si_any */
    case 5436:  /* *cond_clzvnx4si_any */
    case 5435:  /* *cond_clrsbvnx4si_any */
    case 5434:  /* *cond_one_cmplvnx4si_any */
    case 5433:  /* *cond_negvnx4si_any */
    case 5432:  /* *cond_absvnx4si_any */
    case 5431:  /* *cond_qnegvnx2hi_any */
    case 5430:  /* *cond_qabsvnx2hi_any */
    case 5429:  /* *cond_popcountvnx2hi_any */
    case 5428:  /* *cond_clzvnx2hi_any */
    case 5427:  /* *cond_clrsbvnx2hi_any */
    case 5426:  /* *cond_one_cmplvnx2hi_any */
    case 5425:  /* *cond_negvnx2hi_any */
    case 5424:  /* *cond_absvnx2hi_any */
    case 5423:  /* *cond_qnegvnx4hi_any */
    case 5422:  /* *cond_qabsvnx4hi_any */
    case 5421:  /* *cond_popcountvnx4hi_any */
    case 5420:  /* *cond_clzvnx4hi_any */
    case 5419:  /* *cond_clrsbvnx4hi_any */
    case 5418:  /* *cond_one_cmplvnx4hi_any */
    case 5417:  /* *cond_negvnx4hi_any */
    case 5416:  /* *cond_absvnx4hi_any */
    case 5415:  /* *cond_qnegvnx8hi_any */
    case 5414:  /* *cond_qabsvnx8hi_any */
    case 5413:  /* *cond_popcountvnx8hi_any */
    case 5412:  /* *cond_clzvnx8hi_any */
    case 5411:  /* *cond_clrsbvnx8hi_any */
    case 5410:  /* *cond_one_cmplvnx8hi_any */
    case 5409:  /* *cond_negvnx8hi_any */
    case 5408:  /* *cond_absvnx8hi_any */
    case 5407:  /* *cond_qnegvnx2qi_any */
    case 5406:  /* *cond_qabsvnx2qi_any */
    case 5405:  /* *cond_popcountvnx2qi_any */
    case 5404:  /* *cond_clzvnx2qi_any */
    case 5403:  /* *cond_clrsbvnx2qi_any */
    case 5402:  /* *cond_one_cmplvnx2qi_any */
    case 5401:  /* *cond_negvnx2qi_any */
    case 5400:  /* *cond_absvnx2qi_any */
    case 5399:  /* *cond_qnegvnx4qi_any */
    case 5398:  /* *cond_qabsvnx4qi_any */
    case 5397:  /* *cond_popcountvnx4qi_any */
    case 5396:  /* *cond_clzvnx4qi_any */
    case 5395:  /* *cond_clrsbvnx4qi_any */
    case 5394:  /* *cond_one_cmplvnx4qi_any */
    case 5393:  /* *cond_negvnx4qi_any */
    case 5392:  /* *cond_absvnx4qi_any */
    case 5391:  /* *cond_qnegvnx8qi_any */
    case 5390:  /* *cond_qabsvnx8qi_any */
    case 5389:  /* *cond_popcountvnx8qi_any */
    case 5388:  /* *cond_clzvnx8qi_any */
    case 5387:  /* *cond_clrsbvnx8qi_any */
    case 5386:  /* *cond_one_cmplvnx8qi_any */
    case 5385:  /* *cond_negvnx8qi_any */
    case 5384:  /* *cond_absvnx8qi_any */
    case 5383:  /* *cond_qnegvnx16qi_any */
    case 5382:  /* *cond_qabsvnx16qi_any */
    case 5381:  /* *cond_popcountvnx16qi_any */
    case 5380:  /* *cond_clzvnx16qi_any */
    case 5379:  /* *cond_clrsbvnx16qi_any */
    case 5378:  /* *cond_one_cmplvnx16qi_any */
    case 5377:  /* *cond_negvnx16qi_any */
    case 5376:  /* *cond_absvnx16qi_any */
    case 5123:  /* sve_ld1rvnx2df */
    case 5122:  /* sve_ld1rvnx2di */
    case 5121:  /* sve_ld1rvnx2sf */
    case 5120:  /* sve_ld1rvnx4sf */
    case 5119:  /* sve_ld1rvnx2si */
    case 5118:  /* sve_ld1rvnx4si */
    case 5117:  /* sve_ld1rvnx2bf */
    case 5116:  /* sve_ld1rvnx4bf */
    case 5115:  /* sve_ld1rvnx8bf */
    case 5114:  /* sve_ld1rvnx2hf */
    case 5113:  /* sve_ld1rvnx4hf */
    case 5112:  /* sve_ld1rvnx8hf */
    case 5111:  /* sve_ld1rvnx2hi */
    case 5110:  /* sve_ld1rvnx4hi */
    case 5109:  /* sve_ld1rvnx8hi */
    case 5108:  /* sve_ld1rvnx2qi */
    case 5107:  /* sve_ld1rvnx4qi */
    case 5106:  /* sve_ld1rvnx8qi */
    case 5105:  /* sve_ld1rvnx16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 5088:  /* *vec_duplicatevnx2df_reg */
    case 5087:  /* *vec_duplicatevnx2di_reg */
    case 5086:  /* *vec_duplicatevnx2sf_reg */
    case 5085:  /* *vec_duplicatevnx4sf_reg */
    case 5084:  /* *vec_duplicatevnx2si_reg */
    case 5083:  /* *vec_duplicatevnx4si_reg */
    case 5082:  /* *vec_duplicatevnx2bf_reg */
    case 5081:  /* *vec_duplicatevnx4bf_reg */
    case 5080:  /* *vec_duplicatevnx8bf_reg */
    case 5079:  /* *vec_duplicatevnx2hf_reg */
    case 5078:  /* *vec_duplicatevnx4hf_reg */
    case 5077:  /* *vec_duplicatevnx8hf_reg */
    case 5076:  /* *vec_duplicatevnx2hi_reg */
    case 5075:  /* *vec_duplicatevnx4hi_reg */
    case 5074:  /* *vec_duplicatevnx8hi_reg */
    case 5073:  /* *vec_duplicatevnx2qi_reg */
    case 5072:  /* *vec_duplicatevnx4qi_reg */
    case 5071:  /* *vec_duplicatevnx8qi_reg */
    case 5070:  /* *vec_duplicatevnx16qi_reg */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 5069:  /* *aarch64_scatter_store_truncvnx2sivnx2di_uxtw */
    case 5068:  /* *aarch64_scatter_store_truncvnx2hivnx2di_uxtw */
    case 5067:  /* *aarch64_scatter_store_truncvnx2qivnx2di_uxtw */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 4));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 5), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      break;

    case 5066:  /* *aarch64_scatter_store_truncvnx2sivnx2di_sxtw */
    case 5065:  /* *aarch64_scatter_store_truncvnx2hivnx2di_sxtw */
    case 5064:  /* *aarch64_scatter_store_truncvnx2qivnx2di_sxtw */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 4));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 5), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 0));
      break;

    case 5063:  /* aarch64_scatter_store_truncvnx2sivnx2di */
    case 5062:  /* aarch64_scatter_store_truncvnx2hivnx2di */
    case 5061:  /* aarch64_scatter_store_truncvnx2qivnx2di */
    case 5060:  /* aarch64_scatter_store_truncvnx4hivnx4si */
    case 5059:  /* aarch64_scatter_store_truncvnx4qivnx4si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 4));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 5), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 5058:  /* *mask_scatter_storevnx2dfvnx2di_uxtw */
    case 5057:  /* *mask_scatter_storevnx2divnx2di_uxtw */
    case 5056:  /* *mask_scatter_storevnx2sfvnx2di_uxtw */
    case 5055:  /* *mask_scatter_storevnx2sivnx2di_uxtw */
    case 5054:  /* *mask_scatter_storevnx2bfvnx2di_uxtw */
    case 5053:  /* *mask_scatter_storevnx2hfvnx2di_uxtw */
    case 5052:  /* *mask_scatter_storevnx2hivnx2di_uxtw */
    case 5051:  /* *mask_scatter_storevnx2qivnx2di_uxtw */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 4));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 5));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      break;

    case 5050:  /* *mask_scatter_storevnx2dfvnx2di_sxtw */
    case 5049:  /* *mask_scatter_storevnx2divnx2di_sxtw */
    case 5048:  /* *mask_scatter_storevnx2sfvnx2di_sxtw */
    case 5047:  /* *mask_scatter_storevnx2sivnx2di_sxtw */
    case 5046:  /* *mask_scatter_storevnx2bfvnx2di_sxtw */
    case 5045:  /* *mask_scatter_storevnx2hfvnx2di_sxtw */
    case 5044:  /* *mask_scatter_storevnx2hivnx2di_sxtw */
    case 5043:  /* *mask_scatter_storevnx2qivnx2di_sxtw */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 4));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 5));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 0));
      break;

    case 5042:  /* *mask_scatter_storevnx2dfvnx2di_uxtw_unpacked */
    case 5041:  /* *mask_scatter_storevnx2dfvnx2di_sxtw_unpacked */
    case 5040:  /* *mask_scatter_storevnx2divnx2di_uxtw_unpacked */
    case 5039:  /* *mask_scatter_storevnx2divnx2di_sxtw_unpacked */
    case 5038:  /* *mask_scatter_storevnx2sfvnx2di_uxtw_unpacked */
    case 5037:  /* *mask_scatter_storevnx2sfvnx2di_sxtw_unpacked */
    case 5036:  /* *mask_scatter_storevnx2sivnx2di_uxtw_unpacked */
    case 5035:  /* *mask_scatter_storevnx2sivnx2di_sxtw_unpacked */
    case 5034:  /* *mask_scatter_storevnx2bfvnx2di_uxtw_unpacked */
    case 5033:  /* *mask_scatter_storevnx2bfvnx2di_sxtw_unpacked */
    case 5032:  /* *mask_scatter_storevnx2hfvnx2di_uxtw_unpacked */
    case 5031:  /* *mask_scatter_storevnx2hfvnx2di_sxtw_unpacked */
    case 5030:  /* *mask_scatter_storevnx2hivnx2di_uxtw_unpacked */
    case 5029:  /* *mask_scatter_storevnx2hivnx2di_sxtw_unpacked */
    case 5028:  /* *mask_scatter_storevnx2qivnx2di_uxtw_unpacked */
    case 5027:  /* *mask_scatter_storevnx2qivnx2di_sxtw_unpacked */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 4));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 5));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 0));
      break;

    case 5026:  /* mask_scatter_storevnx2dfvnx2di */
    case 5025:  /* mask_scatter_storevnx2divnx2di */
    case 5024:  /* mask_scatter_storevnx2sfvnx2di */
    case 5023:  /* mask_scatter_storevnx2sivnx2di */
    case 5022:  /* mask_scatter_storevnx2bfvnx2di */
    case 5021:  /* mask_scatter_storevnx2hfvnx2di */
    case 5020:  /* mask_scatter_storevnx2hivnx2di */
    case 5019:  /* mask_scatter_storevnx2qivnx2di */
    case 5018:  /* mask_scatter_storevnx4sfvnx4si */
    case 5017:  /* mask_scatter_storevnx4sivnx4si */
    case 5016:  /* mask_scatter_storevnx4bfvnx4si */
    case 5015:  /* mask_scatter_storevnx4hfvnx4si */
    case 5014:  /* mask_scatter_storevnx4hivnx4si */
    case 5013:  /* mask_scatter_storevnx4qivnx4si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 4));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 5));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 5004:  /* aarch64_store_truncvnx2sivnx2di */
    case 5003:  /* aarch64_store_truncvnx2hivnx2di */
    case 5002:  /* aarch64_store_truncvnx2qivnx2di */
    case 5001:  /* aarch64_store_truncvnx4hivnx4si */
    case 5000:  /* aarch64_store_truncvnx4qivnx4si */
    case 4999:  /* aarch64_store_truncvnx8qivnx8hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 5012:  /* aarch64_stnt1vnx2df */
    case 5011:  /* aarch64_stnt1vnx4sf */
    case 5010:  /* aarch64_stnt1vnx8hf */
    case 5009:  /* aarch64_stnt1vnx8bf */
    case 5008:  /* aarch64_stnt1vnx2di */
    case 5007:  /* aarch64_stnt1vnx4si */
    case 5006:  /* aarch64_stnt1vnx8hi */
    case 5005:  /* aarch64_stnt1vnx16qi */
    case 4998:  /* vec_mask_store_lanesvnx8dfvnx2df */
    case 4997:  /* vec_mask_store_lanesvnx16sfvnx4sf */
    case 4996:  /* vec_mask_store_lanesvnx32hfvnx8hf */
    case 4995:  /* vec_mask_store_lanesvnx32bfvnx8bf */
    case 4994:  /* vec_mask_store_lanesvnx8divnx2di */
    case 4993:  /* vec_mask_store_lanesvnx16sivnx4si */
    case 4992:  /* vec_mask_store_lanesvnx32hivnx8hi */
    case 4991:  /* vec_mask_store_lanesvnx64qivnx16qi */
    case 4990:  /* vec_mask_store_lanesvnx6dfvnx2df */
    case 4989:  /* vec_mask_store_lanesvnx12sfvnx4sf */
    case 4988:  /* vec_mask_store_lanesvnx24hfvnx8hf */
    case 4987:  /* vec_mask_store_lanesvnx24bfvnx8bf */
    case 4986:  /* vec_mask_store_lanesvnx6divnx2di */
    case 4985:  /* vec_mask_store_lanesvnx12sivnx4si */
    case 4984:  /* vec_mask_store_lanesvnx24hivnx8hi */
    case 4983:  /* vec_mask_store_lanesvnx48qivnx16qi */
    case 4982:  /* vec_mask_store_lanesvnx4dfvnx2df */
    case 4981:  /* vec_mask_store_lanesvnx8sfvnx4sf */
    case 4980:  /* vec_mask_store_lanesvnx16hfvnx8hf */
    case 4979:  /* vec_mask_store_lanesvnx16bfvnx8bf */
    case 4978:  /* vec_mask_store_lanesvnx4divnx2di */
    case 4977:  /* vec_mask_store_lanesvnx8sivnx4si */
    case 4976:  /* vec_mask_store_lanesvnx16hivnx8hi */
    case 4975:  /* vec_mask_store_lanesvnx32qivnx16qi */
    case 4974:  /* maskstorevnx2dfvnx2bi */
    case 4973:  /* maskstorevnx2divnx2bi */
    case 4972:  /* maskstorevnx2sfvnx2bi */
    case 4971:  /* maskstorevnx4sfvnx4bi */
    case 4970:  /* maskstorevnx2sivnx2bi */
    case 4969:  /* maskstorevnx4sivnx4bi */
    case 4968:  /* maskstorevnx2bfvnx2bi */
    case 4967:  /* maskstorevnx4bfvnx4bi */
    case 4966:  /* maskstorevnx8bfvnx8bi */
    case 4965:  /* maskstorevnx2hfvnx2bi */
    case 4964:  /* maskstorevnx4hfvnx4bi */
    case 4963:  /* maskstorevnx8hfvnx8bi */
    case 4962:  /* maskstorevnx2hivnx2bi */
    case 4961:  /* maskstorevnx4hivnx4bi */
    case 4960:  /* maskstorevnx8hivnx8bi */
    case 4959:  /* maskstorevnx2qivnx2bi */
    case 4958:  /* maskstorevnx4qivnx4bi */
    case 4957:  /* maskstorevnx8qivnx8bi */
    case 4956:  /* maskstorevnx16qivnx16bi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 4955:  /* *aarch64_sve_gather_prefetchvnx2divnx2di_uxtw */
    case 4954:  /* *aarch64_sve_gather_prefetchvnx4sivnx2di_uxtw */
    case 4953:  /* *aarch64_sve_gather_prefetchvnx8hivnx2di_uxtw */
    case 4952:  /* *aarch64_sve_gather_prefetchvnx16qivnx2di_uxtw */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 0), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 0), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 0), 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 0), 0, 5));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 0), 0, 6));
      ro[7] = *(ro_loc[7] = &XEXP (pat, 1));
      ro[8] = *(ro_loc[8] = &XEXP (pat, 2));
      ro[9] = *(ro_loc[9] = &XEXP (XVECEXP (XEXP (pat, 0), 0, 2), 1));
      break;

    case 4951:  /* *aarch64_sve_gather_prefetchvnx2divnx2di_sxtw */
    case 4950:  /* *aarch64_sve_gather_prefetchvnx4sivnx2di_sxtw */
    case 4949:  /* *aarch64_sve_gather_prefetchvnx8hivnx2di_sxtw */
    case 4948:  /* *aarch64_sve_gather_prefetchvnx16qivnx2di_sxtw */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 0), 0, 2), 0, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 0), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 0), 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 0), 0, 5));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 0), 0, 6));
      ro[7] = *(ro_loc[7] = &XEXP (pat, 1));
      ro[8] = *(ro_loc[8] = &XEXP (pat, 2));
      ro[9] = *(ro_loc[9] = &XVECEXP (XVECEXP (XEXP (pat, 0), 0, 2), 0, 0));
      break;

    case 4947:  /* aarch64_sve_gather_prefetchvnx2divnx2di */
    case 4946:  /* aarch64_sve_gather_prefetchvnx4sivnx2di */
    case 4945:  /* aarch64_sve_gather_prefetchvnx8hivnx2di */
    case 4944:  /* aarch64_sve_gather_prefetchvnx16qivnx2di */
    case 4943:  /* aarch64_sve_gather_prefetchvnx2divnx4si */
    case 4942:  /* aarch64_sve_gather_prefetchvnx4sivnx4si */
    case 4941:  /* aarch64_sve_gather_prefetchvnx8hivnx4si */
    case 4940:  /* aarch64_sve_gather_prefetchvnx16qivnx4si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 0), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 0), 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 0), 0, 5));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 0), 0, 6));
      ro[7] = *(ro_loc[7] = &XEXP (pat, 1));
      ro[8] = *(ro_loc[8] = &XEXP (pat, 2));
      break;

    case 4939:  /* aarch64_sve_prefetchvnx2di */
    case 4938:  /* aarch64_sve_prefetchvnx4si */
    case 4937:  /* aarch64_sve_prefetchvnx8hi */
    case 4936:  /* aarch64_sve_prefetchvnx16qi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 2));
      break;

    case 4935:  /* *aarch64_ldff1_gather_zero_extendvnx2divnx2si_uxtw */
    case 4934:  /* *aarch64_ldff1_gather_extendvnx2divnx2si_uxtw */
    case 4933:  /* *aarch64_ldff1_gather_zero_extendvnx2divnx2hi_uxtw */
    case 4932:  /* *aarch64_ldff1_gather_extendvnx2divnx2hi_uxtw */
    case 4931:  /* *aarch64_ldff1_gather_zero_extendvnx2divnx2qi_uxtw */
    case 4930:  /* *aarch64_ldff1_gather_extendvnx2divnx2qi_uxtw */
    case 4905:  /* *aarch64_gather_load_zero_extendvnx2divnx2si_uxtw */
    case 4904:  /* *aarch64_gather_load_extendvnx2divnx2si_uxtw */
    case 4903:  /* *aarch64_gather_load_zero_extendvnx2divnx2hi_uxtw */
    case 4902:  /* *aarch64_gather_load_extendvnx2divnx2hi_uxtw */
    case 4901:  /* *aarch64_gather_load_zero_extendvnx2divnx2qi_uxtw */
    case 4900:  /* *aarch64_gather_load_extendvnx2divnx2qi_uxtw */
    case 4899:  /* *aarch64_gather_load_zero_extendvnx2sivnx2hi_uxtw */
    case 4898:  /* *aarch64_gather_load_extendvnx2sivnx2hi_uxtw */
    case 4897:  /* *aarch64_gather_load_zero_extendvnx2sivnx2qi_uxtw */
    case 4896:  /* *aarch64_gather_load_extendvnx2sivnx2qi_uxtw */
    case 4895:  /* *aarch64_gather_load_zero_extendvnx2hivnx2qi_uxtw */
    case 4894:  /* *aarch64_gather_load_extendvnx2hivnx2qi_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 2), 1));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 4929:  /* *aarch64_ldff1_gather_zero_extendvnx2divnx2si_sxtw */
    case 4928:  /* *aarch64_ldff1_gather_extendvnx2divnx2si_sxtw */
    case 4927:  /* *aarch64_ldff1_gather_zero_extendvnx2divnx2hi_sxtw */
    case 4926:  /* *aarch64_ldff1_gather_extendvnx2divnx2hi_sxtw */
    case 4925:  /* *aarch64_ldff1_gather_zero_extendvnx2divnx2qi_sxtw */
    case 4924:  /* *aarch64_ldff1_gather_extendvnx2divnx2qi_sxtw */
    case 4893:  /* *aarch64_gather_load_zero_extendvnx2divnx2si_sxtw */
    case 4892:  /* *aarch64_gather_load_extendvnx2divnx2si_sxtw */
    case 4891:  /* *aarch64_gather_load_zero_extendvnx2divnx2hi_sxtw */
    case 4890:  /* *aarch64_gather_load_extendvnx2divnx2hi_sxtw */
    case 4889:  /* *aarch64_gather_load_zero_extendvnx2divnx2qi_sxtw */
    case 4888:  /* *aarch64_gather_load_extendvnx2divnx2qi_sxtw */
    case 4887:  /* *aarch64_gather_load_zero_extendvnx2sivnx2hi_sxtw */
    case 4886:  /* *aarch64_gather_load_extendvnx2sivnx2hi_sxtw */
    case 4885:  /* *aarch64_gather_load_zero_extendvnx2sivnx2qi_sxtw */
    case 4884:  /* *aarch64_gather_load_extendvnx2sivnx2qi_sxtw */
    case 4883:  /* *aarch64_gather_load_zero_extendvnx2hivnx2qi_sxtw */
    case 4882:  /* *aarch64_gather_load_extendvnx2hivnx2qi_sxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 2), 0, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[7] = *(ro_loc[7] = &XVECEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 2), 0, 0));
      break;

    case 4881:  /* *aarch64_gather_load_zero_extendvnx2divnx2si_uxtw_unpacked */
    case 4880:  /* *aarch64_gather_load_extendvnx2divnx2si_uxtw_unpacked */
    case 4879:  /* *aarch64_gather_load_zero_extendvnx2divnx2si_sxtw_unpacked */
    case 4878:  /* *aarch64_gather_load_extendvnx2divnx2si_sxtw_unpacked */
    case 4877:  /* *aarch64_gather_load_zero_extendvnx2divnx2hi_uxtw_unpacked */
    case 4876:  /* *aarch64_gather_load_extendvnx2divnx2hi_uxtw_unpacked */
    case 4875:  /* *aarch64_gather_load_zero_extendvnx2divnx2hi_sxtw_unpacked */
    case 4874:  /* *aarch64_gather_load_extendvnx2divnx2hi_sxtw_unpacked */
    case 4873:  /* *aarch64_gather_load_zero_extendvnx2divnx2qi_uxtw_unpacked */
    case 4872:  /* *aarch64_gather_load_extendvnx2divnx2qi_uxtw_unpacked */
    case 4871:  /* *aarch64_gather_load_zero_extendvnx2divnx2qi_sxtw_unpacked */
    case 4870:  /* *aarch64_gather_load_extendvnx2divnx2qi_sxtw_unpacked */
    case 4869:  /* *aarch64_gather_load_zero_extendvnx2sivnx2hi_uxtw_unpacked */
    case 4868:  /* *aarch64_gather_load_extendvnx2sivnx2hi_uxtw_unpacked */
    case 4867:  /* *aarch64_gather_load_zero_extendvnx2sivnx2hi_sxtw_unpacked */
    case 4866:  /* *aarch64_gather_load_extendvnx2sivnx2hi_sxtw_unpacked */
    case 4865:  /* *aarch64_gather_load_zero_extendvnx2sivnx2qi_uxtw_unpacked */
    case 4864:  /* *aarch64_gather_load_extendvnx2sivnx2qi_uxtw_unpacked */
    case 4863:  /* *aarch64_gather_load_zero_extendvnx2sivnx2qi_sxtw_unpacked */
    case 4862:  /* *aarch64_gather_load_extendvnx2sivnx2qi_sxtw_unpacked */
    case 4861:  /* *aarch64_gather_load_zero_extendvnx2hivnx2qi_uxtw_unpacked */
    case 4860:  /* *aarch64_gather_load_extendvnx2hivnx2qi_uxtw_unpacked */
    case 4859:  /* *aarch64_gather_load_zero_extendvnx2hivnx2qi_sxtw_unpacked */
    case 4858:  /* *aarch64_gather_load_extendvnx2hivnx2qi_sxtw_unpacked */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 2), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[7] = *(ro_loc[7] = &XVECEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 2), 0, 0));
      break;

    case 4923:  /* aarch64_ldff1_gather_zero_extendvnx2divnx2si */
    case 4922:  /* aarch64_ldff1_gather_extendvnx2divnx2si */
    case 4921:  /* aarch64_ldff1_gather_zero_extendvnx2divnx2hi */
    case 4920:  /* aarch64_ldff1_gather_extendvnx2divnx2hi */
    case 4919:  /* aarch64_ldff1_gather_zero_extendvnx2divnx2qi */
    case 4918:  /* aarch64_ldff1_gather_extendvnx2divnx2qi */
    case 4917:  /* aarch64_ldff1_gather_zero_extendvnx4sivnx4hi */
    case 4916:  /* aarch64_ldff1_gather_extendvnx4sivnx4hi */
    case 4915:  /* aarch64_ldff1_gather_zero_extendvnx4sivnx4qi */
    case 4914:  /* aarch64_ldff1_gather_extendvnx4sivnx4qi */
    case 4857:  /* aarch64_gather_load_zero_extendvnx2divnx2si */
    case 4856:  /* aarch64_gather_load_extendvnx2divnx2si */
    case 4855:  /* aarch64_gather_load_zero_extendvnx2divnx2hi */
    case 4854:  /* aarch64_gather_load_extendvnx2divnx2hi */
    case 4853:  /* aarch64_gather_load_zero_extendvnx2divnx2qi */
    case 4852:  /* aarch64_gather_load_extendvnx2divnx2qi */
    case 4851:  /* aarch64_gather_load_zero_extendvnx2sivnx2hi */
    case 4850:  /* aarch64_gather_load_extendvnx2sivnx2hi */
    case 4849:  /* aarch64_gather_load_zero_extendvnx2sivnx2qi */
    case 4848:  /* aarch64_gather_load_extendvnx2sivnx2qi */
    case 4847:  /* aarch64_gather_load_zero_extendvnx2hivnx2qi */
    case 4846:  /* aarch64_gather_load_extendvnx2hivnx2qi */
    case 4845:  /* aarch64_gather_load_zero_extendvnx4sivnx4hi */
    case 4844:  /* aarch64_gather_load_extendvnx4sivnx4hi */
    case 4843:  /* aarch64_gather_load_zero_extendvnx4sivnx4qi */
    case 4842:  /* aarch64_gather_load_extendvnx4sivnx4qi */
    case 4841:  /* aarch64_gather_load_zero_extendvnx4hivnx4qi */
    case 4840:  /* aarch64_gather_load_extendvnx4hivnx4qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 4913:  /* *aarch64_ldff1_gathervnx2df_uxtw */
    case 4912:  /* *aarch64_ldff1_gathervnx2di_uxtw */
    case 4839:  /* *mask_gather_loadvnx2dfvnx2di_uxtw */
    case 4838:  /* *mask_gather_loadvnx2divnx2di_uxtw */
    case 4837:  /* *mask_gather_loadvnx2sfvnx2di_uxtw */
    case 4836:  /* *mask_gather_loadvnx2sivnx2di_uxtw */
    case 4835:  /* *mask_gather_loadvnx2bfvnx2di_uxtw */
    case 4834:  /* *mask_gather_loadvnx2hfvnx2di_uxtw */
    case 4833:  /* *mask_gather_loadvnx2hivnx2di_uxtw */
    case 4832:  /* *mask_gather_loadvnx2qivnx2di_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      break;

    case 4911:  /* *aarch64_ldff1_gathervnx2df_sxtw */
    case 4910:  /* *aarch64_ldff1_gathervnx2di_sxtw */
    case 4831:  /* *mask_gather_loadvnx2dfvnx2di_sxtw */
    case 4830:  /* *mask_gather_loadvnx2divnx2di_sxtw */
    case 4829:  /* *mask_gather_loadvnx2sfvnx2di_sxtw */
    case 4828:  /* *mask_gather_loadvnx2sivnx2di_sxtw */
    case 4827:  /* *mask_gather_loadvnx2bfvnx2di_sxtw */
    case 4826:  /* *mask_gather_loadvnx2hfvnx2di_sxtw */
    case 4825:  /* *mask_gather_loadvnx2hivnx2di_sxtw */
    case 4824:  /* *mask_gather_loadvnx2qivnx2di_sxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 0));
      break;

    case 4823:  /* *mask_gather_loadvnx2dfvnx2di_uxtw_unpacked */
    case 4822:  /* *mask_gather_loadvnx2dfvnx2di_sxtw_unpacked */
    case 4821:  /* *mask_gather_loadvnx2divnx2di_uxtw_unpacked */
    case 4820:  /* *mask_gather_loadvnx2divnx2di_sxtw_unpacked */
    case 4819:  /* *mask_gather_loadvnx2sfvnx2di_uxtw_unpacked */
    case 4818:  /* *mask_gather_loadvnx2sfvnx2di_sxtw_unpacked */
    case 4817:  /* *mask_gather_loadvnx2sivnx2di_uxtw_unpacked */
    case 4816:  /* *mask_gather_loadvnx2sivnx2di_sxtw_unpacked */
    case 4815:  /* *mask_gather_loadvnx2bfvnx2di_uxtw_unpacked */
    case 4814:  /* *mask_gather_loadvnx2bfvnx2di_sxtw_unpacked */
    case 4813:  /* *mask_gather_loadvnx2hfvnx2di_uxtw_unpacked */
    case 4812:  /* *mask_gather_loadvnx2hfvnx2di_sxtw_unpacked */
    case 4811:  /* *mask_gather_loadvnx2hivnx2di_uxtw_unpacked */
    case 4810:  /* *mask_gather_loadvnx2hivnx2di_sxtw_unpacked */
    case 4809:  /* *mask_gather_loadvnx2qivnx2di_uxtw_unpacked */
    case 4808:  /* *mask_gather_loadvnx2qivnx2di_sxtw_unpacked */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0, 0));
      break;

    case 4909:  /* aarch64_ldff1_gathervnx2df */
    case 4908:  /* aarch64_ldff1_gathervnx2di */
    case 4907:  /* aarch64_ldff1_gathervnx4sf */
    case 4906:  /* aarch64_ldff1_gathervnx4si */
    case 4807:  /* mask_gather_loadvnx2dfvnx2di */
    case 4806:  /* mask_gather_loadvnx2divnx2di */
    case 4805:  /* mask_gather_loadvnx2sfvnx2di */
    case 4804:  /* mask_gather_loadvnx2sivnx2di */
    case 4803:  /* mask_gather_loadvnx2bfvnx2di */
    case 4802:  /* mask_gather_loadvnx2hfvnx2di */
    case 4801:  /* mask_gather_loadvnx2hivnx2di */
    case 4800:  /* mask_gather_loadvnx2qivnx2di */
    case 4799:  /* mask_gather_loadvnx4sfvnx4si */
    case 4798:  /* mask_gather_loadvnx4sivnx4si */
    case 4797:  /* mask_gather_loadvnx4bfvnx4si */
    case 4796:  /* mask_gather_loadvnx4hfvnx4si */
    case 4795:  /* mask_gather_loadvnx4hivnx4si */
    case 4794:  /* mask_gather_loadvnx4qivnx4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 4785:  /* aarch64_ldnf1_zero_extendvnx2divnx2si */
    case 4784:  /* aarch64_ldff1_zero_extendvnx2divnx2si */
    case 4783:  /* aarch64_ldnf1_extendvnx2divnx2si */
    case 4782:  /* aarch64_ldff1_extendvnx2divnx2si */
    case 4781:  /* aarch64_ldnf1_zero_extendvnx2divnx2hi */
    case 4780:  /* aarch64_ldff1_zero_extendvnx2divnx2hi */
    case 4779:  /* aarch64_ldnf1_extendvnx2divnx2hi */
    case 4778:  /* aarch64_ldff1_extendvnx2divnx2hi */
    case 4777:  /* aarch64_ldnf1_zero_extendvnx2divnx2qi */
    case 4776:  /* aarch64_ldff1_zero_extendvnx2divnx2qi */
    case 4775:  /* aarch64_ldnf1_extendvnx2divnx2qi */
    case 4774:  /* aarch64_ldff1_extendvnx2divnx2qi */
    case 4773:  /* aarch64_ldnf1_zero_extendvnx2sivnx2hi */
    case 4772:  /* aarch64_ldff1_zero_extendvnx2sivnx2hi */
    case 4771:  /* aarch64_ldnf1_extendvnx2sivnx2hi */
    case 4770:  /* aarch64_ldff1_extendvnx2sivnx2hi */
    case 4769:  /* aarch64_ldnf1_zero_extendvnx2sivnx2qi */
    case 4768:  /* aarch64_ldff1_zero_extendvnx2sivnx2qi */
    case 4767:  /* aarch64_ldnf1_extendvnx2sivnx2qi */
    case 4766:  /* aarch64_ldff1_extendvnx2sivnx2qi */
    case 4765:  /* aarch64_ldnf1_zero_extendvnx4sivnx4hi */
    case 4764:  /* aarch64_ldff1_zero_extendvnx4sivnx4hi */
    case 4763:  /* aarch64_ldnf1_extendvnx4sivnx4hi */
    case 4762:  /* aarch64_ldff1_extendvnx4sivnx4hi */
    case 4761:  /* aarch64_ldnf1_zero_extendvnx4sivnx4qi */
    case 4760:  /* aarch64_ldff1_zero_extendvnx4sivnx4qi */
    case 4759:  /* aarch64_ldnf1_extendvnx4sivnx4qi */
    case 4758:  /* aarch64_ldff1_extendvnx4sivnx4qi */
    case 4757:  /* aarch64_ldnf1_zero_extendvnx2hivnx2qi */
    case 4756:  /* aarch64_ldff1_zero_extendvnx2hivnx2qi */
    case 4755:  /* aarch64_ldnf1_extendvnx2hivnx2qi */
    case 4754:  /* aarch64_ldff1_extendvnx2hivnx2qi */
    case 4753:  /* aarch64_ldnf1_zero_extendvnx4hivnx4qi */
    case 4752:  /* aarch64_ldff1_zero_extendvnx4hivnx4qi */
    case 4751:  /* aarch64_ldnf1_extendvnx4hivnx4qi */
    case 4750:  /* aarch64_ldff1_extendvnx4hivnx4qi */
    case 4749:  /* aarch64_ldnf1_zero_extendvnx8hivnx8qi */
    case 4748:  /* aarch64_ldff1_zero_extendvnx8hivnx8qi */
    case 4747:  /* aarch64_ldnf1_extendvnx8hivnx8qi */
    case 4746:  /* aarch64_ldff1_extendvnx8hivnx8qi */
    case 4729:  /* aarch64_load_zero_extendvnx2divnx2si */
    case 4728:  /* aarch64_load_x_zero_extendvnx2divnx2si */
    case 4727:  /* aarch64_load_extendvnx2divnx2si */
    case 4726:  /* aarch64_load_x_extendvnx2divnx2si */
    case 4725:  /* aarch64_load_zero_extendvnx2divnx2hi */
    case 4724:  /* aarch64_load_x_zero_extendvnx2divnx2hi */
    case 4723:  /* aarch64_load_extendvnx2divnx2hi */
    case 4722:  /* aarch64_load_x_extendvnx2divnx2hi */
    case 4721:  /* aarch64_load_zero_extendvnx2divnx2qi */
    case 4720:  /* aarch64_load_x_zero_extendvnx2divnx2qi */
    case 4719:  /* aarch64_load_extendvnx2divnx2qi */
    case 4718:  /* aarch64_load_x_extendvnx2divnx2qi */
    case 4717:  /* aarch64_load_zero_extendvnx2sivnx2hi */
    case 4716:  /* aarch64_load_x_zero_extendvnx2sivnx2hi */
    case 4715:  /* aarch64_load_extendvnx2sivnx2hi */
    case 4714:  /* aarch64_load_x_extendvnx2sivnx2hi */
    case 4713:  /* aarch64_load_zero_extendvnx2sivnx2qi */
    case 4712:  /* aarch64_load_x_zero_extendvnx2sivnx2qi */
    case 4711:  /* aarch64_load_extendvnx2sivnx2qi */
    case 4710:  /* aarch64_load_x_extendvnx2sivnx2qi */
    case 4709:  /* aarch64_load_zero_extendvnx4sivnx4hi */
    case 4708:  /* aarch64_load_x_zero_extendvnx4sivnx4hi */
    case 4707:  /* aarch64_load_extendvnx4sivnx4hi */
    case 4706:  /* aarch64_load_x_extendvnx4sivnx4hi */
    case 4705:  /* aarch64_load_zero_extendvnx4sivnx4qi */
    case 4704:  /* aarch64_load_x_zero_extendvnx4sivnx4qi */
    case 4703:  /* aarch64_load_extendvnx4sivnx4qi */
    case 4702:  /* aarch64_load_x_extendvnx4sivnx4qi */
    case 4701:  /* aarch64_load_zero_extendvnx2hivnx2qi */
    case 4700:  /* aarch64_load_x_zero_extendvnx2hivnx2qi */
    case 4699:  /* aarch64_load_extendvnx2hivnx2qi */
    case 4698:  /* aarch64_load_x_extendvnx2hivnx2qi */
    case 4697:  /* aarch64_load_zero_extendvnx4hivnx4qi */
    case 4696:  /* aarch64_load_x_zero_extendvnx4hivnx4qi */
    case 4695:  /* aarch64_load_extendvnx4hivnx4qi */
    case 4694:  /* aarch64_load_x_extendvnx4hivnx4qi */
    case 4693:  /* aarch64_load_zero_extendvnx8hivnx8qi */
    case 4692:  /* aarch64_load_x_zero_extendvnx8hivnx8qi */
    case 4691:  /* aarch64_load_extendvnx8hivnx8qi */
    case 4690:  /* aarch64_load_x_extendvnx8hivnx8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 4644:  /* *aarch64_rdffr_z_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1);
      recog_data.dup_num[2] = 1;
      break;

    case 4645:  /* *aarch64_rdffr_cc */
    case 4643:  /* *aarch64_rdffr_ptest */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4642:  /* *aarch64_rdffr_z_ptest */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1);
      recog_data.dup_num[1] = 1;
      break;

    case 4641:  /* aarch64_rdffr_z */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4637:  /* aarch64_wrffr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4636:  /* *aarch64_sve_ptruevnx2bi_ptest */
    case 4635:  /* *aarch64_sve_ptruevnx4bi_ptest */
    case 4634:  /* *aarch64_sve_ptruevnx8bi_ptest */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 0), 0, 1));
      break;

    case 4633:  /* *aarch64_sve_ptruevnx16bi_ptest */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 0, 1));
      break;

    case 4632:  /* *aarch64_sve_ptruevnx2bi_cc */
    case 4631:  /* *aarch64_sve_ptruevnx4bi_cc */
    case 4630:  /* *aarch64_sve_ptruevnx8bi_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4629:  /* *aarch64_sve_ptruevnx16bi_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4469:  /* *dmb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4468:  /* aarch64_store_exclusive_pair */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      break;

    case 4467:  /* aarch64_store_exclusivedi */
    case 4466:  /* aarch64_store_exclusivesi */
    case 4465:  /* aarch64_store_exclusivehi */
    case 4464:  /* aarch64_store_exclusiveqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      break;

    case 4463:  /* aarch64_load_exclusive_pair */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4450:  /* atomic_nand_fetchdi */
    case 4449:  /* atomic_nand_fetchsi */
    case 4448:  /* atomic_nand_fetchhi */
    case 4447:  /* atomic_nand_fetchqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 4446:  /* aarch64_atomic_and_fetchdi */
    case 4445:  /* aarch64_atomic_xor_fetchdi */
    case 4444:  /* aarch64_atomic_or_fetchdi */
    case 4443:  /* aarch64_atomic_sub_fetchdi */
    case 4442:  /* aarch64_atomic_add_fetchdi */
    case 4441:  /* aarch64_atomic_and_fetchsi */
    case 4440:  /* aarch64_atomic_xor_fetchsi */
    case 4439:  /* aarch64_atomic_or_fetchsi */
    case 4438:  /* aarch64_atomic_sub_fetchsi */
    case 4437:  /* aarch64_atomic_add_fetchsi */
    case 4436:  /* aarch64_atomic_and_fetchhi */
    case 4435:  /* aarch64_atomic_xor_fetchhi */
    case 4434:  /* aarch64_atomic_or_fetchhi */
    case 4433:  /* aarch64_atomic_sub_fetchhi */
    case 4432:  /* aarch64_atomic_add_fetchhi */
    case 4431:  /* aarch64_atomic_and_fetchqi */
    case 4430:  /* aarch64_atomic_xor_fetchqi */
    case 4429:  /* aarch64_atomic_or_fetchqi */
    case 4428:  /* aarch64_atomic_sub_fetchqi */
    case 4427:  /* aarch64_atomic_add_fetchqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 4426:  /* atomic_fetch_nanddi */
    case 4425:  /* atomic_fetch_nandsi */
    case 4424:  /* atomic_fetch_nandhi */
    case 4423:  /* atomic_fetch_nandqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 4422:  /* aarch64_atomic_fetch_adddi_lse */
    case 4421:  /* aarch64_atomic_fetch_xordi_lse */
    case 4420:  /* aarch64_atomic_fetch_bicdi_lse */
    case 4419:  /* aarch64_atomic_fetch_iordi_lse */
    case 4418:  /* aarch64_atomic_fetch_addsi_lse */
    case 4417:  /* aarch64_atomic_fetch_xorsi_lse */
    case 4416:  /* aarch64_atomic_fetch_bicsi_lse */
    case 4415:  /* aarch64_atomic_fetch_iorsi_lse */
    case 4414:  /* aarch64_atomic_fetch_addhi_lse */
    case 4413:  /* aarch64_atomic_fetch_xorhi_lse */
    case 4412:  /* aarch64_atomic_fetch_bichi_lse */
    case 4411:  /* aarch64_atomic_fetch_iorhi_lse */
    case 4410:  /* aarch64_atomic_fetch_addqi_lse */
    case 4409:  /* aarch64_atomic_fetch_xorqi_lse */
    case 4408:  /* aarch64_atomic_fetch_bicqi_lse */
    case 4407:  /* aarch64_atomic_fetch_iorqi_lse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 4406:  /* aarch64_atomic_fetch_anddi */
    case 4405:  /* aarch64_atomic_fetch_xordi */
    case 4404:  /* aarch64_atomic_fetch_ordi */
    case 4403:  /* aarch64_atomic_fetch_subdi */
    case 4402:  /* aarch64_atomic_fetch_adddi */
    case 4401:  /* aarch64_atomic_fetch_andsi */
    case 4400:  /* aarch64_atomic_fetch_xorsi */
    case 4399:  /* aarch64_atomic_fetch_orsi */
    case 4398:  /* aarch64_atomic_fetch_subsi */
    case 4397:  /* aarch64_atomic_fetch_addsi */
    case 4396:  /* aarch64_atomic_fetch_andhi */
    case 4395:  /* aarch64_atomic_fetch_xorhi */
    case 4394:  /* aarch64_atomic_fetch_orhi */
    case 4393:  /* aarch64_atomic_fetch_subhi */
    case 4392:  /* aarch64_atomic_fetch_addhi */
    case 4391:  /* aarch64_atomic_fetch_andqi */
    case 4390:  /* aarch64_atomic_fetch_xorqi */
    case 4389:  /* aarch64_atomic_fetch_orqi */
    case 4388:  /* aarch64_atomic_fetch_subqi */
    case 4387:  /* aarch64_atomic_fetch_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 4386:  /* atomic_nanddi */
    case 4385:  /* atomic_nandsi */
    case 4384:  /* atomic_nandhi */
    case 4383:  /* atomic_nandqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4382:  /* aarch64_atomic_adddi_lse */
    case 4381:  /* aarch64_atomic_xordi_lse */
    case 4380:  /* aarch64_atomic_bicdi_lse */
    case 4379:  /* aarch64_atomic_iordi_lse */
    case 4378:  /* aarch64_atomic_addsi_lse */
    case 4377:  /* aarch64_atomic_xorsi_lse */
    case 4376:  /* aarch64_atomic_bicsi_lse */
    case 4375:  /* aarch64_atomic_iorsi_lse */
    case 4374:  /* aarch64_atomic_addhi_lse */
    case 4373:  /* aarch64_atomic_xorhi_lse */
    case 4372:  /* aarch64_atomic_bichi_lse */
    case 4371:  /* aarch64_atomic_iorhi_lse */
    case 4370:  /* aarch64_atomic_addqi_lse */
    case 4369:  /* aarch64_atomic_xorqi_lse */
    case 4368:  /* aarch64_atomic_bicqi_lse */
    case 4367:  /* aarch64_atomic_iorqi_lse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4366:  /* aarch64_atomic_anddi */
    case 4365:  /* aarch64_atomic_xordi */
    case 4364:  /* aarch64_atomic_ordi */
    case 4363:  /* aarch64_atomic_subdi */
    case 4362:  /* aarch64_atomic_adddi */
    case 4361:  /* aarch64_atomic_andsi */
    case 4360:  /* aarch64_atomic_xorsi */
    case 4359:  /* aarch64_atomic_orsi */
    case 4358:  /* aarch64_atomic_subsi */
    case 4357:  /* aarch64_atomic_addsi */
    case 4356:  /* aarch64_atomic_andhi */
    case 4355:  /* aarch64_atomic_xorhi */
    case 4354:  /* aarch64_atomic_orhi */
    case 4353:  /* aarch64_atomic_subhi */
    case 4352:  /* aarch64_atomic_addhi */
    case 4351:  /* aarch64_atomic_andqi */
    case 4350:  /* aarch64_atomic_xorqi */
    case 4349:  /* aarch64_atomic_orqi */
    case 4348:  /* aarch64_atomic_subqi */
    case 4347:  /* aarch64_atomic_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4346:  /* aarch64_atomic_exchangedi_lse */
    case 4345:  /* aarch64_atomic_exchangesi_lse */
    case 4344:  /* aarch64_atomic_exchangehi_lse */
    case 4343:  /* aarch64_atomic_exchangeqi_lse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4342:  /* aarch64_atomic_exchangedi */
    case 4341:  /* aarch64_atomic_exchangesi */
    case 4340:  /* aarch64_atomic_exchangehi */
    case 4339:  /* aarch64_atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4338:  /* aarch64_compare_and_swapti_lse */
    case 4337:  /* aarch64_compare_and_swapdi_lse */
    case 4336:  /* aarch64_compare_and_swapsi_lse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 0;
      break;

    case 4335:  /* aarch64_compare_and_swaphi_lse */
    case 4334:  /* aarch64_compare_and_swapqi_lse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 0;
      break;

    case 4333:  /* aarch64_compare_and_swapti */
    case 4332:  /* aarch64_compare_and_swapdi */
    case 4331:  /* aarch64_compare_and_swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4330:  /* aarch64_compare_and_swaphi */
    case 4329:  /* aarch64_compare_and_swapqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4293:  /* aarch64_simd_fmlslq_lane_highv4sf */
    case 4291:  /* aarch64_simd_fmlslq_lane_lowv4sf */
    case 4289:  /* aarch64_simd_fmlsl_laneq_highv2sf */
    case 4287:  /* aarch64_simd_fmlsl_laneq_lowv2sf */
    case 4285:  /* aarch64_simd_fmlslq_laneq_highv4sf */
    case 4283:  /* aarch64_simd_fmlslq_laneq_lowv4sf */
    case 4281:  /* aarch64_simd_fmlsl_lane_highv2sf */
    case 4279:  /* aarch64_simd_fmlsl_lane_lowv2sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0, 0));
      break;

    case 4292:  /* aarch64_simd_fmlalq_lane_highv4sf */
    case 4290:  /* aarch64_simd_fmlalq_lane_lowv4sf */
    case 4288:  /* aarch64_simd_fmlal_laneq_highv2sf */
    case 4286:  /* aarch64_simd_fmlal_laneq_lowv2sf */
    case 4284:  /* aarch64_simd_fmlalq_laneq_highv4sf */
    case 4282:  /* aarch64_simd_fmlalq_laneq_lowv4sf */
    case 4280:  /* aarch64_simd_fmlal_lane_highv2sf */
    case 4278:  /* aarch64_simd_fmlal_lane_lowv2sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0, 0));
      break;

    case 4277:  /* aarch64_simd_fmlslq_highv4sf */
    case 4276:  /* aarch64_simd_fmlsl_highv2sf */
    case 4273:  /* aarch64_simd_fmlslq_lowv4sf */
    case 4272:  /* aarch64_simd_fmlsl_lowv2sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      break;

    case 4275:  /* aarch64_simd_fmlalq_highv4sf */
    case 4274:  /* aarch64_simd_fmlal_highv2sf */
    case 4271:  /* aarch64_simd_fmlalq_lowv4sf */
    case 4270:  /* aarch64_simd_fmlal_lowv2sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      break;

    case 9963:  /* *aarch64_sve2_aesd_fused */
    case 9962:  /* *aarch64_sve2_aese_fused */
    case 4234:  /* *aarch64_crypto_aesd_fused */
    case 4233:  /* *aarch64_crypto_aese_fused */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1));
      break;

    case 9959:  /* aarch64_sve2_aesd */
    case 9958:  /* aarch64_sve2_aese */
    case 4230:  /* aarch64_crypto_aesdv16qi */
    case 4229:  /* aarch64_crypto_aesev16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 3433:  /* aarch64_cmtstdi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 3414:  /* aarch64_cmgtudi */
    case 3413:  /* aarch64_cmgeudi */
    case 3412:  /* aarch64_cmleudi */
    case 3411:  /* aarch64_cmltudi */
    case 3377:  /* aarch64_cmgtdi */
    case 3376:  /* aarch64_cmgedi */
    case 3375:  /* aarch64_cmeqdi */
    case 3374:  /* aarch64_cmledi */
    case 3373:  /* aarch64_cmltdi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 3122:  /* aarch64_ushll2v4si_internal */
    case 3121:  /* aarch64_sshll2v4si_internal */
    case 3120:  /* aarch64_ushll2v8hi_internal */
    case 3119:  /* aarch64_sshll2v8hi_internal */
    case 3118:  /* aarch64_ushll2v16qi_internal */
    case 3117:  /* aarch64_sshll2v16qi_internal */
    case 3116:  /* aarch64_ushllv4si_internal */
    case 3115:  /* aarch64_sshllv4si_internal */
    case 3114:  /* aarch64_ushllv8hi_internal */
    case 3113:  /* aarch64_sshllv8hi_internal */
    case 3112:  /* aarch64_ushllv16qi_internal */
    case 3111:  /* aarch64_sshllv16qi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3034:  /* aarch64_sqdmull2_nv4si_internal */
    case 3033:  /* aarch64_sqdmull2_nv8hi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 3032:  /* aarch64_sqdmull2_laneqv4si_internal */
    case 3031:  /* aarch64_sqdmull2_laneqv8hi_internal */
    case 3030:  /* aarch64_sqdmull2_lanev4si_internal */
    case 3029:  /* aarch64_sqdmull2_lanev8hi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 3028:  /* aarch64_sqdmull2v4si_internal */
    case 3027:  /* aarch64_sqdmull2v8hi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3026:  /* aarch64_sqdmull_nv2si */
    case 3025:  /* aarch64_sqdmull_nv4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      break;

    case 3024:  /* aarch64_sqdmull_laneqsi */
    case 3023:  /* aarch64_sqdmull_laneqhi */
    case 3022:  /* aarch64_sqdmull_lanesi */
    case 3021:  /* aarch64_sqdmull_lanehi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0, 0));
      break;

    case 3020:  /* aarch64_sqdmull_laneqv2si */
    case 3019:  /* aarch64_sqdmull_laneqv4hi */
    case 3018:  /* aarch64_sqdmull_lanev2si */
    case 3017:  /* aarch64_sqdmull_lanev4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 1), 0, 0));
      break;

    case 3506:  /* aarch64_facgtdf */
    case 3505:  /* aarch64_facgedf */
    case 3504:  /* aarch64_facledf */
    case 3503:  /* aarch64_facltdf */
    case 3502:  /* aarch64_facgtsf */
    case 3501:  /* aarch64_facgesf */
    case 3500:  /* aarch64_faclesf */
    case 3499:  /* aarch64_facltsf */
    case 3498:  /* aarch64_facgthf */
    case 3497:  /* aarch64_facgehf */
    case 3496:  /* aarch64_faclehf */
    case 3495:  /* aarch64_faclthf */
    case 3494:  /* aarch64_facgtv2df */
    case 3493:  /* aarch64_facgev2df */
    case 3492:  /* aarch64_faclev2df */
    case 3491:  /* aarch64_facltv2df */
    case 3490:  /* aarch64_facgtv4sf */
    case 3489:  /* aarch64_facgev4sf */
    case 3488:  /* aarch64_faclev4sf */
    case 3487:  /* aarch64_facltv4sf */
    case 3486:  /* aarch64_facgtv2sf */
    case 3485:  /* aarch64_facgev2sf */
    case 3484:  /* aarch64_faclev2sf */
    case 3483:  /* aarch64_facltv2sf */
    case 3482:  /* aarch64_facgtv8hf */
    case 3481:  /* aarch64_facgev8hf */
    case 3480:  /* aarch64_faclev8hf */
    case 3479:  /* aarch64_facltv8hf */
    case 3478:  /* aarch64_facgtv4hf */
    case 3477:  /* aarch64_facgev4hf */
    case 3476:  /* aarch64_faclev4hf */
    case 3475:  /* aarch64_facltv4hf */
    case 3016:  /* aarch64_sqdmullsi */
    case 3015:  /* aarch64_sqdmullhi */
    case 3014:  /* aarch64_sqdmullv2si */
    case 3013:  /* aarch64_sqdmullv4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 3012:  /* aarch64_sqdmlal2_nv4si_internal */
    case 3011:  /* aarch64_sqdmlal2_nv8hi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1));
      break;

    case 3010:  /* aarch64_sqdmlsl2_nv4si_internal */
    case 3009:  /* aarch64_sqdmlsl2_nv8hi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1));
      break;

    case 3008:  /* aarch64_sqdmlal2_laneqv4si_internal */
    case 3007:  /* aarch64_sqdmlal2_laneqv8hi_internal */
    case 3004:  /* aarch64_sqdmlal2_lanev4si_internal */
    case 3003:  /* aarch64_sqdmlal2_lanev8hi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1));
      break;

    case 3006:  /* aarch64_sqdmlsl2_laneqv4si_internal */
    case 3005:  /* aarch64_sqdmlsl2_laneqv8hi_internal */
    case 3002:  /* aarch64_sqdmlsl2_lanev4si_internal */
    case 3001:  /* aarch64_sqdmlsl2_lanev8hi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1));
      break;

    case 3000:  /* aarch64_sqdmlsl2v4si_internal */
    case 2999:  /* aarch64_sqdmlsl2v8hi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 1);
      recog_data.dup_num[0] = 4;
      break;

    case 2998:  /* aarch64_sqdmlal2v4si_internal */
    case 2997:  /* aarch64_sqdmlal2v8hi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 1);
      recog_data.dup_num[0] = 4;
      break;

    case 2996:  /* aarch64_sqdmlal_nv2si */
    case 2995:  /* aarch64_sqdmlal_nv4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      break;

    case 2994:  /* aarch64_sqdmlsl_nv2si */
    case 2993:  /* aarch64_sqdmlsl_nv4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      break;

    case 2992:  /* aarch64_sqdmlsl_laneqsi */
    case 2991:  /* aarch64_sqdmlsl_laneqhi */
    case 2988:  /* aarch64_sqdmlsl_lanesi */
    case 2987:  /* aarch64_sqdmlsl_lanehi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 1), 0, 0));
      break;

    case 2990:  /* aarch64_sqdmlal_laneqsi */
    case 2989:  /* aarch64_sqdmlal_laneqhi */
    case 2986:  /* aarch64_sqdmlal_lanesi */
    case 2985:  /* aarch64_sqdmlal_lanehi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 1), 0, 0));
      break;

    case 2982:  /* aarch64_sqdmlsl_laneqv2si */
    case 2981:  /* aarch64_sqdmlsl_laneqv4hi */
    case 2980:  /* aarch64_sqdmlsl_lanev2si */
    case 2979:  /* aarch64_sqdmlsl_lanev4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0), 1), 0, 0));
      break;

    case 2984:  /* aarch64_sqdmlal_laneqv2si */
    case 2983:  /* aarch64_sqdmlal_laneqv4hi */
    case 2978:  /* aarch64_sqdmlal_lanev2si */
    case 2977:  /* aarch64_sqdmlal_lanev4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0), 1), 0, 0));
      break;

    case 2976:  /* aarch64_sqdmlslsi */
    case 2975:  /* aarch64_sqdmlslhi */
    case 2974:  /* aarch64_sqdmlslv2si */
    case 2973:  /* aarch64_sqdmlslv4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      break;

    case 2972:  /* aarch64_sqdmlalsi */
    case 2971:  /* aarch64_sqdmlalhi */
    case 2970:  /* aarch64_sqdmlalv2si */
    case 2969:  /* aarch64_sqdmlalv4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 2968:  /* aarch64_sqrdmlsh_laneqsi */
    case 2967:  /* aarch64_sqrdmlah_laneqsi */
    case 2966:  /* aarch64_sqrdmlsh_laneqhi */
    case 2965:  /* aarch64_sqrdmlah_laneqhi */
    case 2964:  /* aarch64_sqrdmlsh_laneqv4si */
    case 2963:  /* aarch64_sqrdmlah_laneqv4si */
    case 2962:  /* aarch64_sqrdmlsh_laneqv2si */
    case 2961:  /* aarch64_sqrdmlah_laneqv2si */
    case 2960:  /* aarch64_sqrdmlsh_laneqv8hi */
    case 2959:  /* aarch64_sqrdmlah_laneqv8hi */
    case 2958:  /* aarch64_sqrdmlsh_laneqv4hi */
    case 2957:  /* aarch64_sqrdmlah_laneqv4hi */
    case 2956:  /* aarch64_sqrdmlsh_lanesi */
    case 2955:  /* aarch64_sqrdmlah_lanesi */
    case 2954:  /* aarch64_sqrdmlsh_lanehi */
    case 2953:  /* aarch64_sqrdmlah_lanehi */
    case 2952:  /* aarch64_sqrdmlsh_lanev4si */
    case 2951:  /* aarch64_sqrdmlah_lanev4si */
    case 2950:  /* aarch64_sqrdmlsh_lanev2si */
    case 2949:  /* aarch64_sqrdmlah_lanev2si */
    case 2948:  /* aarch64_sqrdmlsh_lanev8hi */
    case 2947:  /* aarch64_sqrdmlah_lanev8hi */
    case 2946:  /* aarch64_sqrdmlsh_lanev4hi */
    case 2945:  /* aarch64_sqrdmlah_lanev4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0, 0));
      break;

    case 2860:  /* aarch64_sqmovunv2di_insn_be */
    case 2859:  /* aarch64_sqmovunv4si_insn_be */
    case 2858:  /* aarch64_sqmovunv8hi_insn_be */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 2857:  /* aarch64_sqmovunv2di_insn_le */
    case 2856:  /* aarch64_sqmovunv4si_insn_le */
    case 2855:  /* aarch64_sqmovunv8hi_insn_le */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2932:  /* aarch64_sqrdmulh_laneqsi */
    case 2931:  /* aarch64_sqdmulh_laneqsi */
    case 2930:  /* aarch64_sqrdmulh_laneqhi */
    case 2929:  /* aarch64_sqdmulh_laneqhi */
    case 2928:  /* aarch64_sqrdmulh_lanesi */
    case 2927:  /* aarch64_sqdmulh_lanesi */
    case 2926:  /* aarch64_sqrdmulh_lanehi */
    case 2925:  /* aarch64_sqdmulh_lanehi */
    case 2924:  /* aarch64_sqrdmulh_laneqv4si */
    case 2923:  /* aarch64_sqdmulh_laneqv4si */
    case 2922:  /* aarch64_sqrdmulh_laneqv2si */
    case 2921:  /* aarch64_sqdmulh_laneqv2si */
    case 2920:  /* aarch64_sqrdmulh_laneqv8hi */
    case 2919:  /* aarch64_sqdmulh_laneqv8hi */
    case 2918:  /* aarch64_sqrdmulh_laneqv4hi */
    case 2917:  /* aarch64_sqdmulh_laneqv4hi */
    case 2916:  /* aarch64_sqrdmulh_lanev4si */
    case 2915:  /* aarch64_sqdmulh_lanev4si */
    case 2914:  /* aarch64_sqrdmulh_lanev2si */
    case 2913:  /* aarch64_sqdmulh_lanev2si */
    case 2912:  /* aarch64_sqrdmulh_lanev8hi */
    case 2911:  /* aarch64_sqdmulh_lanev8hi */
    case 2910:  /* aarch64_sqrdmulh_lanev4hi */
    case 2909:  /* aarch64_sqdmulh_lanev4hi */
    case 2755:  /* *aarch64_vgetfmulxv2df */
    case 2754:  /* *aarch64_vgetfmulxv4sf */
    case 2753:  /* *aarch64_vgetfmulxv2sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0, 0));
      break;

    case 2747:  /* *aarch64_mulx_eltv2df */
    case 2746:  /* *aarch64_mulx_eltv4sf */
    case 2745:  /* *aarch64_mulx_eltv2sf */
    case 2744:  /* *aarch64_mulx_elt_to_64v4sf */
    case 2743:  /* *aarch64_mulx_elt_to_128v2sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 1), 0, 0));
      break;

    case 2734:  /* aarch64_pmull_hiv16qi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2484:  /* aarch64_simd_bsldi_alt */
    case 2482:  /* *aarch64_simd_bslv2di_alt */
    case 2481:  /* *aarch64_simd_bslv4si_alt */
    case 2480:  /* *aarch64_simd_bslv2si_alt */
    case 2479:  /* *aarch64_simd_bslv8hi_alt */
    case 2478:  /* *aarch64_simd_bslv4hi_alt */
    case 2477:  /* *aarch64_simd_bslv16qi_alt */
    case 2476:  /* *aarch64_simd_bslv8qi_alt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 2483:  /* aarch64_simd_bsldi_internal */
    case 2475:  /* aarch64_simd_bslv2di_internal */
    case 2474:  /* aarch64_simd_bslv4si_internal */
    case 2473:  /* aarch64_simd_bslv2si_internal */
    case 2472:  /* aarch64_simd_bslv8hi_internal */
    case 2471:  /* aarch64_simd_bslv4hi_internal */
    case 2470:  /* aarch64_simd_bslv16qi_internal */
    case 2469:  /* aarch64_simd_bslv8qi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2866:  /* aarch64_sqxtun2v2di_be */
    case 2865:  /* aarch64_sqxtun2v4si_be */
    case 2864:  /* aarch64_sqxtun2v8hi_be */
    case 2328:  /* aarch64_float_trunc_rodd_hi_v4sf_be */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 2288:  /* *aarch64_fcvtuv2dfv2di2_mult */
    case 2287:  /* *aarch64_fcvtv2dfv2di2_mult */
    case 2286:  /* *aarch64_fcvtuv4sfv4si2_mult */
    case 2285:  /* *aarch64_fcvtv4sfv4si2_mult */
    case 2284:  /* *aarch64_fcvtuv2sfv2si2_mult */
    case 2283:  /* *aarch64_fcvtv2sfv2si2_mult */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 1));
      break;

    case 2183:  /* *aarch64_fnma4_elt_to_64v2df */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2182:  /* *aarch64_fnma4_elt_from_dupv2df */
    case 2181:  /* *aarch64_fnma4_elt_from_dupv4sf */
    case 2180:  /* *aarch64_fnma4_elt_from_dupv2sf */
    case 2179:  /* *aarch64_fnma4_elt_from_dupv8hf */
    case 2178:  /* *aarch64_fnma4_elt_from_dupv4hf */
    case 2177:  /* *aarch64_fnma4_elt_from_dupv4si */
    case 2176:  /* *aarch64_fnma4_elt_from_dupv2si */
    case 2175:  /* *aarch64_fnma4_elt_from_dupv8hi */
    case 2174:  /* *aarch64_fnma4_elt_from_dupv4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2173:  /* *aarch64_fnma4_elt_to_64v4sf */
    case 2172:  /* *aarch64_fnma4_elt_to_128v2sf */
    case 2171:  /* *aarch64_fnma4_eltv2df */
    case 2170:  /* *aarch64_fnma4_eltv4sf */
    case 2169:  /* *aarch64_fnma4_eltv2sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2163:  /* *aarch64_fma4_elt_to_64v2df */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2168:  /* fnmav2df4 */
    case 2167:  /* fnmav4sf4 */
    case 2166:  /* fnmav2sf4 */
    case 2165:  /* fnmav8hf4 */
    case 2164:  /* fnmav4hf4 */
    case 2162:  /* *aarch64_fma4_elt_from_dupv2df */
    case 2161:  /* *aarch64_fma4_elt_from_dupv4sf */
    case 2160:  /* *aarch64_fma4_elt_from_dupv2sf */
    case 2159:  /* *aarch64_fma4_elt_from_dupv8hf */
    case 2158:  /* *aarch64_fma4_elt_from_dupv4hf */
    case 2157:  /* *aarch64_fma4_elt_from_dupv4si */
    case 2156:  /* *aarch64_fma4_elt_from_dupv2si */
    case 2155:  /* *aarch64_fma4_elt_from_dupv8hi */
    case 2154:  /* *aarch64_fma4_elt_from_dupv4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2153:  /* *aarch64_fma4_elt_to_64v4sf */
    case 2152:  /* *aarch64_fma4_elt_to_128v2sf */
    case 2151:  /* *aarch64_fma4_eltv2df */
    case 2150:  /* *aarch64_fma4_eltv4sf */
    case 2149:  /* *aarch64_fma4_eltv2sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2113:  /* aarch64_umlsl_hi_laneqv4si_insn */
    case 2112:  /* aarch64_smlsl_hi_laneqv4si_insn */
    case 2111:  /* aarch64_umlsl_hi_laneqv8hi_insn */
    case 2110:  /* aarch64_smlsl_hi_laneqv8hi_insn */
    case 2109:  /* aarch64_umlsl_hi_lanev4si_insn */
    case 2108:  /* aarch64_smlsl_hi_lanev4si_insn */
    case 2107:  /* aarch64_umlsl_hi_lanev8hi_insn */
    case 2106:  /* aarch64_smlsl_hi_lanev8hi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 1), 0, 0));
      break;

    case 2105:  /* aarch64_vec_umlsl_laneq_v2si */
    case 2104:  /* aarch64_vec_smlsl_laneq_v2si */
    case 2103:  /* aarch64_vec_umlsl_lane_v2si */
    case 2102:  /* aarch64_vec_smlsl_lane_v2si */
    case 2101:  /* aarch64_vec_umlsl_laneq_v4hi */
    case 2100:  /* aarch64_vec_smlsl_laneq_v4hi */
    case 2099:  /* aarch64_vec_umlsl_lane_v4hi */
    case 2098:  /* aarch64_vec_smlsl_lane_v4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 1), 0, 0));
      break;

    case 2097:  /* aarch64_umlal_hi_laneqv4si_insn */
    case 2096:  /* aarch64_smlal_hi_laneqv4si_insn */
    case 2095:  /* aarch64_umlal_hi_laneqv8hi_insn */
    case 2094:  /* aarch64_smlal_hi_laneqv8hi_insn */
    case 2093:  /* aarch64_umlal_hi_lanev4si_insn */
    case 2092:  /* aarch64_smlal_hi_lanev4si_insn */
    case 2091:  /* aarch64_umlal_hi_lanev8hi_insn */
    case 2090:  /* aarch64_smlal_hi_lanev8hi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 1), 0, 0));
      break;

    case 2089:  /* aarch64_vec_umlal_laneq_v2si */
    case 2088:  /* aarch64_vec_smlal_laneq_v2si */
    case 2087:  /* aarch64_vec_umlal_lane_v2si */
    case 2086:  /* aarch64_vec_smlal_lane_v2si */
    case 2085:  /* aarch64_vec_umlal_laneq_v4hi */
    case 2084:  /* aarch64_vec_smlal_laneq_v4hi */
    case 2083:  /* aarch64_vec_umlal_lane_v4hi */
    case 2082:  /* aarch64_vec_smlal_lane_v4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 1), 0, 0));
      break;

    case 2081:  /* aarch64_umull_hi_nv4si_insn */
    case 2080:  /* aarch64_smull_hi_nv4si_insn */
    case 2079:  /* aarch64_umull_hi_nv8hi_insn */
    case 2078:  /* aarch64_smull_hi_nv8hi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 2077:  /* aarch64_umull_nv2si */
    case 2076:  /* aarch64_smull_nv2si */
    case 2075:  /* aarch64_umull_nv4hi */
    case 2074:  /* aarch64_smull_nv4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 2073:  /* aarch64_umull_hi_laneqv4si_insn */
    case 2072:  /* aarch64_smull_hi_laneqv4si_insn */
    case 2071:  /* aarch64_umull_hi_laneqv8hi_insn */
    case 2070:  /* aarch64_smull_hi_laneqv8hi_insn */
    case 2069:  /* aarch64_umull_hi_lanev4si_insn */
    case 2068:  /* aarch64_smull_hi_lanev4si_insn */
    case 2067:  /* aarch64_umull_hi_lanev8hi_insn */
    case 2066:  /* aarch64_smull_hi_lanev8hi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0, 0));
      break;

    case 2065:  /* aarch64_vec_umult_laneq_v2si */
    case 2064:  /* aarch64_vec_smult_laneq_v2si */
    case 2063:  /* aarch64_vec_umult_lane_v2si */
    case 2062:  /* aarch64_vec_smult_lane_v2si */
    case 2061:  /* aarch64_vec_umult_laneq_v4hi */
    case 2060:  /* aarch64_vec_smult_laneq_v4hi */
    case 2059:  /* aarch64_vec_umult_lane_v4hi */
    case 2058:  /* aarch64_vec_smult_lane_v4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0, 0));
      break;

    case 2598:  /* aarch64_usublv4si_lo_internal */
    case 2597:  /* aarch64_uaddlv4si_lo_internal */
    case 2596:  /* aarch64_ssublv4si_lo_internal */
    case 2595:  /* aarch64_saddlv4si_lo_internal */
    case 2594:  /* aarch64_usublv8hi_lo_internal */
    case 2593:  /* aarch64_uaddlv8hi_lo_internal */
    case 2592:  /* aarch64_ssublv8hi_lo_internal */
    case 2591:  /* aarch64_saddlv8hi_lo_internal */
    case 2590:  /* aarch64_usublv16qi_lo_internal */
    case 2589:  /* aarch64_uaddlv16qi_lo_internal */
    case 2588:  /* aarch64_ssublv16qi_lo_internal */
    case 2587:  /* aarch64_saddlv16qi_lo_internal */
    case 2586:  /* aarch64_usublv4si_hi_internal */
    case 2585:  /* aarch64_uaddlv4si_hi_internal */
    case 2584:  /* aarch64_ssublv4si_hi_internal */
    case 2583:  /* aarch64_saddlv4si_hi_internal */
    case 2582:  /* aarch64_usublv8hi_hi_internal */
    case 2581:  /* aarch64_uaddlv8hi_hi_internal */
    case 2580:  /* aarch64_ssublv8hi_hi_internal */
    case 2579:  /* aarch64_saddlv8hi_hi_internal */
    case 2578:  /* aarch64_usublv16qi_hi_internal */
    case 2577:  /* aarch64_uaddlv16qi_hi_internal */
    case 2576:  /* aarch64_ssublv16qi_hi_internal */
    case 2575:  /* aarch64_saddlv16qi_hi_internal */
    case 2057:  /* aarch64_simd_vec_umult_hi_v4si */
    case 2056:  /* aarch64_simd_vec_smult_hi_v4si */
    case 2055:  /* aarch64_simd_vec_umult_hi_v8hi */
    case 2054:  /* aarch64_simd_vec_smult_hi_v8hi */
    case 2053:  /* aarch64_simd_vec_umult_hi_v16qi */
    case 2052:  /* aarch64_simd_vec_smult_hi_v16qi */
    case 2045:  /* aarch64_simd_vec_umult_lo_v4si */
    case 2044:  /* aarch64_simd_vec_smult_lo_v4si */
    case 2043:  /* aarch64_simd_vec_umult_lo_v8hi */
    case 2042:  /* aarch64_simd_vec_smult_lo_v8hi */
    case 2041:  /* aarch64_simd_vec_umult_lo_v16qi */
    case 2040:  /* aarch64_simd_vec_smult_lo_v16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2039:  /* aarch64_umlsl_nv2si */
    case 2038:  /* aarch64_smlsl_nv2si */
    case 2037:  /* aarch64_umlsl_nv4hi */
    case 2036:  /* aarch64_smlsl_nv4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      break;

    case 2035:  /* aarch64_umlslv2si */
    case 2034:  /* aarch64_smlslv2si */
    case 2033:  /* aarch64_umlslv4hi */
    case 2032:  /* aarch64_smlslv4hi */
    case 2031:  /* aarch64_umlslv8qi */
    case 2030:  /* aarch64_smlslv8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      break;

    case 2029:  /* aarch64_umlal_nv2si */
    case 2028:  /* aarch64_smlal_nv2si */
    case 2027:  /* aarch64_umlal_nv4hi */
    case 2026:  /* aarch64_smlal_nv4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      break;

    case 7298:  /* aarch64_pred_nandvnx2bi_z */
    case 7297:  /* aarch64_pred_norvnx2bi_z */
    case 7296:  /* aarch64_pred_nandvnx4bi_z */
    case 7295:  /* aarch64_pred_norvnx4bi_z */
    case 7294:  /* aarch64_pred_nandvnx8bi_z */
    case 7293:  /* aarch64_pred_norvnx8bi_z */
    case 7292:  /* aarch64_pred_nandvnx16bi_z */
    case 7291:  /* aarch64_pred_norvnx16bi_z */
    case 2025:  /* aarch64_umlalv2si */
    case 2024:  /* aarch64_smlalv2si */
    case 2023:  /* aarch64_umlalv4hi */
    case 2022:  /* aarch64_smlalv4hi */
    case 2021:  /* aarch64_umlalv8qi */
    case 2020:  /* aarch64_smlalv8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 2019:  /* aarch64_umlsl_hi_nv4si_insn */
    case 2018:  /* aarch64_smlsl_hi_nv4si_insn */
    case 2017:  /* aarch64_umlsl_hi_nv8hi_insn */
    case 2016:  /* aarch64_smlsl_hi_nv8hi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      break;

    case 2015:  /* aarch64_umlsl_hiv4si_insn */
    case 2014:  /* aarch64_smlsl_hiv4si_insn */
    case 2013:  /* aarch64_umlsl_hiv8hi_insn */
    case 2012:  /* aarch64_smlsl_hiv8hi_insn */
    case 2011:  /* aarch64_umlsl_hiv16qi_insn */
    case 2010:  /* aarch64_smlsl_hiv16qi_insn */
    case 2009:  /* *aarch64_umlsl_lov4si */
    case 2008:  /* *aarch64_smlsl_lov4si */
    case 2007:  /* *aarch64_umlsl_lov8hi */
    case 2006:  /* *aarch64_smlsl_lov8hi */
    case 2005:  /* *aarch64_umlsl_lov16qi */
    case 2004:  /* *aarch64_smlsl_lov16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2003:  /* aarch64_umlal_hi_nv4si_insn */
    case 2002:  /* aarch64_smlal_hi_nv4si_insn */
    case 2001:  /* aarch64_umlal_hi_nv8hi_insn */
    case 2000:  /* aarch64_smlal_hi_nv8hi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      break;

    case 1999:  /* aarch64_umlal_hiv4si_insn */
    case 1998:  /* aarch64_smlal_hiv4si_insn */
    case 1997:  /* aarch64_umlal_hiv8hi_insn */
    case 1996:  /* aarch64_smlal_hiv8hi_insn */
    case 1995:  /* aarch64_umlal_hiv16qi_insn */
    case 1994:  /* aarch64_smlal_hiv16qi_insn */
    case 1993:  /* *aarch64_umlal_lov4si */
    case 1992:  /* *aarch64_smlal_lov4si */
    case 1991:  /* *aarch64_umlal_lov8hi */
    case 1990:  /* *aarch64_smlal_lov8hi */
    case 1989:  /* *aarch64_umlal_lov16qi */
    case 1988:  /* *aarch64_smlal_lov16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 9616:  /* aarch64_sve_qadd_sqdmulltvnx2di */
    case 9615:  /* aarch64_sve_qadd_sqdmullbtvnx2di */
    case 9614:  /* aarch64_sve_qadd_sqdmullbvnx2di */
    case 9613:  /* aarch64_sve_qadd_sqdmulltvnx4si */
    case 9612:  /* aarch64_sve_qadd_sqdmullbtvnx4si */
    case 9611:  /* aarch64_sve_qadd_sqdmullbvnx4si */
    case 9610:  /* aarch64_sve_qadd_sqdmulltvnx8hi */
    case 9609:  /* aarch64_sve_qadd_sqdmullbtvnx8hi */
    case 9608:  /* aarch64_sve_qadd_sqdmullbvnx8hi */
    case 9599:  /* aarch64_sve_add_umulltvnx2di */
    case 9598:  /* aarch64_sve_add_umullbvnx2di */
    case 9597:  /* aarch64_sve_add_uabdltvnx2di */
    case 9596:  /* aarch64_sve_add_uabdlbvnx2di */
    case 9595:  /* aarch64_sve_add_smulltvnx2di */
    case 9594:  /* aarch64_sve_add_smullbvnx2di */
    case 9593:  /* aarch64_sve_add_sabdltvnx2di */
    case 9592:  /* aarch64_sve_add_sabdlbvnx2di */
    case 9591:  /* aarch64_sve_add_umulltvnx4si */
    case 9590:  /* aarch64_sve_add_umullbvnx4si */
    case 9589:  /* aarch64_sve_add_uabdltvnx4si */
    case 9588:  /* aarch64_sve_add_uabdlbvnx4si */
    case 9587:  /* aarch64_sve_add_smulltvnx4si */
    case 9586:  /* aarch64_sve_add_smullbvnx4si */
    case 9585:  /* aarch64_sve_add_sabdltvnx4si */
    case 9584:  /* aarch64_sve_add_sabdlbvnx4si */
    case 9583:  /* aarch64_sve_add_umulltvnx8hi */
    case 9582:  /* aarch64_sve_add_umullbvnx8hi */
    case 9581:  /* aarch64_sve_add_uabdltvnx8hi */
    case 9580:  /* aarch64_sve_add_uabdlbvnx8hi */
    case 9579:  /* aarch64_sve_add_smulltvnx8hi */
    case 9578:  /* aarch64_sve_add_smullbvnx8hi */
    case 9577:  /* aarch64_sve_add_sabdltvnx8hi */
    case 9576:  /* aarch64_sve_add_sabdlbvnx8hi */
    case 9448:  /* aarch64_sve_add_urshrvnx2di */
    case 9447:  /* aarch64_sve_add_srshrvnx2di */
    case 9446:  /* aarch64_sve_add_urshrvnx4si */
    case 9445:  /* aarch64_sve_add_srshrvnx4si */
    case 9444:  /* aarch64_sve_add_urshrvnx8hi */
    case 9443:  /* aarch64_sve_add_srshrvnx8hi */
    case 9442:  /* aarch64_sve_add_urshrvnx16qi */
    case 9441:  /* aarch64_sve_add_srshrvnx16qi */
    case 9102:  /* aarch64_mul_lane_vnx2di */
    case 9101:  /* aarch64_mul_lane_vnx4si */
    case 9100:  /* aarch64_mul_lane_vnx8hi */
    case 7408:  /* aarch64_sve_add_usmatmulvnx16qi */
    case 7407:  /* aarch64_sve_add_umatmulvnx16qi */
    case 7406:  /* aarch64_sve_add_smatmulvnx16qi */
    case 7205:  /* aarch64_mul_lane_vnx2df */
    case 7204:  /* aarch64_mul_lane_vnx4sf */
    case 7203:  /* aarch64_mul_lane_vnx8hf */
    case 4320:  /* aarch64_simd_usmmlav16qi */
    case 4319:  /* aarch64_simd_ummlav16qi */
    case 4318:  /* aarch64_simd_smmlav16qi */
    case 4306:  /* aarch64_bfdotv4sf */
    case 4305:  /* aarch64_bfdotv2sf */
    case 3337:  /* aarch64_uqrshrn2_nv2di_insn_be */
    case 3336:  /* aarch64_sqrshrn2_nv2di_insn_be */
    case 3335:  /* aarch64_uqshrn2_nv2di_insn_be */
    case 3334:  /* aarch64_sqshrn2_nv2di_insn_be */
    case 3333:  /* aarch64_sqrshrun2_nv2di_insn_be */
    case 3332:  /* aarch64_sqshrun2_nv2di_insn_be */
    case 3331:  /* aarch64_uqrshrn2_nv4si_insn_be */
    case 3330:  /* aarch64_sqrshrn2_nv4si_insn_be */
    case 3329:  /* aarch64_uqshrn2_nv4si_insn_be */
    case 3328:  /* aarch64_sqshrn2_nv4si_insn_be */
    case 3327:  /* aarch64_sqrshrun2_nv4si_insn_be */
    case 3326:  /* aarch64_sqshrun2_nv4si_insn_be */
    case 3325:  /* aarch64_uqrshrn2_nv8hi_insn_be */
    case 3324:  /* aarch64_sqrshrn2_nv8hi_insn_be */
    case 3323:  /* aarch64_uqshrn2_nv8hi_insn_be */
    case 3322:  /* aarch64_sqshrn2_nv8hi_insn_be */
    case 3321:  /* aarch64_sqrshrun2_nv8hi_insn_be */
    case 3320:  /* aarch64_sqshrun2_nv8hi_insn_be */
    case 2730:  /* aarch64_rsubhn2v2di_insn_be */
    case 2729:  /* aarch64_subhn2v2di_insn_be */
    case 2728:  /* aarch64_raddhn2v2di_insn_be */
    case 2727:  /* aarch64_addhn2v2di_insn_be */
    case 2726:  /* aarch64_rsubhn2v4si_insn_be */
    case 2725:  /* aarch64_subhn2v4si_insn_be */
    case 2724:  /* aarch64_raddhn2v4si_insn_be */
    case 2723:  /* aarch64_addhn2v4si_insn_be */
    case 2722:  /* aarch64_rsubhn2v8hi_insn_be */
    case 2721:  /* aarch64_subhn2v8hi_insn_be */
    case 2720:  /* aarch64_raddhn2v8hi_insn_be */
    case 2719:  /* aarch64_addhn2v8hi_insn_be */
    case 1975:  /* aarch64_rshrn2v2di_insn_be */
    case 1974:  /* aarch64_rshrn2v4si_insn_be */
    case 1973:  /* aarch64_rshrn2v8hi_insn_be */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 3301:  /* aarch64_uqrshrn_nv2di_insn_be */
    case 3300:  /* aarch64_sqrshrn_nv2di_insn_be */
    case 3299:  /* aarch64_uqshrn_nv2di_insn_be */
    case 3298:  /* aarch64_sqshrn_nv2di_insn_be */
    case 3297:  /* aarch64_sqrshrun_nv2di_insn_be */
    case 3296:  /* aarch64_sqshrun_nv2di_insn_be */
    case 3295:  /* aarch64_uqrshrn_nv4si_insn_be */
    case 3294:  /* aarch64_sqrshrn_nv4si_insn_be */
    case 3293:  /* aarch64_uqshrn_nv4si_insn_be */
    case 3292:  /* aarch64_sqshrn_nv4si_insn_be */
    case 3291:  /* aarch64_sqrshrun_nv4si_insn_be */
    case 3290:  /* aarch64_sqshrun_nv4si_insn_be */
    case 3289:  /* aarch64_uqrshrn_nv8hi_insn_be */
    case 3288:  /* aarch64_sqrshrn_nv8hi_insn_be */
    case 3287:  /* aarch64_uqshrn_nv8hi_insn_be */
    case 3286:  /* aarch64_sqshrn_nv8hi_insn_be */
    case 3285:  /* aarch64_sqrshrun_nv8hi_insn_be */
    case 3284:  /* aarch64_sqshrun_nv8hi_insn_be */
    case 2706:  /* aarch64_rsubhnv2di_insn_be */
    case 2705:  /* aarch64_subhnv2di_insn_be */
    case 2704:  /* aarch64_raddhnv2di_insn_be */
    case 2703:  /* aarch64_addhnv2di_insn_be */
    case 2702:  /* aarch64_rsubhnv4si_insn_be */
    case 2701:  /* aarch64_subhnv4si_insn_be */
    case 2700:  /* aarch64_raddhnv4si_insn_be */
    case 2699:  /* aarch64_addhnv4si_insn_be */
    case 2698:  /* aarch64_rsubhnv8hi_insn_be */
    case 2697:  /* aarch64_subhnv8hi_insn_be */
    case 2696:  /* aarch64_raddhnv8hi_insn_be */
    case 2695:  /* aarch64_addhnv8hi_insn_be */
    case 1963:  /* aarch64_rshrnv2di_insn_be */
    case 1962:  /* aarch64_rshrnv4si_insn_be */
    case 1961:  /* aarch64_rshrnv8hi_insn_be */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1957:  /* *aarch64_topbits_shufflev2di_be */
    case 1956:  /* *aarch64_rtopbits_shufflev2di_be */
    case 1955:  /* *aarch64_topbits_shufflev4si_be */
    case 1954:  /* *aarch64_rtopbits_shufflev4si_be */
    case 1953:  /* *aarch64_topbits_shufflev8hi_be */
    case 1952:  /* *aarch64_rtopbits_shufflev8hi_be */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 1951:  /* *aarch64_topbits_shufflev2di_le */
    case 1950:  /* *aarch64_rtopbits_shufflev2di_le */
    case 1949:  /* *aarch64_topbits_shufflev4si_le */
    case 1948:  /* *aarch64_rtopbits_shufflev4si_le */
    case 1947:  /* *aarch64_topbits_shufflev8hi_le */
    case 1946:  /* *aarch64_rtopbits_shufflev8hi_le */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 2646:  /* aarch64_uaddw2v4si_internal */
    case 2645:  /* aarch64_saddw2v4si_internal */
    case 2644:  /* aarch64_uaddw2v8hi_internal */
    case 2643:  /* aarch64_saddw2v8hi_internal */
    case 2642:  /* aarch64_uaddw2v16qi_internal */
    case 2641:  /* aarch64_saddw2v16qi_internal */
    case 2640:  /* aarch64_uaddwv4si_internal */
    case 2639:  /* aarch64_saddwv4si_internal */
    case 2638:  /* aarch64_uaddwv8hi_internal */
    case 2637:  /* aarch64_saddwv8hi_internal */
    case 2636:  /* aarch64_uaddwv16qi_internal */
    case 2635:  /* aarch64_saddwv16qi_internal */
    case 1969:  /* aarch64_shrn2v2di_insn_be */
    case 1968:  /* aarch64_shrn2v4si_insn_be */
    case 1967:  /* aarch64_shrn2v8hi_insn_be */
    case 1945:  /* *aarch64_shrnv2di2_vect_be */
    case 1944:  /* *aarch64_rshrnv2di2_vect_be */
    case 1943:  /* *aarch64_shrnv4si2_vect_be */
    case 1942:  /* *aarch64_rshrnv4si2_vect_be */
    case 1941:  /* *aarch64_shrnv8hi2_vect_be */
    case 1940:  /* *aarch64_rshrnv8hi2_vect_be */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 2628:  /* aarch64_usubw2v4si_internal */
    case 2627:  /* aarch64_ssubw2v4si_internal */
    case 2626:  /* aarch64_usubw2v8hi_internal */
    case 2625:  /* aarch64_ssubw2v8hi_internal */
    case 2624:  /* aarch64_usubw2v16qi_internal */
    case 2623:  /* aarch64_ssubw2v16qi_internal */
    case 2622:  /* aarch64_usubwv4si_internal */
    case 2621:  /* aarch64_ssubwv4si_internal */
    case 2620:  /* aarch64_usubwv8hi_internal */
    case 2619:  /* aarch64_ssubwv8hi_internal */
    case 2618:  /* aarch64_usubwv16qi_internal */
    case 2617:  /* aarch64_ssubwv16qi_internal */
    case 1966:  /* aarch64_shrn2v2di_insn_le */
    case 1965:  /* aarch64_shrn2v4si_insn_le */
    case 1964:  /* aarch64_shrn2v8hi_insn_le */
    case 1939:  /* *aarch64_shrnv2di2_vect_le */
    case 1938:  /* *aarch64_rshrnv2di2_vect_le */
    case 1937:  /* *aarch64_shrnv4si2_vect_le */
    case 1936:  /* *aarch64_rshrnv4si2_vect_le */
    case 1935:  /* *aarch64_shrnv8hi2_vect_le */
    case 1934:  /* *aarch64_rshrnv8hi2_vect_le */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      break;

    case 1927:  /* aarch64_shrnv2di_insn_be */
    case 1926:  /* aarch64_shrnv4si_insn_be */
    case 1925:  /* aarch64_shrnv8hi_insn_be */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 2839:  /* aarch64_uqmovnv2di_insn_be */
    case 2838:  /* aarch64_sqmovnv2di_insn_be */
    case 2837:  /* aarch64_uqmovnv4si_insn_be */
    case 2836:  /* aarch64_sqmovnv4si_insn_be */
    case 2835:  /* aarch64_uqmovnv8hi_insn_be */
    case 2834:  /* aarch64_sqmovnv8hi_insn_be */
    case 1912:  /* aarch64_xtnv2di_insn_be */
    case 1911:  /* aarch64_xtnv4si_insn_be */
    case 1910:  /* aarch64_xtnv8hi_insn_be */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1838:  /* aarch64_mls_nv4si */
    case 1837:  /* aarch64_mls_nv2si */
    case 1836:  /* aarch64_mls_nv8hi */
    case 1835:  /* aarch64_mls_nv4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1834:  /* *aarch64_mls_elt_to_64v4si */
    case 1833:  /* *aarch64_mls_elt_to_128v2si */
    case 1832:  /* *aarch64_mls_elt_to_64v8hi */
    case 1831:  /* *aarch64_mls_elt_to_128v4hi */
    case 1830:  /* *aarch64_mls_eltv4si */
    case 1829:  /* *aarch64_mls_eltv2si */
    case 1828:  /* *aarch64_mls_eltv8hi */
    case 1827:  /* *aarch64_mls_eltv4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 7274:  /* aarch64_pred_ornvnx2bi_z */
    case 7273:  /* aarch64_pred_bicvnx2bi_z */
    case 7272:  /* aarch64_pred_ornvnx4bi_z */
    case 7271:  /* aarch64_pred_bicvnx4bi_z */
    case 7270:  /* aarch64_pred_ornvnx8bi_z */
    case 7269:  /* aarch64_pred_bicvnx8bi_z */
    case 7268:  /* aarch64_pred_ornvnx16bi_z */
    case 7267:  /* aarch64_pred_bicvnx16bi_z */
    case 4260:  /* bcaxqv2di4 */
    case 4259:  /* bcaxqv4si4 */
    case 4258:  /* bcaxqv8hi4 */
    case 4257:  /* bcaxqv16qi4 */
    case 1820:  /* aarch64_mla_nv4si */
    case 1819:  /* aarch64_mla_nv2si */
    case 1818:  /* aarch64_mla_nv8hi */
    case 1817:  /* aarch64_mla_nv4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1816:  /* *aarch64_mla_elt_to_64v4si */
    case 1815:  /* *aarch64_mla_elt_to_128v2si */
    case 1814:  /* *aarch64_mla_elt_to_64v8hi */
    case 1813:  /* *aarch64_mla_elt_to_128v4hi */
    case 1812:  /* *aarch64_mla_eltv4si */
    case 1811:  /* *aarch64_mla_eltv2si */
    case 1810:  /* *aarch64_mla_eltv8hi */
    case 1809:  /* *aarch64_mla_eltv4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 7242:  /* aarch64_pred_xorvnx2bi_z */
    case 7241:  /* aarch64_pred_iorvnx2bi_z */
    case 7240:  /* aarch64_pred_andvnx2bi_z */
    case 7239:  /* aarch64_pred_xorvnx4bi_z */
    case 7238:  /* aarch64_pred_iorvnx4bi_z */
    case 7237:  /* aarch64_pred_andvnx4bi_z */
    case 7236:  /* aarch64_pred_xorvnx8bi_z */
    case 7235:  /* aarch64_pred_iorvnx8bi_z */
    case 7234:  /* aarch64_pred_andvnx8bi_z */
    case 7233:  /* aarch64_pred_xorvnx16bi_z */
    case 7232:  /* aarch64_pred_iorvnx16bi_z */
    case 7231:  /* aarch64_pred_andvnx16bi_z */
    case 6397:  /* *aarch64_adr_uxtw_and */
    case 4254:  /* eor3qv2di4 */
    case 4253:  /* eor3qv4si4 */
    case 4252:  /* eor3qv8hi4 */
    case 4251:  /* eor3qv16qi4 */
    case 1808:  /* aarch64_mlav4si */
    case 1807:  /* aarch64_mlav2si */
    case 1806:  /* aarch64_mlav8hi */
    case 1805:  /* aarch64_mlav4hi */
    case 1804:  /* aarch64_mlav16qi */
    case 1803:  /* aarch64_mlav8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 1740:  /* *aarch64_simd_vec_copy_lane_to_64v4sf */
    case 1739:  /* *aarch64_simd_vec_copy_lane_to_128v2sf */
    case 1738:  /* *aarch64_simd_vec_copy_lane_to_64v8hf */
    case 1737:  /* *aarch64_simd_vec_copy_lane_to_128v4hf */
    case 1736:  /* *aarch64_simd_vec_copy_lane_to_64v4si */
    case 1735:  /* *aarch64_simd_vec_copy_lane_to_128v2si */
    case 1734:  /* *aarch64_simd_vec_copy_lane_to_64v8hi */
    case 1733:  /* *aarch64_simd_vec_copy_lane_to_128v4hi */
    case 1732:  /* *aarch64_simd_vec_copy_lane_to_64v16qi */
    case 1731:  /* *aarch64_simd_vec_copy_lane_to_128v8qi */
    case 1730:  /* aarch64_simd_vec_copy_lanev2df */
    case 1729:  /* aarch64_simd_vec_copy_lanev4sf */
    case 1728:  /* aarch64_simd_vec_copy_lanev2sf */
    case 1727:  /* aarch64_simd_vec_copy_lanev8bf */
    case 1726:  /* aarch64_simd_vec_copy_lanev4bf */
    case 1725:  /* aarch64_simd_vec_copy_lanev8hf */
    case 1724:  /* aarch64_simd_vec_copy_lanev4hf */
    case 1723:  /* aarch64_simd_vec_copy_lanev2di */
    case 1722:  /* aarch64_simd_vec_copy_lanev4si */
    case 1721:  /* aarch64_simd_vec_copy_lanev2si */
    case 1720:  /* aarch64_simd_vec_copy_lanev8hi */
    case 1719:  /* aarch64_simd_vec_copy_lanev4hi */
    case 1718:  /* aarch64_simd_vec_copy_lanev16qi */
    case 1717:  /* aarch64_simd_vec_copy_lanev8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      break;

    case 1716:  /* aarch64_simd_vec_setv2df */
    case 1715:  /* aarch64_simd_vec_setv4sf */
    case 1714:  /* aarch64_simd_vec_setv2sf */
    case 1713:  /* aarch64_simd_vec_setv8bf */
    case 1712:  /* aarch64_simd_vec_setv4bf */
    case 1711:  /* aarch64_simd_vec_setv8hf */
    case 1710:  /* aarch64_simd_vec_setv4hf */
    case 1709:  /* aarch64_simd_vec_setv2di */
    case 1708:  /* aarch64_simd_vec_setv4si */
    case 1707:  /* aarch64_simd_vec_setv2si */
    case 1706:  /* aarch64_simd_vec_setv8hi */
    case 1705:  /* aarch64_simd_vec_setv4hi */
    case 1704:  /* aarch64_simd_vec_setv16qi */
    case 1703:  /* aarch64_simd_vec_setv8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1666:  /* aarch64_uabav4si */
    case 1665:  /* aarch64_sabav4si */
    case 1664:  /* aarch64_uabav2si */
    case 1663:  /* aarch64_sabav2si */
    case 1662:  /* aarch64_uabav8hi */
    case 1661:  /* aarch64_sabav8hi */
    case 1660:  /* aarch64_uabav4hi */
    case 1659:  /* aarch64_sabav4hi */
    case 1658:  /* aarch64_uabav16qi */
    case 1657:  /* aarch64_sabav16qi */
    case 1656:  /* aarch64_uabav8qi */
    case 1655:  /* aarch64_sabav8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 5139:  /* aarch64_sve_ld1rovnx2df */
    case 5138:  /* aarch64_sve_ld1rovnx4sf */
    case 5137:  /* aarch64_sve_ld1rovnx8hf */
    case 5136:  /* aarch64_sve_ld1rovnx8bf */
    case 5135:  /* aarch64_sve_ld1rovnx2di */
    case 5134:  /* aarch64_sve_ld1rovnx4si */
    case 5133:  /* aarch64_sve_ld1rovnx8hi */
    case 5132:  /* aarch64_sve_ld1rovnx16qi */
    case 5131:  /* aarch64_sve_ld1rqvnx2df */
    case 5130:  /* aarch64_sve_ld1rqvnx4sf */
    case 5129:  /* aarch64_sve_ld1rqvnx8hf */
    case 5128:  /* aarch64_sve_ld1rqvnx8bf */
    case 5127:  /* aarch64_sve_ld1rqvnx2di */
    case 5126:  /* aarch64_sve_ld1rqvnx4si */
    case 5125:  /* aarch64_sve_ld1rqvnx8hi */
    case 5124:  /* aarch64_sve_ld1rqvnx16qi */
    case 4793:  /* aarch64_ldnt1vnx2df */
    case 4792:  /* aarch64_ldnt1vnx4sf */
    case 4791:  /* aarch64_ldnt1vnx8hf */
    case 4790:  /* aarch64_ldnt1vnx8bf */
    case 4789:  /* aarch64_ldnt1vnx2di */
    case 4788:  /* aarch64_ldnt1vnx4si */
    case 4787:  /* aarch64_ldnt1vnx8hi */
    case 4786:  /* aarch64_ldnt1vnx16qi */
    case 4745:  /* aarch64_ldnf1vnx2df */
    case 4744:  /* aarch64_ldff1vnx2df */
    case 4743:  /* aarch64_ldnf1vnx4sf */
    case 4742:  /* aarch64_ldff1vnx4sf */
    case 4741:  /* aarch64_ldnf1vnx8hf */
    case 4740:  /* aarch64_ldff1vnx8hf */
    case 4739:  /* aarch64_ldnf1vnx8bf */
    case 4738:  /* aarch64_ldff1vnx8bf */
    case 4737:  /* aarch64_ldnf1vnx2di */
    case 4736:  /* aarch64_ldff1vnx2di */
    case 4735:  /* aarch64_ldnf1vnx4si */
    case 4734:  /* aarch64_ldff1vnx4si */
    case 4733:  /* aarch64_ldnf1vnx8hi */
    case 4732:  /* aarch64_ldff1vnx8hi */
    case 4731:  /* aarch64_ldnf1vnx16qi */
    case 4730:  /* aarch64_ldff1vnx16qi */
    case 4689:  /* vec_mask_load_lanesvnx8dfvnx2df */
    case 4688:  /* vec_mask_load_lanesvnx16sfvnx4sf */
    case 4687:  /* vec_mask_load_lanesvnx32hfvnx8hf */
    case 4686:  /* vec_mask_load_lanesvnx32bfvnx8bf */
    case 4685:  /* vec_mask_load_lanesvnx8divnx2di */
    case 4684:  /* vec_mask_load_lanesvnx16sivnx4si */
    case 4683:  /* vec_mask_load_lanesvnx32hivnx8hi */
    case 4682:  /* vec_mask_load_lanesvnx64qivnx16qi */
    case 4681:  /* vec_mask_load_lanesvnx6dfvnx2df */
    case 4680:  /* vec_mask_load_lanesvnx12sfvnx4sf */
    case 4679:  /* vec_mask_load_lanesvnx24hfvnx8hf */
    case 4678:  /* vec_mask_load_lanesvnx24bfvnx8bf */
    case 4677:  /* vec_mask_load_lanesvnx6divnx2di */
    case 4676:  /* vec_mask_load_lanesvnx12sivnx4si */
    case 4675:  /* vec_mask_load_lanesvnx24hivnx8hi */
    case 4674:  /* vec_mask_load_lanesvnx48qivnx16qi */
    case 4673:  /* vec_mask_load_lanesvnx4dfvnx2df */
    case 4672:  /* vec_mask_load_lanesvnx8sfvnx4sf */
    case 4671:  /* vec_mask_load_lanesvnx16hfvnx8hf */
    case 4670:  /* vec_mask_load_lanesvnx16bfvnx8bf */
    case 4669:  /* vec_mask_load_lanesvnx4divnx2di */
    case 4668:  /* vec_mask_load_lanesvnx8sivnx4si */
    case 4667:  /* vec_mask_load_lanesvnx16hivnx8hi */
    case 4666:  /* vec_mask_load_lanesvnx32qivnx16qi */
    case 4665:  /* maskloadvnx2dfvnx2bi */
    case 4664:  /* maskloadvnx2divnx2bi */
    case 4663:  /* maskloadvnx2sfvnx2bi */
    case 4662:  /* maskloadvnx4sfvnx4bi */
    case 4661:  /* maskloadvnx2sivnx2bi */
    case 4660:  /* maskloadvnx4sivnx4bi */
    case 4659:  /* maskloadvnx2bfvnx2bi */
    case 4658:  /* maskloadvnx4bfvnx4bi */
    case 4657:  /* maskloadvnx8bfvnx8bi */
    case 4656:  /* maskloadvnx2hfvnx2bi */
    case 4655:  /* maskloadvnx4hfvnx4bi */
    case 4654:  /* maskloadvnx8hfvnx8bi */
    case 4653:  /* maskloadvnx2hivnx2bi */
    case 4652:  /* maskloadvnx4hivnx4bi */
    case 4651:  /* maskloadvnx8hivnx8bi */
    case 4650:  /* maskloadvnx2qivnx2bi */
    case 4649:  /* maskloadvnx4qivnx4bi */
    case 4648:  /* maskloadvnx8qivnx8bi */
    case 4647:  /* maskloadvnx16qivnx16bi */
    case 1654:  /* aarch64_uadalpv2si */
    case 1653:  /* aarch64_sadalpv2si */
    case 1652:  /* aarch64_uadalpv4si */
    case 1651:  /* aarch64_sadalpv4si */
    case 1650:  /* aarch64_uadalpv8hi */
    case 1649:  /* aarch64_sadalpv8hi */
    case 1648:  /* aarch64_uadalpv4hi */
    case 1647:  /* aarch64_sadalpv4hi */
    case 1646:  /* aarch64_uadalpv16qi */
    case 1645:  /* aarch64_sadalpv16qi */
    case 1644:  /* aarch64_uadalpv8qi */
    case 1643:  /* aarch64_sadalpv8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 9360:  /* aarch64_sve_sqrdmlshvnx2di */
    case 9359:  /* aarch64_sve_sqrdmlahvnx2di */
    case 9358:  /* aarch64_sve_sbcltvnx2di */
    case 9357:  /* aarch64_sve_sbclbvnx2di */
    case 9356:  /* aarch64_sve_eortbvnx2di */
    case 9355:  /* aarch64_sve_eorbtvnx2di */
    case 9354:  /* aarch64_sve_adcltvnx2di */
    case 9353:  /* aarch64_sve_adclbvnx2di */
    case 9352:  /* aarch64_sve_sqrdmlshvnx4si */
    case 9351:  /* aarch64_sve_sqrdmlahvnx4si */
    case 9350:  /* aarch64_sve_sbcltvnx4si */
    case 9349:  /* aarch64_sve_sbclbvnx4si */
    case 9348:  /* aarch64_sve_eortbvnx4si */
    case 9347:  /* aarch64_sve_eorbtvnx4si */
    case 9346:  /* aarch64_sve_adcltvnx4si */
    case 9345:  /* aarch64_sve_adclbvnx4si */
    case 9344:  /* aarch64_sve_sqrdmlshvnx8hi */
    case 9343:  /* aarch64_sve_sqrdmlahvnx8hi */
    case 9342:  /* aarch64_sve_sbcltvnx8hi */
    case 9341:  /* aarch64_sve_sbclbvnx8hi */
    case 9340:  /* aarch64_sve_eortbvnx8hi */
    case 9339:  /* aarch64_sve_eorbtvnx8hi */
    case 9338:  /* aarch64_sve_adcltvnx8hi */
    case 9337:  /* aarch64_sve_adclbvnx8hi */
    case 9336:  /* aarch64_sve_sqrdmlshvnx16qi */
    case 9335:  /* aarch64_sve_sqrdmlahvnx16qi */
    case 9334:  /* aarch64_sve_sbcltvnx16qi */
    case 9333:  /* aarch64_sve_sbclbvnx16qi */
    case 9332:  /* aarch64_sve_eortbvnx16qi */
    case 9331:  /* aarch64_sve_eorbtvnx16qi */
    case 9330:  /* aarch64_sve_adcltvnx16qi */
    case 9329:  /* aarch64_sve_adclbvnx16qi */
    case 7578:  /* aarch64_sve_fmmlavnx2df */
    case 7577:  /* aarch64_sve_fmmlavnx4sf */
    case 1642:  /* aarch64_uabal2v4si */
    case 1641:  /* aarch64_sabal2v4si */
    case 1640:  /* aarch64_uabal2v8hi */
    case 1639:  /* aarch64_sabal2v8hi */
    case 1638:  /* aarch64_uabal2v16qi */
    case 1637:  /* aarch64_sabal2v16qi */
    case 1636:  /* aarch64_uabalv2si */
    case 1635:  /* aarch64_sabalv2si */
    case 1634:  /* aarch64_uabalv4hi */
    case 1633:  /* aarch64_sabalv4hi */
    case 1632:  /* aarch64_uabalv8qi */
    case 1631:  /* aarch64_sabalv8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1618:  /* aarch64_uabdv4si */
    case 1617:  /* aarch64_sabdv4si */
    case 1616:  /* aarch64_uabdv2si */
    case 1615:  /* aarch64_sabdv2si */
    case 1614:  /* aarch64_uabdv8hi */
    case 1613:  /* aarch64_sabdv8hi */
    case 1612:  /* aarch64_uabdv4hi */
    case 1611:  /* aarch64_sabdv4hi */
    case 1610:  /* aarch64_uabdv16qi */
    case 1609:  /* aarch64_sabdv16qi */
    case 1608:  /* aarch64_uabdv8qi */
    case 1607:  /* aarch64_sabdv8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1584:  /* *aarch64_mul3_elt_to_64v2df */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1556:  /* mul_laneqv2df3 */
    case 1555:  /* mul_laneqv4sf3 */
    case 1554:  /* mul_laneqv2sf3 */
    case 1553:  /* mul_laneqv8hf3 */
    case 1552:  /* mul_laneqv4hf3 */
    case 1551:  /* mul_laneqv4si3 */
    case 1550:  /* mul_laneqv2si3 */
    case 1549:  /* mul_laneqv8hi3 */
    case 1548:  /* mul_laneqv4hi3 */
    case 1547:  /* mul_lanev4sf3 */
    case 1546:  /* mul_lanev2sf3 */
    case 1545:  /* mul_lanev8hf3 */
    case 1544:  /* mul_lanev4hf3 */
    case 1543:  /* mul_lanev4si3 */
    case 1542:  /* mul_lanev2si3 */
    case 1541:  /* mul_lanev8hi3 */
    case 1540:  /* mul_lanev4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      break;

    case 8980:  /* *aarch64_sve_incsi_pat */
    case 4310:  /* aarch64_bfdot_laneqv4sf */
    case 4309:  /* aarch64_bfdot_lanev4sf */
    case 4308:  /* aarch64_bfdot_laneqv2sf */
    case 4307:  /* aarch64_bfdot_lanev2sf */
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
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 7403:  /* usdot_prodvnx16qi */
    case 7398:  /* udot_prodvnx8hi */
    case 7397:  /* sdot_prodvnx8hi */
    case 7396:  /* udot_prodvnx16qi */
    case 7395:  /* sdot_prodvnx16qi */
    case 3283:  /* aarch64_uqrshrn_nv2di_insn_le */
    case 3282:  /* aarch64_sqrshrn_nv2di_insn_le */
    case 3281:  /* aarch64_uqshrn_nv2di_insn_le */
    case 3280:  /* aarch64_sqshrn_nv2di_insn_le */
    case 3279:  /* aarch64_sqrshrun_nv2di_insn_le */
    case 3278:  /* aarch64_sqshrun_nv2di_insn_le */
    case 3277:  /* aarch64_uqrshrn_nv4si_insn_le */
    case 3276:  /* aarch64_sqrshrn_nv4si_insn_le */
    case 3275:  /* aarch64_uqshrn_nv4si_insn_le */
    case 3274:  /* aarch64_sqshrn_nv4si_insn_le */
    case 3273:  /* aarch64_sqrshrun_nv4si_insn_le */
    case 3272:  /* aarch64_sqshrun_nv4si_insn_le */
    case 3271:  /* aarch64_uqrshrn_nv8hi_insn_le */
    case 3270:  /* aarch64_sqrshrn_nv8hi_insn_le */
    case 3269:  /* aarch64_uqshrn_nv8hi_insn_le */
    case 3268:  /* aarch64_sqshrn_nv8hi_insn_le */
    case 3267:  /* aarch64_sqrshrun_nv8hi_insn_le */
    case 3266:  /* aarch64_sqshrun_nv8hi_insn_le */
    case 2694:  /* aarch64_rsubhnv2di_insn_le */
    case 2693:  /* aarch64_subhnv2di_insn_le */
    case 2692:  /* aarch64_raddhnv2di_insn_le */
    case 2691:  /* aarch64_addhnv2di_insn_le */
    case 2690:  /* aarch64_rsubhnv4si_insn_le */
    case 2689:  /* aarch64_subhnv4si_insn_le */
    case 2688:  /* aarch64_raddhnv4si_insn_le */
    case 2687:  /* aarch64_addhnv4si_insn_le */
    case 2686:  /* aarch64_rsubhnv8hi_insn_le */
    case 2685:  /* aarch64_subhnv8hi_insn_le */
    case 2684:  /* aarch64_raddhnv8hi_insn_le */
    case 2683:  /* aarch64_addhnv8hi_insn_le */
    case 1960:  /* aarch64_rshrnv2di_insn_le */
    case 1959:  /* aarch64_rshrnv4si_insn_le */
    case 1958:  /* aarch64_rshrnv8hi_insn_le */
    case 1523:  /* usdot_prodv16qi */
    case 1522:  /* usdot_prodv8qi */
    case 1521:  /* udot_prodv16qi */
    case 1520:  /* sdot_prodv16qi */
    case 1519:  /* udot_prodv8qi */
    case 1518:  /* sdot_prodv8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8995:  /* *aarch64_sve_decsi_pat */
    case 4317:  /* aarch64_bfmlalt_lane_qv4sf */
    case 4316:  /* aarch64_bfmlalb_lane_qv4sf */
    case 4315:  /* aarch64_bfmlalt_lanev4sf */
    case 4314:  /* aarch64_bfmlalb_lanev4sf */
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
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      break;

    case 9649:  /* aarch64_sve_qsub_sqdmulltvnx2di */
    case 9648:  /* aarch64_sve_qsub_sqdmullbtvnx2di */
    case 9647:  /* aarch64_sve_qsub_sqdmullbvnx2di */
    case 9646:  /* aarch64_sve_qsub_sqdmulltvnx4si */
    case 9645:  /* aarch64_sve_qsub_sqdmullbtvnx4si */
    case 9644:  /* aarch64_sve_qsub_sqdmullbvnx4si */
    case 9643:  /* aarch64_sve_qsub_sqdmulltvnx8hi */
    case 9642:  /* aarch64_sve_qsub_sqdmullbtvnx8hi */
    case 9641:  /* aarch64_sve_qsub_sqdmullbvnx8hi */
    case 9632:  /* aarch64_sve_sub_umulltvnx2di */
    case 9631:  /* aarch64_sve_sub_umullbvnx2di */
    case 9630:  /* aarch64_sve_sub_smulltvnx2di */
    case 9629:  /* aarch64_sve_sub_smullbvnx2di */
    case 9628:  /* aarch64_sve_sub_umulltvnx4si */
    case 9627:  /* aarch64_sve_sub_umullbvnx4si */
    case 9626:  /* aarch64_sve_sub_smulltvnx4si */
    case 9625:  /* aarch64_sve_sub_smullbvnx4si */
    case 9624:  /* aarch64_sve_sub_umulltvnx8hi */
    case 9623:  /* aarch64_sve_sub_umullbvnx8hi */
    case 9622:  /* aarch64_sve_sub_smulltvnx8hi */
    case 9621:  /* aarch64_sve_sub_smullbvnx8hi */
    case 4313:  /* aarch64_bfmlaltv4sf */
    case 4312:  /* aarch64_bfmlalbv4sf */
    case 4311:  /* aarch64_bfmmlaqv4sf */
    case 3319:  /* aarch64_uqrshrn2_nv2di_insn_le */
    case 3318:  /* aarch64_sqrshrn2_nv2di_insn_le */
    case 3317:  /* aarch64_uqshrn2_nv2di_insn_le */
    case 3316:  /* aarch64_sqshrn2_nv2di_insn_le */
    case 3315:  /* aarch64_sqrshrun2_nv2di_insn_le */
    case 3314:  /* aarch64_sqshrun2_nv2di_insn_le */
    case 3313:  /* aarch64_uqrshrn2_nv4si_insn_le */
    case 3312:  /* aarch64_sqrshrn2_nv4si_insn_le */
    case 3311:  /* aarch64_uqshrn2_nv4si_insn_le */
    case 3310:  /* aarch64_sqshrn2_nv4si_insn_le */
    case 3309:  /* aarch64_sqrshrun2_nv4si_insn_le */
    case 3308:  /* aarch64_sqshrun2_nv4si_insn_le */
    case 3307:  /* aarch64_uqrshrn2_nv8hi_insn_le */
    case 3306:  /* aarch64_sqrshrn2_nv8hi_insn_le */
    case 3305:  /* aarch64_uqshrn2_nv8hi_insn_le */
    case 3304:  /* aarch64_sqshrn2_nv8hi_insn_le */
    case 3303:  /* aarch64_sqrshrun2_nv8hi_insn_le */
    case 3302:  /* aarch64_sqshrun2_nv8hi_insn_le */
    case 2718:  /* aarch64_rsubhn2v2di_insn_le */
    case 2717:  /* aarch64_subhn2v2di_insn_le */
    case 2716:  /* aarch64_raddhn2v2di_insn_le */
    case 2715:  /* aarch64_addhn2v2di_insn_le */
    case 2714:  /* aarch64_rsubhn2v4si_insn_le */
    case 2713:  /* aarch64_subhn2v4si_insn_le */
    case 2712:  /* aarch64_raddhn2v4si_insn_le */
    case 2711:  /* aarch64_addhn2v4si_insn_le */
    case 2710:  /* aarch64_rsubhn2v8hi_insn_le */
    case 2709:  /* aarch64_subhn2v8hi_insn_le */
    case 2708:  /* aarch64_raddhn2v8hi_insn_le */
    case 2707:  /* aarch64_addhn2v8hi_insn_le */
    case 1972:  /* aarch64_rshrn2v2di_insn_le */
    case 1971:  /* aarch64_rshrn2v4si_insn_le */
    case 1970:  /* aarch64_rshrn2v8hi_insn_le */
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
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 5199:  /* *vec_extractvnx2dfdf_ext */
    case 5198:  /* *vec_extractvnx4sfsf_ext */
    case 5197:  /* *vec_extractvnx8hfhf_ext */
    case 5196:  /* *vec_extractvnx8bfbf_ext */
    case 5195:  /* *vec_extractvnx2didi_ext */
    case 5194:  /* *vec_extractvnx4sisi_ext */
    case 5193:  /* *vec_extractvnx8hihi_ext */
    case 5192:  /* *vec_extractvnx16qiqi_ext */
    case 5191:  /* *vec_extractvnx2dfdf_dup */
    case 5190:  /* *vec_extractvnx4sfsf_dup */
    case 5189:  /* *vec_extractvnx8hfhf_dup */
    case 5188:  /* *vec_extractvnx8bfbf_dup */
    case 5187:  /* *vec_extractvnx2didi_dup */
    case 5186:  /* *vec_extractvnx4sisi_dup */
    case 5185:  /* *vec_extractvnx8hihi_dup */
    case 5184:  /* *vec_extractvnx16qiqi_dup */
    case 5183:  /* *vec_extractvnx2dfdf_v128 */
    case 5182:  /* *vec_extractvnx4sfsf_v128 */
    case 5181:  /* *vec_extractvnx8hfhf_v128 */
    case 5180:  /* *vec_extractvnx8bfbf_v128 */
    case 5179:  /* *vec_extractvnx2didi_v128 */
    case 5178:  /* *vec_extractvnx4sisi_v128 */
    case 5177:  /* *vec_extractvnx8hihi_v128 */
    case 5176:  /* *vec_extractvnx16qiqi_v128 */
    case 2863:  /* aarch64_sqxtun2v2di_le */
    case 2862:  /* aarch64_sqxtun2v4si_le */
    case 2861:  /* aarch64_sqxtun2v8hi_le */
    case 2514:  /* aarch64_get_lanev2df */
    case 2513:  /* aarch64_get_lanev4sf */
    case 2512:  /* aarch64_get_lanev2sf */
    case 2511:  /* aarch64_get_lanev8bf */
    case 2510:  /* aarch64_get_lanev4bf */
    case 2509:  /* aarch64_get_lanev8hf */
    case 2508:  /* aarch64_get_lanev4hf */
    case 2507:  /* aarch64_get_lanev2di */
    case 2506:  /* aarch64_get_lanev4si */
    case 2505:  /* aarch64_get_lanev2si */
    case 2504:  /* aarch64_get_lanev8hi */
    case 2503:  /* aarch64_get_lanev4hi */
    case 2502:  /* aarch64_get_lanev16qi */
    case 2501:  /* aarch64_get_lanev8qi */
    case 2327:  /* aarch64_float_trunc_rodd_hi_v4sf_le */
    case 1202:  /* aarch64_store_lane0v2df */
    case 1201:  /* aarch64_store_lane0v4sf */
    case 1200:  /* aarch64_store_lane0v2sf */
    case 1199:  /* aarch64_store_lane0v8bf */
    case 1198:  /* aarch64_store_lane0v4bf */
    case 1197:  /* aarch64_store_lane0v8hf */
    case 1196:  /* aarch64_store_lane0v4hf */
    case 1195:  /* aarch64_store_lane0v2di */
    case 1194:  /* aarch64_store_lane0v4si */
    case 1193:  /* aarch64_store_lane0v2si */
    case 1192:  /* aarch64_store_lane0v8hi */
    case 1191:  /* aarch64_store_lane0v4hi */
    case 1190:  /* aarch64_store_lane0v16qi */
    case 1189:  /* aarch64_store_lane0v8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 8578:  /* aarch64_sve_dup_lanevnx2df */
    case 8577:  /* aarch64_sve_dup_lanevnx2di */
    case 8576:  /* aarch64_sve_dup_lanevnx2sf */
    case 8575:  /* aarch64_sve_dup_lanevnx4sf */
    case 8574:  /* aarch64_sve_dup_lanevnx2si */
    case 8573:  /* aarch64_sve_dup_lanevnx4si */
    case 8572:  /* aarch64_sve_dup_lanevnx2bf */
    case 8571:  /* aarch64_sve_dup_lanevnx4bf */
    case 8570:  /* aarch64_sve_dup_lanevnx8bf */
    case 8569:  /* aarch64_sve_dup_lanevnx2hf */
    case 8568:  /* aarch64_sve_dup_lanevnx4hf */
    case 8567:  /* aarch64_sve_dup_lanevnx8hf */
    case 8566:  /* aarch64_sve_dup_lanevnx2hi */
    case 8565:  /* aarch64_sve_dup_lanevnx4hi */
    case 8564:  /* aarch64_sve_dup_lanevnx8hi */
    case 8563:  /* aarch64_sve_dup_lanevnx2qi */
    case 8562:  /* aarch64_sve_dup_lanevnx4qi */
    case 8561:  /* aarch64_sve_dup_lanevnx8qi */
    case 8560:  /* aarch64_sve_dup_lanevnx16qi */
    case 2500:  /* *aarch64_get_lane_zero_extenddiv8hi */
    case 2499:  /* *aarch64_get_lane_zero_extendsiv8hi */
    case 2498:  /* *aarch64_get_lane_zero_extenddiv4hi */
    case 2497:  /* *aarch64_get_lane_zero_extendsiv4hi */
    case 2496:  /* *aarch64_get_lane_zero_extenddiv16qi */
    case 2495:  /* *aarch64_get_lane_zero_extendsiv16qi */
    case 2494:  /* *aarch64_get_lane_zero_extenddiv8qi */
    case 2493:  /* *aarch64_get_lane_zero_extendsiv8qi */
    case 2492:  /* *aarch64_get_lane_extenddiv8hi */
    case 2491:  /* *aarch64_get_lane_extendsiv8hi */
    case 2490:  /* *aarch64_get_lane_extenddiv4hi */
    case 2489:  /* *aarch64_get_lane_extendsiv4hi */
    case 2488:  /* *aarch64_get_lane_extenddiv16qi */
    case 2487:  /* *aarch64_get_lane_extendsiv16qi */
    case 2486:  /* *aarch64_get_lane_extenddiv8qi */
    case 2485:  /* *aarch64_get_lane_extendsiv8qi */
    case 1174:  /* aarch64_dup_lane_to_64v4sf */
    case 1173:  /* aarch64_dup_lane_to_128v2sf */
    case 1172:  /* aarch64_dup_lane_to_64v8hf */
    case 1171:  /* aarch64_dup_lane_to_128v4hf */
    case 1170:  /* aarch64_dup_lane_to_64v4si */
    case 1169:  /* aarch64_dup_lane_to_128v2si */
    case 1168:  /* aarch64_dup_lane_to_64v8hi */
    case 1167:  /* aarch64_dup_lane_to_128v4hi */
    case 1166:  /* aarch64_dup_lane_to_64v16qi */
    case 1165:  /* aarch64_dup_lane_to_128v8qi */
    case 1164:  /* aarch64_dup_lanev2df */
    case 1163:  /* aarch64_dup_lanev4sf */
    case 1162:  /* aarch64_dup_lanev2sf */
    case 1161:  /* aarch64_dup_lanev8bf */
    case 1160:  /* aarch64_dup_lanev4bf */
    case 1159:  /* aarch64_dup_lanev8hf */
    case 1158:  /* aarch64_dup_lanev4hf */
    case 1157:  /* aarch64_dup_lanev2di */
    case 1156:  /* aarch64_dup_lanev4si */
    case 1155:  /* aarch64_dup_lanev2si */
    case 1154:  /* aarch64_dup_lanev8hi */
    case 1153:  /* aarch64_dup_lanev4hi */
    case 1152:  /* aarch64_dup_lanev16qi */
    case 1151:  /* aarch64_dup_lanev8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 1136:  /* patchable_area */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 1135:  /* st64bv0 */
    case 1134:  /* st64bv */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      break;

    case 1133:  /* st64b */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 4237:  /* aarch64_be_crypto_sha1hv4si */
    case 4236:  /* aarch64_crypto_sha1hv4si */
    case 1132:  /* ld64b */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 1131:  /* stg */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 0), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 0), 0), 0, 0), 1));
      break;

    case 1130:  /* ldg */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1128:  /* addg */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1127:  /* gmi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1126:  /* irg */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 1123:  /* tcancel */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      break;

    case 1125:  /* aarch64_rndrrs */
    case 1124:  /* aarch64_rndr */
    case 1121:  /* ttest */
    case 1120:  /* tstart */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 5512:  /* *zero_extendvnx2sivnx2di2 */
    case 5511:  /* *extendvnx2sivnx2di2 */
    case 5510:  /* *zero_extendvnx2hivnx2di2 */
    case 5509:  /* *extendvnx2hivnx2di2 */
    case 5508:  /* *zero_extendvnx2qivnx2di2 */
    case 5507:  /* *extendvnx2qivnx2di2 */
    case 5506:  /* *zero_extendvnx2hivnx2si2 */
    case 5505:  /* *extendvnx2hivnx2si2 */
    case 5504:  /* *zero_extendvnx2qivnx2si2 */
    case 5503:  /* *extendvnx2qivnx2si2 */
    case 5502:  /* *zero_extendvnx4hivnx4si2 */
    case 5501:  /* *extendvnx4hivnx4si2 */
    case 5500:  /* *zero_extendvnx4qivnx4si2 */
    case 5499:  /* *extendvnx4qivnx4si2 */
    case 5498:  /* *zero_extendvnx2qivnx2hi2 */
    case 5497:  /* *extendvnx2qivnx2hi2 */
    case 5496:  /* *zero_extendvnx4qivnx4hi2 */
    case 5495:  /* *extendvnx4qivnx4hi2 */
    case 5494:  /* *zero_extendvnx8qivnx8hi2 */
    case 5493:  /* *extendvnx8qivnx8hi2 */
    case 5295:  /* aarch64_pred_qnegvnx2di */
    case 5294:  /* aarch64_pred_qabsvnx2di */
    case 5293:  /* aarch64_pred_popcountvnx2di */
    case 5292:  /* aarch64_pred_clzvnx2di */
    case 5291:  /* aarch64_pred_clrsbvnx2di */
    case 5290:  /* aarch64_pred_one_cmplvnx2di */
    case 5289:  /* aarch64_pred_negvnx2di */
    case 5288:  /* aarch64_pred_absvnx2di */
    case 5287:  /* aarch64_pred_qnegvnx2si */
    case 5286:  /* aarch64_pred_qabsvnx2si */
    case 5285:  /* aarch64_pred_popcountvnx2si */
    case 5284:  /* aarch64_pred_clzvnx2si */
    case 5283:  /* aarch64_pred_clrsbvnx2si */
    case 5282:  /* aarch64_pred_one_cmplvnx2si */
    case 5281:  /* aarch64_pred_negvnx2si */
    case 5280:  /* aarch64_pred_absvnx2si */
    case 5279:  /* aarch64_pred_qnegvnx4si */
    case 5278:  /* aarch64_pred_qabsvnx4si */
    case 5277:  /* aarch64_pred_popcountvnx4si */
    case 5276:  /* aarch64_pred_clzvnx4si */
    case 5275:  /* aarch64_pred_clrsbvnx4si */
    case 5274:  /* aarch64_pred_one_cmplvnx4si */
    case 5273:  /* aarch64_pred_negvnx4si */
    case 5272:  /* aarch64_pred_absvnx4si */
    case 5271:  /* aarch64_pred_qnegvnx2hi */
    case 5270:  /* aarch64_pred_qabsvnx2hi */
    case 5269:  /* aarch64_pred_popcountvnx2hi */
    case 5268:  /* aarch64_pred_clzvnx2hi */
    case 5267:  /* aarch64_pred_clrsbvnx2hi */
    case 5266:  /* aarch64_pred_one_cmplvnx2hi */
    case 5265:  /* aarch64_pred_negvnx2hi */
    case 5264:  /* aarch64_pred_absvnx2hi */
    case 5263:  /* aarch64_pred_qnegvnx4hi */
    case 5262:  /* aarch64_pred_qabsvnx4hi */
    case 5261:  /* aarch64_pred_popcountvnx4hi */
    case 5260:  /* aarch64_pred_clzvnx4hi */
    case 5259:  /* aarch64_pred_clrsbvnx4hi */
    case 5258:  /* aarch64_pred_one_cmplvnx4hi */
    case 5257:  /* aarch64_pred_negvnx4hi */
    case 5256:  /* aarch64_pred_absvnx4hi */
    case 5255:  /* aarch64_pred_qnegvnx8hi */
    case 5254:  /* aarch64_pred_qabsvnx8hi */
    case 5253:  /* aarch64_pred_popcountvnx8hi */
    case 5252:  /* aarch64_pred_clzvnx8hi */
    case 5251:  /* aarch64_pred_clrsbvnx8hi */
    case 5250:  /* aarch64_pred_one_cmplvnx8hi */
    case 5249:  /* aarch64_pred_negvnx8hi */
    case 5248:  /* aarch64_pred_absvnx8hi */
    case 5247:  /* aarch64_pred_qnegvnx2qi */
    case 5246:  /* aarch64_pred_qabsvnx2qi */
    case 5245:  /* aarch64_pred_popcountvnx2qi */
    case 5244:  /* aarch64_pred_clzvnx2qi */
    case 5243:  /* aarch64_pred_clrsbvnx2qi */
    case 5242:  /* aarch64_pred_one_cmplvnx2qi */
    case 5241:  /* aarch64_pred_negvnx2qi */
    case 5240:  /* aarch64_pred_absvnx2qi */
    case 5239:  /* aarch64_pred_qnegvnx4qi */
    case 5238:  /* aarch64_pred_qabsvnx4qi */
    case 5237:  /* aarch64_pred_popcountvnx4qi */
    case 5236:  /* aarch64_pred_clzvnx4qi */
    case 5235:  /* aarch64_pred_clrsbvnx4qi */
    case 5234:  /* aarch64_pred_one_cmplvnx4qi */
    case 5233:  /* aarch64_pred_negvnx4qi */
    case 5232:  /* aarch64_pred_absvnx4qi */
    case 5231:  /* aarch64_pred_qnegvnx8qi */
    case 5230:  /* aarch64_pred_qabsvnx8qi */
    case 5229:  /* aarch64_pred_popcountvnx8qi */
    case 5228:  /* aarch64_pred_clzvnx8qi */
    case 5227:  /* aarch64_pred_clrsbvnx8qi */
    case 5226:  /* aarch64_pred_one_cmplvnx8qi */
    case 5225:  /* aarch64_pred_negvnx8qi */
    case 5224:  /* aarch64_pred_absvnx8qi */
    case 5223:  /* aarch64_pred_qnegvnx16qi */
    case 5222:  /* aarch64_pred_qabsvnx16qi */
    case 5221:  /* aarch64_pred_popcountvnx16qi */
    case 5220:  /* aarch64_pred_clzvnx16qi */
    case 5219:  /* aarch64_pred_clrsbvnx16qi */
    case 5218:  /* aarch64_pred_one_cmplvnx16qi */
    case 5217:  /* aarch64_pred_negvnx16qi */
    case 5216:  /* aarch64_pred_absvnx16qi */
    case 2908:  /* aarch64_sqrdmulh_nv4si */
    case 2907:  /* aarch64_sqdmulh_nv4si */
    case 2906:  /* aarch64_sqrdmulh_nv2si */
    case 2905:  /* aarch64_sqdmulh_nv2si */
    case 2904:  /* aarch64_sqrdmulh_nv8hi */
    case 2903:  /* aarch64_sqdmulh_nv8hi */
    case 2902:  /* aarch64_sqrdmulh_nv4hi */
    case 2901:  /* aarch64_sqdmulh_nv4hi */
    case 2752:  /* *aarch64_mulx_elt_from_dupv2df */
    case 2751:  /* *aarch64_mulx_elt_from_dupv4sf */
    case 2750:  /* *aarch64_mulx_elt_from_dupv2sf */
    case 2749:  /* *aarch64_mulx_elt_from_dupv8hf */
    case 2748:  /* *aarch64_mulx_elt_from_dupv4hf */
    case 1099:  /* despeculate_simpleti */
    case 1098:  /* despeculate_simpledi */
    case 1097:  /* despeculate_simplesi */
    case 1096:  /* despeculate_simplehi */
    case 1095:  /* despeculate_simpleqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      break;

    case 1084:  /* speculation_tracker_rev */
    case 1083:  /* speculation_tracker */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1078:  /* aarch64_set_fpcrdi */
    case 1077:  /* aarch64_set_fpsrdi */
    case 1076:  /* aarch64_set_fpcrsi */
    case 1075:  /* aarch64_set_fpsrsi */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 1074:  /* stack_protect_test_di */
    case 1073:  /* stack_protect_test_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1072:  /* stack_protect_set_di */
    case 1071:  /* stack_protect_set_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 8367:  /* aarch64_pred_fcmuovnx2df */
    case 8366:  /* aarch64_pred_fcmuovnx4sf */
    case 8365:  /* aarch64_pred_fcmuovnx8hf */
    case 8364:  /* aarch64_pred_fcmnevnx2df */
    case 8363:  /* aarch64_pred_fcmltvnx2df */
    case 8362:  /* aarch64_pred_fcmlevnx2df */
    case 8361:  /* aarch64_pred_fcmgtvnx2df */
    case 8360:  /* aarch64_pred_fcmgevnx2df */
    case 8359:  /* aarch64_pred_fcmeqvnx2df */
    case 8358:  /* aarch64_pred_fcmnevnx4sf */
    case 8357:  /* aarch64_pred_fcmltvnx4sf */
    case 8356:  /* aarch64_pred_fcmlevnx4sf */
    case 8355:  /* aarch64_pred_fcmgtvnx4sf */
    case 8354:  /* aarch64_pred_fcmgevnx4sf */
    case 8353:  /* aarch64_pred_fcmeqvnx4sf */
    case 8352:  /* aarch64_pred_fcmnevnx8hf */
    case 8351:  /* aarch64_pred_fcmltvnx8hf */
    case 8350:  /* aarch64_pred_fcmlevnx8hf */
    case 8349:  /* aarch64_pred_fcmgtvnx8hf */
    case 8348:  /* aarch64_pred_fcmgevnx8hf */
    case 8347:  /* aarch64_pred_fcmeqvnx8hf */
    case 7576:  /* aarch64_sve_bfmlalt_lanevnx4sf */
    case 7575:  /* aarch64_sve_bfmlalb_lanevnx4sf */
    case 7574:  /* aarch64_sve_bfdot_lanevnx4sf */
    case 4265:  /* aarch64_sm3tt2bqv4si */
    case 4264:  /* aarch64_sm3tt2aqv4si */
    case 4263:  /* aarch64_sm3tt1bqv4si */
    case 4262:  /* aarch64_sm3tt1aqv4si */
    case 1068:  /* probe_sve_stack_clash_di */
    case 1067:  /* probe_sve_stack_clash_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 1055:  /* aarch64_fjcvtzs */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1054:  /* stack_tie */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1053:  /* tlsdesc_small_sve_di */
    case 1052:  /* tlsdesc_small_sve_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1051:  /* tlsdesc_small_advsimd_di */
    case 1050:  /* tlsdesc_small_advsimd_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 4460:  /* aarch64_load_exclusivehi */
    case 4459:  /* aarch64_load_exclusiveqi */
    case 1041:  /* tlsie_tiny_sidi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 1035:  /* *tlsgd_small_di */
    case 1034:  /* *tlsgd_small_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 4640:  /* aarch64_rdffr */
    case 1082:  /* aarch64_get_fpcrdi */
    case 1081:  /* aarch64_get_fpsrdi */
    case 1080:  /* aarch64_get_fpcrsi */
    case 1079:  /* aarch64_get_fpsrsi */
    case 1033:  /* aarch64_load_tp_hard */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 1029:  /* ldr_got_small_28k_sidi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0), 1));
      break;

    case 1028:  /* ldr_got_small_28k_di */
    case 1027:  /* ldr_got_small_28k_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      break;

    case 1021:  /* aarch64_movtfhigh_di */
    case 1020:  /* aarch64_movtihigh_di */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 9944:  /* aarch64_sve2_histcntvnx2di */
    case 9943:  /* aarch64_sve2_histcntvnx4si */
    case 9930:  /* aarch64_sve2_tbxvnx2df */
    case 9929:  /* aarch64_sve2_tbxvnx4sf */
    case 9928:  /* aarch64_sve2_tbxvnx8hf */
    case 9927:  /* aarch64_sve2_tbxvnx8bf */
    case 9926:  /* aarch64_sve2_tbxvnx2di */
    case 9925:  /* aarch64_sve2_tbxvnx4si */
    case 9924:  /* aarch64_sve2_tbxvnx8hi */
    case 9923:  /* aarch64_sve2_tbxvnx16qi */
    case 9870:  /* aarch64_sve_cdot270vnx2di */
    case 9869:  /* aarch64_sve_cdot180vnx2di */
    case 9868:  /* aarch64_sve_cdot90vnx2di */
    case 9867:  /* aarch64_sve_cdotvnx2di */
    case 9866:  /* aarch64_sve_cdot270vnx4si */
    case 9865:  /* aarch64_sve_cdot180vnx4si */
    case 9864:  /* aarch64_sve_cdot90vnx4si */
    case 9863:  /* aarch64_sve_cdotvnx4si */
    case 9846:  /* aarch64_sve_sqrdcmlah270vnx2di */
    case 9845:  /* aarch64_sve_sqrdcmlah180vnx2di */
    case 9844:  /* aarch64_sve_sqrdcmlah90vnx2di */
    case 9843:  /* aarch64_sve_sqrdcmlahvnx2di */
    case 9842:  /* aarch64_sve_cmla270vnx2di */
    case 9841:  /* aarch64_sve_cmla180vnx2di */
    case 9840:  /* aarch64_sve_cmla90vnx2di */
    case 9839:  /* aarch64_sve_cmlavnx2di */
    case 9838:  /* aarch64_sve_sqrdcmlah270vnx4si */
    case 9837:  /* aarch64_sve_sqrdcmlah180vnx4si */
    case 9836:  /* aarch64_sve_sqrdcmlah90vnx4si */
    case 9835:  /* aarch64_sve_sqrdcmlahvnx4si */
    case 9834:  /* aarch64_sve_cmla270vnx4si */
    case 9833:  /* aarch64_sve_cmla180vnx4si */
    case 9832:  /* aarch64_sve_cmla90vnx4si */
    case 9831:  /* aarch64_sve_cmlavnx4si */
    case 9830:  /* aarch64_sve_sqrdcmlah270vnx8hi */
    case 9829:  /* aarch64_sve_sqrdcmlah180vnx8hi */
    case 9828:  /* aarch64_sve_sqrdcmlah90vnx8hi */
    case 9827:  /* aarch64_sve_sqrdcmlahvnx8hi */
    case 9826:  /* aarch64_sve_cmla270vnx8hi */
    case 9825:  /* aarch64_sve_cmla180vnx8hi */
    case 9824:  /* aarch64_sve_cmla90vnx8hi */
    case 9823:  /* aarch64_sve_cmlavnx8hi */
    case 9822:  /* aarch64_sve_sqrdcmlah270vnx16qi */
    case 9821:  /* aarch64_sve_sqrdcmlah180vnx16qi */
    case 9820:  /* aarch64_sve_sqrdcmlah90vnx16qi */
    case 9819:  /* aarch64_sve_sqrdcmlahvnx16qi */
    case 9818:  /* aarch64_sve_cmla270vnx16qi */
    case 9817:  /* aarch64_sve_cmla180vnx16qi */
    case 9816:  /* aarch64_sve_cmla90vnx16qi */
    case 9815:  /* aarch64_sve_cmlavnx16qi */
    case 9786:  /* aarch64_pred_fminnmpvnx2df */
    case 9785:  /* aarch64_pred_fminpvnx2df */
    case 9784:  /* aarch64_pred_fmaxnmpvnx2df */
    case 9783:  /* aarch64_pred_fmaxpvnx2df */
    case 9782:  /* aarch64_pred_faddpvnx2df */
    case 9781:  /* aarch64_pred_fminnmpvnx4sf */
    case 9780:  /* aarch64_pred_fminpvnx4sf */
    case 9779:  /* aarch64_pred_fmaxnmpvnx4sf */
    case 9778:  /* aarch64_pred_fmaxpvnx4sf */
    case 9777:  /* aarch64_pred_faddpvnx4sf */
    case 9776:  /* aarch64_pred_fminnmpvnx8hf */
    case 9775:  /* aarch64_pred_fminpvnx8hf */
    case 9774:  /* aarch64_pred_fmaxnmpvnx8hf */
    case 9773:  /* aarch64_pred_fmaxpvnx8hf */
    case 9772:  /* aarch64_pred_faddpvnx8hf */
    case 9771:  /* aarch64_pred_uminpvnx2di */
    case 9770:  /* aarch64_pred_umaxpvnx2di */
    case 9769:  /* aarch64_pred_sminpvnx2di */
    case 9768:  /* aarch64_pred_smaxpvnx2di */
    case 9767:  /* aarch64_pred_addpvnx2di */
    case 9766:  /* aarch64_pred_uminpvnx4si */
    case 9765:  /* aarch64_pred_umaxpvnx4si */
    case 9764:  /* aarch64_pred_sminpvnx4si */
    case 9763:  /* aarch64_pred_smaxpvnx4si */
    case 9762:  /* aarch64_pred_addpvnx4si */
    case 9761:  /* aarch64_pred_uminpvnx8hi */
    case 9760:  /* aarch64_pred_umaxpvnx8hi */
    case 9759:  /* aarch64_pred_sminpvnx8hi */
    case 9758:  /* aarch64_pred_smaxpvnx8hi */
    case 9757:  /* aarch64_pred_addpvnx8hi */
    case 9756:  /* aarch64_pred_uminpvnx16qi */
    case 9755:  /* aarch64_pred_umaxpvnx16qi */
    case 9754:  /* aarch64_pred_sminpvnx16qi */
    case 9753:  /* aarch64_pred_smaxpvnx16qi */
    case 9752:  /* aarch64_pred_addpvnx16qi */
    case 9751:  /* aarch64_sve_uqshrntvnx2di */
    case 9750:  /* aarch64_sve_uqrshrntvnx2di */
    case 9749:  /* aarch64_sve_sqshruntvnx2di */
    case 9748:  /* aarch64_sve_sqshrntvnx2di */
    case 9747:  /* aarch64_sve_sqrshruntvnx2di */
    case 9746:  /* aarch64_sve_sqrshrntvnx2di */
    case 9745:  /* aarch64_sve_shrntvnx2di */
    case 9744:  /* aarch64_sve_rshrntvnx2di */
    case 9743:  /* aarch64_sve_uqshrntvnx4si */
    case 9742:  /* aarch64_sve_uqrshrntvnx4si */
    case 9741:  /* aarch64_sve_sqshruntvnx4si */
    case 9740:  /* aarch64_sve_sqshrntvnx4si */
    case 9739:  /* aarch64_sve_sqrshruntvnx4si */
    case 9738:  /* aarch64_sve_sqrshrntvnx4si */
    case 9737:  /* aarch64_sve_shrntvnx4si */
    case 9736:  /* aarch64_sve_rshrntvnx4si */
    case 9735:  /* aarch64_sve_uqshrntvnx8hi */
    case 9734:  /* aarch64_sve_uqrshrntvnx8hi */
    case 9733:  /* aarch64_sve_sqshruntvnx8hi */
    case 9732:  /* aarch64_sve_sqshrntvnx8hi */
    case 9731:  /* aarch64_sve_sqrshruntvnx8hi */
    case 9730:  /* aarch64_sve_sqrshrntvnx8hi */
    case 9729:  /* aarch64_sve_shrntvnx8hi */
    case 9728:  /* aarch64_sve_rshrntvnx8hi */
    case 9703:  /* aarch64_sve_subhntvnx2di */
    case 9702:  /* aarch64_sve_rsubhntvnx2di */
    case 9701:  /* aarch64_sve_raddhntvnx2di */
    case 9700:  /* aarch64_sve_addhntvnx2di */
    case 9699:  /* aarch64_sve_subhntvnx4si */
    case 9698:  /* aarch64_sve_rsubhntvnx4si */
    case 9697:  /* aarch64_sve_raddhntvnx4si */
    case 9696:  /* aarch64_sve_addhntvnx4si */
    case 9695:  /* aarch64_sve_subhntvnx8hi */
    case 9694:  /* aarch64_sve_rsubhntvnx8hi */
    case 9693:  /* aarch64_sve_raddhntvnx8hi */
    case 9692:  /* aarch64_sve_addhntvnx8hi */
    case 9657:  /* aarch64_sve_fmlsltvnx4sf */
    case 9656:  /* aarch64_sve_fmlslbvnx4sf */
    case 9655:  /* aarch64_sve_fmlaltvnx4sf */
    case 9654:  /* aarch64_sve_fmlalbvnx4sf */
    case 9456:  /* aarch64_sve_srivnx2di */
    case 9455:  /* aarch64_sve_slivnx2di */
    case 9454:  /* aarch64_sve_srivnx4si */
    case 9453:  /* aarch64_sve_slivnx4si */
    case 9452:  /* aarch64_sve_srivnx8hi */
    case 9451:  /* aarch64_sve_slivnx8hi */
    case 9450:  /* aarch64_sve_srivnx16qi */
    case 9449:  /* aarch64_sve_slivnx16qi */
    case 9080:  /* aarch64_gather_ldntvnx2df */
    case 9079:  /* aarch64_gather_ldntvnx4sf */
    case 9078:  /* aarch64_gather_ldntvnx2di */
    case 9077:  /* aarch64_gather_ldntvnx4si */
    case 8954:  /* aarch64_brkpb */
    case 8953:  /* aarch64_brkpa */
    case 8952:  /* aarch64_brkn */
    case 8947:  /* aarch64_brkb */
    case 8946:  /* aarch64_brka */
    case 8826:  /* aarch64_sve_trn1_convvnx2bi */
    case 8825:  /* aarch64_sve_trn1_convvnx4bi */
    case 8824:  /* aarch64_sve_trn1_convvnx8bi */
    case 8823:  /* aarch64_sve_trn1_convvnx16bi */
    case 8794:  /* aarch64_sve_extvnx2df */
    case 8793:  /* aarch64_sve_extvnx2di */
    case 8792:  /* aarch64_sve_extvnx2sf */
    case 8791:  /* aarch64_sve_extvnx4sf */
    case 8790:  /* aarch64_sve_extvnx2si */
    case 8789:  /* aarch64_sve_extvnx4si */
    case 8788:  /* aarch64_sve_extvnx2bf */
    case 8787:  /* aarch64_sve_extvnx4bf */
    case 8786:  /* aarch64_sve_extvnx8bf */
    case 8785:  /* aarch64_sve_extvnx2hf */
    case 8784:  /* aarch64_sve_extvnx4hf */
    case 8783:  /* aarch64_sve_extvnx8hf */
    case 8782:  /* aarch64_sve_extvnx2hi */
    case 8781:  /* aarch64_sve_extvnx4hi */
    case 8780:  /* aarch64_sve_extvnx8hi */
    case 8779:  /* aarch64_sve_extvnx2qi */
    case 8778:  /* aarch64_sve_extvnx4qi */
    case 8777:  /* aarch64_sve_extvnx8qi */
    case 8776:  /* aarch64_sve_extvnx16qi */
    case 8613:  /* aarch64_sve_splicevnx2df */
    case 8612:  /* aarch64_sve_splicevnx4sf */
    case 8611:  /* aarch64_sve_splicevnx8hf */
    case 8610:  /* aarch64_sve_splicevnx8bf */
    case 8609:  /* aarch64_sve_splicevnx2di */
    case 8608:  /* aarch64_sve_splicevnx4si */
    case 8607:  /* aarch64_sve_splicevnx8hi */
    case 8606:  /* aarch64_sve_splicevnx16qi */
    case 8494:  /* aarch64_fold_extract_vector_last_vnx2df */
    case 8493:  /* aarch64_fold_extract_vector_after_last_vnx2df */
    case 8492:  /* aarch64_fold_extract_vector_last_vnx4sf */
    case 8491:  /* aarch64_fold_extract_vector_after_last_vnx4sf */
    case 8490:  /* aarch64_fold_extract_vector_last_vnx8hf */
    case 8489:  /* aarch64_fold_extract_vector_after_last_vnx8hf */
    case 8488:  /* aarch64_fold_extract_vector_last_vnx8bf */
    case 8487:  /* aarch64_fold_extract_vector_after_last_vnx8bf */
    case 8486:  /* aarch64_fold_extract_vector_last_vnx2di */
    case 8485:  /* aarch64_fold_extract_vector_after_last_vnx2di */
    case 8484:  /* aarch64_fold_extract_vector_last_vnx4si */
    case 8483:  /* aarch64_fold_extract_vector_after_last_vnx4si */
    case 8482:  /* aarch64_fold_extract_vector_last_vnx8hi */
    case 8481:  /* aarch64_fold_extract_vector_after_last_vnx8hi */
    case 8480:  /* aarch64_fold_extract_vector_last_vnx16qi */
    case 8479:  /* aarch64_fold_extract_vector_after_last_vnx16qi */
    case 8478:  /* fold_extract_last_vnx2df */
    case 8477:  /* fold_extract_after_last_vnx2df */
    case 8476:  /* fold_extract_last_vnx4sf */
    case 8475:  /* fold_extract_after_last_vnx4sf */
    case 8474:  /* fold_extract_last_vnx8hf */
    case 8473:  /* fold_extract_after_last_vnx8hf */
    case 8472:  /* fold_extract_last_vnx8bf */
    case 8471:  /* fold_extract_after_last_vnx8bf */
    case 8470:  /* fold_extract_last_vnx2di */
    case 8469:  /* fold_extract_after_last_vnx2di */
    case 8468:  /* fold_extract_last_vnx4si */
    case 8467:  /* fold_extract_after_last_vnx4si */
    case 8466:  /* fold_extract_last_vnx8hi */
    case 8465:  /* fold_extract_after_last_vnx8hi */
    case 8464:  /* fold_extract_last_vnx16qi */
    case 8463:  /* fold_extract_after_last_vnx16qi */
    case 7573:  /* aarch64_sve_bfmmlavnx4sf */
    case 7572:  /* aarch64_sve_bfmlaltvnx4sf */
    case 7571:  /* aarch64_sve_bfmlalbvnx4sf */
    case 7570:  /* aarch64_sve_bfdotvnx4sf */
    case 7569:  /* aarch64_sve_tmadvnx2df */
    case 7568:  /* aarch64_sve_tmadvnx4sf */
    case 7567:  /* aarch64_sve_tmadvnx8hf */
    case 4267:  /* aarch64_sm3partw2qv4si */
    case 4266:  /* aarch64_sm3partw1qv4si */
    case 4261:  /* aarch64_sm3ss1qv4si */
    case 4250:  /* aarch64_crypto_sha512su1qv2di */
    case 4248:  /* aarch64_crypto_sha512h2qv2di */
    case 4247:  /* aarch64_crypto_sha512hqv2di */
    case 4246:  /* aarch64_crypto_sha256su1v4si */
    case 4244:  /* aarch64_crypto_sha256h2v4si */
    case 4243:  /* aarch64_crypto_sha256hv4si */
    case 4242:  /* aarch64_crypto_sha1su0v4si */
    case 4241:  /* aarch64_crypto_sha1pv4si */
    case 4240:  /* aarch64_crypto_sha1mv4si */
    case 4239:  /* aarch64_crypto_sha1cv4si */
    case 4111:  /* aarch64_extv2df */
    case 4110:  /* aarch64_extv4sf */
    case 4109:  /* aarch64_extv2sf */
    case 4108:  /* aarch64_extv8bf */
    case 4107:  /* aarch64_extv4bf */
    case 4106:  /* aarch64_extv8hf */
    case 4105:  /* aarch64_extv4hf */
    case 4104:  /* aarch64_extv2di */
    case 4103:  /* aarch64_extv4si */
    case 4102:  /* aarch64_extv2si */
    case 4101:  /* aarch64_extv8hi */
    case 4100:  /* aarch64_extv4hi */
    case 4099:  /* aarch64_extv16qi */
    case 4098:  /* aarch64_extv8qi */
    case 4012:  /* aarch64_qtbx4v16qi */
    case 4011:  /* aarch64_qtbx4v8qi */
    case 4008:  /* aarch64_qtbx3v16qi */
    case 4007:  /* aarch64_qtbx3v8qi */
    case 4004:  /* aarch64_qtbx2v16qi */
    case 4003:  /* aarch64_qtbx2v8qi */
    case 4000:  /* aarch64_qtbx1v16qi */
    case 3999:  /* aarch64_qtbx1v8qi */
    case 3687:  /* aarch64_vec_load_lanesv4x8bf_lanev8bf */
    case 3686:  /* aarch64_vec_load_lanesv4x2df_lanev2df */
    case 3685:  /* aarch64_vec_load_lanesv4x4sf_lanev4sf */
    case 3684:  /* aarch64_vec_load_lanesv4x8hf_lanev8hf */
    case 3683:  /* aarch64_vec_load_lanesv4x2di_lanev2di */
    case 3682:  /* aarch64_vec_load_lanesv4x4si_lanev4si */
    case 3681:  /* aarch64_vec_load_lanesv4x8hi_lanev8hi */
    case 3680:  /* aarch64_vec_load_lanesv4x16qi_lanev16qi */
    case 3679:  /* aarch64_vec_load_lanesv4x4bf_lanev4bf */
    case 3678:  /* aarch64_vec_load_lanesv4x1df_lanedf */
    case 3677:  /* aarch64_vec_load_lanesv4x2sf_lanev2sf */
    case 3676:  /* aarch64_vec_load_lanesv4x4hf_lanev4hf */
    case 3675:  /* aarch64_vec_load_lanesv4x1di_lanedi */
    case 3674:  /* aarch64_vec_load_lanesv4x2si_lanev2si */
    case 3673:  /* aarch64_vec_load_lanesv4x4hi_lanev4hi */
    case 3672:  /* aarch64_vec_load_lanesv4x8qi_lanev8qi */
    case 3623:  /* aarch64_vec_load_lanesv3x8bf_lanev8bf */
    case 3622:  /* aarch64_vec_load_lanesv3x2df_lanev2df */
    case 3621:  /* aarch64_vec_load_lanesv3x4sf_lanev4sf */
    case 3620:  /* aarch64_vec_load_lanesv3x8hf_lanev8hf */
    case 3619:  /* aarch64_vec_load_lanesv3x2di_lanev2di */
    case 3618:  /* aarch64_vec_load_lanesv3x4si_lanev4si */
    case 3617:  /* aarch64_vec_load_lanesv3x8hi_lanev8hi */
    case 3616:  /* aarch64_vec_load_lanesv3x16qi_lanev16qi */
    case 3615:  /* aarch64_vec_load_lanesv3x4bf_lanev4bf */
    case 3614:  /* aarch64_vec_load_lanesv3x1df_lanedf */
    case 3613:  /* aarch64_vec_load_lanesv3x2sf_lanev2sf */
    case 3612:  /* aarch64_vec_load_lanesv3x4hf_lanev4hf */
    case 3611:  /* aarch64_vec_load_lanesv3x1di_lanedi */
    case 3610:  /* aarch64_vec_load_lanesv3x2si_lanev2si */
    case 3609:  /* aarch64_vec_load_lanesv3x4hi_lanev4hi */
    case 3608:  /* aarch64_vec_load_lanesv3x8qi_lanev8qi */
    case 3559:  /* aarch64_vec_load_lanesv2x8bf_lanev8bf */
    case 3558:  /* aarch64_vec_load_lanesv2x2df_lanev2df */
    case 3557:  /* aarch64_vec_load_lanesv2x4sf_lanev4sf */
    case 3556:  /* aarch64_vec_load_lanesv2x8hf_lanev8hf */
    case 3555:  /* aarch64_vec_load_lanesv2x2di_lanev2di */
    case 3554:  /* aarch64_vec_load_lanesv2x4si_lanev4si */
    case 3553:  /* aarch64_vec_load_lanesv2x8hi_lanev8hi */
    case 3552:  /* aarch64_vec_load_lanesv2x16qi_lanev16qi */
    case 3551:  /* aarch64_vec_load_lanesv2x4bf_lanev4bf */
    case 3550:  /* aarch64_vec_load_lanesv2x1df_lanedf */
    case 3549:  /* aarch64_vec_load_lanesv2x2sf_lanev2sf */
    case 3548:  /* aarch64_vec_load_lanesv2x4hf_lanev4hf */
    case 3547:  /* aarch64_vec_load_lanesv2x1di_lanedi */
    case 3546:  /* aarch64_vec_load_lanesv2x2si_lanev2si */
    case 3545:  /* aarch64_vec_load_lanesv2x4hi_lanev4hi */
    case 3544:  /* aarch64_vec_load_lanesv2x8qi_lanev8qi */
    case 3214:  /* aarch64_usri_ndi */
    case 3213:  /* aarch64_ssri_ndi */
    case 3212:  /* aarch64_usli_ndi */
    case 3211:  /* aarch64_ssli_ndi */
    case 3210:  /* aarch64_usri_nv2di */
    case 3209:  /* aarch64_ssri_nv2di */
    case 3208:  /* aarch64_usli_nv2di */
    case 3207:  /* aarch64_ssli_nv2di */
    case 3206:  /* aarch64_usri_nv4si */
    case 3205:  /* aarch64_ssri_nv4si */
    case 3204:  /* aarch64_usli_nv4si */
    case 3203:  /* aarch64_ssli_nv4si */
    case 3202:  /* aarch64_usri_nv2si */
    case 3201:  /* aarch64_ssri_nv2si */
    case 3200:  /* aarch64_usli_nv2si */
    case 3199:  /* aarch64_ssli_nv2si */
    case 3198:  /* aarch64_usri_nv8hi */
    case 3197:  /* aarch64_ssri_nv8hi */
    case 3196:  /* aarch64_usli_nv8hi */
    case 3195:  /* aarch64_ssli_nv8hi */
    case 3194:  /* aarch64_usri_nv4hi */
    case 3193:  /* aarch64_ssri_nv4hi */
    case 3192:  /* aarch64_usli_nv4hi */
    case 3191:  /* aarch64_ssli_nv4hi */
    case 3190:  /* aarch64_usri_nv16qi */
    case 3189:  /* aarch64_ssri_nv16qi */
    case 3188:  /* aarch64_usli_nv16qi */
    case 3187:  /* aarch64_ssli_nv16qi */
    case 3186:  /* aarch64_usri_nv8qi */
    case 3185:  /* aarch64_ssri_nv8qi */
    case 3184:  /* aarch64_usli_nv8qi */
    case 3183:  /* aarch64_ssli_nv8qi */
    case 3182:  /* aarch64_ursra_ndi */
    case 3181:  /* aarch64_srsra_ndi */
    case 3180:  /* aarch64_usra_ndi */
    case 3179:  /* aarch64_ssra_ndi */
    case 3178:  /* aarch64_ursra_nv2di */
    case 3177:  /* aarch64_srsra_nv2di */
    case 3176:  /* aarch64_usra_nv2di */
    case 3175:  /* aarch64_ssra_nv2di */
    case 3174:  /* aarch64_ursra_nv4si */
    case 3173:  /* aarch64_srsra_nv4si */
    case 3172:  /* aarch64_usra_nv4si */
    case 3171:  /* aarch64_ssra_nv4si */
    case 3170:  /* aarch64_ursra_nv2si */
    case 3169:  /* aarch64_srsra_nv2si */
    case 3168:  /* aarch64_usra_nv2si */
    case 3167:  /* aarch64_ssra_nv2si */
    case 3166:  /* aarch64_ursra_nv8hi */
    case 3165:  /* aarch64_srsra_nv8hi */
    case 3164:  /* aarch64_usra_nv8hi */
    case 3163:  /* aarch64_ssra_nv8hi */
    case 3162:  /* aarch64_ursra_nv4hi */
    case 3161:  /* aarch64_srsra_nv4hi */
    case 3160:  /* aarch64_usra_nv4hi */
    case 3159:  /* aarch64_ssra_nv4hi */
    case 3158:  /* aarch64_ursra_nv16qi */
    case 3157:  /* aarch64_srsra_nv16qi */
    case 3156:  /* aarch64_usra_nv16qi */
    case 3155:  /* aarch64_ssra_nv16qi */
    case 3154:  /* aarch64_ursra_nv8qi */
    case 3153:  /* aarch64_srsra_nv8qi */
    case 3152:  /* aarch64_usra_nv8qi */
    case 3151:  /* aarch64_ssra_nv8qi */
    case 2944:  /* aarch64_sqrdmlshsi */
    case 2943:  /* aarch64_sqrdmlahsi */
    case 2942:  /* aarch64_sqrdmlshhi */
    case 2941:  /* aarch64_sqrdmlahhi */
    case 2940:  /* aarch64_sqrdmlshv4si */
    case 2939:  /* aarch64_sqrdmlahv4si */
    case 2938:  /* aarch64_sqrdmlshv2si */
    case 2937:  /* aarch64_sqrdmlahv2si */
    case 2936:  /* aarch64_sqrdmlshv8hi */
    case 2935:  /* aarch64_sqrdmlahv8hi */
    case 2934:  /* aarch64_sqrdmlshv4hi */
    case 2933:  /* aarch64_sqrdmlahv4hi */
    case 1015:  /* copysigndf3_insn */
    case 1014:  /* copysignsf3_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 912:  /* *aarch64_fnmadddf4 */
    case 911:  /* *aarch64_fnmaddsf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 910:  /* *aarch64_fnmsdf4 */
    case 909:  /* *aarch64_fnmssf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 908:  /* *aarch64_fmsdf4 */
    case 907:  /* *aarch64_fmssf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 906:  /* *aarch64_fnmadf4 */
    case 905:  /* *aarch64_fnmasf4 */
    case 904:  /* *aarch64_fnmahf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 903:  /* *aarch64_fmadf4 */
    case 902:  /* *aarch64_fmasf4 */
    case 901:  /* *aarch64_fmahf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2384:  /* aarch64_zero_extenddi_reduc_plus_v8hi */
    case 2383:  /* aarch64_zero_extendsi_reduc_plus_v8hi */
    case 2382:  /* aarch64_zero_extenddi_reduc_plus_v4hi */
    case 2381:  /* aarch64_zero_extendsi_reduc_plus_v4hi */
    case 2380:  /* aarch64_zero_extenddi_reduc_plus_v16qi */
    case 2379:  /* aarch64_zero_extendsi_reduc_plus_v16qi */
    case 2378:  /* aarch64_zero_extenddi_reduc_plus_v8qi */
    case 2377:  /* aarch64_zero_extendsi_reduc_plus_v8qi */
    case 2278:  /* lfrintnuhfhi2 */
    case 2277:  /* lrounduhfhi2 */
    case 2276:  /* lflooruhfhi2 */
    case 2275:  /* lceiluhfhi2 */
    case 2274:  /* lbtruncuhfhi2 */
    case 2273:  /* lfrintnhfhi2 */
    case 2272:  /* lroundhfhi2 */
    case 2271:  /* lfloorhfhi2 */
    case 2270:  /* lceilhfhi2 */
    case 2269:  /* lbtrunchfhi2 */
    case 2268:  /* lfrintnuv2dfv2di2 */
    case 2267:  /* lrounduv2dfv2di2 */
    case 2266:  /* lflooruv2dfv2di2 */
    case 2265:  /* lceiluv2dfv2di2 */
    case 2264:  /* lbtruncuv2dfv2di2 */
    case 2263:  /* lfrintnv2dfv2di2 */
    case 2262:  /* lroundv2dfv2di2 */
    case 2261:  /* lfloorv2dfv2di2 */
    case 2260:  /* lceilv2dfv2di2 */
    case 2259:  /* lbtruncv2dfv2di2 */
    case 2258:  /* lfrintnuv4sfv4si2 */
    case 2257:  /* lrounduv4sfv4si2 */
    case 2256:  /* lflooruv4sfv4si2 */
    case 2255:  /* lceiluv4sfv4si2 */
    case 2254:  /* lbtruncuv4sfv4si2 */
    case 2253:  /* lfrintnv4sfv4si2 */
    case 2252:  /* lroundv4sfv4si2 */
    case 2251:  /* lfloorv4sfv4si2 */
    case 2250:  /* lceilv4sfv4si2 */
    case 2249:  /* lbtruncv4sfv4si2 */
    case 2248:  /* lfrintnuv2sfv2si2 */
    case 2247:  /* lrounduv2sfv2si2 */
    case 2246:  /* lflooruv2sfv2si2 */
    case 2245:  /* lceiluv2sfv2si2 */
    case 2244:  /* lbtruncuv2sfv2si2 */
    case 2243:  /* lfrintnv2sfv2si2 */
    case 2242:  /* lroundv2sfv2si2 */
    case 2241:  /* lfloorv2sfv2si2 */
    case 2240:  /* lceilv2sfv2si2 */
    case 2239:  /* lbtruncv2sfv2si2 */
    case 2238:  /* lfrintnuv8hfv8hi2 */
    case 2237:  /* lrounduv8hfv8hi2 */
    case 2236:  /* lflooruv8hfv8hi2 */
    case 2235:  /* lceiluv8hfv8hi2 */
    case 2234:  /* lbtruncuv8hfv8hi2 */
    case 2233:  /* lfrintnv8hfv8hi2 */
    case 2232:  /* lroundv8hfv8hi2 */
    case 2231:  /* lfloorv8hfv8hi2 */
    case 2230:  /* lceilv8hfv8hi2 */
    case 2229:  /* lbtruncv8hfv8hi2 */
    case 2228:  /* lfrintnuv4hfv4hi2 */
    case 2227:  /* lrounduv4hfv4hi2 */
    case 2226:  /* lflooruv4hfv4hi2 */
    case 2225:  /* lceiluv4hfv4hi2 */
    case 2224:  /* lbtruncuv4hfv4hi2 */
    case 2223:  /* lfrintnv4hfv4hi2 */
    case 2222:  /* lroundv4hfv4hi2 */
    case 2221:  /* lfloorv4hfv4hi2 */
    case 2220:  /* lceilv4hfv4hi2 */
    case 2219:  /* lbtruncv4hfv4hi2 */
    case 1038:  /* tlsie_small_sidi */
    case 1032:  /* ldr_got_tiny_sidi */
    case 892:  /* lfrintnudfdi2 */
    case 891:  /* lroundudfdi2 */
    case 890:  /* lfloorudfdi2 */
    case 889:  /* lceiludfdi2 */
    case 888:  /* lbtruncudfdi2 */
    case 887:  /* lfrintndfdi2 */
    case 886:  /* lrounddfdi2 */
    case 885:  /* lfloordfdi2 */
    case 884:  /* lceildfdi2 */
    case 883:  /* lbtruncdfdi2 */
    case 882:  /* lfrintnusfdi2 */
    case 881:  /* lroundusfdi2 */
    case 880:  /* lfloorusfdi2 */
    case 879:  /* lceilusfdi2 */
    case 878:  /* lbtruncusfdi2 */
    case 877:  /* lfrintnsfdi2 */
    case 876:  /* lroundsfdi2 */
    case 875:  /* lfloorsfdi2 */
    case 874:  /* lceilsfdi2 */
    case 873:  /* lbtruncsfdi2 */
    case 872:  /* lfrintnuhfdi2 */
    case 871:  /* lrounduhfdi2 */
    case 870:  /* lflooruhfdi2 */
    case 869:  /* lceiluhfdi2 */
    case 868:  /* lbtruncuhfdi2 */
    case 867:  /* lfrintnhfdi2 */
    case 866:  /* lroundhfdi2 */
    case 865:  /* lfloorhfdi2 */
    case 864:  /* lceilhfdi2 */
    case 863:  /* lbtrunchfdi2 */
    case 862:  /* lfrintnudfsi2 */
    case 861:  /* lroundudfsi2 */
    case 860:  /* lfloorudfsi2 */
    case 859:  /* lceiludfsi2 */
    case 858:  /* lbtruncudfsi2 */
    case 857:  /* lfrintndfsi2 */
    case 856:  /* lrounddfsi2 */
    case 855:  /* lfloordfsi2 */
    case 854:  /* lceildfsi2 */
    case 853:  /* lbtruncdfsi2 */
    case 852:  /* lfrintnusfsi2 */
    case 851:  /* lroundusfsi2 */
    case 850:  /* lfloorusfsi2 */
    case 849:  /* lceilusfsi2 */
    case 848:  /* lbtruncusfsi2 */
    case 847:  /* lfrintnsfsi2 */
    case 846:  /* lroundsfsi2 */
    case 845:  /* lfloorsfsi2 */
    case 844:  /* lceilsfsi2 */
    case 843:  /* lbtruncsfsi2 */
    case 842:  /* lfrintnuhfsi2 */
    case 841:  /* lrounduhfsi2 */
    case 840:  /* lflooruhfsi2 */
    case 839:  /* lceiluhfsi2 */
    case 838:  /* lbtruncuhfsi2 */
    case 837:  /* lfrintnhfsi2 */
    case 836:  /* lroundhfsi2 */
    case 835:  /* lfloorhfsi2 */
    case 834:  /* lceilhfsi2 */
    case 833:  /* lbtrunchfsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 810:  /* rev16di2_alt */
    case 809:  /* rev16si2_alt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 808:  /* rev16di2 */
    case 807:  /* rev16si2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 798:  /* *ashiftsi_extvdi_bfiz */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 781:  /* *extr_insv_lower_regdi */
    case 780:  /* *extr_insv_lower_regsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 779:  /* *aarch64_bfxilsi_extrdi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 2));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 778:  /* *aarch64_bfxildi_extr */
    case 777:  /* *aarch64_bfxilsi_extr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      break;

    case 776:  /* *aarch64_bfidi4_noshift_alt */
    case 775:  /* *aarch64_bfisi4_noshift_alt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 774:  /* *aarch64_bfidi4_noshift */
    case 773:  /* *aarch64_bfisi4_noshift */
    case 772:  /* *aarch64_bfidi4_noand_alt */
    case 771:  /* *aarch64_bfisi4_noand_alt */
    case 770:  /* *aarch64_bfidi4_noand */
    case 769:  /* *aarch64_bfisi4_noand */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 768:  /* *aarch64_bfidi5_shift_alt */
    case 767:  /* *aarch64_bfisi5_shift_alt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 766:  /* *aarch64_bfidi5_shift */
    case 765:  /* *aarch64_bfisi5_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 764:  /* *aarch64_bfidisi4 */
    case 763:  /* *aarch64_bfisisi4 */
    case 762:  /* *aarch64_bfidihi4 */
    case 761:  /* *aarch64_bfisihi4 */
    case 760:  /* *aarch64_bfidiqi4 */
    case 759:  /* *aarch64_bfisiqi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 758:  /* *insv_regdi */
    case 757:  /* *insv_regsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 2148:  /* fmav2df4 */
    case 2147:  /* fmav4sf4 */
    case 2146:  /* fmav2sf4 */
    case 2145:  /* fmav8hf4 */
    case 2144:  /* fmav4hf4 */
    case 756:  /* *extzvdi */
    case 755:  /* *extvdi */
    case 754:  /* *extzvsi */
    case 753:  /* *extvsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 733:  /* *extrsi5_insn_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 732:  /* *extrsi5_insn_uxtw_alt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 806:  /* *aarch64_bfxilsi_uxtw */
    case 731:  /* *extrsi5_insn_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1));
      break;

    case 730:  /* *extrdi5_insn_alt */
    case 729:  /* *extrsi5_insn_alt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 805:  /* *aarch64_bfxildi */
    case 804:  /* *aarch64_bfxilsi */
    case 728:  /* *extrdi5_insn */
    case 727:  /* *extrsi5_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 1826:  /* aarch64_mlsv4si */
    case 1825:  /* aarch64_mlsv2si */
    case 1824:  /* aarch64_mlsv8hi */
    case 1823:  /* aarch64_mlsv4hi */
    case 1822:  /* aarch64_mlsv16qi */
    case 1821:  /* aarch64_mlsv8qi */
    case 703:  /* *aarch64_lshr_reg_minusdi3 */
    case 702:  /* *aarch64_ashr_reg_minusdi3 */
    case 701:  /* *aarch64_ashl_reg_minusdi3 */
    case 700:  /* *aarch64_lshr_reg_minussi3 */
    case 699:  /* *aarch64_ashr_reg_minussi3 */
    case 698:  /* *aarch64_ashl_reg_minussi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 693:  /* *aarch64_ashl_reg_di3_minus_mask */
    case 692:  /* *aarch64_ashl_reg_si3_minus_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 691:  /* *aarch64_rotr_reg_di3_neg_mask2 */
    case 690:  /* *aarch64_lshr_reg_di3_neg_mask2 */
    case 689:  /* *aarch64_ashr_reg_di3_neg_mask2 */
    case 688:  /* *aarch64_ashl_reg_di3_neg_mask2 */
    case 687:  /* *aarch64_rotr_reg_si3_neg_mask2 */
    case 686:  /* *aarch64_lshr_reg_si3_neg_mask2 */
    case 685:  /* *aarch64_ashr_reg_si3_neg_mask2 */
    case 684:  /* *aarch64_ashl_reg_si3_neg_mask2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 697:  /* *aarch64_rotr_reg_di3_mask2 */
    case 696:  /* *aarch64_lshr_reg_di3_mask2 */
    case 695:  /* *aarch64_ashr_reg_di3_mask2 */
    case 694:  /* *aarch64_ashl_reg_di3_mask2 */
    case 683:  /* *aarch64_rotr_reg_di3_mask1 */
    case 682:  /* *aarch64_lshr_reg_di3_mask1 */
    case 681:  /* *aarch64_ashr_reg_di3_mask1 */
    case 680:  /* *aarch64_ashl_reg_di3_mask1 */
    case 679:  /* *aarch64_rotr_reg_si3_mask1 */
    case 678:  /* *aarch64_lshr_reg_si3_mask1 */
    case 677:  /* *aarch64_ashr_reg_si3_mask1 */
    case 676:  /* *aarch64_ashl_reg_si3_mask1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 675:  /* *and_rotrdi3nr_compare0 */
    case 674:  /* *and_lshrdi3nr_compare0 */
    case 673:  /* *and_ashrdi3nr_compare0 */
    case 672:  /* *and_ashldi3nr_compare0 */
    case 671:  /* *and_rotrsi3nr_compare0 */
    case 670:  /* *and_lshrsi3nr_compare0 */
    case 669:  /* *and_ashrsi3nr_compare0 */
    case 668:  /* *and_ashlsi3nr_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 667:  /* *anddi3nr_compare0_zextract */
    case 666:  /* *andsi3nr_compare0_zextract */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 9961:  /* aarch64_sve2_aesimc */
    case 9960:  /* aarch64_sve2_aesmc */
    case 9670:  /* aarch64_sve_uqxtnbvnx2di */
    case 9669:  /* aarch64_sve_sqxtunbvnx2di */
    case 9668:  /* aarch64_sve_sqxtnbvnx2di */
    case 9667:  /* aarch64_sve_uqxtnbvnx4si */
    case 9666:  /* aarch64_sve_sqxtunbvnx4si */
    case 9665:  /* aarch64_sve_sqxtnbvnx4si */
    case 9664:  /* aarch64_sve_uqxtnbvnx8hi */
    case 9663:  /* aarch64_sve_sqxtunbvnx8hi */
    case 9662:  /* aarch64_sve_sqxtnbvnx8hi */
    case 8945:  /* aarch64_sve_punpkhi_vnx4bi */
    case 8944:  /* aarch64_sve_punpklo_vnx4bi */
    case 8943:  /* aarch64_sve_punpkhi_vnx8bi */
    case 8942:  /* aarch64_sve_punpklo_vnx8bi */
    case 8941:  /* aarch64_sve_punpkhi_vnx16bi */
    case 8940:  /* aarch64_sve_punpklo_vnx16bi */
    case 8841:  /* aarch64_sve_uunpklo_vnx4si */
    case 8840:  /* aarch64_sve_sunpklo_vnx4si */
    case 8839:  /* aarch64_sve_uunpkhi_vnx4si */
    case 8838:  /* aarch64_sve_sunpkhi_vnx4si */
    case 8837:  /* aarch64_sve_uunpklo_vnx8hi */
    case 8836:  /* aarch64_sve_sunpklo_vnx8hi */
    case 8835:  /* aarch64_sve_uunpkhi_vnx8hi */
    case 8834:  /* aarch64_sve_sunpkhi_vnx8hi */
    case 8833:  /* aarch64_sve_uunpklo_vnx16qi */
    case 8832:  /* aarch64_sve_sunpklo_vnx16qi */
    case 8831:  /* aarch64_sve_uunpkhi_vnx16qi */
    case 8830:  /* aarch64_sve_sunpkhi_vnx16qi */
    case 8798:  /* aarch64_sve_revvnx2bi */
    case 8797:  /* aarch64_sve_revvnx4bi */
    case 8796:  /* aarch64_sve_revvnx8bi */
    case 8795:  /* aarch64_sve_revvnx16bi */
    case 8605:  /* aarch64_sve_revvnx2df */
    case 8604:  /* aarch64_sve_revvnx2di */
    case 8603:  /* aarch64_sve_revvnx2sf */
    case 8602:  /* aarch64_sve_revvnx4sf */
    case 8601:  /* aarch64_sve_revvnx2si */
    case 8600:  /* aarch64_sve_revvnx4si */
    case 8599:  /* aarch64_sve_revvnx2bf */
    case 8598:  /* aarch64_sve_revvnx4bf */
    case 8597:  /* aarch64_sve_revvnx8bf */
    case 8596:  /* aarch64_sve_revvnx2hf */
    case 8595:  /* aarch64_sve_revvnx4hf */
    case 8594:  /* aarch64_sve_revvnx8hf */
    case 8593:  /* aarch64_sve_revvnx2hi */
    case 8592:  /* aarch64_sve_revvnx4hi */
    case 8591:  /* aarch64_sve_revvnx8hi */
    case 8590:  /* aarch64_sve_revvnx2qi */
    case 8589:  /* aarch64_sve_revvnx4qi */
    case 8588:  /* aarch64_sve_revvnx8qi */
    case 8587:  /* aarch64_sve_revvnx16qi */
    case 5593:  /* aarch64_sve_frsqrtevnx2df */
    case 5592:  /* aarch64_sve_frecpevnx2df */
    case 5591:  /* aarch64_sve_frsqrtevnx4sf */
    case 5590:  /* aarch64_sve_frecpevnx4sf */
    case 5589:  /* aarch64_sve_frsqrtevnx8hf */
    case 5588:  /* aarch64_sve_frecpevnx8hf */
    case 5587:  /* aarch64_sve_fexpavnx2df */
    case 5586:  /* aarch64_sve_fexpavnx4sf */
    case 5585:  /* aarch64_sve_fexpavnx8hf */
    case 4552:  /* *aarch64_sve_reinterpretvnx2df */
    case 4551:  /* *aarch64_sve_reinterpretvnx2di */
    case 4550:  /* *aarch64_sve_reinterpretvnx2sf */
    case 4549:  /* *aarch64_sve_reinterpretvnx4sf */
    case 4548:  /* *aarch64_sve_reinterpretvnx2si */
    case 4547:  /* *aarch64_sve_reinterpretvnx4si */
    case 4546:  /* *aarch64_sve_reinterpretvnx2bf */
    case 4545:  /* *aarch64_sve_reinterpretvnx4bf */
    case 4544:  /* *aarch64_sve_reinterpretvnx8bf */
    case 4543:  /* *aarch64_sve_reinterpretvnx2hf */
    case 4542:  /* *aarch64_sve_reinterpretvnx4hf */
    case 4541:  /* *aarch64_sve_reinterpretvnx8hf */
    case 4540:  /* *aarch64_sve_reinterpretvnx2hi */
    case 4539:  /* *aarch64_sve_reinterpretvnx4hi */
    case 4538:  /* *aarch64_sve_reinterpretvnx8hi */
    case 4537:  /* *aarch64_sve_reinterpretvnx2qi */
    case 4536:  /* *aarch64_sve_reinterpretvnx4qi */
    case 4535:  /* *aarch64_sve_reinterpretvnx8qi */
    case 4534:  /* *aarch64_sve_reinterpretvnx16qi */
    case 4328:  /* aarch64_bfcvtsf */
    case 4327:  /* aarch64_vbfcvt_highv8bf */
    case 4326:  /* aarch64_vbfcvtv8bf */
    case 4325:  /* aarch64_vbfcvtv4bf */
    case 4324:  /* aarch64_bfcvtbf */
    case 4322:  /* aarch64_bfcvtn_qv8bf */
    case 4321:  /* aarch64_bfcvtnv4bf */
    case 4235:  /* aarch64_crypto_sha1hsi */
    case 4232:  /* aarch64_crypto_aesimcv16qi */
    case 4231:  /* aarch64_crypto_aesmcv16qi */
    case 4228:  /* aarch64_urecpev4si */
    case 4227:  /* aarch64_urecpev2si */
    case 4218:  /* aarch64_frecpxdf */
    case 4217:  /* aarch64_frecpxsf */
    case 4216:  /* aarch64_frecpxhf */
    case 4215:  /* aarch64_frecpedf */
    case 4214:  /* aarch64_frecpesf */
    case 4213:  /* aarch64_frecpehf */
    case 4212:  /* aarch64_frecpev2df */
    case 4211:  /* aarch64_frecpev4sf */
    case 4210:  /* aarch64_frecpev2sf */
    case 4209:  /* aarch64_frecpev8hf */
    case 4208:  /* aarch64_frecpev4hf */
    case 4207:  /* aarch64_simd_ld1v8bf_x2 */
    case 4206:  /* aarch64_simd_ld1v2df_x2 */
    case 4205:  /* aarch64_simd_ld1v4sf_x2 */
    case 4204:  /* aarch64_simd_ld1v8hf_x2 */
    case 4203:  /* aarch64_simd_ld1v2di_x2 */
    case 4202:  /* aarch64_simd_ld1v4si_x2 */
    case 4201:  /* aarch64_simd_ld1v8hi_x2 */
    case 4200:  /* aarch64_simd_ld1v16qi_x2 */
    case 4199:  /* aarch64_simd_ld1v4bf_x2 */
    case 4198:  /* aarch64_simd_ld1df_x2 */
    case 4197:  /* aarch64_simd_ld1v2sf_x2 */
    case 4196:  /* aarch64_simd_ld1v4hf_x2 */
    case 4195:  /* aarch64_simd_ld1di_x2 */
    case 4194:  /* aarch64_simd_ld1v2si_x2 */
    case 4193:  /* aarch64_simd_ld1v4hi_x2 */
    case 4192:  /* aarch64_simd_ld1v8qi_x2 */
    case 4177:  /* aarch64_st4df_dreg */
    case 4176:  /* aarch64_st4di_dreg */
    case 4175:  /* aarch64_st4v4bf_dreg */
    case 4174:  /* aarch64_st4v2sf_dreg */
    case 4173:  /* aarch64_st4v4hf_dreg */
    case 4172:  /* aarch64_st4v2si_dreg */
    case 4171:  /* aarch64_st4v4hi_dreg */
    case 4170:  /* aarch64_st4v8qi_dreg */
    case 4169:  /* aarch64_st3df_dreg */
    case 4168:  /* aarch64_st3di_dreg */
    case 4167:  /* aarch64_st3v4bf_dreg */
    case 4166:  /* aarch64_st3v2sf_dreg */
    case 4165:  /* aarch64_st3v4hf_dreg */
    case 4164:  /* aarch64_st3v2si_dreg */
    case 4163:  /* aarch64_st3v4hi_dreg */
    case 4162:  /* aarch64_st3v8qi_dreg */
    case 4161:  /* aarch64_st2df_dreg */
    case 4160:  /* aarch64_st2di_dreg */
    case 4159:  /* aarch64_st2v4bf_dreg */
    case 4158:  /* aarch64_st2v2sf_dreg */
    case 4157:  /* aarch64_st2v4hf_dreg */
    case 4156:  /* aarch64_st2v2si_dreg */
    case 4155:  /* aarch64_st2v4hi_dreg */
    case 4154:  /* aarch64_st2v8qi_dreg */
    case 4153:  /* aarch64_rev16v2df */
    case 4152:  /* aarch64_rev32v2df */
    case 4151:  /* aarch64_rev64v2df */
    case 4150:  /* aarch64_rev16v4sf */
    case 4149:  /* aarch64_rev32v4sf */
    case 4148:  /* aarch64_rev64v4sf */
    case 4147:  /* aarch64_rev16v2sf */
    case 4146:  /* aarch64_rev32v2sf */
    case 4145:  /* aarch64_rev64v2sf */
    case 4144:  /* aarch64_rev16v8bf */
    case 4143:  /* aarch64_rev32v8bf */
    case 4142:  /* aarch64_rev64v8bf */
    case 4141:  /* aarch64_rev16v4bf */
    case 4140:  /* aarch64_rev32v4bf */
    case 4139:  /* aarch64_rev64v4bf */
    case 4138:  /* aarch64_rev16v8hf */
    case 4137:  /* aarch64_rev32v8hf */
    case 4136:  /* aarch64_rev64v8hf */
    case 4135:  /* aarch64_rev16v4hf */
    case 4134:  /* aarch64_rev32v4hf */
    case 4133:  /* aarch64_rev64v4hf */
    case 4132:  /* aarch64_rev16v2di */
    case 4131:  /* aarch64_rev32v2di */
    case 4130:  /* aarch64_rev64v2di */
    case 4129:  /* aarch64_rev16v4si */
    case 4128:  /* aarch64_rev32v4si */
    case 4127:  /* aarch64_rev64v4si */
    case 4126:  /* aarch64_rev16v2si */
    case 4125:  /* aarch64_rev32v2si */
    case 4124:  /* aarch64_rev64v2si */
    case 4123:  /* aarch64_rev16v8hi */
    case 4122:  /* aarch64_rev32v8hi */
    case 4121:  /* aarch64_rev64v8hi */
    case 4120:  /* aarch64_rev16v4hi */
    case 4119:  /* aarch64_rev32v4hi */
    case 4118:  /* aarch64_rev64v4hi */
    case 4117:  /* aarch64_rev16v16qi */
    case 4116:  /* aarch64_rev32v16qi */
    case 4115:  /* aarch64_rev64v16qi */
    case 4114:  /* aarch64_rev16v8qi */
    case 4113:  /* aarch64_rev32v8qi */
    case 4112:  /* aarch64_rev64v8qi */
    case 3996:  /* aarch64_ld4df_dreg */
    case 3995:  /* aarch64_ld4di_dreg */
    case 3994:  /* aarch64_ld4v4bf_dreg */
    case 3993:  /* aarch64_ld4v2sf_dreg */
    case 3992:  /* aarch64_ld4v4hf_dreg */
    case 3991:  /* aarch64_ld4v2si_dreg */
    case 3990:  /* aarch64_ld4v4hi_dreg */
    case 3989:  /* aarch64_ld4v8qi_dreg */
    case 3988:  /* aarch64_ld3df_dreg */
    case 3987:  /* aarch64_ld3di_dreg */
    case 3986:  /* aarch64_ld3v4bf_dreg */
    case 3985:  /* aarch64_ld3v2sf_dreg */
    case 3984:  /* aarch64_ld3v4hf_dreg */
    case 3983:  /* aarch64_ld3v2si_dreg */
    case 3982:  /* aarch64_ld3v4hi_dreg */
    case 3981:  /* aarch64_ld3v8qi_dreg */
    case 3980:  /* aarch64_ld2df_dreg */
    case 3979:  /* aarch64_ld2di_dreg */
    case 3978:  /* aarch64_ld2v4bf_dreg */
    case 3977:  /* aarch64_ld2v2sf_dreg */
    case 3976:  /* aarch64_ld2v4hf_dreg */
    case 3975:  /* aarch64_ld2v2si_dreg */
    case 3974:  /* aarch64_ld2v4hi_dreg */
    case 3973:  /* aarch64_ld2v8qi_dreg */
    case 3921:  /* aarch64_be_st1di */
    case 3920:  /* aarch64_be_st1v2df */
    case 3919:  /* aarch64_be_st1v4sf */
    case 3918:  /* aarch64_be_st1v2sf */
    case 3917:  /* aarch64_be_st1v8bf */
    case 3916:  /* aarch64_be_st1v4bf */
    case 3915:  /* aarch64_be_st1v8hf */
    case 3914:  /* aarch64_be_st1v4hf */
    case 3913:  /* aarch64_be_st1v2di */
    case 3912:  /* aarch64_be_st1v4si */
    case 3911:  /* aarch64_be_st1v2si */
    case 3910:  /* aarch64_be_st1v8hi */
    case 3909:  /* aarch64_be_st1v4hi */
    case 3908:  /* aarch64_be_st1v16qi */
    case 3907:  /* aarch64_be_st1v8qi */
    case 3906:  /* aarch64_be_ld1di */
    case 3905:  /* aarch64_be_ld1v2df */
    case 3904:  /* aarch64_be_ld1v4sf */
    case 3903:  /* aarch64_be_ld1v2sf */
    case 3902:  /* aarch64_be_ld1v8bf */
    case 3901:  /* aarch64_be_ld1v4bf */
    case 3900:  /* aarch64_be_ld1v8hf */
    case 3899:  /* aarch64_be_ld1v4hf */
    case 3898:  /* aarch64_be_ld1v2di */
    case 3897:  /* aarch64_be_ld1v4si */
    case 3896:  /* aarch64_be_ld1v2si */
    case 3895:  /* aarch64_be_ld1v8hi */
    case 3894:  /* aarch64_be_ld1v4hi */
    case 3893:  /* aarch64_be_ld1v16qi */
    case 3892:  /* aarch64_be_ld1v8qi */
    case 3839:  /* aarch64_st1_x4_v8bf */
    case 3838:  /* aarch64_st1_x4_v2df */
    case 3837:  /* aarch64_st1_x4_v4sf */
    case 3836:  /* aarch64_st1_x4_v8hf */
    case 3835:  /* aarch64_st1_x4_v2di */
    case 3834:  /* aarch64_st1_x4_v4si */
    case 3833:  /* aarch64_st1_x4_v8hi */
    case 3832:  /* aarch64_st1_x4_v16qi */
    case 3831:  /* aarch64_st1_x4_v4bf */
    case 3830:  /* aarch64_st1_x4_df */
    case 3829:  /* aarch64_st1_x4_v2sf */
    case 3828:  /* aarch64_st1_x4_v4hf */
    case 3827:  /* aarch64_st1_x4_di */
    case 3826:  /* aarch64_st1_x4_v2si */
    case 3825:  /* aarch64_st1_x4_v4hi */
    case 3824:  /* aarch64_st1_x4_v8qi */
    case 3823:  /* aarch64_st1_x3_v8bf */
    case 3822:  /* aarch64_st1_x3_v2df */
    case 3821:  /* aarch64_st1_x3_v4sf */
    case 3820:  /* aarch64_st1_x3_v8hf */
    case 3819:  /* aarch64_st1_x3_v2di */
    case 3818:  /* aarch64_st1_x3_v4si */
    case 3817:  /* aarch64_st1_x3_v8hi */
    case 3816:  /* aarch64_st1_x3_v16qi */
    case 3815:  /* aarch64_st1_x3_v4bf */
    case 3814:  /* aarch64_st1_x3_df */
    case 3813:  /* aarch64_st1_x3_v2sf */
    case 3812:  /* aarch64_st1_x3_v4hf */
    case 3811:  /* aarch64_st1_x3_di */
    case 3810:  /* aarch64_st1_x3_v2si */
    case 3809:  /* aarch64_st1_x3_v4hi */
    case 3808:  /* aarch64_st1_x3_v8qi */
    case 3807:  /* aarch64_st1_x2_v8bf */
    case 3806:  /* aarch64_st1_x2_v2df */
    case 3805:  /* aarch64_st1_x2_v4sf */
    case 3804:  /* aarch64_st1_x2_v8hf */
    case 3803:  /* aarch64_st1_x2_v2di */
    case 3802:  /* aarch64_st1_x2_v4si */
    case 3801:  /* aarch64_st1_x2_v8hi */
    case 3800:  /* aarch64_st1_x2_v16qi */
    case 3799:  /* aarch64_st1_x2_v4bf */
    case 3798:  /* aarch64_st1_x2_df */
    case 3797:  /* aarch64_st1_x2_v2sf */
    case 3796:  /* aarch64_st1_x2_v4hf */
    case 3795:  /* aarch64_st1_x2_di */
    case 3794:  /* aarch64_st1_x2_v2si */
    case 3793:  /* aarch64_st1_x2_v4hi */
    case 3792:  /* aarch64_st1_x2_v8qi */
    case 3791:  /* aarch64_ld1_x4_v8bf */
    case 3790:  /* aarch64_ld1_x4_v2df */
    case 3789:  /* aarch64_ld1_x4_v4sf */
    case 3788:  /* aarch64_ld1_x4_v8hf */
    case 3787:  /* aarch64_ld1_x4_v2di */
    case 3786:  /* aarch64_ld1_x4_v4si */
    case 3785:  /* aarch64_ld1_x4_v8hi */
    case 3784:  /* aarch64_ld1_x4_v16qi */
    case 3783:  /* aarch64_ld1_x4_v4bf */
    case 3782:  /* aarch64_ld1_x4_df */
    case 3781:  /* aarch64_ld1_x4_v2sf */
    case 3780:  /* aarch64_ld1_x4_v4hf */
    case 3779:  /* aarch64_ld1_x4_di */
    case 3778:  /* aarch64_ld1_x4_v2si */
    case 3777:  /* aarch64_ld1_x4_v4hi */
    case 3776:  /* aarch64_ld1_x4_v8qi */
    case 3775:  /* aarch64_ld1_x3_v8bf */
    case 3774:  /* aarch64_ld1_x3_v2df */
    case 3773:  /* aarch64_ld1_x3_v4sf */
    case 3772:  /* aarch64_ld1_x3_v8hf */
    case 3771:  /* aarch64_ld1_x3_v2di */
    case 3770:  /* aarch64_ld1_x3_v4si */
    case 3769:  /* aarch64_ld1_x3_v8hi */
    case 3768:  /* aarch64_ld1_x3_v16qi */
    case 3767:  /* aarch64_ld1_x3_v4bf */
    case 3766:  /* aarch64_ld1_x3_df */
    case 3765:  /* aarch64_ld1_x3_v2sf */
    case 3764:  /* aarch64_ld1_x3_v4hf */
    case 3763:  /* aarch64_ld1_x3_di */
    case 3762:  /* aarch64_ld1_x3_v2si */
    case 3761:  /* aarch64_ld1_x3_v4hi */
    case 3760:  /* aarch64_ld1_x3_v8qi */
    case 3695:  /* aarch64_simd_st4v8bf */
    case 3694:  /* aarch64_simd_st4v2df */
    case 3693:  /* aarch64_simd_st4v4sf */
    case 3692:  /* aarch64_simd_st4v8hf */
    case 3691:  /* aarch64_simd_st4v2di */
    case 3690:  /* aarch64_simd_st4v4si */
    case 3689:  /* aarch64_simd_st4v8hi */
    case 3688:  /* aarch64_simd_st4v16qi */
    case 3671:  /* aarch64_simd_ld4rv8bf */
    case 3670:  /* aarch64_simd_ld4rv2df */
    case 3669:  /* aarch64_simd_ld4rv4sf */
    case 3668:  /* aarch64_simd_ld4rv8hf */
    case 3667:  /* aarch64_simd_ld4rv2di */
    case 3666:  /* aarch64_simd_ld4rv4si */
    case 3665:  /* aarch64_simd_ld4rv8hi */
    case 3664:  /* aarch64_simd_ld4rv16qi */
    case 3663:  /* aarch64_simd_ld4rv4bf */
    case 3662:  /* aarch64_simd_ld4rdf */
    case 3661:  /* aarch64_simd_ld4rv2sf */
    case 3660:  /* aarch64_simd_ld4rv4hf */
    case 3659:  /* aarch64_simd_ld4rdi */
    case 3658:  /* aarch64_simd_ld4rv2si */
    case 3657:  /* aarch64_simd_ld4rv4hi */
    case 3656:  /* aarch64_simd_ld4rv8qi */
    case 3655:  /* aarch64_simd_ld4v8bf */
    case 3654:  /* aarch64_simd_ld4v2df */
    case 3653:  /* aarch64_simd_ld4v4sf */
    case 3652:  /* aarch64_simd_ld4v8hf */
    case 3651:  /* aarch64_simd_ld4v2di */
    case 3650:  /* aarch64_simd_ld4v4si */
    case 3649:  /* aarch64_simd_ld4v8hi */
    case 3648:  /* aarch64_simd_ld4v16qi */
    case 3631:  /* aarch64_simd_st3v8bf */
    case 3630:  /* aarch64_simd_st3v2df */
    case 3629:  /* aarch64_simd_st3v4sf */
    case 3628:  /* aarch64_simd_st3v8hf */
    case 3627:  /* aarch64_simd_st3v2di */
    case 3626:  /* aarch64_simd_st3v4si */
    case 3625:  /* aarch64_simd_st3v8hi */
    case 3624:  /* aarch64_simd_st3v16qi */
    case 3607:  /* aarch64_simd_ld3rv8bf */
    case 3606:  /* aarch64_simd_ld3rv2df */
    case 3605:  /* aarch64_simd_ld3rv4sf */
    case 3604:  /* aarch64_simd_ld3rv8hf */
    case 3603:  /* aarch64_simd_ld3rv2di */
    case 3602:  /* aarch64_simd_ld3rv4si */
    case 3601:  /* aarch64_simd_ld3rv8hi */
    case 3600:  /* aarch64_simd_ld3rv16qi */
    case 3599:  /* aarch64_simd_ld3rv4bf */
    case 3598:  /* aarch64_simd_ld3rdf */
    case 3597:  /* aarch64_simd_ld3rv2sf */
    case 3596:  /* aarch64_simd_ld3rv4hf */
    case 3595:  /* aarch64_simd_ld3rdi */
    case 3594:  /* aarch64_simd_ld3rv2si */
    case 3593:  /* aarch64_simd_ld3rv4hi */
    case 3592:  /* aarch64_simd_ld3rv8qi */
    case 3591:  /* aarch64_simd_ld3v8bf */
    case 3590:  /* aarch64_simd_ld3v2df */
    case 3589:  /* aarch64_simd_ld3v4sf */
    case 3588:  /* aarch64_simd_ld3v8hf */
    case 3587:  /* aarch64_simd_ld3v2di */
    case 3586:  /* aarch64_simd_ld3v4si */
    case 3585:  /* aarch64_simd_ld3v8hi */
    case 3584:  /* aarch64_simd_ld3v16qi */
    case 3567:  /* aarch64_simd_st2v8bf */
    case 3566:  /* aarch64_simd_st2v2df */
    case 3565:  /* aarch64_simd_st2v4sf */
    case 3564:  /* aarch64_simd_st2v8hf */
    case 3563:  /* aarch64_simd_st2v2di */
    case 3562:  /* aarch64_simd_st2v4si */
    case 3561:  /* aarch64_simd_st2v8hi */
    case 3560:  /* aarch64_simd_st2v16qi */
    case 3543:  /* aarch64_simd_ld2rv8bf */
    case 3542:  /* aarch64_simd_ld2rv2df */
    case 3541:  /* aarch64_simd_ld2rv4sf */
    case 3540:  /* aarch64_simd_ld2rv8hf */
    case 3539:  /* aarch64_simd_ld2rv2di */
    case 3538:  /* aarch64_simd_ld2rv4si */
    case 3537:  /* aarch64_simd_ld2rv8hi */
    case 3536:  /* aarch64_simd_ld2rv16qi */
    case 3535:  /* aarch64_simd_ld2rv4bf */
    case 3534:  /* aarch64_simd_ld2rdf */
    case 3533:  /* aarch64_simd_ld2rv2sf */
    case 3532:  /* aarch64_simd_ld2rv4hf */
    case 3531:  /* aarch64_simd_ld2rdi */
    case 3530:  /* aarch64_simd_ld2rv2si */
    case 3529:  /* aarch64_simd_ld2rv4hi */
    case 3528:  /* aarch64_simd_ld2rv8qi */
    case 3527:  /* aarch64_simd_ld2v8bf */
    case 3526:  /* aarch64_simd_ld2v2df */
    case 3525:  /* aarch64_simd_ld2v4sf */
    case 3524:  /* aarch64_simd_ld2v8hf */
    case 3523:  /* aarch64_simd_ld2v2di */
    case 3522:  /* aarch64_simd_ld2v4si */
    case 3521:  /* aarch64_simd_ld2v8hi */
    case 3520:  /* aarch64_simd_ld2v16qi */
    case 3514:  /* aarch64_addpdi */
    case 2854:  /* aarch64_sqmovundi */
    case 2853:  /* aarch64_sqmovunsi */
    case 2852:  /* aarch64_sqmovunhi */
    case 2468:  /* aarch64_reduc_smin_internalv2df */
    case 2467:  /* aarch64_reduc_smax_internalv2df */
    case 2466:  /* aarch64_reduc_smin_nan_internalv2df */
    case 2465:  /* aarch64_reduc_smax_nan_internalv2df */
    case 2464:  /* aarch64_reduc_smin_internalv4sf */
    case 2463:  /* aarch64_reduc_smax_internalv4sf */
    case 2462:  /* aarch64_reduc_smin_nan_internalv4sf */
    case 2461:  /* aarch64_reduc_smax_nan_internalv4sf */
    case 2460:  /* aarch64_reduc_smin_internalv2sf */
    case 2459:  /* aarch64_reduc_smax_internalv2sf */
    case 2458:  /* aarch64_reduc_smin_nan_internalv2sf */
    case 2457:  /* aarch64_reduc_smax_nan_internalv2sf */
    case 2456:  /* aarch64_reduc_smin_internalv8hf */
    case 2455:  /* aarch64_reduc_smax_internalv8hf */
    case 2454:  /* aarch64_reduc_smin_nan_internalv8hf */
    case 2453:  /* aarch64_reduc_smax_nan_internalv8hf */
    case 2452:  /* aarch64_reduc_smin_internalv4hf */
    case 2451:  /* aarch64_reduc_smax_internalv4hf */
    case 2450:  /* aarch64_reduc_smin_nan_internalv4hf */
    case 2449:  /* aarch64_reduc_smax_nan_internalv4hf */
    case 2448:  /* aarch64_reduc_smin_internalv2si */
    case 2447:  /* aarch64_reduc_smax_internalv2si */
    case 2446:  /* aarch64_reduc_umin_internalv2si */
    case 2445:  /* aarch64_reduc_umax_internalv2si */
    case 2444:  /* aarch64_reduc_smin_internalv4si */
    case 2443:  /* aarch64_reduc_smax_internalv4si */
    case 2442:  /* aarch64_reduc_umin_internalv4si */
    case 2441:  /* aarch64_reduc_umax_internalv4si */
    case 2440:  /* aarch64_reduc_smin_internalv8hi */
    case 2439:  /* aarch64_reduc_smax_internalv8hi */
    case 2438:  /* aarch64_reduc_umin_internalv8hi */
    case 2437:  /* aarch64_reduc_umax_internalv8hi */
    case 2436:  /* aarch64_reduc_smin_internalv4hi */
    case 2435:  /* aarch64_reduc_smax_internalv4hi */
    case 2434:  /* aarch64_reduc_umin_internalv4hi */
    case 2433:  /* aarch64_reduc_umax_internalv4hi */
    case 2432:  /* aarch64_reduc_smin_internalv16qi */
    case 2431:  /* aarch64_reduc_smax_internalv16qi */
    case 2430:  /* aarch64_reduc_umin_internalv16qi */
    case 2429:  /* aarch64_reduc_umax_internalv16qi */
    case 2428:  /* aarch64_reduc_smin_internalv8qi */
    case 2427:  /* aarch64_reduc_smax_internalv8qi */
    case 2426:  /* aarch64_reduc_umin_internalv8qi */
    case 2425:  /* aarch64_reduc_umax_internalv8qi */
    case 2410:  /* aarch64_uaddlpv2si */
    case 2409:  /* aarch64_saddlpv2si */
    case 2408:  /* aarch64_uaddlpv4si */
    case 2407:  /* aarch64_saddlpv4si */
    case 2406:  /* aarch64_uaddlpv8hi */
    case 2405:  /* aarch64_saddlpv8hi */
    case 2404:  /* aarch64_uaddlpv4hi */
    case 2403:  /* aarch64_saddlpv4hi */
    case 2402:  /* aarch64_uaddlpv16qi */
    case 2401:  /* aarch64_saddlpv16qi */
    case 2400:  /* aarch64_uaddlpv8qi */
    case 2399:  /* aarch64_saddlpv8qi */
    case 2398:  /* aarch64_uaddlvv2si */
    case 2397:  /* aarch64_saddlvv2si */
    case 2396:  /* aarch64_uaddlvv4si */
    case 2395:  /* aarch64_saddlvv4si */
    case 2394:  /* aarch64_uaddlvv8hi */
    case 2393:  /* aarch64_saddlvv8hi */
    case 2392:  /* aarch64_uaddlvv4hi */
    case 2391:  /* aarch64_saddlvv4hi */
    case 2390:  /* aarch64_uaddlvv16qi */
    case 2389:  /* aarch64_saddlvv16qi */
    case 2388:  /* aarch64_uaddlvv8qi */
    case 2387:  /* aarch64_saddlvv8qi */
    case 2386:  /* reduc_plus_scal_v2df */
    case 2385:  /* reduc_plus_scal_v2sf */
    case 2376:  /* reduc_plus_scal_v2si */
    case 2375:  /* reduc_plus_scal_v2di */
    case 2374:  /* reduc_plus_scal_v4si */
    case 2373:  /* reduc_plus_scal_v8hi */
    case 2372:  /* reduc_plus_scal_v4hi */
    case 2371:  /* reduc_plus_scal_v16qi */
    case 2370:  /* reduc_plus_scal_v8qi */
    case 2326:  /* aarch64_float_trunc_rodd_lo_v2sf */
    case 2325:  /* aarch64_float_trunc_rodd_df */
    case 2218:  /* roundv2df2 */
    case 2217:  /* rintv2df2 */
    case 2216:  /* nearbyintv2df2 */
    case 2215:  /* roundevenv2df2 */
    case 2214:  /* floorv2df2 */
    case 2213:  /* ceilv2df2 */
    case 2212:  /* btruncv2df2 */
    case 2211:  /* roundv4sf2 */
    case 2210:  /* rintv4sf2 */
    case 2209:  /* nearbyintv4sf2 */
    case 2208:  /* roundevenv4sf2 */
    case 2207:  /* floorv4sf2 */
    case 2206:  /* ceilv4sf2 */
    case 2205:  /* btruncv4sf2 */
    case 2204:  /* roundv2sf2 */
    case 2203:  /* rintv2sf2 */
    case 2202:  /* nearbyintv2sf2 */
    case 2201:  /* roundevenv2sf2 */
    case 2200:  /* floorv2sf2 */
    case 2199:  /* ceilv2sf2 */
    case 2198:  /* btruncv2sf2 */
    case 2197:  /* roundv8hf2 */
    case 2196:  /* rintv8hf2 */
    case 2195:  /* nearbyintv8hf2 */
    case 2194:  /* roundevenv8hf2 */
    case 2193:  /* floorv8hf2 */
    case 2192:  /* ceilv8hf2 */
    case 2191:  /* btruncv8hf2 */
    case 2190:  /* roundv4hf2 */
    case 2189:  /* rintv4hf2 */
    case 2188:  /* nearbyintv4hf2 */
    case 2187:  /* roundevenv4hf2 */
    case 2186:  /* floorv4hf2 */
    case 2185:  /* ceilv4hf2 */
    case 2184:  /* btruncv4hf2 */
    case 1606:  /* aarch64_absdi */
    case 1605:  /* aarch64_absv2di */
    case 1604:  /* aarch64_absv4si */
    case 1603:  /* aarch64_absv2si */
    case 1602:  /* aarch64_absv8hi */
    case 1601:  /* aarch64_absv4hi */
    case 1600:  /* aarch64_absv16qi */
    case 1599:  /* aarch64_absv8qi */
    case 1583:  /* aarch64_ursqrtev4si */
    case 1582:  /* aarch64_ursqrtev2si */
    case 1573:  /* aarch64_rsqrtedf */
    case 1572:  /* aarch64_rsqrtesf */
    case 1571:  /* aarch64_rsqrtehf */
    case 1570:  /* aarch64_rsqrtev2df */
    case 1569:  /* aarch64_rsqrtev4sf */
    case 1568:  /* aarch64_rsqrtev2sf */
    case 1567:  /* aarch64_rsqrtev8hf */
    case 1566:  /* aarch64_rsqrtev4hf */
    case 1455:  /* aarch64_rbitv16qi */
    case 1454:  /* aarch64_rbitv8qi */
    case 1119:  /* aarch64_frint64xsf */
    case 1118:  /* aarch64_frint64zsf */
    case 1117:  /* aarch64_frint32xsf */
    case 1116:  /* aarch64_frint32zsf */
    case 1115:  /* aarch64_frint64xdf */
    case 1114:  /* aarch64_frint64zdf */
    case 1113:  /* aarch64_frint32xdf */
    case 1112:  /* aarch64_frint32zdf */
    case 1111:  /* aarch64_frint64xv2df */
    case 1110:  /* aarch64_frint64zv2df */
    case 1109:  /* aarch64_frint32xv2df */
    case 1108:  /* aarch64_frint32zv2df */
    case 1107:  /* aarch64_frint64xv4sf */
    case 1106:  /* aarch64_frint64zv4sf */
    case 1105:  /* aarch64_frint32xv4sf */
    case 1104:  /* aarch64_frint32zv4sf */
    case 1103:  /* aarch64_frint64xv2sf */
    case 1102:  /* aarch64_frint64zv2sf */
    case 1101:  /* aarch64_frint32xv2sf */
    case 1100:  /* aarch64_frint32zv2sf */
    case 1070:  /* reg_stack_protect_address_di */
    case 1069:  /* reg_stack_protect_address_si */
    case 1049:  /* tlsle48_di */
    case 1048:  /* tlsle48_si */
    case 1047:  /* tlsle32_di */
    case 1046:  /* tlsle32_si */
    case 1037:  /* tlsie_small_di */
    case 1036:  /* tlsie_small_si */
    case 1031:  /* ldr_got_tiny_di */
    case 1030:  /* ldr_got_tiny_si */
    case 832:  /* rounddf2 */
    case 831:  /* rintdf2 */
    case 830:  /* nearbyintdf2 */
    case 829:  /* roundevendf2 */
    case 828:  /* floordf2 */
    case 827:  /* ceildf2 */
    case 826:  /* btruncdf2 */
    case 825:  /* roundsf2 */
    case 824:  /* rintsf2 */
    case 823:  /* nearbyintsf2 */
    case 822:  /* roundevensf2 */
    case 821:  /* floorsf2 */
    case 820:  /* ceilsf2 */
    case 819:  /* btruncsf2 */
    case 818:  /* roundhf2 */
    case 817:  /* rinthf2 */
    case 816:  /* nearbyinthf2 */
    case 815:  /* roundevenhf2 */
    case 814:  /* floorhf2 */
    case 813:  /* ceilhf2 */
    case 812:  /* btrunchf2 */
    case 803:  /* aarch64_rev16di */
    case 802:  /* aarch64_rev16si */
    case 714:  /* *aarch64_sisd_neg_qi */
    case 655:  /* aarch64_rbitdi */
    case 654:  /* aarch64_rbitsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 649:  /* *and_one_cmpl_rotrdi3_compare0_no_reuse */
    case 648:  /* *and_one_cmpl_lshrdi3_compare0_no_reuse */
    case 647:  /* *and_one_cmpl_ashrdi3_compare0_no_reuse */
    case 646:  /* *and_one_cmpl_ashldi3_compare0_no_reuse */
    case 645:  /* *and_one_cmpl_rotrsi3_compare0_no_reuse */
    case 644:  /* *and_one_cmpl_lshrsi3_compare0_no_reuse */
    case 643:  /* *and_one_cmpl_ashrsi3_compare0_no_reuse */
    case 642:  /* *and_one_cmpl_ashlsi3_compare0_no_reuse */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 641:  /* *and_one_cmpl_rotrsi3_compare0_uxtw */
    case 640:  /* *and_one_cmpl_lshrsi3_compare0_uxtw */
    case 639:  /* *and_one_cmpl_ashrsi3_compare0_uxtw */
    case 638:  /* *and_one_cmpl_ashlsi3_compare0_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 3;
      break;

    case 637:  /* *and_one_cmpl_rotrdi3_compare0 */
    case 636:  /* *and_one_cmpl_lshrdi3_compare0 */
    case 635:  /* *and_one_cmpl_ashrdi3_compare0 */
    case 634:  /* *and_one_cmpl_ashldi3_compare0 */
    case 633:  /* *and_one_cmpl_rotrsi3_compare0 */
    case 632:  /* *and_one_cmpl_lshrsi3_compare0 */
    case 631:  /* *and_one_cmpl_ashrsi3_compare0 */
    case 630:  /* *and_one_cmpl_ashlsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 3;
      break;

    case 629:  /* *eor_one_cmpl_rotrsidi3_alt_ze */
    case 628:  /* *eor_one_cmpl_lshrsidi3_alt_ze */
    case 627:  /* *eor_one_cmpl_ashrsidi3_alt_ze */
    case 626:  /* *eor_one_cmpl_ashlsidi3_alt_ze */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 1924:  /* aarch64_shrnv2di_insn_le */
    case 1923:  /* aarch64_shrnv4si_insn_le */
    case 1922:  /* aarch64_shrnv8hi_insn_le */
    case 617:  /* xor_one_cmpl_rotrdi3 */
    case 616:  /* ior_one_cmpl_rotrdi3 */
    case 615:  /* and_one_cmpl_rotrdi3 */
    case 614:  /* xor_one_cmpl_lshrdi3 */
    case 613:  /* ior_one_cmpl_lshrdi3 */
    case 612:  /* and_one_cmpl_lshrdi3 */
    case 611:  /* xor_one_cmpl_ashrdi3 */
    case 610:  /* ior_one_cmpl_ashrdi3 */
    case 609:  /* and_one_cmpl_ashrdi3 */
    case 608:  /* xor_one_cmpl_ashldi3 */
    case 607:  /* ior_one_cmpl_ashldi3 */
    case 606:  /* and_one_cmpl_ashldi3 */
    case 605:  /* xor_one_cmpl_rotrsi3 */
    case 604:  /* ior_one_cmpl_rotrsi3 */
    case 603:  /* and_one_cmpl_rotrsi3 */
    case 602:  /* xor_one_cmpl_lshrsi3 */
    case 601:  /* ior_one_cmpl_lshrsi3 */
    case 600:  /* and_one_cmpl_lshrsi3 */
    case 599:  /* xor_one_cmpl_ashrsi3 */
    case 598:  /* ior_one_cmpl_ashrsi3 */
    case 597:  /* and_one_cmpl_ashrsi3 */
    case 596:  /* xor_one_cmpl_ashlsi3 */
    case 595:  /* ior_one_cmpl_ashlsi3 */
    case 594:  /* and_one_cmpl_ashlsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 593:  /* *and_one_cmpldi3_compare0_no_reuse */
    case 592:  /* *and_one_cmplsi3_compare0_no_reuse */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 591:  /* *and_one_cmplsi3_compare0_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 523:  /* *and_rotrsi3_compare0_uxtw */
    case 522:  /* *and_lshrsi3_compare0_uxtw */
    case 521:  /* *and_ashrsi3_compare0_uxtw */
    case 520:  /* *and_ashlsi3_compare0_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 3;
      break;

    case 497:  /* *aarch64_minmax_plus */
    case 496:  /* *aarch64_minmax_plus */
    case 495:  /* *aarch64_minmax_plus */
    case 494:  /* *aarch64_minmax_plus */
    case 493:  /* *aarch64_minmax_plus */
    case 492:  /* *aarch64_minmax_plus */
    case 491:  /* *aarch64_minmax_plus */
    case 490:  /* *aarch64_minmax_plus */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 489:  /* aarch64_uqdecdi */
    case 488:  /* aarch64_uqdecsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 487:  /* *csinv3_uxtw_insn3 */
    case 486:  /* *csinv3_uxtw_insn3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 485:  /* *csinv3_uxtw_insn2 */
    case 484:  /* *csinv3_uxtw_insn2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 483:  /* *csinv3_uxtw_insn1 */
    case 482:  /* *csinv3_uxtw_insn1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0));
      break;

    case 479:  /* *csinv3_uxtw_insn4 */
    case 478:  /* *csneg3_uxtw_insn4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 481:  /* csneg3di_insn */
    case 480:  /* csneg3si_insn */
    case 477:  /* *csinv3di_insn */
    case 476:  /* *csinv3si_insn */
    case 475:  /* csinc3di_insn */
    case 474:  /* csinc3si_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2574:  /* *aarch64_combinez_bedf */
    case 2573:  /* *aarch64_combinez_bedi */
    case 2572:  /* *aarch64_combinez_besf */
    case 2571:  /* *aarch64_combinez_besi */
    case 2570:  /* *aarch64_combinez_bev2sf */
    case 2569:  /* *aarch64_combinez_bev2si */
    case 2568:  /* *aarch64_combinez_bev4hf */
    case 2567:  /* *aarch64_combinez_bev4bf */
    case 2566:  /* *aarch64_combinez_bev4hi */
    case 2565:  /* *aarch64_combinez_bev8qi */
    case 2554:  /* *aarch64_combine_internal_bedf */
    case 2553:  /* *aarch64_combine_internal_bedi */
    case 2552:  /* *aarch64_combine_internal_besf */
    case 2551:  /* *aarch64_combine_internal_besi */
    case 2550:  /* *aarch64_combine_internal_bev2sf */
    case 2549:  /* *aarch64_combine_internal_bev2si */
    case 2548:  /* *aarch64_combine_internal_bev4hf */
    case 2547:  /* *aarch64_combine_internal_bev4bf */
    case 2546:  /* *aarch64_combine_internal_bev4hi */
    case 2545:  /* *aarch64_combine_internal_bev8qi */
    case 473:  /* *csinc2di_insn */
    case 472:  /* *csinc2si_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 9966:  /* aarch64_sve2_sm4ekey */
    case 9965:  /* aarch64_sve2_sm4e */
    case 9945:  /* aarch64_sve2_histsegvnx16qi */
    case 9942:  /* aarch64_sve_bgrpvnx2di */
    case 9941:  /* aarch64_sve_bextvnx2di */
    case 9940:  /* aarch64_sve_bdepvnx2di */
    case 9939:  /* aarch64_sve_bgrpvnx4si */
    case 9938:  /* aarch64_sve_bextvnx4si */
    case 9937:  /* aarch64_sve_bdepvnx4si */
    case 9936:  /* aarch64_sve_bgrpvnx8hi */
    case 9935:  /* aarch64_sve_bextvnx8hi */
    case 9934:  /* aarch64_sve_bdepvnx8hi */
    case 9933:  /* aarch64_sve_bgrpvnx16qi */
    case 9932:  /* aarch64_sve_bextvnx16qi */
    case 9931:  /* aarch64_sve_bdepvnx16qi */
    case 9922:  /* aarch64_sve2_tbl2vnx2df */
    case 9921:  /* aarch64_sve2_tbl2vnx4sf */
    case 9920:  /* aarch64_sve2_tbl2vnx8hf */
    case 9919:  /* aarch64_sve2_tbl2vnx8bf */
    case 9918:  /* aarch64_sve2_tbl2vnx2di */
    case 9917:  /* aarch64_sve2_tbl2vnx4si */
    case 9916:  /* aarch64_sve2_tbl2vnx8hi */
    case 9915:  /* aarch64_sve2_tbl2vnx16qi */
    case 9914:  /* aarch64_sve_pmullt_pairvnx2di */
    case 9913:  /* aarch64_sve_pmullb_pairvnx2di */
    case 9912:  /* aarch64_sve_pmullt_pairvnx4si */
    case 9911:  /* aarch64_sve_pmullb_pairvnx4si */
    case 9910:  /* aarch64_sve_pmullt_pairvnx16qi */
    case 9909:  /* aarch64_sve_pmullb_pairvnx16qi */
    case 9908:  /* aarch64_sve_pmulltvnx2di */
    case 9907:  /* aarch64_sve_pmullbvnx2di */
    case 9906:  /* aarch64_sve_pmulltvnx8hi */
    case 9905:  /* aarch64_sve_pmullbvnx8hi */
    case 9904:  /* aarch64_sve2_pmulvnx16qi */
    case 9814:  /* aarch64_sve_sqcadd270vnx2di */
    case 9813:  /* aarch64_sve_sqcadd90vnx2di */
    case 9812:  /* aarch64_sve_cadd270vnx2di */
    case 9811:  /* aarch64_sve_cadd90vnx2di */
    case 9810:  /* aarch64_sve_sqcadd270vnx4si */
    case 9809:  /* aarch64_sve_sqcadd90vnx4si */
    case 9808:  /* aarch64_sve_cadd270vnx4si */
    case 9807:  /* aarch64_sve_cadd90vnx4si */
    case 9806:  /* aarch64_sve_sqcadd270vnx8hi */
    case 9805:  /* aarch64_sve_sqcadd90vnx8hi */
    case 9804:  /* aarch64_sve_cadd270vnx8hi */
    case 9803:  /* aarch64_sve_cadd90vnx8hi */
    case 9802:  /* aarch64_sve_sqcadd270vnx16qi */
    case 9801:  /* aarch64_sve_sqcadd90vnx16qi */
    case 9800:  /* aarch64_sve_cadd270vnx16qi */
    case 9799:  /* aarch64_sve_cadd90vnx16qi */
    case 9727:  /* aarch64_sve_uqshrnbvnx2di */
    case 9726:  /* aarch64_sve_uqrshrnbvnx2di */
    case 9725:  /* aarch64_sve_sqshrunbvnx2di */
    case 9724:  /* aarch64_sve_sqshrnbvnx2di */
    case 9723:  /* aarch64_sve_sqrshrunbvnx2di */
    case 9722:  /* aarch64_sve_sqrshrnbvnx2di */
    case 9721:  /* aarch64_sve_shrnbvnx2di */
    case 9720:  /* aarch64_sve_rshrnbvnx2di */
    case 9719:  /* aarch64_sve_uqshrnbvnx4si */
    case 9718:  /* aarch64_sve_uqrshrnbvnx4si */
    case 9717:  /* aarch64_sve_sqshrunbvnx4si */
    case 9716:  /* aarch64_sve_sqshrnbvnx4si */
    case 9715:  /* aarch64_sve_sqrshrunbvnx4si */
    case 9714:  /* aarch64_sve_sqrshrnbvnx4si */
    case 9713:  /* aarch64_sve_shrnbvnx4si */
    case 9712:  /* aarch64_sve_rshrnbvnx4si */
    case 9711:  /* aarch64_sve_uqshrnbvnx8hi */
    case 9710:  /* aarch64_sve_uqrshrnbvnx8hi */
    case 9709:  /* aarch64_sve_sqshrunbvnx8hi */
    case 9708:  /* aarch64_sve_sqshrnbvnx8hi */
    case 9707:  /* aarch64_sve_sqrshrunbvnx8hi */
    case 9706:  /* aarch64_sve_sqrshrnbvnx8hi */
    case 9705:  /* aarch64_sve_shrnbvnx8hi */
    case 9704:  /* aarch64_sve_rshrnbvnx8hi */
    case 9691:  /* aarch64_sve_subhnbvnx2di */
    case 9690:  /* aarch64_sve_rsubhnbvnx2di */
    case 9689:  /* aarch64_sve_raddhnbvnx2di */
    case 9688:  /* aarch64_sve_addhnbvnx2di */
    case 9687:  /* aarch64_sve_subhnbvnx4si */
    case 9686:  /* aarch64_sve_rsubhnbvnx4si */
    case 9685:  /* aarch64_sve_raddhnbvnx4si */
    case 9684:  /* aarch64_sve_addhnbvnx4si */
    case 9683:  /* aarch64_sve_subhnbvnx8hi */
    case 9682:  /* aarch64_sve_rsubhnbvnx8hi */
    case 9681:  /* aarch64_sve_raddhnbvnx8hi */
    case 9680:  /* aarch64_sve_addhnbvnx8hi */
    case 9679:  /* aarch64_sve_uqxtntvnx2di */
    case 9678:  /* aarch64_sve_sqxtuntvnx2di */
    case 9677:  /* aarch64_sve_sqxtntvnx2di */
    case 9676:  /* aarch64_sve_uqxtntvnx4si */
    case 9675:  /* aarch64_sve_sqxtuntvnx4si */
    case 9674:  /* aarch64_sve_sqxtntvnx4si */
    case 9673:  /* aarch64_sve_uqxtntvnx8hi */
    case 9672:  /* aarch64_sve_sqxtuntvnx8hi */
    case 9671:  /* aarch64_sve_sqxtntvnx8hi */
    case 9575:  /* aarch64_sve_ushlltvnx2di */
    case 9574:  /* aarch64_sve_ushllbvnx2di */
    case 9573:  /* aarch64_sve_sshlltvnx2di */
    case 9572:  /* aarch64_sve_sshllbvnx2di */
    case 9571:  /* aarch64_sve_ushlltvnx4si */
    case 9570:  /* aarch64_sve_ushllbvnx4si */
    case 9569:  /* aarch64_sve_sshlltvnx4si */
    case 9568:  /* aarch64_sve_sshllbvnx4si */
    case 9567:  /* aarch64_sve_ushlltvnx8hi */
    case 9566:  /* aarch64_sve_ushllbvnx8hi */
    case 9565:  /* aarch64_sve_sshlltvnx8hi */
    case 9564:  /* aarch64_sve_sshllbvnx8hi */
    case 9551:  /* aarch64_sve_usubltvnx2di */
    case 9550:  /* aarch64_sve_usublbvnx2di */
    case 9549:  /* aarch64_sve_umulltvnx2di */
    case 9548:  /* aarch64_sve_umullbvnx2di */
    case 9547:  /* aarch64_sve_uaddltvnx2di */
    case 9546:  /* aarch64_sve_uaddlbvnx2di */
    case 9545:  /* aarch64_sve_uabdltvnx2di */
    case 9544:  /* aarch64_sve_uabdlbvnx2di */
    case 9543:  /* aarch64_sve_ssubltbvnx2di */
    case 9542:  /* aarch64_sve_ssubltvnx2di */
    case 9541:  /* aarch64_sve_ssublbtvnx2di */
    case 9540:  /* aarch64_sve_ssublbvnx2di */
    case 9539:  /* aarch64_sve_sqdmulltvnx2di */
    case 9538:  /* aarch64_sve_sqdmullbvnx2di */
    case 9537:  /* aarch64_sve_smulltvnx2di */
    case 9536:  /* aarch64_sve_smullbvnx2di */
    case 9535:  /* aarch64_sve_saddltvnx2di */
    case 9534:  /* aarch64_sve_saddlbtvnx2di */
    case 9533:  /* aarch64_sve_saddlbvnx2di */
    case 9532:  /* aarch64_sve_sabdltvnx2di */
    case 9531:  /* aarch64_sve_sabdlbvnx2di */
    case 9530:  /* aarch64_sve_usubltvnx4si */
    case 9529:  /* aarch64_sve_usublbvnx4si */
    case 9528:  /* aarch64_sve_umulltvnx4si */
    case 9527:  /* aarch64_sve_umullbvnx4si */
    case 9526:  /* aarch64_sve_uaddltvnx4si */
    case 9525:  /* aarch64_sve_uaddlbvnx4si */
    case 9524:  /* aarch64_sve_uabdltvnx4si */
    case 9523:  /* aarch64_sve_uabdlbvnx4si */
    case 9522:  /* aarch64_sve_ssubltbvnx4si */
    case 9521:  /* aarch64_sve_ssubltvnx4si */
    case 9520:  /* aarch64_sve_ssublbtvnx4si */
    case 9519:  /* aarch64_sve_ssublbvnx4si */
    case 9518:  /* aarch64_sve_sqdmulltvnx4si */
    case 9517:  /* aarch64_sve_sqdmullbvnx4si */
    case 9516:  /* aarch64_sve_smulltvnx4si */
    case 9515:  /* aarch64_sve_smullbvnx4si */
    case 9514:  /* aarch64_sve_saddltvnx4si */
    case 9513:  /* aarch64_sve_saddlbtvnx4si */
    case 9512:  /* aarch64_sve_saddlbvnx4si */
    case 9511:  /* aarch64_sve_sabdltvnx4si */
    case 9510:  /* aarch64_sve_sabdlbvnx4si */
    case 9509:  /* aarch64_sve_usubltvnx8hi */
    case 9508:  /* aarch64_sve_usublbvnx8hi */
    case 9507:  /* aarch64_sve_umulltvnx8hi */
    case 9506:  /* aarch64_sve_umullbvnx8hi */
    case 9505:  /* aarch64_sve_uaddltvnx8hi */
    case 9504:  /* aarch64_sve_uaddlbvnx8hi */
    case 9503:  /* aarch64_sve_uabdltvnx8hi */
    case 9502:  /* aarch64_sve_uabdlbvnx8hi */
    case 9501:  /* aarch64_sve_ssubltbvnx8hi */
    case 9500:  /* aarch64_sve_ssubltvnx8hi */
    case 9499:  /* aarch64_sve_ssublbtvnx8hi */
    case 9498:  /* aarch64_sve_ssublbvnx8hi */
    case 9497:  /* aarch64_sve_sqdmulltvnx8hi */
    case 9496:  /* aarch64_sve_sqdmullbvnx8hi */
    case 9495:  /* aarch64_sve_smulltvnx8hi */
    case 9494:  /* aarch64_sve_smullbvnx8hi */
    case 9493:  /* aarch64_sve_saddltvnx8hi */
    case 9492:  /* aarch64_sve_saddlbtvnx8hi */
    case 9491:  /* aarch64_sve_saddlbvnx8hi */
    case 9490:  /* aarch64_sve_sabdltvnx8hi */
    case 9489:  /* aarch64_sve_sabdlbvnx8hi */
    case 9488:  /* aarch64_sve_usubwtvnx2di */
    case 9487:  /* aarch64_sve_usubwbvnx2di */
    case 9486:  /* aarch64_sve_uaddwtvnx2di */
    case 9485:  /* aarch64_sve_uaddwbvnx2di */
    case 9484:  /* aarch64_sve_ssubwtvnx2di */
    case 9483:  /* aarch64_sve_ssubwbvnx2di */
    case 9482:  /* aarch64_sve_saddwtvnx2di */
    case 9481:  /* aarch64_sve_saddwbvnx2di */
    case 9480:  /* aarch64_sve_usubwtvnx4si */
    case 9479:  /* aarch64_sve_usubwbvnx4si */
    case 9478:  /* aarch64_sve_uaddwtvnx4si */
    case 9477:  /* aarch64_sve_uaddwbvnx4si */
    case 9476:  /* aarch64_sve_ssubwtvnx4si */
    case 9475:  /* aarch64_sve_ssubwbvnx4si */
    case 9474:  /* aarch64_sve_saddwtvnx4si */
    case 9473:  /* aarch64_sve_saddwbvnx4si */
    case 9472:  /* aarch64_sve_usubwtvnx8hi */
    case 9471:  /* aarch64_sve_usubwbvnx8hi */
    case 9470:  /* aarch64_sve_uaddwtvnx8hi */
    case 9469:  /* aarch64_sve_uaddwbvnx8hi */
    case 9468:  /* aarch64_sve_ssubwtvnx8hi */
    case 9467:  /* aarch64_sve_ssubwbvnx8hi */
    case 9466:  /* aarch64_sve_saddwtvnx8hi */
    case 9465:  /* aarch64_sve_saddwbvnx8hi */
    case 9290:  /* aarch64_sve_sqrdmulhvnx2di */
    case 9289:  /* aarch64_sve_sqdmulhvnx2di */
    case 9288:  /* aarch64_sve_sqrdmulhvnx4si */
    case 9287:  /* aarch64_sve_sqdmulhvnx4si */
    case 9286:  /* aarch64_sve_sqrdmulhvnx8hi */
    case 9285:  /* aarch64_sve_sqdmulhvnx8hi */
    case 9284:  /* aarch64_sve_sqrdmulhvnx16qi */
    case 9283:  /* aarch64_sve_sqdmulhvnx16qi */
    case 9106:  /* aarch64_sve_suqaddvnx2di_const */
    case 9105:  /* aarch64_sve_suqaddvnx4si_const */
    case 9104:  /* aarch64_sve_suqaddvnx8hi_const */
    case 9103:  /* aarch64_sve_suqaddvnx16qi_const */
    case 8939:  /* vec_pack_trunc_vnx2bi */
    case 8938:  /* vec_pack_trunc_vnx4bi */
    case 8937:  /* vec_pack_trunc_vnx8bi */
    case 8829:  /* vec_pack_trunc_vnx2di */
    case 8828:  /* vec_pack_trunc_vnx4si */
    case 8827:  /* vec_pack_trunc_vnx8hi */
    case 8822:  /* aarch64_sve_uzp2vnx2bi */
    case 8821:  /* aarch64_sve_uzp1vnx2bi */
    case 8820:  /* aarch64_sve_trn2vnx2bi */
    case 8819:  /* aarch64_sve_trn1vnx2bi */
    case 8818:  /* aarch64_sve_zip2vnx2bi */
    case 8817:  /* aarch64_sve_zip1vnx2bi */
    case 8816:  /* aarch64_sve_uzp2vnx4bi */
    case 8815:  /* aarch64_sve_uzp1vnx4bi */
    case 8814:  /* aarch64_sve_trn2vnx4bi */
    case 8813:  /* aarch64_sve_trn1vnx4bi */
    case 8812:  /* aarch64_sve_zip2vnx4bi */
    case 8811:  /* aarch64_sve_zip1vnx4bi */
    case 8810:  /* aarch64_sve_uzp2vnx8bi */
    case 8809:  /* aarch64_sve_uzp1vnx8bi */
    case 8808:  /* aarch64_sve_trn2vnx8bi */
    case 8807:  /* aarch64_sve_trn1vnx8bi */
    case 8806:  /* aarch64_sve_zip2vnx8bi */
    case 8805:  /* aarch64_sve_zip1vnx8bi */
    case 8804:  /* aarch64_sve_uzp2vnx16bi */
    case 8803:  /* aarch64_sve_uzp1vnx16bi */
    case 8802:  /* aarch64_sve_trn2vnx16bi */
    case 8801:  /* aarch64_sve_trn1vnx16bi */
    case 8800:  /* aarch64_sve_zip2vnx16bi */
    case 8799:  /* aarch64_sve_zip1vnx16bi */
    case 8775:  /* aarch64_sve_uzp2qvnx2df */
    case 8774:  /* aarch64_sve_uzp1qvnx2df */
    case 8773:  /* aarch64_sve_trn2qvnx2df */
    case 8772:  /* aarch64_sve_trn1qvnx2df */
    case 8771:  /* aarch64_sve_zip2qvnx2df */
    case 8770:  /* aarch64_sve_zip1qvnx2df */
    case 8769:  /* aarch64_sve_uzp2qvnx4sf */
    case 8768:  /* aarch64_sve_uzp1qvnx4sf */
    case 8767:  /* aarch64_sve_trn2qvnx4sf */
    case 8766:  /* aarch64_sve_trn1qvnx4sf */
    case 8765:  /* aarch64_sve_zip2qvnx4sf */
    case 8764:  /* aarch64_sve_zip1qvnx4sf */
    case 8763:  /* aarch64_sve_uzp2qvnx8hf */
    case 8762:  /* aarch64_sve_uzp1qvnx8hf */
    case 8761:  /* aarch64_sve_trn2qvnx8hf */
    case 8760:  /* aarch64_sve_trn1qvnx8hf */
    case 8759:  /* aarch64_sve_zip2qvnx8hf */
    case 8758:  /* aarch64_sve_zip1qvnx8hf */
    case 8757:  /* aarch64_sve_uzp2qvnx8bf */
    case 8756:  /* aarch64_sve_uzp1qvnx8bf */
    case 8755:  /* aarch64_sve_trn2qvnx8bf */
    case 8754:  /* aarch64_sve_trn1qvnx8bf */
    case 8753:  /* aarch64_sve_zip2qvnx8bf */
    case 8752:  /* aarch64_sve_zip1qvnx8bf */
    case 8751:  /* aarch64_sve_uzp2qvnx2di */
    case 8750:  /* aarch64_sve_uzp1qvnx2di */
    case 8749:  /* aarch64_sve_trn2qvnx2di */
    case 8748:  /* aarch64_sve_trn1qvnx2di */
    case 8747:  /* aarch64_sve_zip2qvnx2di */
    case 8746:  /* aarch64_sve_zip1qvnx2di */
    case 8745:  /* aarch64_sve_uzp2qvnx4si */
    case 8744:  /* aarch64_sve_uzp1qvnx4si */
    case 8743:  /* aarch64_sve_trn2qvnx4si */
    case 8742:  /* aarch64_sve_trn1qvnx4si */
    case 8741:  /* aarch64_sve_zip2qvnx4si */
    case 8740:  /* aarch64_sve_zip1qvnx4si */
    case 8739:  /* aarch64_sve_uzp2qvnx8hi */
    case 8738:  /* aarch64_sve_uzp1qvnx8hi */
    case 8737:  /* aarch64_sve_trn2qvnx8hi */
    case 8736:  /* aarch64_sve_trn1qvnx8hi */
    case 8735:  /* aarch64_sve_zip2qvnx8hi */
    case 8734:  /* aarch64_sve_zip1qvnx8hi */
    case 8733:  /* aarch64_sve_uzp2qvnx16qi */
    case 8732:  /* aarch64_sve_uzp1qvnx16qi */
    case 8731:  /* aarch64_sve_trn2qvnx16qi */
    case 8730:  /* aarch64_sve_trn1qvnx16qi */
    case 8729:  /* aarch64_sve_zip2qvnx16qi */
    case 8728:  /* aarch64_sve_zip1qvnx16qi */
    case 8727:  /* aarch64_sve_uzp2vnx2df */
    case 8726:  /* aarch64_sve_uzp1vnx2df */
    case 8725:  /* aarch64_sve_trn2vnx2df */
    case 8724:  /* aarch64_sve_trn1vnx2df */
    case 8723:  /* aarch64_sve_zip2vnx2df */
    case 8722:  /* aarch64_sve_zip1vnx2df */
    case 8721:  /* aarch64_sve_uzp2vnx2di */
    case 8720:  /* aarch64_sve_uzp1vnx2di */
    case 8719:  /* aarch64_sve_trn2vnx2di */
    case 8718:  /* aarch64_sve_trn1vnx2di */
    case 8717:  /* aarch64_sve_zip2vnx2di */
    case 8716:  /* aarch64_sve_zip1vnx2di */
    case 8715:  /* aarch64_sve_uzp2vnx2sf */
    case 8714:  /* aarch64_sve_uzp1vnx2sf */
    case 8713:  /* aarch64_sve_trn2vnx2sf */
    case 8712:  /* aarch64_sve_trn1vnx2sf */
    case 8711:  /* aarch64_sve_zip2vnx2sf */
    case 8710:  /* aarch64_sve_zip1vnx2sf */
    case 8709:  /* aarch64_sve_uzp2vnx4sf */
    case 8708:  /* aarch64_sve_uzp1vnx4sf */
    case 8707:  /* aarch64_sve_trn2vnx4sf */
    case 8706:  /* aarch64_sve_trn1vnx4sf */
    case 8705:  /* aarch64_sve_zip2vnx4sf */
    case 8704:  /* aarch64_sve_zip1vnx4sf */
    case 8703:  /* aarch64_sve_uzp2vnx2si */
    case 8702:  /* aarch64_sve_uzp1vnx2si */
    case 8701:  /* aarch64_sve_trn2vnx2si */
    case 8700:  /* aarch64_sve_trn1vnx2si */
    case 8699:  /* aarch64_sve_zip2vnx2si */
    case 8698:  /* aarch64_sve_zip1vnx2si */
    case 8697:  /* aarch64_sve_uzp2vnx4si */
    case 8696:  /* aarch64_sve_uzp1vnx4si */
    case 8695:  /* aarch64_sve_trn2vnx4si */
    case 8694:  /* aarch64_sve_trn1vnx4si */
    case 8693:  /* aarch64_sve_zip2vnx4si */
    case 8692:  /* aarch64_sve_zip1vnx4si */
    case 8691:  /* aarch64_sve_uzp2vnx2bf */
    case 8690:  /* aarch64_sve_uzp1vnx2bf */
    case 8689:  /* aarch64_sve_trn2vnx2bf */
    case 8688:  /* aarch64_sve_trn1vnx2bf */
    case 8687:  /* aarch64_sve_zip2vnx2bf */
    case 8686:  /* aarch64_sve_zip1vnx2bf */
    case 8685:  /* aarch64_sve_uzp2vnx4bf */
    case 8684:  /* aarch64_sve_uzp1vnx4bf */
    case 8683:  /* aarch64_sve_trn2vnx4bf */
    case 8682:  /* aarch64_sve_trn1vnx4bf */
    case 8681:  /* aarch64_sve_zip2vnx4bf */
    case 8680:  /* aarch64_sve_zip1vnx4bf */
    case 8679:  /* aarch64_sve_uzp2vnx8bf */
    case 8678:  /* aarch64_sve_uzp1vnx8bf */
    case 8677:  /* aarch64_sve_trn2vnx8bf */
    case 8676:  /* aarch64_sve_trn1vnx8bf */
    case 8675:  /* aarch64_sve_zip2vnx8bf */
    case 8674:  /* aarch64_sve_zip1vnx8bf */
    case 8673:  /* aarch64_sve_uzp2vnx2hf */
    case 8672:  /* aarch64_sve_uzp1vnx2hf */
    case 8671:  /* aarch64_sve_trn2vnx2hf */
    case 8670:  /* aarch64_sve_trn1vnx2hf */
    case 8669:  /* aarch64_sve_zip2vnx2hf */
    case 8668:  /* aarch64_sve_zip1vnx2hf */
    case 8667:  /* aarch64_sve_uzp2vnx4hf */
    case 8666:  /* aarch64_sve_uzp1vnx4hf */
    case 8665:  /* aarch64_sve_trn2vnx4hf */
    case 8664:  /* aarch64_sve_trn1vnx4hf */
    case 8663:  /* aarch64_sve_zip2vnx4hf */
    case 8662:  /* aarch64_sve_zip1vnx4hf */
    case 8661:  /* aarch64_sve_uzp2vnx8hf */
    case 8660:  /* aarch64_sve_uzp1vnx8hf */
    case 8659:  /* aarch64_sve_trn2vnx8hf */
    case 8658:  /* aarch64_sve_trn1vnx8hf */
    case 8657:  /* aarch64_sve_zip2vnx8hf */
    case 8656:  /* aarch64_sve_zip1vnx8hf */
    case 8655:  /* aarch64_sve_uzp2vnx2hi */
    case 8654:  /* aarch64_sve_uzp1vnx2hi */
    case 8653:  /* aarch64_sve_trn2vnx2hi */
    case 8652:  /* aarch64_sve_trn1vnx2hi */
    case 8651:  /* aarch64_sve_zip2vnx2hi */
    case 8650:  /* aarch64_sve_zip1vnx2hi */
    case 8649:  /* aarch64_sve_uzp2vnx4hi */
    case 8648:  /* aarch64_sve_uzp1vnx4hi */
    case 8647:  /* aarch64_sve_trn2vnx4hi */
    case 8646:  /* aarch64_sve_trn1vnx4hi */
    case 8645:  /* aarch64_sve_zip2vnx4hi */
    case 8644:  /* aarch64_sve_zip1vnx4hi */
    case 8643:  /* aarch64_sve_uzp2vnx8hi */
    case 8642:  /* aarch64_sve_uzp1vnx8hi */
    case 8641:  /* aarch64_sve_trn2vnx8hi */
    case 8640:  /* aarch64_sve_trn1vnx8hi */
    case 8639:  /* aarch64_sve_zip2vnx8hi */
    case 8638:  /* aarch64_sve_zip1vnx8hi */
    case 8637:  /* aarch64_sve_uzp2vnx2qi */
    case 8636:  /* aarch64_sve_uzp1vnx2qi */
    case 8635:  /* aarch64_sve_trn2vnx2qi */
    case 8634:  /* aarch64_sve_trn1vnx2qi */
    case 8633:  /* aarch64_sve_zip2vnx2qi */
    case 8632:  /* aarch64_sve_zip1vnx2qi */
    case 8631:  /* aarch64_sve_uzp2vnx4qi */
    case 8630:  /* aarch64_sve_uzp1vnx4qi */
    case 8629:  /* aarch64_sve_trn2vnx4qi */
    case 8628:  /* aarch64_sve_trn1vnx4qi */
    case 8627:  /* aarch64_sve_zip2vnx4qi */
    case 8626:  /* aarch64_sve_zip1vnx4qi */
    case 8625:  /* aarch64_sve_uzp2vnx8qi */
    case 8624:  /* aarch64_sve_uzp1vnx8qi */
    case 8623:  /* aarch64_sve_trn2vnx8qi */
    case 8622:  /* aarch64_sve_trn1vnx8qi */
    case 8621:  /* aarch64_sve_zip2vnx8qi */
    case 8620:  /* aarch64_sve_zip1vnx8qi */
    case 8619:  /* aarch64_sve_uzp2vnx16qi */
    case 8618:  /* aarch64_sve_uzp1vnx16qi */
    case 8617:  /* aarch64_sve_trn2vnx16qi */
    case 8616:  /* aarch64_sve_trn1vnx16qi */
    case 8615:  /* aarch64_sve_zip2vnx16qi */
    case 8614:  /* aarch64_sve_zip1vnx16qi */
    case 8559:  /* aarch64_sve_compactvnx2df */
    case 8558:  /* aarch64_sve_compactvnx4sf */
    case 8557:  /* aarch64_sve_compactvnx2di */
    case 8556:  /* aarch64_sve_compactvnx4si */
    case 8555:  /* aarch64_sve_tblvnx2df */
    case 8554:  /* aarch64_sve_tblvnx4sf */
    case 8553:  /* aarch64_sve_tblvnx8hf */
    case 8552:  /* aarch64_sve_tblvnx8bf */
    case 8551:  /* aarch64_sve_tblvnx2di */
    case 8550:  /* aarch64_sve_tblvnx4si */
    case 8549:  /* aarch64_sve_tblvnx8hi */
    case 8548:  /* aarch64_sve_tblvnx16qi */
    case 8544:  /* aarch64_pred_reduc_smin_vnx2df */
    case 8543:  /* aarch64_pred_reduc_smin_nan_vnx2df */
    case 8542:  /* aarch64_pred_reduc_smax_vnx2df */
    case 8541:  /* aarch64_pred_reduc_smax_nan_vnx2df */
    case 8540:  /* aarch64_pred_reduc_plus_vnx2df */
    case 8539:  /* aarch64_pred_reduc_smin_vnx4sf */
    case 8538:  /* aarch64_pred_reduc_smin_nan_vnx4sf */
    case 8537:  /* aarch64_pred_reduc_smax_vnx4sf */
    case 8536:  /* aarch64_pred_reduc_smax_nan_vnx4sf */
    case 8535:  /* aarch64_pred_reduc_plus_vnx4sf */
    case 8534:  /* aarch64_pred_reduc_smin_vnx8hf */
    case 8533:  /* aarch64_pred_reduc_smin_nan_vnx8hf */
    case 8532:  /* aarch64_pred_reduc_smax_vnx8hf */
    case 8531:  /* aarch64_pred_reduc_smax_nan_vnx8hf */
    case 8530:  /* aarch64_pred_reduc_plus_vnx8hf */
    case 8529:  /* aarch64_pred_reduc_xor_vnx2di */
    case 8528:  /* aarch64_pred_reduc_umin_vnx2di */
    case 8527:  /* aarch64_pred_reduc_umax_vnx2di */
    case 8526:  /* aarch64_pred_reduc_smin_vnx2di */
    case 8525:  /* aarch64_pred_reduc_smax_vnx2di */
    case 8524:  /* aarch64_pred_reduc_ior_vnx2di */
    case 8523:  /* aarch64_pred_reduc_and_vnx2di */
    case 8522:  /* aarch64_pred_reduc_xor_vnx4si */
    case 8521:  /* aarch64_pred_reduc_umin_vnx4si */
    case 8520:  /* aarch64_pred_reduc_umax_vnx4si */
    case 8519:  /* aarch64_pred_reduc_smin_vnx4si */
    case 8518:  /* aarch64_pred_reduc_smax_vnx4si */
    case 8517:  /* aarch64_pred_reduc_ior_vnx4si */
    case 8516:  /* aarch64_pred_reduc_and_vnx4si */
    case 8515:  /* aarch64_pred_reduc_xor_vnx8hi */
    case 8514:  /* aarch64_pred_reduc_umin_vnx8hi */
    case 8513:  /* aarch64_pred_reduc_umax_vnx8hi */
    case 8512:  /* aarch64_pred_reduc_smin_vnx8hi */
    case 8511:  /* aarch64_pred_reduc_smax_vnx8hi */
    case 8510:  /* aarch64_pred_reduc_ior_vnx8hi */
    case 8509:  /* aarch64_pred_reduc_and_vnx8hi */
    case 8508:  /* aarch64_pred_reduc_xor_vnx16qi */
    case 8507:  /* aarch64_pred_reduc_umin_vnx16qi */
    case 8506:  /* aarch64_pred_reduc_umax_vnx16qi */
    case 8505:  /* aarch64_pred_reduc_smin_vnx16qi */
    case 8504:  /* aarch64_pred_reduc_smax_vnx16qi */
    case 8503:  /* aarch64_pred_reduc_ior_vnx16qi */
    case 8502:  /* aarch64_pred_reduc_and_vnx16qi */
    case 8501:  /* aarch64_pred_reduc_uadd_vnx2di */
    case 8500:  /* aarch64_pred_reduc_uadd_vnx4si */
    case 8499:  /* aarch64_pred_reduc_sadd_vnx4si */
    case 8498:  /* aarch64_pred_reduc_uadd_vnx8hi */
    case 8497:  /* aarch64_pred_reduc_sadd_vnx8hi */
    case 8496:  /* aarch64_pred_reduc_uadd_vnx16qi */
    case 8495:  /* aarch64_pred_reduc_sadd_vnx16qi */
    case 7214:  /* *xorvnx2df3 */
    case 7213:  /* *iorvnx2df3 */
    case 7212:  /* *andvnx2df3 */
    case 7211:  /* *xorvnx4sf3 */
    case 7210:  /* *iorvnx4sf3 */
    case 7209:  /* *andvnx4sf3 */
    case 7208:  /* *xorvnx8hf3 */
    case 7207:  /* *iorvnx8hf3 */
    case 7206:  /* *andvnx8hf3 */
    case 6887:  /* aarch64_sve_frsqrtsvnx2df */
    case 6886:  /* aarch64_sve_frecpsvnx2df */
    case 6885:  /* aarch64_sve_frsqrtsvnx4sf */
    case 6884:  /* aarch64_sve_frecpsvnx4sf */
    case 6883:  /* aarch64_sve_frsqrtsvnx8hf */
    case 6882:  /* aarch64_sve_frecpsvnx8hf */
    case 6857:  /* aarch64_sve_ftsselvnx2df */
    case 6856:  /* aarch64_sve_ftsmulvnx2df */
    case 6855:  /* aarch64_sve_ftsselvnx4sf */
    case 6854:  /* aarch64_sve_ftsmulvnx4sf */
    case 6853:  /* aarch64_sve_ftsselvnx8hf */
    case 6852:  /* aarch64_sve_ftsmulvnx8hf */
    case 6743:  /* aarch64_sve_lsrvnx4si */
    case 6742:  /* aarch64_sve_asrvnx4si */
    case 6741:  /* aarch64_sve_lslvnx4si */
    case 6740:  /* aarch64_sve_lsrvnx8hi */
    case 6739:  /* aarch64_sve_asrvnx8hi */
    case 6738:  /* aarch64_sve_lslvnx8hi */
    case 6737:  /* aarch64_sve_lsrvnx16qi */
    case 6736:  /* aarch64_sve_asrvnx16qi */
    case 6735:  /* aarch64_sve_lslvnx16qi */
    case 6394:  /* aarch64_adrvnx2di */
    case 6393:  /* aarch64_adrvnx4si */
    case 5215:  /* extract_last_vnx2df */
    case 5214:  /* extract_after_last_vnx2df */
    case 5213:  /* extract_last_vnx4sf */
    case 5212:  /* extract_after_last_vnx4sf */
    case 5211:  /* extract_last_vnx8hf */
    case 5210:  /* extract_after_last_vnx8hf */
    case 5209:  /* extract_last_vnx8bf */
    case 5208:  /* extract_after_last_vnx8bf */
    case 5207:  /* extract_last_vnx2di */
    case 5206:  /* extract_after_last_vnx2di */
    case 5205:  /* extract_last_vnx4si */
    case 5204:  /* extract_after_last_vnx4si */
    case 5203:  /* extract_last_vnx8hi */
    case 5202:  /* extract_after_last_vnx8hi */
    case 5201:  /* extract_last_vnx16qi */
    case 5200:  /* extract_after_last_vnx16qi */
    case 5147:  /* vec_shl_insert_vnx2df */
    case 5146:  /* vec_shl_insert_vnx4sf */
    case 5145:  /* vec_shl_insert_vnx8hf */
    case 5144:  /* vec_shl_insert_vnx8bf */
    case 5143:  /* vec_shl_insert_vnx2di */
    case 5142:  /* vec_shl_insert_vnx4si */
    case 5141:  /* vec_shl_insert_vnx8hi */
    case 5140:  /* vec_shl_insert_vnx16qi */
    case 4624:  /* aarch64_pred_movvnx8df */
    case 4623:  /* aarch64_pred_movvnx16sf */
    case 4622:  /* aarch64_pred_movvnx32hf */
    case 4621:  /* aarch64_pred_movvnx32bf */
    case 4620:  /* aarch64_pred_movvnx8di */
    case 4619:  /* aarch64_pred_movvnx16si */
    case 4618:  /* aarch64_pred_movvnx32hi */
    case 4617:  /* aarch64_pred_movvnx64qi */
    case 4616:  /* aarch64_pred_movvnx6df */
    case 4615:  /* aarch64_pred_movvnx12sf */
    case 4614:  /* aarch64_pred_movvnx24hf */
    case 4613:  /* aarch64_pred_movvnx24bf */
    case 4612:  /* aarch64_pred_movvnx6di */
    case 4611:  /* aarch64_pred_movvnx12si */
    case 4610:  /* aarch64_pred_movvnx24hi */
    case 4609:  /* aarch64_pred_movvnx48qi */
    case 4608:  /* aarch64_pred_movvnx4df */
    case 4607:  /* aarch64_pred_movvnx8sf */
    case 4606:  /* aarch64_pred_movvnx16hf */
    case 4605:  /* aarch64_pred_movvnx16bf */
    case 4604:  /* aarch64_pred_movvnx4di */
    case 4603:  /* aarch64_pred_movvnx8si */
    case 4602:  /* aarch64_pred_movvnx16hi */
    case 4601:  /* aarch64_pred_movvnx32qi */
    case 4533:  /* *aarch64_sve_movvnx2df_subreg_be */
    case 4532:  /* *aarch64_sve_movvnx2di_subreg_be */
    case 4531:  /* *aarch64_sve_movvnx2sf_subreg_be */
    case 4530:  /* *aarch64_sve_movvnx4sf_subreg_be */
    case 4529:  /* *aarch64_sve_movvnx2si_subreg_be */
    case 4528:  /* *aarch64_sve_movvnx4si_subreg_be */
    case 4527:  /* *aarch64_sve_movvnx2bf_subreg_be */
    case 4526:  /* *aarch64_sve_movvnx4bf_subreg_be */
    case 4525:  /* *aarch64_sve_movvnx8bf_subreg_be */
    case 4524:  /* *aarch64_sve_movvnx2hf_subreg_be */
    case 4523:  /* *aarch64_sve_movvnx4hf_subreg_be */
    case 4522:  /* *aarch64_sve_movvnx8hf_subreg_be */
    case 4521:  /* *aarch64_sve_movvnx2hi_subreg_be */
    case 4520:  /* *aarch64_sve_movvnx4hi_subreg_be */
    case 4519:  /* *aarch64_sve_movvnx8hi_subreg_be */
    case 4518:  /* *aarch64_sve_movvnx2qi_subreg_be */
    case 4517:  /* *aarch64_sve_movvnx4qi_subreg_be */
    case 4516:  /* *aarch64_sve_movvnx8qi_subreg_be */
    case 4515:  /* *aarch64_sve_movvnx16qi_subreg_be */
    case 4514:  /* aarch64_pred_movvnx2df */
    case 4513:  /* aarch64_pred_movvnx2di */
    case 4512:  /* aarch64_pred_movvnx2sf */
    case 4511:  /* aarch64_pred_movvnx4sf */
    case 4510:  /* aarch64_pred_movvnx2si */
    case 4509:  /* aarch64_pred_movvnx4si */
    case 4508:  /* aarch64_pred_movvnx2bf */
    case 4507:  /* aarch64_pred_movvnx4bf */
    case 4506:  /* aarch64_pred_movvnx8bf */
    case 4505:  /* aarch64_pred_movvnx2hf */
    case 4504:  /* aarch64_pred_movvnx4hf */
    case 4503:  /* aarch64_pred_movvnx8hf */
    case 4502:  /* aarch64_pred_movvnx2hi */
    case 4501:  /* aarch64_pred_movvnx4hi */
    case 4500:  /* aarch64_pred_movvnx8hi */
    case 4499:  /* aarch64_pred_movvnx2qi */
    case 4498:  /* aarch64_pred_movvnx4qi */
    case 4497:  /* aarch64_pred_movvnx8qi */
    case 4496:  /* aarch64_pred_movvnx16qi */
    case 4462:  /* aarch64_load_exclusivedi */
    case 4461:  /* aarch64_load_exclusivesi */
    case 4458:  /* atomic_storedi */
    case 4457:  /* atomic_storesi */
    case 4456:  /* atomic_storehi */
    case 4455:  /* atomic_storeqi */
    case 4454:  /* atomic_loaddi */
    case 4453:  /* atomic_loadsi */
    case 4452:  /* atomic_loadhi */
    case 4451:  /* atomic_loadqi */
    case 4323:  /* aarch64_bfcvtn2v8bf */
    case 4295:  /* aarch64_crypto_pmullv2di */
    case 4294:  /* aarch64_crypto_pmulldi */
    case 4269:  /* aarch64_sm4ekeyqv4si */
    case 4268:  /* aarch64_sm4eqv4si */
    case 4249:  /* aarch64_crypto_sha512su0qv2di */
    case 4245:  /* aarch64_crypto_sha256su0v4si */
    case 4238:  /* aarch64_crypto_sha1su1v4si */
    case 4226:  /* aarch64_frecpsdf */
    case 4225:  /* aarch64_frecpssf */
    case 4224:  /* aarch64_frecpshf */
    case 4223:  /* aarch64_frecpsv2df */
    case 4222:  /* aarch64_frecpsv4sf */
    case 4221:  /* aarch64_frecpsv2sf */
    case 4220:  /* aarch64_frecpsv8hf */
    case 4219:  /* aarch64_frecpsv4hf */
    case 4097:  /* aarch64_uzp2v2df */
    case 4096:  /* aarch64_uzp1v2df */
    case 4095:  /* aarch64_trn2v2df */
    case 4094:  /* aarch64_trn1v2df */
    case 4093:  /* aarch64_zip2v2df */
    case 4092:  /* aarch64_zip1v2df */
    case 4091:  /* aarch64_uzp2v4sf */
    case 4090:  /* aarch64_uzp1v4sf */
    case 4089:  /* aarch64_trn2v4sf */
    case 4088:  /* aarch64_trn1v4sf */
    case 4087:  /* aarch64_zip2v4sf */
    case 4086:  /* aarch64_zip1v4sf */
    case 4085:  /* aarch64_uzp2v2sf */
    case 4084:  /* aarch64_uzp1v2sf */
    case 4083:  /* aarch64_trn2v2sf */
    case 4082:  /* aarch64_trn1v2sf */
    case 4081:  /* aarch64_zip2v2sf */
    case 4080:  /* aarch64_zip1v2sf */
    case 4079:  /* aarch64_uzp2v8bf */
    case 4078:  /* aarch64_uzp1v8bf */
    case 4077:  /* aarch64_trn2v8bf */
    case 4076:  /* aarch64_trn1v8bf */
    case 4075:  /* aarch64_zip2v8bf */
    case 4074:  /* aarch64_zip1v8bf */
    case 4073:  /* aarch64_uzp2v4bf */
    case 4072:  /* aarch64_uzp1v4bf */
    case 4071:  /* aarch64_trn2v4bf */
    case 4070:  /* aarch64_trn1v4bf */
    case 4069:  /* aarch64_zip2v4bf */
    case 4068:  /* aarch64_zip1v4bf */
    case 4067:  /* aarch64_uzp2v8hf */
    case 4066:  /* aarch64_uzp1v8hf */
    case 4065:  /* aarch64_trn2v8hf */
    case 4064:  /* aarch64_trn1v8hf */
    case 4063:  /* aarch64_zip2v8hf */
    case 4062:  /* aarch64_zip1v8hf */
    case 4061:  /* aarch64_uzp2v4hf */
    case 4060:  /* aarch64_uzp1v4hf */
    case 4059:  /* aarch64_trn2v4hf */
    case 4058:  /* aarch64_trn1v4hf */
    case 4057:  /* aarch64_zip2v4hf */
    case 4056:  /* aarch64_zip1v4hf */
    case 4055:  /* aarch64_uzp2v2di */
    case 4054:  /* aarch64_uzp1v2di */
    case 4053:  /* aarch64_trn2v2di */
    case 4052:  /* aarch64_trn1v2di */
    case 4051:  /* aarch64_zip2v2di */
    case 4050:  /* aarch64_zip1v2di */
    case 4049:  /* aarch64_uzp2v4si */
    case 4048:  /* aarch64_uzp1v4si */
    case 4047:  /* aarch64_trn2v4si */
    case 4046:  /* aarch64_trn1v4si */
    case 4045:  /* aarch64_zip2v4si */
    case 4044:  /* aarch64_zip1v4si */
    case 4043:  /* aarch64_uzp2v2si */
    case 4042:  /* aarch64_uzp1v2si */
    case 4041:  /* aarch64_trn2v2si */
    case 4040:  /* aarch64_trn1v2si */
    case 4039:  /* aarch64_zip2v2si */
    case 4038:  /* aarch64_zip1v2si */
    case 4037:  /* aarch64_uzp2v8hi */
    case 4036:  /* aarch64_uzp1v8hi */
    case 4035:  /* aarch64_trn2v8hi */
    case 4034:  /* aarch64_trn1v8hi */
    case 4033:  /* aarch64_zip2v8hi */
    case 4032:  /* aarch64_zip1v8hi */
    case 4031:  /* aarch64_uzp2v4hi */
    case 4030:  /* aarch64_uzp1v4hi */
    case 4029:  /* aarch64_trn2v4hi */
    case 4028:  /* aarch64_trn1v4hi */
    case 4027:  /* aarch64_zip2v4hi */
    case 4026:  /* aarch64_zip1v4hi */
    case 4025:  /* aarch64_uzp2v16qi */
    case 4024:  /* aarch64_uzp1v16qi */
    case 4023:  /* aarch64_trn2v16qi */
    case 4022:  /* aarch64_trn1v16qi */
    case 4021:  /* aarch64_zip2v16qi */
    case 4020:  /* aarch64_zip1v16qi */
    case 4019:  /* aarch64_uzp2v8qi */
    case 4018:  /* aarch64_uzp1v8qi */
    case 4017:  /* aarch64_trn2v8qi */
    case 4016:  /* aarch64_trn1v8qi */
    case 4015:  /* aarch64_zip2v8qi */
    case 4014:  /* aarch64_zip1v8qi */
    case 4013:  /* aarch64_combinev16qi */
    case 4010:  /* aarch64_qtbl4v16qi */
    case 4009:  /* aarch64_qtbl4v8qi */
    case 4006:  /* aarch64_qtbl3v16qi */
    case 4005:  /* aarch64_qtbl3v8qi */
    case 4002:  /* aarch64_qtbl2v16qi */
    case 4001:  /* aarch64_qtbl2v8qi */
    case 3998:  /* aarch64_qtbl1v16qi */
    case 3997:  /* aarch64_qtbl1v8qi */
    case 3759:  /* aarch64_rev_reglistv4x8bf */
    case 3758:  /* aarch64_rev_reglistv4x2df */
    case 3757:  /* aarch64_rev_reglistv4x4sf */
    case 3756:  /* aarch64_rev_reglistv4x8hf */
    case 3755:  /* aarch64_rev_reglistv4x2di */
    case 3754:  /* aarch64_rev_reglistv4x4si */
    case 3753:  /* aarch64_rev_reglistv4x8hi */
    case 3752:  /* aarch64_rev_reglistv4x16qi */
    case 3751:  /* aarch64_rev_reglistv3x8bf */
    case 3750:  /* aarch64_rev_reglistv3x2df */
    case 3749:  /* aarch64_rev_reglistv3x4sf */
    case 3748:  /* aarch64_rev_reglistv3x8hf */
    case 3747:  /* aarch64_rev_reglistv3x2di */
    case 3746:  /* aarch64_rev_reglistv3x4si */
    case 3745:  /* aarch64_rev_reglistv3x8hi */
    case 3744:  /* aarch64_rev_reglistv3x16qi */
    case 3743:  /* aarch64_rev_reglistv2x8bf */
    case 3742:  /* aarch64_rev_reglistv2x2df */
    case 3741:  /* aarch64_rev_reglistv2x4sf */
    case 3740:  /* aarch64_rev_reglistv2x8hf */
    case 3739:  /* aarch64_rev_reglistv2x2di */
    case 3738:  /* aarch64_rev_reglistv2x4si */
    case 3737:  /* aarch64_rev_reglistv2x8hi */
    case 3736:  /* aarch64_rev_reglistv2x16qi */
    case 3735:  /* aarch64_rev_reglistv4x4bf */
    case 3734:  /* aarch64_rev_reglistv4x1df */
    case 3733:  /* aarch64_rev_reglistv4x2sf */
    case 3732:  /* aarch64_rev_reglistv4x4hf */
    case 3731:  /* aarch64_rev_reglistv4x1di */
    case 3730:  /* aarch64_rev_reglistv4x2si */
    case 3729:  /* aarch64_rev_reglistv4x4hi */
    case 3728:  /* aarch64_rev_reglistv4x8qi */
    case 3727:  /* aarch64_rev_reglistv3x4bf */
    case 3726:  /* aarch64_rev_reglistv3x1df */
    case 3725:  /* aarch64_rev_reglistv3x2sf */
    case 3724:  /* aarch64_rev_reglistv3x4hf */
    case 3723:  /* aarch64_rev_reglistv3x1di */
    case 3722:  /* aarch64_rev_reglistv3x2si */
    case 3721:  /* aarch64_rev_reglistv3x4hi */
    case 3720:  /* aarch64_rev_reglistv3x8qi */
    case 3719:  /* aarch64_rev_reglistv2x4bf */
    case 3718:  /* aarch64_rev_reglistv2x1df */
    case 3717:  /* aarch64_rev_reglistv2x2sf */
    case 3716:  /* aarch64_rev_reglistv2x4hf */
    case 3715:  /* aarch64_rev_reglistv2x1di */
    case 3714:  /* aarch64_rev_reglistv2x2si */
    case 3713:  /* aarch64_rev_reglistv2x4hi */
    case 3712:  /* aarch64_rev_reglistv2x8qi */
    case 3711:  /* aarch64_vec_store_lanesv4x8bf_lanev8bf */
    case 3710:  /* aarch64_vec_store_lanesv4x2df_lanev2df */
    case 3709:  /* aarch64_vec_store_lanesv4x4sf_lanev4sf */
    case 3708:  /* aarch64_vec_store_lanesv4x8hf_lanev8hf */
    case 3707:  /* aarch64_vec_store_lanesv4x2di_lanev2di */
    case 3706:  /* aarch64_vec_store_lanesv4x4si_lanev4si */
    case 3705:  /* aarch64_vec_store_lanesv4x8hi_lanev8hi */
    case 3704:  /* aarch64_vec_store_lanesv4x16qi_lanev16qi */
    case 3703:  /* aarch64_vec_store_lanesv4x4bf_lanev4bf */
    case 3702:  /* aarch64_vec_store_lanesv4x1df_lanedf */
    case 3701:  /* aarch64_vec_store_lanesv4x2sf_lanev2sf */
    case 3700:  /* aarch64_vec_store_lanesv4x4hf_lanev4hf */
    case 3699:  /* aarch64_vec_store_lanesv4x1di_lanedi */
    case 3698:  /* aarch64_vec_store_lanesv4x2si_lanev2si */
    case 3697:  /* aarch64_vec_store_lanesv4x4hi_lanev4hi */
    case 3696:  /* aarch64_vec_store_lanesv4x8qi_lanev8qi */
    case 3647:  /* aarch64_vec_store_lanesv3x8bf_lanev8bf */
    case 3646:  /* aarch64_vec_store_lanesv3x2df_lanev2df */
    case 3645:  /* aarch64_vec_store_lanesv3x4sf_lanev4sf */
    case 3644:  /* aarch64_vec_store_lanesv3x8hf_lanev8hf */
    case 3643:  /* aarch64_vec_store_lanesv3x2di_lanev2di */
    case 3642:  /* aarch64_vec_store_lanesv3x4si_lanev4si */
    case 3641:  /* aarch64_vec_store_lanesv3x8hi_lanev8hi */
    case 3640:  /* aarch64_vec_store_lanesv3x16qi_lanev16qi */
    case 3639:  /* aarch64_vec_store_lanesv3x4bf_lanev4bf */
    case 3638:  /* aarch64_vec_store_lanesv3x1df_lanedf */
    case 3637:  /* aarch64_vec_store_lanesv3x2sf_lanev2sf */
    case 3636:  /* aarch64_vec_store_lanesv3x4hf_lanev4hf */
    case 3635:  /* aarch64_vec_store_lanesv3x1di_lanedi */
    case 3634:  /* aarch64_vec_store_lanesv3x2si_lanev2si */
    case 3633:  /* aarch64_vec_store_lanesv3x4hi_lanev4hi */
    case 3632:  /* aarch64_vec_store_lanesv3x8qi_lanev8qi */
    case 3583:  /* aarch64_vec_store_lanesv2x8bf_lanev8bf */
    case 3582:  /* aarch64_vec_store_lanesv2x2df_lanev2df */
    case 3581:  /* aarch64_vec_store_lanesv2x4sf_lanev4sf */
    case 3580:  /* aarch64_vec_store_lanesv2x8hf_lanev8hf */
    case 3579:  /* aarch64_vec_store_lanesv2x2di_lanev2di */
    case 3578:  /* aarch64_vec_store_lanesv2x4si_lanev4si */
    case 3577:  /* aarch64_vec_store_lanesv2x8hi_lanev8hi */
    case 3576:  /* aarch64_vec_store_lanesv2x16qi_lanev16qi */
    case 3575:  /* aarch64_vec_store_lanesv2x4bf_lanev4bf */
    case 3574:  /* aarch64_vec_store_lanesv2x1df_lanedf */
    case 3573:  /* aarch64_vec_store_lanesv2x2sf_lanev2sf */
    case 3572:  /* aarch64_vec_store_lanesv2x4hf_lanev4hf */
    case 3571:  /* aarch64_vec_store_lanesv2x1di_lanedi */
    case 3570:  /* aarch64_vec_store_lanesv2x2si_lanev2si */
    case 3569:  /* aarch64_vec_store_lanesv2x4hi_lanev4hi */
    case 3568:  /* aarch64_vec_store_lanesv2x8qi_lanev8qi */
    case 3513:  /* aarch64_addpv2di */
    case 3512:  /* aarch64_addpv4si */
    case 3511:  /* aarch64_addpv2si */
    case 3510:  /* aarch64_addpv8hi */
    case 3509:  /* aarch64_addpv4hi */
    case 3508:  /* aarch64_addpv16qi */
    case 3507:  /* aarch64_addpv8qi */
    case 3265:  /* aarch64_uqrshrn_ndi */
    case 3264:  /* aarch64_sqrshrn_ndi */
    case 3263:  /* aarch64_uqshrn_ndi */
    case 3262:  /* aarch64_sqshrn_ndi */
    case 3261:  /* aarch64_sqrshrun_ndi */
    case 3260:  /* aarch64_sqshrun_ndi */
    case 3259:  /* aarch64_uqrshrn_nsi */
    case 3258:  /* aarch64_sqrshrn_nsi */
    case 3257:  /* aarch64_uqshrn_nsi */
    case 3256:  /* aarch64_sqshrn_nsi */
    case 3255:  /* aarch64_sqrshrun_nsi */
    case 3254:  /* aarch64_sqshrun_nsi */
    case 3253:  /* aarch64_uqrshrn_nhi */
    case 3252:  /* aarch64_sqrshrn_nhi */
    case 3251:  /* aarch64_uqshrn_nhi */
    case 3250:  /* aarch64_sqshrn_nhi */
    case 3249:  /* aarch64_sqrshrun_nhi */
    case 3248:  /* aarch64_sqshrun_nhi */
    case 3247:  /* aarch64_uqshl_ndi */
    case 3246:  /* aarch64_sqshl_ndi */
    case 3245:  /* aarch64_sqshlu_ndi */
    case 3244:  /* aarch64_uqshl_nsi */
    case 3243:  /* aarch64_sqshl_nsi */
    case 3242:  /* aarch64_sqshlu_nsi */
    case 3241:  /* aarch64_uqshl_nhi */
    case 3240:  /* aarch64_sqshl_nhi */
    case 3239:  /* aarch64_sqshlu_nhi */
    case 3238:  /* aarch64_uqshl_nqi */
    case 3237:  /* aarch64_sqshl_nqi */
    case 3236:  /* aarch64_sqshlu_nqi */
    case 3235:  /* aarch64_uqshl_nv2di */
    case 3234:  /* aarch64_sqshl_nv2di */
    case 3233:  /* aarch64_sqshlu_nv2di */
    case 3232:  /* aarch64_uqshl_nv4si */
    case 3231:  /* aarch64_sqshl_nv4si */
    case 3230:  /* aarch64_sqshlu_nv4si */
    case 3229:  /* aarch64_uqshl_nv2si */
    case 3228:  /* aarch64_sqshl_nv2si */
    case 3227:  /* aarch64_sqshlu_nv2si */
    case 3226:  /* aarch64_uqshl_nv8hi */
    case 3225:  /* aarch64_sqshl_nv8hi */
    case 3224:  /* aarch64_sqshlu_nv8hi */
    case 3223:  /* aarch64_uqshl_nv4hi */
    case 3222:  /* aarch64_sqshl_nv4hi */
    case 3221:  /* aarch64_sqshlu_nv4hi */
    case 3220:  /* aarch64_uqshl_nv16qi */
    case 3219:  /* aarch64_sqshl_nv16qi */
    case 3218:  /* aarch64_sqshlu_nv16qi */
    case 3217:  /* aarch64_uqshl_nv8qi */
    case 3216:  /* aarch64_sqshl_nv8qi */
    case 3215:  /* aarch64_sqshlu_nv8qi */
    case 3150:  /* aarch64_urshr_ndi */
    case 3149:  /* aarch64_srshr_ndi */
    case 3148:  /* aarch64_urshr_nv2di */
    case 3147:  /* aarch64_srshr_nv2di */
    case 3146:  /* aarch64_urshr_nv4si */
    case 3145:  /* aarch64_srshr_nv4si */
    case 3144:  /* aarch64_urshr_nv2si */
    case 3143:  /* aarch64_srshr_nv2si */
    case 3142:  /* aarch64_urshr_nv8hi */
    case 3141:  /* aarch64_srshr_nv8hi */
    case 3140:  /* aarch64_urshr_nv4hi */
    case 3139:  /* aarch64_srshr_nv4hi */
    case 3138:  /* aarch64_urshr_nv16qi */
    case 3137:  /* aarch64_srshr_nv16qi */
    case 3136:  /* aarch64_urshr_nv8qi */
    case 3135:  /* aarch64_srshr_nv8qi */
    case 3134:  /* aarch64_ushll2_nv4si */
    case 3133:  /* aarch64_sshll2_nv4si */
    case 3132:  /* aarch64_ushll2_nv8hi */
    case 3131:  /* aarch64_sshll2_nv8hi */
    case 3130:  /* aarch64_ushll2_nv16qi */
    case 3129:  /* aarch64_sshll2_nv16qi */
    case 3128:  /* aarch64_ushll_nv2si */
    case 3127:  /* aarch64_sshll_nv2si */
    case 3126:  /* aarch64_ushll_nv4hi */
    case 3125:  /* aarch64_sshll_nv4hi */
    case 3124:  /* aarch64_ushll_nv8qi */
    case 3123:  /* aarch64_sshll_nv8qi */
    case 3110:  /* aarch64_uqrshldi */
    case 3109:  /* aarch64_sqrshldi */
    case 3108:  /* aarch64_uqshldi */
    case 3107:  /* aarch64_sqshldi */
    case 3106:  /* aarch64_uqrshlsi */
    case 3105:  /* aarch64_sqrshlsi */
    case 3104:  /* aarch64_uqshlsi */
    case 3103:  /* aarch64_sqshlsi */
    case 3102:  /* aarch64_uqrshlhi */
    case 3101:  /* aarch64_sqrshlhi */
    case 3100:  /* aarch64_uqshlhi */
    case 3099:  /* aarch64_sqshlhi */
    case 3098:  /* aarch64_uqrshlqi */
    case 3097:  /* aarch64_sqrshlqi */
    case 3096:  /* aarch64_uqshlqi */
    case 3095:  /* aarch64_sqshlqi */
    case 3094:  /* aarch64_uqrshlv2di */
    case 3093:  /* aarch64_sqrshlv2di */
    case 3092:  /* aarch64_uqshlv2di */
    case 3091:  /* aarch64_sqshlv2di */
    case 3090:  /* aarch64_uqrshlv4si */
    case 3089:  /* aarch64_sqrshlv4si */
    case 3088:  /* aarch64_uqshlv4si */
    case 3087:  /* aarch64_sqshlv4si */
    case 3086:  /* aarch64_uqrshlv2si */
    case 3085:  /* aarch64_sqrshlv2si */
    case 3084:  /* aarch64_uqshlv2si */
    case 3083:  /* aarch64_sqshlv2si */
    case 3082:  /* aarch64_uqrshlv8hi */
    case 3081:  /* aarch64_sqrshlv8hi */
    case 3080:  /* aarch64_uqshlv8hi */
    case 3079:  /* aarch64_sqshlv8hi */
    case 3078:  /* aarch64_uqrshlv4hi */
    case 3077:  /* aarch64_sqrshlv4hi */
    case 3076:  /* aarch64_uqshlv4hi */
    case 3075:  /* aarch64_sqshlv4hi */
    case 3074:  /* aarch64_uqrshlv16qi */
    case 3073:  /* aarch64_sqrshlv16qi */
    case 3072:  /* aarch64_uqshlv16qi */
    case 3071:  /* aarch64_sqshlv16qi */
    case 3070:  /* aarch64_uqrshlv8qi */
    case 3069:  /* aarch64_sqrshlv8qi */
    case 3068:  /* aarch64_uqshlv8qi */
    case 3067:  /* aarch64_sqshlv8qi */
    case 3066:  /* aarch64_urshldi */
    case 3065:  /* aarch64_srshldi */
    case 3064:  /* aarch64_ushldi */
    case 3063:  /* aarch64_sshldi */
    case 3062:  /* aarch64_urshlv2di */
    case 3061:  /* aarch64_srshlv2di */
    case 3060:  /* aarch64_ushlv2di */
    case 3059:  /* aarch64_sshlv2di */
    case 3058:  /* aarch64_urshlv4si */
    case 3057:  /* aarch64_srshlv4si */
    case 3056:  /* aarch64_ushlv4si */
    case 3055:  /* aarch64_sshlv4si */
    case 3054:  /* aarch64_urshlv2si */
    case 3053:  /* aarch64_srshlv2si */
    case 3052:  /* aarch64_ushlv2si */
    case 3051:  /* aarch64_sshlv2si */
    case 3050:  /* aarch64_urshlv8hi */
    case 3049:  /* aarch64_srshlv8hi */
    case 3048:  /* aarch64_ushlv8hi */
    case 3047:  /* aarch64_sshlv8hi */
    case 3046:  /* aarch64_urshlv4hi */
    case 3045:  /* aarch64_srshlv4hi */
    case 3044:  /* aarch64_ushlv4hi */
    case 3043:  /* aarch64_sshlv4hi */
    case 3042:  /* aarch64_urshlv16qi */
    case 3041:  /* aarch64_srshlv16qi */
    case 3040:  /* aarch64_ushlv16qi */
    case 3039:  /* aarch64_sshlv16qi */
    case 3038:  /* aarch64_urshlv8qi */
    case 3037:  /* aarch64_srshlv8qi */
    case 3036:  /* aarch64_ushlv8qi */
    case 3035:  /* aarch64_sshlv8qi */
    case 2900:  /* aarch64_sqrdmulhsi */
    case 2899:  /* aarch64_sqdmulhsi */
    case 2898:  /* aarch64_sqrdmulhhi */
    case 2897:  /* aarch64_sqdmulhhi */
    case 2896:  /* aarch64_sqrdmulhv4si */
    case 2895:  /* aarch64_sqdmulhv4si */
    case 2894:  /* aarch64_sqrdmulhv2si */
    case 2893:  /* aarch64_sqdmulhv2si */
    case 2892:  /* aarch64_sqrdmulhv8hi */
    case 2891:  /* aarch64_sqdmulhv8hi */
    case 2890:  /* aarch64_sqrdmulhv4hi */
    case 2889:  /* aarch64_sqdmulhv4hi */
    case 2821:  /* aarch64_usqadddi */
    case 2820:  /* aarch64_suqadddi */
    case 2819:  /* aarch64_usqaddsi */
    case 2818:  /* aarch64_suqaddsi */
    case 2817:  /* aarch64_usqaddhi */
    case 2816:  /* aarch64_suqaddhi */
    case 2815:  /* aarch64_usqaddqi */
    case 2814:  /* aarch64_suqaddqi */
    case 2813:  /* aarch64_usqaddv2di */
    case 2812:  /* aarch64_suqaddv2di */
    case 2811:  /* aarch64_usqaddv4si */
    case 2810:  /* aarch64_suqaddv4si */
    case 2809:  /* aarch64_usqaddv2si */
    case 2808:  /* aarch64_suqaddv2si */
    case 2807:  /* aarch64_usqaddv8hi */
    case 2806:  /* aarch64_suqaddv8hi */
    case 2805:  /* aarch64_usqaddv4hi */
    case 2804:  /* aarch64_suqaddv4hi */
    case 2803:  /* aarch64_usqaddv16qi */
    case 2802:  /* aarch64_suqaddv16qi */
    case 2801:  /* aarch64_usqaddv8qi */
    case 2800:  /* aarch64_suqaddv8qi */
    case 2742:  /* aarch64_fmulxdf */
    case 2741:  /* aarch64_fmulxsf */
    case 2740:  /* aarch64_fmulxhf */
    case 2739:  /* aarch64_fmulxv2df */
    case 2738:  /* aarch64_fmulxv4sf */
    case 2737:  /* aarch64_fmulxv2sf */
    case 2736:  /* aarch64_fmulxv8hf */
    case 2735:  /* aarch64_fmulxv4hf */
    case 2733:  /* aarch64_pmullv8qi */
    case 2732:  /* aarch64_pmulv16qi */
    case 2731:  /* aarch64_pmulv8qi */
    case 2682:  /* aarch64_uhsubv4si */
    case 2681:  /* aarch64_shsubv4si */
    case 2680:  /* aarch64_urhaddv4si */
    case 2679:  /* aarch64_srhaddv4si */
    case 2678:  /* aarch64_uhaddv4si */
    case 2677:  /* aarch64_shaddv4si */
    case 2676:  /* aarch64_uhsubv2si */
    case 2675:  /* aarch64_shsubv2si */
    case 2674:  /* aarch64_urhaddv2si */
    case 2673:  /* aarch64_srhaddv2si */
    case 2672:  /* aarch64_uhaddv2si */
    case 2671:  /* aarch64_shaddv2si */
    case 2670:  /* aarch64_uhsubv8hi */
    case 2669:  /* aarch64_shsubv8hi */
    case 2668:  /* aarch64_urhaddv8hi */
    case 2667:  /* aarch64_srhaddv8hi */
    case 2666:  /* aarch64_uhaddv8hi */
    case 2665:  /* aarch64_shaddv8hi */
    case 2664:  /* aarch64_uhsubv4hi */
    case 2663:  /* aarch64_shsubv4hi */
    case 2662:  /* aarch64_urhaddv4hi */
    case 2661:  /* aarch64_srhaddv4hi */
    case 2660:  /* aarch64_uhaddv4hi */
    case 2659:  /* aarch64_shaddv4hi */
    case 2658:  /* aarch64_uhsubv16qi */
    case 2657:  /* aarch64_shsubv16qi */
    case 2656:  /* aarch64_urhaddv16qi */
    case 2655:  /* aarch64_srhaddv16qi */
    case 2654:  /* aarch64_uhaddv16qi */
    case 2653:  /* aarch64_shaddv16qi */
    case 2652:  /* aarch64_uhsubv8qi */
    case 2651:  /* aarch64_shsubv8qi */
    case 2650:  /* aarch64_urhaddv8qi */
    case 2649:  /* aarch64_srhaddv8qi */
    case 2648:  /* aarch64_uhaddv8qi */
    case 2647:  /* aarch64_shaddv8qi */
    case 2369:  /* aarch64_faddpv2df */
    case 2368:  /* aarch64_faddpv4sf */
    case 2367:  /* aarch64_faddpv2sf */
    case 2366:  /* aarch64_faddpv8hf */
    case 2365:  /* aarch64_faddpv4hf */
    case 2364:  /* fminv2df3 */
    case 2363:  /* fmaxv2df3 */
    case 2362:  /* fmin_nanv2df3 */
    case 2361:  /* fmax_nanv2df3 */
    case 2360:  /* fminv4sf3 */
    case 2359:  /* fmaxv4sf3 */
    case 2358:  /* fmin_nanv4sf3 */
    case 2357:  /* fmax_nanv4sf3 */
    case 2356:  /* fminv2sf3 */
    case 2355:  /* fmaxv2sf3 */
    case 2354:  /* fmin_nanv2sf3 */
    case 2353:  /* fmax_nanv2sf3 */
    case 2352:  /* fminv8hf3 */
    case 2351:  /* fmaxv8hf3 */
    case 2350:  /* fmin_nanv8hf3 */
    case 2349:  /* fmax_nanv8hf3 */
    case 2348:  /* fminv4hf3 */
    case 2347:  /* fmaxv4hf3 */
    case 2346:  /* fmin_nanv4hf3 */
    case 2345:  /* fmax_nanv4hf3 */
    case 2320:  /* ucvtfv2di3 */
    case 2319:  /* scvtfv2di3 */
    case 2318:  /* ucvtfv4si3 */
    case 2317:  /* scvtfv4si3 */
    case 2316:  /* ucvtfv2si3 */
    case 2315:  /* scvtfv2si3 */
    case 2314:  /* ucvtfv8hi3 */
    case 2313:  /* scvtfv8hi3 */
    case 2312:  /* ucvtfv4hi3 */
    case 2311:  /* scvtfv4hi3 */
    case 2310:  /* fcvtzuv2df3 */
    case 2309:  /* fcvtzsv2df3 */
    case 2308:  /* fcvtzuv4sf3 */
    case 2307:  /* fcvtzsv4sf3 */
    case 2306:  /* fcvtzuv2sf3 */
    case 2305:  /* fcvtzsv2sf3 */
    case 2304:  /* fcvtzuv8hf3 */
    case 2303:  /* fcvtzsv8hf3 */
    case 2302:  /* fcvtzuv4hf3 */
    case 2301:  /* fcvtzsv4hf3 */
    case 1906:  /* aarch64_sminpv2df */
    case 1905:  /* aarch64_smaxpv2df */
    case 1904:  /* aarch64_smin_nanpv2df */
    case 1903:  /* aarch64_smax_nanpv2df */
    case 1902:  /* aarch64_sminpv4sf */
    case 1901:  /* aarch64_smaxpv4sf */
    case 1900:  /* aarch64_smin_nanpv4sf */
    case 1899:  /* aarch64_smax_nanpv4sf */
    case 1898:  /* aarch64_sminpv2sf */
    case 1897:  /* aarch64_smaxpv2sf */
    case 1896:  /* aarch64_smin_nanpv2sf */
    case 1895:  /* aarch64_smax_nanpv2sf */
    case 1894:  /* aarch64_sminpv8hf */
    case 1893:  /* aarch64_smaxpv8hf */
    case 1892:  /* aarch64_smin_nanpv8hf */
    case 1891:  /* aarch64_smax_nanpv8hf */
    case 1890:  /* aarch64_sminpv4hf */
    case 1889:  /* aarch64_smaxpv4hf */
    case 1888:  /* aarch64_smin_nanpv4hf */
    case 1887:  /* aarch64_smax_nanpv4hf */
    case 1886:  /* aarch64_sminpv4si */
    case 1885:  /* aarch64_smaxpv4si */
    case 1884:  /* aarch64_uminpv4si */
    case 1883:  /* aarch64_umaxpv4si */
    case 1882:  /* aarch64_sminpv2si */
    case 1881:  /* aarch64_smaxpv2si */
    case 1880:  /* aarch64_uminpv2si */
    case 1879:  /* aarch64_umaxpv2si */
    case 1878:  /* aarch64_sminpv8hi */
    case 1877:  /* aarch64_smaxpv8hi */
    case 1876:  /* aarch64_uminpv8hi */
    case 1875:  /* aarch64_umaxpv8hi */
    case 1874:  /* aarch64_sminpv4hi */
    case 1873:  /* aarch64_smaxpv4hi */
    case 1872:  /* aarch64_uminpv4hi */
    case 1871:  /* aarch64_umaxpv4hi */
    case 1870:  /* aarch64_sminpv16qi */
    case 1869:  /* aarch64_smaxpv16qi */
    case 1868:  /* aarch64_uminpv16qi */
    case 1867:  /* aarch64_umaxpv16qi */
    case 1866:  /* aarch64_sminpv8qi */
    case 1865:  /* aarch64_smaxpv8qi */
    case 1864:  /* aarch64_uminpv8qi */
    case 1863:  /* aarch64_umaxpv8qi */
    case 1802:  /* vec_shr_v4bf */
    case 1801:  /* vec_shr_v2sf */
    case 1800:  /* vec_shr_v2si */
    case 1799:  /* vec_shr_v4hf */
    case 1798:  /* vec_shr_v4hi */
    case 1797:  /* vec_shr_v8qi */
    case 1796:  /* aarch64_simd_reg_shlv2di_signed */
    case 1795:  /* aarch64_simd_reg_shlv4si_signed */
    case 1794:  /* aarch64_simd_reg_shlv2si_signed */
    case 1793:  /* aarch64_simd_reg_shlv8hi_signed */
    case 1792:  /* aarch64_simd_reg_shlv4hi_signed */
    case 1791:  /* aarch64_simd_reg_shlv16qi_signed */
    case 1790:  /* aarch64_simd_reg_shlv8qi_signed */
    case 1789:  /* aarch64_simd_reg_shlv2di_unsigned */
    case 1788:  /* aarch64_simd_reg_shlv4si_unsigned */
    case 1787:  /* aarch64_simd_reg_shlv2si_unsigned */
    case 1786:  /* aarch64_simd_reg_shlv8hi_unsigned */
    case 1785:  /* aarch64_simd_reg_shlv4hi_unsigned */
    case 1784:  /* aarch64_simd_reg_shlv16qi_unsigned */
    case 1783:  /* aarch64_simd_reg_shlv8qi_unsigned */
    case 1630:  /* aarch64_uabdl2v4si */
    case 1629:  /* aarch64_sabdl2v4si */
    case 1628:  /* aarch64_uabdl2v8hi */
    case 1627:  /* aarch64_sabdl2v8hi */
    case 1626:  /* aarch64_uabdl2v16qi */
    case 1625:  /* aarch64_sabdl2v16qi */
    case 1624:  /* aarch64_uabdlv2si */
    case 1623:  /* aarch64_sabdlv2si */
    case 1622:  /* aarch64_uabdlv4hi */
    case 1621:  /* aarch64_sabdlv4hi */
    case 1620:  /* aarch64_uabdlv8qi */
    case 1619:  /* aarch64_sabdlv8qi */
    case 1581:  /* aarch64_rsqrtsdf */
    case 1580:  /* aarch64_rsqrtssf */
    case 1579:  /* aarch64_rsqrtshf */
    case 1578:  /* aarch64_rsqrtsv2df */
    case 1577:  /* aarch64_rsqrtsv4sf */
    case 1576:  /* aarch64_rsqrtsv2sf */
    case 1575:  /* aarch64_rsqrtsv8hf */
    case 1574:  /* aarch64_rsqrtsv4hf */
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
    case 1094:  /* *despeculate_copyti_insn */
    case 1093:  /* *despeculate_copydi_insn */
    case 1092:  /* *despeculate_copysi_insn */
    case 1091:  /* *despeculate_copyhi_insn */
    case 1090:  /* *despeculate_copyqi_insn */
    case 1066:  /* probe_stack_range */
    case 1045:  /* tlsle24_di */
    case 1044:  /* tlsle24_si */
    case 1043:  /* tlsle12_di */
    case 1042:  /* tlsle12_si */
    case 1040:  /* tlsie_tiny_di */
    case 1039:  /* tlsie_tiny_si */
    case 1013:  /* fmindf3 */
    case 1012:  /* fmaxdf3 */
    case 1011:  /* fmin_nandf3 */
    case 1010:  /* fmax_nandf3 */
    case 1009:  /* fminsf3 */
    case 1008:  /* fmaxsf3 */
    case 1007:  /* fmin_nansf3 */
    case 1006:  /* fmax_nansf3 */
    case 1005:  /* fminhf3 */
    case 1004:  /* fmaxhf3 */
    case 1003:  /* fmin_nanhf3 */
    case 1002:  /* fmax_nanhf3 */
    case 972:  /* ucvtfhi3 */
    case 971:  /* scvtfhi3 */
    case 970:  /* fcvtzuhf3 */
    case 969:  /* fcvtzshf3 */
    case 968:  /* ucvtfdihf3 */
    case 967:  /* scvtfdihf3 */
    case 966:  /* ucvtfsihf3 */
    case 965:  /* scvtfsihf3 */
    case 964:  /* fcvtzuhfdi3 */
    case 963:  /* fcvtzshfdi3 */
    case 962:  /* fcvtzuhfsi3 */
    case 961:  /* fcvtzshfsi3 */
    case 960:  /* ucvtfdi3 */
    case 959:  /* scvtfdi3 */
    case 958:  /* ucvtfsi3 */
    case 957:  /* scvtfsi3 */
    case 956:  /* fcvtzudf3 */
    case 955:  /* fcvtzsdf3 */
    case 954:  /* fcvtzusf3 */
    case 953:  /* fcvtzssf3 */
    case 713:  /* *aarch64_sshl_2s */
    case 712:  /* *aarch64_sisd_sshl */
    case 711:  /* *aarch64_ushl_2s */
    case 710:  /* *aarch64_sisd_ushl */
    case 471:  /* aarch64_crc32cx */
    case 470:  /* aarch64_crc32cw */
    case 469:  /* aarch64_crc32ch */
    case 468:  /* aarch64_crc32cb */
    case 467:  /* aarch64_crc32x */
    case 466:  /* aarch64_crc32w */
    case 465:  /* aarch64_crc32h */
    case 464:  /* aarch64_crc32b */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 461:  /* *cmovdi_insn_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 460:  /* *cmovsi_insn_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 463:  /* *cmovdf_insn */
    case 462:  /* *cmovsf_insn */
    case 459:  /* *cmovdi_insn */
    case 458:  /* *cmovsi_insn */
    case 457:  /* *cmovhi_insn */
    case 456:  /* *cmovqi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 455:  /* *cstoresi_neg_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 454:  /* cstoredi_neg */
    case 453:  /* cstoresi_neg */
    case 452:  /* cstorehi_neg */
    case 451:  /* cstoreqi_neg */
    case 450:  /* *cstoresi_insn_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 449:  /* *compare_cstoredi_insn */
    case 448:  /* *compare_cstoredi_insn */
    case 447:  /* *compare_cstoresi_insn */
    case 446:  /* *compare_cstoresi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 445:  /* aarch64_cstoredi */
    case 444:  /* aarch64_cstoresi */
    case 443:  /* aarch64_cstorehi */
    case 442:  /* aarch64_cstoreqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 441:  /* *cmp_swp_zero_extendsi_shft_di */
    case 440:  /* *cmp_swp_extendsi_shft_di */
    case 439:  /* *cmp_swp_zero_extendsi_shft_si */
    case 438:  /* *cmp_swp_extendsi_shft_si */
    case 437:  /* *cmp_swp_zero_extendhi_shft_di */
    case 436:  /* *cmp_swp_extendhi_shft_di */
    case 435:  /* *cmp_swp_zero_extendhi_shft_si */
    case 434:  /* *cmp_swp_extendhi_shft_si */
    case 433:  /* *cmp_swp_zero_extendqi_shft_di */
    case 432:  /* *cmp_swp_extendqi_shft_di */
    case 431:  /* *cmp_swp_zero_extendqi_shft_si */
    case 430:  /* *cmp_swp_extendqi_shft_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 417:  /* *cmp_swp_lsr_regdi */
    case 416:  /* *cmp_swp_asr_regdi */
    case 415:  /* *cmp_swp_lsl_regdi */
    case 414:  /* *cmp_swp_lsr_regsi */
    case 413:  /* *cmp_swp_asr_regsi */
    case 412:  /* *cmp_swp_lsl_regsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 411:  /* fcmpedf */
    case 410:  /* fcmpesf */
    case 409:  /* fcmpdf */
    case 408:  /* fcmpsf */
    case 407:  /* cmpdi */
    case 406:  /* cmpsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 399:  /* umuldi3_highpart */
    case 398:  /* smuldi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 397:  /* *umulsidi_neg */
    case 396:  /* *mulsidi_neg */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 395:  /* umsubsidi4 */
    case 394:  /* msubsidi4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 393:  /* umaddsidi4 */
    case 392:  /* maddsidi4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2610:  /* aarch64_usublv2si */
    case 2609:  /* aarch64_uaddlv2si */
    case 2608:  /* aarch64_ssublv2si */
    case 2607:  /* aarch64_saddlv2si */
    case 2606:  /* aarch64_usublv4hi */
    case 2605:  /* aarch64_uaddlv4hi */
    case 2604:  /* aarch64_ssublv4hi */
    case 2603:  /* aarch64_saddlv4hi */
    case 2602:  /* aarch64_usublv8qi */
    case 2601:  /* aarch64_uaddlv8qi */
    case 2600:  /* aarch64_ssublv8qi */
    case 2599:  /* aarch64_saddlv8qi */
    case 2051:  /* aarch64_intrinsic_vec_umult_lo_v2si */
    case 2050:  /* aarch64_intrinsic_vec_smult_lo_v2si */
    case 2049:  /* aarch64_intrinsic_vec_umult_lo_v4hi */
    case 2048:  /* aarch64_intrinsic_vec_smult_lo_v4hi */
    case 2047:  /* aarch64_intrinsic_vec_umult_lo_v8qi */
    case 2046:  /* aarch64_intrinsic_vec_smult_lo_v8qi */
    case 1921:  /* *aarch64_narrow_truncv2di */
    case 1920:  /* *aarch64_narrow_truncv4si */
    case 1919:  /* *aarch64_narrow_truncv8hi */
    case 1129:  /* subp */
    case 391:  /* umulsidi3 */
    case 390:  /* mulsidi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 377:  /* *neg_asr_si2_extr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 3434:  /* *aarch64_cmtstdi */
    case 586:  /* *xor_one_cmplsidi3_ze */
    case 376:  /* *neg_lsr_si2_uxtw */
    case 375:  /* *neg_asr_si2_uxtw */
    case 374:  /* *neg_lsl_si2_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 367:  /* *neg_lsrdi3_compare0 */
    case 366:  /* *neg_asrdi3_compare0 */
    case 365:  /* *neg_lsldi3_compare0 */
    case 364:  /* *neg_lsrsi3_compare0 */
    case 363:  /* *neg_asrsi3_compare0 */
    case 362:  /* *neg_lslsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 361:  /* *negsi2_compare0_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 663:  /* *andsdi_compare0 */
    case 662:  /* *andsdi_compare0 */
    case 661:  /* *andssi_compare0 */
    case 660:  /* *andssi_compare0 */
    case 360:  /* negdi2_compare0 */
    case 359:  /* negsi2_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 358:  /* *ngcsi_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 9964:  /* aarch64_sve2_rax1 */
    case 5762:  /* *one_cmplvnx2bi3 */
    case 5761:  /* *one_cmplvnx4bi3 */
    case 5760:  /* *one_cmplvnx8bi3 */
    case 5759:  /* *one_cmplvnx16bi3 */
    case 4255:  /* aarch64_rax1qv2di */
    case 2851:  /* aarch64_uqxtn2v2di_be */
    case 2850:  /* aarch64_sqxtn2v2di_be */
    case 2849:  /* aarch64_uqxtn2v4si_be */
    case 2848:  /* aarch64_sqxtn2v4si_be */
    case 2847:  /* aarch64_uqxtn2v8hi_be */
    case 2846:  /* aarch64_sqxtn2v8hi_be */
    case 2634:  /* aarch64_uaddwv2si */
    case 2633:  /* aarch64_saddwv2si */
    case 2632:  /* aarch64_uaddwv4hi */
    case 2631:  /* aarch64_saddwv4hi */
    case 2630:  /* aarch64_uaddwv8qi */
    case 2629:  /* aarch64_saddwv8qi */
    case 2334:  /* aarch64_float_truncate_hi_v8hf_be */
    case 2333:  /* aarch64_float_truncate_hi_v4sf_be */
    case 1918:  /* aarch64_xtn2v2di_insn_be */
    case 1917:  /* aarch64_xtn2v4si_insn_be */
    case 1916:  /* aarch64_xtn2v8hi_insn_be */
    case 1565:  /* mul_nv2df3 */
    case 1564:  /* mul_nv4sf3 */
    case 1563:  /* mul_nv2sf3 */
    case 1562:  /* mul_nv8hf3 */
    case 1561:  /* mul_nv4hf3 */
    case 1560:  /* mul_nv4si3 */
    case 1559:  /* mul_nv2si3 */
    case 1558:  /* mul_nv8hi3 */
    case 1557:  /* mul_nv4hi3 */
    case 357:  /* *ngcdi */
    case 356:  /* *ngcsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1024:  /* aarch64_movtilow_tilow */
    case 932:  /* *fix_to_zero_extenddfdi2 */
    case 931:  /* *fix_to_zero_extendsfdi2 */
    case 811:  /* *bswapsi2_uxtw */
    case 571:  /* *one_cmpl_zero_extend */
    case 355:  /* *negsi2_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 352:  /* *sub_uxtsi_shift2_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 351:  /* *sub_uxtdi_shift2 */
    case 350:  /* *sub_uxtsi_shift2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 349:  /* *subdi3_carryinV */
    case 348:  /* *subsi3_carryinV */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 1);
      recog_data.dup_num[4] = 2;
      break;

    case 347:  /* *subdi3_carryinV_z2 */
    case 346:  /* *subsi3_carryinV_z2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 345:  /* *usubdi3_carryinC */
    case 344:  /* *usubsi3_carryinC */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 343:  /* *usubdi3_carryinC_z2 */
    case 342:  /* *usubsi3_carryinC_z2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 341:  /* *usubdi3_carryinC_z1 */
    case 340:  /* *usubsi3_carryinC_z1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 339:  /* *subsi3_carryin_alt_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 338:  /* *subdi3_carryin_alt */
    case 337:  /* *subsi3_carryin_alt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 330:  /* *sub_zero_extendhi_shft_si_uxtw */
    case 329:  /* *sub_extendhi_shft_si_uxtw */
    case 328:  /* *sub_zero_extendqi_shft_si_uxtw */
    case 327:  /* *sub_extendqi_shft_si_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1));
      break;

    case 326:  /* *sub_zero_extendsi_shft_di */
    case 325:  /* *sub_extendsi_shft_di */
    case 324:  /* *sub_zero_extendsi_shft_si */
    case 323:  /* *sub_extendsi_shft_si */
    case 322:  /* *sub_zero_extendhi_shft_di */
    case 321:  /* *sub_extendhi_shft_di */
    case 320:  /* *sub_zero_extendhi_shft_si */
    case 319:  /* *sub_extendhi_shft_si */
    case 318:  /* *sub_zero_extendqi_shft_di */
    case 317:  /* *sub_extendqi_shft_di */
    case 316:  /* *sub_zero_extendqi_shft_si */
    case 315:  /* *sub_extendqi_shft_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 314:  /* *sub_zero_extendhi_si_uxtw */
    case 313:  /* *sub_extendhi_si_uxtw */
    case 312:  /* *sub_zero_extendqi_si_uxtw */
    case 311:  /* *sub_extendqi_si_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 2845:  /* aarch64_uqxtn2v2di_le */
    case 2844:  /* aarch64_sqxtn2v2di_le */
    case 2843:  /* aarch64_uqxtn2v4si_le */
    case 2842:  /* aarch64_sqxtn2v4si_le */
    case 2841:  /* aarch64_uqxtn2v8hi_le */
    case 2840:  /* aarch64_sqxtn2v8hi_le */
    case 2616:  /* aarch64_usubwv2si */
    case 2615:  /* aarch64_ssubwv2si */
    case 2614:  /* aarch64_usubwv4hi */
    case 2613:  /* aarch64_ssubwv4hi */
    case 2612:  /* aarch64_usubwv8qi */
    case 2611:  /* aarch64_ssubwv8qi */
    case 2332:  /* aarch64_float_truncate_hi_v8hf_le */
    case 2331:  /* aarch64_float_truncate_hi_v4sf_le */
    case 1915:  /* aarch64_xtn2v2di_insn_le */
    case 1914:  /* aarch64_xtn2v4si_insn_le */
    case 1913:  /* aarch64_xtn2v8hi_insn_le */
    case 310:  /* *sub_zero_extendsi_di */
    case 309:  /* *sub_extendsi_di */
    case 308:  /* *sub_zero_extendsi_si */
    case 307:  /* *sub_extendsi_si */
    case 306:  /* *sub_zero_extendhi_di */
    case 305:  /* *sub_extendhi_di */
    case 304:  /* *sub_zero_extendhi_si */
    case 303:  /* *sub_extendhi_si */
    case 302:  /* *sub_zero_extendqi_di */
    case 301:  /* *sub_extendqi_di */
    case 300:  /* *sub_zero_extendqi_si */
    case 299:  /* *sub_extendqi_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 386:  /* *msubsi_uxtw */
    case 298:  /* *sub_lsr_si_uxtw */
    case 297:  /* *sub_asr_si_uxtw */
    case 296:  /* *sub_lsl_si_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 385:  /* *msubdi */
    case 384:  /* *msubsi */
    case 295:  /* *sub_lsr_di */
    case 294:  /* *sub_asr_di */
    case 293:  /* *sub_lsl_di */
    case 292:  /* *sub_lsr_si */
    case 291:  /* *sub_asr_si */
    case 290:  /* *sub_lsl_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 289:  /* subdi3_compare1 */
    case 288:  /* subsi3_compare1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 287:  /* subdi3_compare1_imm */
    case 286:  /* subsi3_compare1_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 282:  /* negvdi_carryinV */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 281:  /* negdi_carryout */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 280:  /* *cmpvdi_insn */
    case 279:  /* *cmpvsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 278:  /* negvdi_cmp_only */
    case 277:  /* negvsi_cmp_only */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 276:  /* negvdi_insn */
    case 275:  /* negvsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 274:  /* subvdi_imm */
    case 273:  /* subvsi_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 272:  /* subvdi_insn */
    case 271:  /* subvsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[3] = 2;
      break;

    case 267:  /* *add_uxtsi_shift2_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 3425:  /* aarch64_cmtstv2di */
    case 3424:  /* aarch64_cmtstv4si */
    case 3423:  /* aarch64_cmtstv2si */
    case 3422:  /* aarch64_cmtstv8hi */
    case 3421:  /* aarch64_cmtstv4hi */
    case 3420:  /* aarch64_cmtstv16qi */
    case 3419:  /* aarch64_cmtstv8qi */
    case 266:  /* *add_uxtdi_shift2 */
    case 265:  /* *add_uxtsi_shift2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 264:  /* *adddi3_carryinV */
    case 263:  /* *addsi3_carryinV */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[4] = 2;
      break;

    case 262:  /* *adddi3_carryinV_zero */
    case 261:  /* *addsi3_carryinV_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 260:  /* *adddi3_carryinC */
    case 259:  /* *addsi3_carryinC */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 258:  /* *adddi3_carryinC_zero */
    case 257:  /* *addsi3_carryinC_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 256:  /* *addsi3_carryin_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 255:  /* *adddi3_carryin */
    case 254:  /* *addsi3_carryin */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 253:  /* *add_zero_extendhi_shft_si_uxtw */
    case 252:  /* *add_extendhi_shft_si_uxtw */
    case 251:  /* *add_zero_extendqi_shft_si_uxtw */
    case 250:  /* *add_extendqi_shft_si_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 249:  /* *add_zero_extendsi_shft_di */
    case 248:  /* *add_extendsi_shft_di */
    case 247:  /* *add_zero_extendsi_shft_si */
    case 246:  /* *add_extendsi_shft_si */
    case 245:  /* *add_zero_extendhi_shft_di */
    case 244:  /* *add_extendhi_shft_di */
    case 243:  /* *add_zero_extendhi_shft_si */
    case 242:  /* *add_extendhi_shft_si */
    case 241:  /* *add_zero_extendqi_shft_di */
    case 240:  /* *add_extendqi_shft_di */
    case 239:  /* *add_zero_extendqi_shft_si */
    case 238:  /* *add_extendqi_shft_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 585:  /* *ior_one_cmplsidi3_ze */
    case 584:  /* *and_one_cmplsidi3_ze */
    case 389:  /* *mulsi_neg_uxtw */
    case 237:  /* *add_zero_extendhi_si_uxtw */
    case 236:  /* *add_extendhi_si_uxtw */
    case 235:  /* *add_zero_extendqi_si_uxtw */
    case 234:  /* *add_extendqi_si_uxtw */
    case 233:  /* *add_zero_extendhi_si_uxtw */
    case 232:  /* *add_extendhi_si_uxtw */
    case 231:  /* *add_zero_extendqi_si_uxtw */
    case 230:  /* *add_extendqi_si_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 5167:  /* *vec_seriesvnx2di_plus */
    case 5166:  /* *vec_seriesvnx2si_plus */
    case 5165:  /* *vec_seriesvnx4si_plus */
    case 5164:  /* *vec_seriesvnx2hi_plus */
    case 5163:  /* *vec_seriesvnx4hi_plus */
    case 5162:  /* *vec_seriesvnx8hi_plus */
    case 5161:  /* *vec_seriesvnx2qi_plus */
    case 5160:  /* *vec_seriesvnx4qi_plus */
    case 5159:  /* *vec_seriesvnx8qi_plus */
    case 5158:  /* *vec_seriesvnx16qi_plus */
    case 2833:  /* aarch64_uqmovnv2di_insn_le */
    case 2832:  /* aarch64_sqmovnv2di_insn_le */
    case 2831:  /* aarch64_uqmovnv4si_insn_le */
    case 2830:  /* aarch64_sqmovnv4si_insn_le */
    case 2829:  /* aarch64_uqmovnv8hi_insn_le */
    case 2828:  /* aarch64_sqmovnv8hi_insn_le */
    case 1909:  /* aarch64_xtnv2di_insn_le */
    case 1908:  /* aarch64_xtnv4si_insn_le */
    case 1907:  /* aarch64_xtnv8hi_insn_le */
    case 1428:  /* bicv2di3 */
    case 1427:  /* bicv4si3 */
    case 1426:  /* bicv2si3 */
    case 1425:  /* bicv8hi3 */
    case 1424:  /* bicv4hi3 */
    case 1423:  /* bicv16qi3 */
    case 1422:  /* bicv8qi3 */
    case 1421:  /* ornv2di3 */
    case 1420:  /* ornv4si3 */
    case 1419:  /* ornv2si3 */
    case 1418:  /* ornv8hi3 */
    case 1417:  /* ornv4hi3 */
    case 1416:  /* ornv16qi3 */
    case 1415:  /* ornv8qi3 */
    case 983:  /* *fnmuldf3 */
    case 982:  /* *fnmulsf3 */
    case 940:  /* *aarch64_ucvtfsidf2_mult */
    case 939:  /* *aarch64_scvtfsidf2_mult */
    case 938:  /* *aarch64_ucvtfdisf2_mult */
    case 937:  /* *aarch64_scvtfdisf2_mult */
    case 936:  /* *aarch64_ucvtfdidf2_mult */
    case 935:  /* *aarch64_scvtfdidf2_mult */
    case 934:  /* *aarch64_ucvtfsisf2_mult */
    case 933:  /* *aarch64_scvtfsisf2_mult */
    case 793:  /* *zero_extendsi_shft_di */
    case 792:  /* *extendsi_shft_di */
    case 791:  /* *zero_extendsi_shft_si */
    case 790:  /* *extendsi_shft_si */
    case 789:  /* *zero_extendhi_shft_di */
    case 788:  /* *extendhi_shft_di */
    case 787:  /* *zero_extendhi_shft_si */
    case 786:  /* *extendhi_shft_si */
    case 785:  /* *zero_extendqi_shft_di */
    case 784:  /* *extendqi_shft_di */
    case 783:  /* *zero_extendqi_shft_si */
    case 782:  /* *extendqi_shft_si */
    case 583:  /* *ior_one_cmpldi3 */
    case 582:  /* *and_one_cmpldi3 */
    case 581:  /* *ior_one_cmplsi3 */
    case 580:  /* *and_one_cmplsi3 */
    case 388:  /* *muldi_neg */
    case 387:  /* *mulsi_neg */
    case 229:  /* *add_zero_extendsi_di */
    case 228:  /* *add_extendsi_di */
    case 227:  /* *add_zero_extendsi_si */
    case 226:  /* *add_extendsi_si */
    case 225:  /* *add_zero_extendhi_di */
    case 224:  /* *add_extendhi_di */
    case 223:  /* *add_zero_extendhi_si */
    case 222:  /* *add_extendhi_si */
    case 221:  /* *add_zero_extendqi_di */
    case 220:  /* *add_extendqi_di */
    case 219:  /* *add_zero_extendqi_si */
    case 218:  /* *add_extendqi_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 625:  /* *eor_one_cmpl_rotrdi3_alt */
    case 624:  /* *eor_one_cmpl_lshrdi3_alt */
    case 623:  /* *eor_one_cmpl_ashrdi3_alt */
    case 622:  /* *eor_one_cmpl_ashldi3_alt */
    case 621:  /* *eor_one_cmpl_rotrsi3_alt */
    case 620:  /* *eor_one_cmpl_lshrsi3_alt */
    case 619:  /* *eor_one_cmpl_ashrsi3_alt */
    case 618:  /* *eor_one_cmpl_ashlsi3_alt */
    case 568:  /* *xor_rolsi3_uxtw */
    case 567:  /* *ior_rolsi3_uxtw */
    case 566:  /* *and_rolsi3_uxtw */
    case 565:  /* *xor_rotrsi3_uxtw */
    case 564:  /* *ior_rotrsi3_uxtw */
    case 563:  /* *and_rotrsi3_uxtw */
    case 562:  /* *xor_lshrsi3_uxtw */
    case 561:  /* *ior_lshrsi3_uxtw */
    case 560:  /* *and_lshrsi3_uxtw */
    case 559:  /* *xor_ashrsi3_uxtw */
    case 558:  /* *ior_ashrsi3_uxtw */
    case 557:  /* *and_ashrsi3_uxtw */
    case 556:  /* *xor_ashlsi3_uxtw */
    case 555:  /* *ior_ashlsi3_uxtw */
    case 554:  /* *and_ashlsi3_uxtw */
    case 383:  /* *maddsi_uxtw */
    case 336:  /* *subsi3_carryin_uxtw */
    case 217:  /* *add_lsr_si_uxtw */
    case 216:  /* *add_asr_si_uxtw */
    case 215:  /* *add_lsl_si_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 429:  /* *cmp_swp_zero_extendsi_regdi */
    case 428:  /* *cmp_swp_extendsi_regdi */
    case 427:  /* *cmp_swp_zero_extendsi_regsi */
    case 426:  /* *cmp_swp_extendsi_regsi */
    case 425:  /* *cmp_swp_zero_extendhi_regdi */
    case 424:  /* *cmp_swp_extendhi_regdi */
    case 423:  /* *cmp_swp_zero_extendhi_regsi */
    case 422:  /* *cmp_swp_extendhi_regsi */
    case 421:  /* *cmp_swp_zero_extendqi_regdi */
    case 420:  /* *cmp_swp_extendqi_regdi */
    case 419:  /* *cmp_swp_zero_extendqi_regsi */
    case 418:  /* *cmp_swp_extendqi_regsi */
    case 208:  /* *compare_negdi */
    case 207:  /* *compare_negsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 665:  /* *anddi3nr_compare0 */
    case 664:  /* *andsi3nr_compare0 */
    case 206:  /* aarch64_subdi_compare0 */
    case 205:  /* aarch64_subsi_compare0 */
    case 204:  /* *adddi3nr_compare0 */
    case 203:  /* *addsi3nr_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 202:  /* *subs_zero_extendsi_shift_di */
    case 201:  /* *subs_extendsi_shift_di */
    case 200:  /* *subs_zero_extendsi_shift_si */
    case 199:  /* *subs_extendsi_shift_si */
    case 198:  /* *subs_zero_extendhi_shift_di */
    case 197:  /* *subs_extendhi_shift_di */
    case 196:  /* *subs_zero_extendhi_shift_si */
    case 195:  /* *subs_extendhi_shift_si */
    case 194:  /* *subs_zero_extendqi_shift_di */
    case 193:  /* *subs_extendqi_shift_di */
    case 192:  /* *subs_zero_extendqi_shift_si */
    case 191:  /* *subs_extendqi_shift_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[2] = 3;
      break;

    case 190:  /* *adds_zero_extendsi_shift_di */
    case 189:  /* *adds_extendsi_shift_di */
    case 188:  /* *adds_zero_extendsi_shift_si */
    case 187:  /* *adds_extendsi_shift_si */
    case 186:  /* *adds_zero_extendhi_shift_di */
    case 185:  /* *adds_extendhi_shift_di */
    case 184:  /* *adds_zero_extendhi_shift_si */
    case 183:  /* *adds_extendhi_shift_si */
    case 182:  /* *adds_zero_extendqi_shift_di */
    case 181:  /* *adds_extendqi_shift_di */
    case 180:  /* *adds_zero_extendqi_shift_si */
    case 179:  /* *adds_extendqi_shift_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 3;
      break;

    case 178:  /* *subs_zero_extendsi_di */
    case 177:  /* *subs_extendsi_di */
    case 176:  /* *subs_zero_extendsi_si */
    case 175:  /* *subs_extendsi_si */
    case 174:  /* *subs_zero_extendhi_di */
    case 173:  /* *subs_extendhi_di */
    case 172:  /* *subs_zero_extendhi_si */
    case 171:  /* *subs_extendhi_si */
    case 170:  /* *subs_zero_extendqi_di */
    case 169:  /* *subs_extendqi_di */
    case 168:  /* *subs_zero_extendqi_si */
    case 167:  /* *subs_extendqi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 590:  /* *and_one_cmpldi3_compare0 */
    case 589:  /* *and_one_cmplsi3_compare0 */
    case 166:  /* *adds_zero_extendsi_di */
    case 165:  /* *adds_extendsi_di */
    case 164:  /* *adds_zero_extendsi_si */
    case 163:  /* *adds_extendsi_si */
    case 162:  /* *adds_zero_extendhi_di */
    case 161:  /* *adds_extendhi_di */
    case 160:  /* *adds_zero_extendhi_si */
    case 159:  /* *adds_extendhi_si */
    case 158:  /* *adds_zero_extendqi_di */
    case 157:  /* *adds_extendqi_di */
    case 156:  /* *adds_zero_extendqi_si */
    case 155:  /* *adds_extendqi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 154:  /* *subs_shift_imm_di */
    case 153:  /* *subs_shift_imm_di */
    case 152:  /* *subs_shift_imm_di */
    case 151:  /* *subs_shift_imm_si */
    case 150:  /* *subs_shift_imm_si */
    case 149:  /* *subs_shift_imm_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[2] = 3;
      break;

    case 519:  /* *and_rotrdi3_compare0 */
    case 518:  /* *and_lshrdi3_compare0 */
    case 517:  /* *and_ashrdi3_compare0 */
    case 516:  /* *and_ashldi3_compare0 */
    case 515:  /* *and_rotrsi3_compare0 */
    case 514:  /* *and_lshrsi3_compare0 */
    case 513:  /* *and_ashrsi3_compare0 */
    case 512:  /* *and_ashlsi3_compare0 */
    case 148:  /* *adds_shift_imm_di */
    case 147:  /* *adds_shift_imm_di */
    case 146:  /* *adds_shift_imm_di */
    case 145:  /* *adds_shift_imm_si */
    case 144:  /* *adds_shift_imm_si */
    case 143:  /* *adds_shift_imm_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 3;
      break;

    case 142:  /* adddi3_compareV */
    case 141:  /* addsi3_compareV */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 140:  /* adddi3_compareV_imm */
    case 139:  /* addsi3_compareV_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 138:  /* *adddi3_compareV_cconly */
    case 137:  /* *addsi3_compareV_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 136:  /* *adddi3_compareV_cconly_imm */
    case 135:  /* *addsi3_compareV_cconly_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 134:  /* adddi3_compareC */
    case 133:  /* addsi3_compareC */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 132:  /* *adddi3_compareC_cconly */
    case 131:  /* *addsi3_compareC_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 511:  /* *andsi3_compare0_uxtw */
    case 285:  /* *subsi3_compare0_uxtw */
    case 130:  /* *addsi3_compare0_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 510:  /* *anddi3_compare0 */
    case 509:  /* *andsi3_compare0 */
    case 284:  /* *subdi3_compare0 */
    case 283:  /* *subsi3_compare0 */
    case 129:  /* adddi3_compare0 */
    case 128:  /* addsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 8586:  /* aarch64_sve_dupq_lanevnx2df */
    case 8585:  /* aarch64_sve_dupq_lanevnx4sf */
    case 8584:  /* aarch64_sve_dupq_lanevnx8hf */
    case 8583:  /* aarch64_sve_dupq_lanevnx8bf */
    case 8582:  /* aarch64_sve_dupq_lanevnx2di */
    case 8581:  /* aarch64_sve_dupq_lanevnx4si */
    case 8580:  /* aarch64_sve_dupq_lanevnx8hi */
    case 8579:  /* aarch64_sve_dupq_lanevnx16qi */
    case 5104:  /* aarch64_vec_duplicate_vqvnx2df_be */
    case 5103:  /* aarch64_vec_duplicate_vqvnx4sf_be */
    case 5102:  /* aarch64_vec_duplicate_vqvnx8hf_be */
    case 5101:  /* aarch64_vec_duplicate_vqvnx8bf_be */
    case 5100:  /* aarch64_vec_duplicate_vqvnx2di_be */
    case 5099:  /* aarch64_vec_duplicate_vqvnx4si_be */
    case 5098:  /* aarch64_vec_duplicate_vqvnx8hi_be */
    case 5097:  /* aarch64_vec_duplicate_vqvnx16qi_be */
    case 3474:  /* aarch64_cmgtdf */
    case 3473:  /* aarch64_cmgedf */
    case 3472:  /* aarch64_cmeqdf */
    case 3471:  /* aarch64_cmledf */
    case 3470:  /* aarch64_cmltdf */
    case 3469:  /* aarch64_cmgtsf */
    case 3468:  /* aarch64_cmgesf */
    case 3467:  /* aarch64_cmeqsf */
    case 3466:  /* aarch64_cmlesf */
    case 3465:  /* aarch64_cmltsf */
    case 3464:  /* aarch64_cmgthf */
    case 3463:  /* aarch64_cmgehf */
    case 3462:  /* aarch64_cmeqhf */
    case 3461:  /* aarch64_cmlehf */
    case 3460:  /* aarch64_cmlthf */
    case 3459:  /* aarch64_cmgtv2df */
    case 3458:  /* aarch64_cmgev2df */
    case 3457:  /* aarch64_cmeqv2df */
    case 3456:  /* aarch64_cmlev2df */
    case 3455:  /* aarch64_cmltv2df */
    case 3454:  /* aarch64_cmgtv4sf */
    case 3453:  /* aarch64_cmgev4sf */
    case 3452:  /* aarch64_cmeqv4sf */
    case 3451:  /* aarch64_cmlev4sf */
    case 3450:  /* aarch64_cmltv4sf */
    case 3449:  /* aarch64_cmgtv2sf */
    case 3448:  /* aarch64_cmgev2sf */
    case 3447:  /* aarch64_cmeqv2sf */
    case 3446:  /* aarch64_cmlev2sf */
    case 3445:  /* aarch64_cmltv2sf */
    case 3444:  /* aarch64_cmgtv8hf */
    case 3443:  /* aarch64_cmgev8hf */
    case 3442:  /* aarch64_cmeqv8hf */
    case 3441:  /* aarch64_cmlev8hf */
    case 3440:  /* aarch64_cmltv8hf */
    case 3439:  /* aarch64_cmgtv4hf */
    case 3438:  /* aarch64_cmgev4hf */
    case 3437:  /* aarch64_cmeqv4hf */
    case 3436:  /* aarch64_cmlev4hf */
    case 3435:  /* aarch64_cmltv4hf */
    case 3418:  /* *aarch64_cmgtudi */
    case 3417:  /* *aarch64_cmgeudi */
    case 3416:  /* *aarch64_cmleudi */
    case 3415:  /* *aarch64_cmltudi */
    case 3410:  /* aarch64_cmgtuv2di */
    case 3409:  /* aarch64_cmgeuv2di */
    case 3408:  /* aarch64_cmleuv2di */
    case 3407:  /* aarch64_cmltuv2di */
    case 3406:  /* aarch64_cmgtuv4si */
    case 3405:  /* aarch64_cmgeuv4si */
    case 3404:  /* aarch64_cmleuv4si */
    case 3403:  /* aarch64_cmltuv4si */
    case 3402:  /* aarch64_cmgtuv2si */
    case 3401:  /* aarch64_cmgeuv2si */
    case 3400:  /* aarch64_cmleuv2si */
    case 3399:  /* aarch64_cmltuv2si */
    case 3398:  /* aarch64_cmgtuv8hi */
    case 3397:  /* aarch64_cmgeuv8hi */
    case 3396:  /* aarch64_cmleuv8hi */
    case 3395:  /* aarch64_cmltuv8hi */
    case 3394:  /* aarch64_cmgtuv4hi */
    case 3393:  /* aarch64_cmgeuv4hi */
    case 3392:  /* aarch64_cmleuv4hi */
    case 3391:  /* aarch64_cmltuv4hi */
    case 3390:  /* aarch64_cmgtuv16qi */
    case 3389:  /* aarch64_cmgeuv16qi */
    case 3388:  /* aarch64_cmleuv16qi */
    case 3387:  /* aarch64_cmltuv16qi */
    case 3386:  /* aarch64_cmgtuv8qi */
    case 3385:  /* aarch64_cmgeuv8qi */
    case 3384:  /* aarch64_cmleuv8qi */
    case 3383:  /* aarch64_cmltuv8qi */
    case 3382:  /* *aarch64_cmgtdi */
    case 3381:  /* *aarch64_cmgedi */
    case 3380:  /* *aarch64_cmeqdi */
    case 3379:  /* *aarch64_cmledi */
    case 3378:  /* *aarch64_cmltdi */
    case 3372:  /* aarch64_cmgtv2di */
    case 3371:  /* aarch64_cmgev2di */
    case 3370:  /* aarch64_cmeqv2di */
    case 3369:  /* aarch64_cmlev2di */
    case 3368:  /* aarch64_cmltv2di */
    case 3367:  /* aarch64_cmgtv4si */
    case 3366:  /* aarch64_cmgev4si */
    case 3365:  /* aarch64_cmeqv4si */
    case 3364:  /* aarch64_cmlev4si */
    case 3363:  /* aarch64_cmltv4si */
    case 3362:  /* aarch64_cmgtv2si */
    case 3361:  /* aarch64_cmgev2si */
    case 3360:  /* aarch64_cmeqv2si */
    case 3359:  /* aarch64_cmlev2si */
    case 3358:  /* aarch64_cmltv2si */
    case 3357:  /* aarch64_cmgtv8hi */
    case 3356:  /* aarch64_cmgev8hi */
    case 3355:  /* aarch64_cmeqv8hi */
    case 3354:  /* aarch64_cmlev8hi */
    case 3353:  /* aarch64_cmltv8hi */
    case 3352:  /* aarch64_cmgtv4hi */
    case 3351:  /* aarch64_cmgev4hi */
    case 3350:  /* aarch64_cmeqv4hi */
    case 3349:  /* aarch64_cmlev4hi */
    case 3348:  /* aarch64_cmltv4hi */
    case 3347:  /* aarch64_cmgtv16qi */
    case 3346:  /* aarch64_cmgev16qi */
    case 3345:  /* aarch64_cmeqv16qi */
    case 3344:  /* aarch64_cmlev16qi */
    case 3343:  /* aarch64_cmltv16qi */
    case 3342:  /* aarch64_cmgtv8qi */
    case 3341:  /* aarch64_cmgev8qi */
    case 3340:  /* aarch64_cmeqv8qi */
    case 3339:  /* aarch64_cmlev8qi */
    case 3338:  /* aarch64_cmltv8qi */
    case 2322:  /* aarch64_simd_vec_unpacks_hi_v4sf */
    case 2321:  /* aarch64_simd_vec_unpacks_hi_v8hf */
    case 2300:  /* aarch64_simd_vec_unpacks_lo_v4sf */
    case 2299:  /* aarch64_simd_vec_unpacks_lo_v8hf */
    case 1987:  /* aarch64_simd_vec_unpacku_hi_v4si */
    case 1986:  /* aarch64_simd_vec_unpacks_hi_v4si */
    case 1985:  /* aarch64_simd_vec_unpacku_hi_v8hi */
    case 1984:  /* aarch64_simd_vec_unpacks_hi_v8hi */
    case 1983:  /* aarch64_simd_vec_unpacku_hi_v16qi */
    case 1982:  /* aarch64_simd_vec_unpacks_hi_v16qi */
    case 1981:  /* aarch64_simd_vec_unpacku_lo_v4si */
    case 1980:  /* aarch64_simd_vec_unpacks_lo_v4si */
    case 1979:  /* aarch64_simd_vec_unpacku_lo_v8hi */
    case 1978:  /* aarch64_simd_vec_unpacks_lo_v8hi */
    case 1977:  /* aarch64_simd_vec_unpacku_lo_v16qi */
    case 1976:  /* aarch64_simd_vec_unpacks_lo_v16qi */
    case 1933:  /* *aarch64_shrnv2di_vect */
    case 1932:  /* *aarch64_rshrnv2di_vect */
    case 1931:  /* *aarch64_shrnv4si_vect */
    case 1930:  /* *aarch64_rshrnv4si_vect */
    case 1929:  /* *aarch64_shrnv8hi_vect */
    case 1928:  /* *aarch64_rshrnv8hi_vect */
    case 1674:  /* fabddf3 */
    case 1673:  /* fabdsf3 */
    case 1672:  /* fabdhf3 */
    case 1671:  /* fabdv2df3 */
    case 1670:  /* fabdv4sf3 */
    case 1669:  /* fabdv2sf3 */
    case 1668:  /* fabdv8hf3 */
    case 1667:  /* fabdv4hf3 */
    case 985:  /* *fnmuldf3 */
    case 984:  /* *fnmulsf3 */
    case 900:  /* *aarch64_fcvtudfdi2_mult */
    case 899:  /* *aarch64_fcvtdfdi2_mult */
    case 898:  /* *aarch64_fcvtusfdi2_mult */
    case 897:  /* *aarch64_fcvtsfdi2_mult */
    case 896:  /* *aarch64_fcvtudfsi2_mult */
    case 895:  /* *aarch64_fcvtdfsi2_mult */
    case 894:  /* *aarch64_fcvtusfsi2_mult */
    case 893:  /* *aarch64_fcvtsfsi2_mult */
    case 752:  /* *extenddi_ashrhi */
    case 751:  /* *extenddi_ashrqi */
    case 750:  /* *extendsi_ashrhi */
    case 749:  /* *extendsi_ashrqi */
    case 748:  /* *zero_extenddi_lshrhi */
    case 747:  /* *zero_extenddi_lshrqi */
    case 746:  /* *zero_extendsi_lshrhi */
    case 745:  /* *zero_extendsi_lshrqi */
    case 744:  /* *zero_extenddi_ashlhi */
    case 743:  /* *extenddi_ashlhi */
    case 742:  /* *zero_extenddi_ashlqi */
    case 741:  /* *extenddi_ashlqi */
    case 740:  /* *zero_extendsi_ashlhi */
    case 739:  /* *extendsi_ashlhi */
    case 738:  /* *zero_extendsi_ashlqi */
    case 737:  /* *extendsi_ashlqi */
    case 736:  /* *rorsi3_insn_uxtw */
    case 720:  /* *rotrsi3_insn_uxtw */
    case 719:  /* *lshrsi3_insn_uxtw */
    case 718:  /* *ashrsi3_insn_uxtw */
    case 717:  /* *ashlsi3_insn_uxtw */
    case 588:  /* *xor_one_cmpldi3 */
    case 587:  /* *xor_one_cmplsi3 */
    case 579:  /* *one_cmpl_rotrdi2 */
    case 578:  /* *one_cmpl_lshrdi2 */
    case 577:  /* *one_cmpl_ashrdi2 */
    case 576:  /* *one_cmpl_ashldi2 */
    case 575:  /* *one_cmpl_rotrsi2 */
    case 574:  /* *one_cmpl_lshrsi2 */
    case 573:  /* *one_cmpl_ashrsi2 */
    case 572:  /* *one_cmpl_ashlsi2 */
    case 508:  /* *xorsi3_uxtw */
    case 507:  /* *iorsi3_uxtw */
    case 506:  /* *andsi3_uxtw */
    case 405:  /* *udivsi3_uxtw */
    case 404:  /* *divsi3_uxtw */
    case 380:  /* *mulsi3_uxtw */
    case 373:  /* *neg_lsr_di2 */
    case 372:  /* *neg_asr_di2 */
    case 371:  /* *neg_lsl_di2 */
    case 370:  /* *neg_lsr_si2 */
    case 369:  /* *neg_asr_si2 */
    case 368:  /* *neg_lsl_si2 */
    case 333:  /* *subsi3_carryin_uxtw */
    case 269:  /* *subsi3_uxtw */
    case 125:  /* *addsi3_aarch64_uxtw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 7230:  /* andvnx2bi3 */
    case 7229:  /* andvnx4bi3 */
    case 7228:  /* andvnx8bi3 */
    case 7227:  /* andvnx16bi3 */
    case 6881:  /* *post_ra_fmulvnx2df3 */
    case 6880:  /* *post_ra_fsubvnx2df3 */
    case 6879:  /* *post_ra_faddvnx2df3 */
    case 6878:  /* *post_ra_fmulvnx4sf3 */
    case 6877:  /* *post_ra_fsubvnx4sf3 */
    case 6876:  /* *post_ra_faddvnx4sf3 */
    case 6875:  /* *post_ra_fmulvnx8hf3 */
    case 6874:  /* *post_ra_fsubvnx8hf3 */
    case 6873:  /* *post_ra_faddvnx8hf3 */
    case 6674:  /* *post_ra_vlshrvnx2di3 */
    case 6673:  /* *post_ra_vashrvnx2di3 */
    case 6672:  /* *post_ra_vashlvnx2di3 */
    case 6671:  /* *post_ra_vlshrvnx2si3 */
    case 6670:  /* *post_ra_vashrvnx2si3 */
    case 6669:  /* *post_ra_vashlvnx2si3 */
    case 6668:  /* *post_ra_vlshrvnx4si3 */
    case 6667:  /* *post_ra_vashrvnx4si3 */
    case 6666:  /* *post_ra_vashlvnx4si3 */
    case 6665:  /* *post_ra_vlshrvnx2hi3 */
    case 6664:  /* *post_ra_vashrvnx2hi3 */
    case 6663:  /* *post_ra_vashlvnx2hi3 */
    case 6662:  /* *post_ra_vlshrvnx4hi3 */
    case 6661:  /* *post_ra_vashrvnx4hi3 */
    case 6660:  /* *post_ra_vashlvnx4hi3 */
    case 6659:  /* *post_ra_vlshrvnx8hi3 */
    case 6658:  /* *post_ra_vashrvnx8hi3 */
    case 6657:  /* *post_ra_vashlvnx8hi3 */
    case 6656:  /* *post_ra_vlshrvnx2qi3 */
    case 6655:  /* *post_ra_vashrvnx2qi3 */
    case 6654:  /* *post_ra_vashlvnx2qi3 */
    case 6653:  /* *post_ra_vlshrvnx4qi3 */
    case 6652:  /* *post_ra_vashrvnx4qi3 */
    case 6651:  /* *post_ra_vashlvnx4qi3 */
    case 6650:  /* *post_ra_vlshrvnx8qi3 */
    case 6649:  /* *post_ra_vashrvnx8qi3 */
    case 6648:  /* *post_ra_vashlvnx8qi3 */
    case 6647:  /* *post_ra_vlshrvnx16qi3 */
    case 6646:  /* *post_ra_vashrvnx16qi3 */
    case 6645:  /* *post_ra_vashlvnx16qi3 */
    case 6584:  /* xorvnx2di3 */
    case 6583:  /* iorvnx2di3 */
    case 6582:  /* andvnx2di3 */
    case 6581:  /* xorvnx2si3 */
    case 6580:  /* iorvnx2si3 */
    case 6579:  /* andvnx2si3 */
    case 6578:  /* xorvnx4si3 */
    case 6577:  /* iorvnx4si3 */
    case 6576:  /* andvnx4si3 */
    case 6575:  /* xorvnx2hi3 */
    case 6574:  /* iorvnx2hi3 */
    case 6573:  /* andvnx2hi3 */
    case 6572:  /* xorvnx4hi3 */
    case 6571:  /* iorvnx4hi3 */
    case 6570:  /* andvnx4hi3 */
    case 6569:  /* xorvnx8hi3 */
    case 6568:  /* iorvnx8hi3 */
    case 6567:  /* andvnx8hi3 */
    case 6566:  /* xorvnx2qi3 */
    case 6565:  /* iorvnx2qi3 */
    case 6564:  /* andvnx2qi3 */
    case 6563:  /* xorvnx4qi3 */
    case 6562:  /* iorvnx4qi3 */
    case 6561:  /* andvnx4qi3 */
    case 6560:  /* xorvnx8qi3 */
    case 6559:  /* iorvnx8qi3 */
    case 6558:  /* andvnx8qi3 */
    case 6557:  /* xorvnx16qi3 */
    case 6556:  /* iorvnx16qi3 */
    case 6555:  /* andvnx16qi3 */
    case 6502:  /* aarch64_sve_ussubvnx2di */
    case 6501:  /* aarch64_sve_usaddvnx2di */
    case 6500:  /* aarch64_sve_ussubvnx4si */
    case 6499:  /* aarch64_sve_usaddvnx4si */
    case 6498:  /* aarch64_sve_ussubvnx8hi */
    case 6497:  /* aarch64_sve_usaddvnx8hi */
    case 6496:  /* aarch64_sve_ussubvnx16qi */
    case 6495:  /* aarch64_sve_usaddvnx16qi */
    case 6494:  /* aarch64_sve_sssubvnx2di */
    case 6493:  /* aarch64_sve_ssaddvnx2di */
    case 6492:  /* aarch64_sve_sssubvnx4si */
    case 6491:  /* aarch64_sve_ssaddvnx4si */
    case 6490:  /* aarch64_sve_sssubvnx8hi */
    case 6489:  /* aarch64_sve_ssaddvnx8hi */
    case 6488:  /* aarch64_sve_sssubvnx16qi */
    case 6487:  /* aarch64_sve_ssaddvnx16qi */
    case 6392:  /* subvnx2di3 */
    case 6391:  /* subvnx2si3 */
    case 6390:  /* subvnx4si3 */
    case 6389:  /* subvnx2hi3 */
    case 6388:  /* subvnx4hi3 */
    case 6387:  /* subvnx8hi3 */
    case 6386:  /* subvnx2qi3 */
    case 6385:  /* subvnx4qi3 */
    case 6384:  /* subvnx8qi3 */
    case 6383:  /* subvnx16qi3 */
    case 6382:  /* addvnx2di3 */
    case 6381:  /* addvnx2si3 */
    case 6380:  /* addvnx4si3 */
    case 6379:  /* addvnx2hi3 */
    case 6378:  /* addvnx4hi3 */
    case 6377:  /* addvnx8hi3 */
    case 6376:  /* addvnx2qi3 */
    case 6375:  /* addvnx4qi3 */
    case 6374:  /* addvnx8qi3 */
    case 6373:  /* addvnx16qi3 */
    case 5862:  /* *post_ra_uminvnx2di3 */
    case 5861:  /* *post_ra_umaxvnx2di3 */
    case 5860:  /* *post_ra_sminvnx2di3 */
    case 5859:  /* *post_ra_smaxvnx2di3 */
    case 5858:  /* *post_ra_mulvnx2di3 */
    case 5857:  /* *post_ra_uminvnx2si3 */
    case 5856:  /* *post_ra_umaxvnx2si3 */
    case 5855:  /* *post_ra_sminvnx2si3 */
    case 5854:  /* *post_ra_smaxvnx2si3 */
    case 5853:  /* *post_ra_mulvnx2si3 */
    case 5852:  /* *post_ra_uminvnx4si3 */
    case 5851:  /* *post_ra_umaxvnx4si3 */
    case 5850:  /* *post_ra_sminvnx4si3 */
    case 5849:  /* *post_ra_smaxvnx4si3 */
    case 5848:  /* *post_ra_mulvnx4si3 */
    case 5847:  /* *post_ra_uminvnx2hi3 */
    case 5846:  /* *post_ra_umaxvnx2hi3 */
    case 5845:  /* *post_ra_sminvnx2hi3 */
    case 5844:  /* *post_ra_smaxvnx2hi3 */
    case 5843:  /* *post_ra_mulvnx2hi3 */
    case 5842:  /* *post_ra_uminvnx4hi3 */
    case 5841:  /* *post_ra_umaxvnx4hi3 */
    case 5840:  /* *post_ra_sminvnx4hi3 */
    case 5839:  /* *post_ra_smaxvnx4hi3 */
    case 5838:  /* *post_ra_mulvnx4hi3 */
    case 5837:  /* *post_ra_uminvnx8hi3 */
    case 5836:  /* *post_ra_umaxvnx8hi3 */
    case 5835:  /* *post_ra_sminvnx8hi3 */
    case 5834:  /* *post_ra_smaxvnx8hi3 */
    case 5833:  /* *post_ra_mulvnx8hi3 */
    case 5832:  /* *post_ra_uminvnx2qi3 */
    case 5831:  /* *post_ra_umaxvnx2qi3 */
    case 5830:  /* *post_ra_sminvnx2qi3 */
    case 5829:  /* *post_ra_smaxvnx2qi3 */
    case 5828:  /* *post_ra_mulvnx2qi3 */
    case 5827:  /* *post_ra_uminvnx4qi3 */
    case 5826:  /* *post_ra_umaxvnx4qi3 */
    case 5825:  /* *post_ra_sminvnx4qi3 */
    case 5824:  /* *post_ra_smaxvnx4qi3 */
    case 5823:  /* *post_ra_mulvnx4qi3 */
    case 5822:  /* *post_ra_uminvnx8qi3 */
    case 5821:  /* *post_ra_umaxvnx8qi3 */
    case 5820:  /* *post_ra_sminvnx8qi3 */
    case 5819:  /* *post_ra_smaxvnx8qi3 */
    case 5818:  /* *post_ra_mulvnx8qi3 */
    case 5817:  /* *post_ra_uminvnx16qi3 */
    case 5816:  /* *post_ra_umaxvnx16qi3 */
    case 5815:  /* *post_ra_sminvnx16qi3 */
    case 5814:  /* *post_ra_smaxvnx16qi3 */
    case 5813:  /* *post_ra_mulvnx16qi3 */
    case 5157:  /* vec_seriesvnx2di */
    case 5156:  /* vec_seriesvnx2si */
    case 5155:  /* vec_seriesvnx4si */
    case 5154:  /* vec_seriesvnx2hi */
    case 5153:  /* vec_seriesvnx4hi */
    case 5152:  /* vec_seriesvnx8hi */
    case 5151:  /* vec_seriesvnx2qi */
    case 5150:  /* vec_seriesvnx4qi */
    case 5149:  /* vec_seriesvnx8qi */
    case 5148:  /* vec_seriesvnx16qi */
    case 2799:  /* aarch64_uqsubdi */
    case 2798:  /* aarch64_sqsubdi */
    case 2797:  /* aarch64_uqadddi */
    case 2796:  /* aarch64_sqadddi */
    case 2795:  /* aarch64_uqsubsi */
    case 2794:  /* aarch64_sqsubsi */
    case 2793:  /* aarch64_uqaddsi */
    case 2792:  /* aarch64_sqaddsi */
    case 2791:  /* aarch64_uqsubhi */
    case 2790:  /* aarch64_sqsubhi */
    case 2789:  /* aarch64_uqaddhi */
    case 2788:  /* aarch64_sqaddhi */
    case 2787:  /* aarch64_uqsubqi */
    case 2786:  /* aarch64_sqsubqi */
    case 2785:  /* aarch64_uqaddqi */
    case 2784:  /* aarch64_sqaddqi */
    case 2783:  /* aarch64_uqsubv2di */
    case 2782:  /* aarch64_sqsubv2di */
    case 2781:  /* aarch64_uqaddv2di */
    case 2780:  /* aarch64_sqaddv2di */
    case 2779:  /* aarch64_uqsubv4si */
    case 2778:  /* aarch64_sqsubv4si */
    case 2777:  /* aarch64_uqaddv4si */
    case 2776:  /* aarch64_sqaddv4si */
    case 2775:  /* aarch64_uqsubv2si */
    case 2774:  /* aarch64_sqsubv2si */
    case 2773:  /* aarch64_uqaddv2si */
    case 2772:  /* aarch64_sqaddv2si */
    case 2771:  /* aarch64_uqsubv8hi */
    case 2770:  /* aarch64_sqsubv8hi */
    case 2769:  /* aarch64_uqaddv8hi */
    case 2768:  /* aarch64_sqaddv8hi */
    case 2767:  /* aarch64_uqsubv4hi */
    case 2766:  /* aarch64_sqsubv4hi */
    case 2765:  /* aarch64_uqaddv4hi */
    case 2764:  /* aarch64_sqaddv4hi */
    case 2763:  /* aarch64_uqsubv16qi */
    case 2762:  /* aarch64_sqsubv16qi */
    case 2761:  /* aarch64_uqaddv16qi */
    case 2760:  /* aarch64_sqaddv16qi */
    case 2759:  /* aarch64_uqsubv8qi */
    case 2758:  /* aarch64_sqsubv8qi */
    case 2757:  /* aarch64_uqaddv8qi */
    case 2756:  /* aarch64_sqaddv8qi */
    case 2564:  /* *aarch64_combinezdf */
    case 2563:  /* *aarch64_combinezdi */
    case 2562:  /* *aarch64_combinezsf */
    case 2561:  /* *aarch64_combinezsi */
    case 2560:  /* *aarch64_combinezv2sf */
    case 2559:  /* *aarch64_combinezv2si */
    case 2558:  /* *aarch64_combinezv4hf */
    case 2557:  /* *aarch64_combinezv4bf */
    case 2556:  /* *aarch64_combinezv4hi */
    case 2555:  /* *aarch64_combinezv8qi */
    case 2544:  /* *aarch64_combine_internaldf */
    case 2543:  /* *aarch64_combine_internaldi */
    case 2542:  /* *aarch64_combine_internalsf */
    case 2541:  /* *aarch64_combine_internalsi */
    case 2540:  /* *aarch64_combine_internalv2sf */
    case 2539:  /* *aarch64_combine_internalv2si */
    case 2538:  /* *aarch64_combine_internalv4hf */
    case 2537:  /* *aarch64_combine_internalv4bf */
    case 2536:  /* *aarch64_combine_internalv4hi */
    case 2535:  /* *aarch64_combine_internalv8qi */
    case 2534:  /* store_pair_lanesdf */
    case 2533:  /* store_pair_lanesdi */
    case 2532:  /* store_pair_lanessf */
    case 2531:  /* store_pair_lanessi */
    case 2530:  /* store_pair_lanesv2sf */
    case 2529:  /* store_pair_lanesv2si */
    case 2528:  /* store_pair_lanesv4hf */
    case 2527:  /* store_pair_lanesv4bf */
    case 2526:  /* store_pair_lanesv4hi */
    case 2525:  /* store_pair_lanesv8qi */
    case 2524:  /* load_pair_lanesdf */
    case 2523:  /* load_pair_lanesdi */
    case 2522:  /* load_pair_lanessf */
    case 2521:  /* load_pair_lanessi */
    case 2520:  /* load_pair_lanesv2sf */
    case 2519:  /* load_pair_lanesv2si */
    case 2518:  /* load_pair_lanesv4hf */
    case 2517:  /* load_pair_lanesv4bf */
    case 2516:  /* load_pair_lanesv4hi */
    case 2515:  /* load_pair_lanesv8qi */
    case 2344:  /* sminv2df3 */
    case 2343:  /* smaxv2df3 */
    case 2342:  /* sminv4sf3 */
    case 2341:  /* smaxv4sf3 */
    case 2340:  /* sminv2sf3 */
    case 2339:  /* smaxv2sf3 */
    case 2338:  /* sminv8hf3 */
    case 2337:  /* smaxv8hf3 */
    case 2336:  /* sminv4hf3 */
    case 2335:  /* smaxv4hf3 */
    case 2133:  /* *divv2df3 */
    case 2132:  /* *divv4sf3 */
    case 2131:  /* *divv2sf3 */
    case 2130:  /* *divv8hf3 */
    case 2129:  /* *divv4hf3 */
    case 2128:  /* mulv2df3 */
    case 2127:  /* mulv4sf3 */
    case 2126:  /* mulv2sf3 */
    case 2125:  /* mulv8hf3 */
    case 2124:  /* mulv4hf3 */
    case 2123:  /* subv2df3 */
    case 2122:  /* subv4sf3 */
    case 2121:  /* subv2sf3 */
    case 2120:  /* subv8hf3 */
    case 2119:  /* subv4hf3 */
    case 2118:  /* addv2df3 */
    case 2117:  /* addv4sf3 */
    case 2116:  /* addv2sf3 */
    case 2115:  /* addv8hf3 */
    case 2114:  /* addv4hf3 */
    case 1862:  /* uminv4si3 */
    case 1861:  /* umaxv4si3 */
    case 1860:  /* sminv4si3 */
    case 1859:  /* smaxv4si3 */
    case 1858:  /* uminv2si3 */
    case 1857:  /* umaxv2si3 */
    case 1856:  /* sminv2si3 */
    case 1855:  /* smaxv2si3 */
    case 1854:  /* uminv8hi3 */
    case 1853:  /* umaxv8hi3 */
    case 1852:  /* sminv8hi3 */
    case 1851:  /* smaxv8hi3 */
    case 1850:  /* uminv4hi3 */
    case 1849:  /* umaxv4hi3 */
    case 1848:  /* sminv4hi3 */
    case 1847:  /* smaxv4hi3 */
    case 1846:  /* uminv16qi3 */
    case 1845:  /* umaxv16qi3 */
    case 1844:  /* sminv16qi3 */
    case 1843:  /* smaxv16qi3 */
    case 1842:  /* uminv8qi3 */
    case 1841:  /* umaxv8qi3 */
    case 1840:  /* sminv8qi3 */
    case 1839:  /* smaxv8qi3 */
    case 1782:  /* aarch64_simd_reg_sshlv2di */
    case 1781:  /* aarch64_simd_reg_sshlv4si */
    case 1780:  /* aarch64_simd_reg_sshlv2si */
    case 1779:  /* aarch64_simd_reg_sshlv8hi */
    case 1778:  /* aarch64_simd_reg_sshlv4hi */
    case 1777:  /* aarch64_simd_reg_sshlv16qi */
    case 1776:  /* aarch64_simd_reg_sshlv8qi */
    case 1775:  /* aarch64_simd_imm_shlv2di */
    case 1774:  /* aarch64_simd_imm_shlv4si */
    case 1773:  /* aarch64_simd_imm_shlv2si */
    case 1772:  /* aarch64_simd_imm_shlv8hi */
    case 1771:  /* aarch64_simd_imm_shlv4hi */
    case 1770:  /* aarch64_simd_imm_shlv16qi */
    case 1769:  /* aarch64_simd_imm_shlv8qi */
    case 1754:  /* aarch64_simd_ashrv2di */
    case 1753:  /* aarch64_simd_ashrv4si */
    case 1752:  /* aarch64_simd_ashrv2si */
    case 1751:  /* aarch64_simd_ashrv8hi */
    case 1750:  /* aarch64_simd_ashrv4hi */
    case 1749:  /* aarch64_simd_ashrv16qi */
    case 1748:  /* aarch64_simd_ashrv8qi */
    case 1747:  /* aarch64_simd_lshrv2di */
    case 1746:  /* aarch64_simd_lshrv4si */
    case 1745:  /* aarch64_simd_lshrv2si */
    case 1744:  /* aarch64_simd_lshrv8hi */
    case 1743:  /* aarch64_simd_lshrv4hi */
    case 1742:  /* aarch64_simd_lshrv16qi */
    case 1741:  /* aarch64_simd_lshrv8qi */
    case 1695:  /* xorv2di3 */
    case 1694:  /* xorv4si3 */
    case 1693:  /* xorv2si3 */
    case 1692:  /* xorv8hi3 */
    case 1691:  /* xorv4hi3 */
    case 1690:  /* xorv16qi3 */
    case 1689:  /* xorv8qi3 */
    case 1688:  /* iorv2di3 */
    case 1687:  /* iorv4si3 */
    case 1686:  /* iorv2si3 */
    case 1685:  /* iorv8hi3 */
    case 1684:  /* iorv4hi3 */
    case 1683:  /* iorv16qi3 */
    case 1682:  /* iorv8qi3 */
    case 1681:  /* andv2di3 */
    case 1680:  /* andv4si3 */
    case 1679:  /* andv2si3 */
    case 1678:  /* andv8hi3 */
    case 1677:  /* andv4hi3 */
    case 1676:  /* andv16qi3 */
    case 1675:  /* andv8qi3 */
    case 1448:  /* mulv4si3 */
    case 1447:  /* mulv2si3 */
    case 1446:  /* mulv8hi3 */
    case 1445:  /* mulv4hi3 */
    case 1444:  /* mulv16qi3 */
    case 1443:  /* mulv8qi3 */
    case 1442:  /* subv2di3 */
    case 1441:  /* subv4si3 */
    case 1440:  /* subv2si3 */
    case 1439:  /* subv8hi3 */
    case 1438:  /* subv4hi3 */
    case 1437:  /* subv16qi3 */
    case 1436:  /* subv8qi3 */
    case 1435:  /* addv2di3 */
    case 1434:  /* addv4si3 */
    case 1433:  /* addv2si3 */
    case 1432:  /* addv8hi3 */
    case 1431:  /* addv4hi3 */
    case 1430:  /* addv16qi3 */
    case 1429:  /* addv8qi3 */
    case 1414:  /* aarch64_simd_mov_from_v4sfhigh */
    case 1413:  /* aarch64_simd_mov_from_v8bfhigh */
    case 1412:  /* aarch64_simd_mov_from_v8hfhigh */
    case 1411:  /* aarch64_simd_mov_from_v4sihigh */
    case 1410:  /* aarch64_simd_mov_from_v8hihigh */
    case 1409:  /* aarch64_simd_mov_from_v16qihigh */
    case 1408:  /* aarch64_simd_mov_from_v4sflow */
    case 1407:  /* aarch64_simd_mov_from_v8bflow */
    case 1406:  /* aarch64_simd_mov_from_v8hflow */
    case 1405:  /* aarch64_simd_mov_from_v4silow */
    case 1404:  /* aarch64_simd_mov_from_v8hilow */
    case 1403:  /* aarch64_simd_mov_from_v16qilow */
    case 1026:  /* add_losym_di */
    case 1025:  /* add_losym_si */
    case 1001:  /* smindf3 */
    case 1000:  /* sminsf3 */
    case 999:  /* smaxdf3 */
    case 998:  /* smaxsf3 */
    case 988:  /* *divdf3 */
    case 987:  /* *divsf3 */
    case 986:  /* *divhf3 */
    case 981:  /* muldf3 */
    case 980:  /* mulsf3 */
    case 979:  /* mulhf3 */
    case 978:  /* subdf3 */
    case 977:  /* subsf3 */
    case 976:  /* subhf3 */
    case 975:  /* adddf3 */
    case 974:  /* addsf3 */
    case 973:  /* addhf3 */
    case 735:  /* *rordi3_insn */
    case 734:  /* *rorsi3_insn */
    case 726:  /* *lshrhi3_insn */
    case 725:  /* *ashrhi3_insn */
    case 724:  /* *ashlhi3_insn */
    case 723:  /* *lshrqi3_insn */
    case 722:  /* *ashrqi3_insn */
    case 721:  /* *ashlqi3_insn */
    case 716:  /* *rordi3_insn */
    case 715:  /* *rorsi3_insn */
    case 709:  /* *aarch64_ashr_sisd_or_int_di3 */
    case 708:  /* *aarch64_ashr_sisd_or_int_si3 */
    case 707:  /* *aarch64_lshr_sisd_or_int_di3 */
    case 706:  /* *aarch64_lshr_sisd_or_int_si3 */
    case 705:  /* *aarch64_ashl_sisd_or_int_di3 */
    case 704:  /* *aarch64_ashl_sisd_or_int_si3 */
    case 505:  /* xordi3 */
    case 504:  /* iordi3 */
    case 503:  /* anddi3 */
    case 502:  /* xorsi3 */
    case 501:  /* iorsi3 */
    case 500:  /* andsi3 */
    case 499:  /* *aarch64_anddi_imm2 */
    case 498:  /* *aarch64_andsi_imm2 */
    case 403:  /* udivdi3 */
    case 402:  /* divdi3 */
    case 401:  /* udivsi3 */
    case 400:  /* divsi3 */
    case 379:  /* muldi3 */
    case 378:  /* mulsi3 */
    case 332:  /* *subdi3_carryin0 */
    case 331:  /* *subsi3_carryin0 */
    case 270:  /* subdi3 */
    case 268:  /* subsi3 */
    case 127:  /* *adddi3_poly_1 */
    case 126:  /* *addsi3_poly_1 */
    case 124:  /* *adddi3_aarch64 */
    case 123:  /* *addsi3_aarch64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 112:  /* *load_pair_zero_extendsidi2_aarch64 */
    case 110:  /* *load_pair_extendsidi2_aarch64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      break;

    case 5554:  /* truncvnx2divnx2si2 */
    case 5553:  /* truncvnx2divnx2hi2 */
    case 5552:  /* truncvnx2divnx2qi2 */
    case 5551:  /* truncvnx2sivnx2hi2 */
    case 5550:  /* truncvnx2sivnx2qi2 */
    case 5549:  /* truncvnx4sivnx4hi2 */
    case 5548:  /* truncvnx4sivnx4qi2 */
    case 5547:  /* truncvnx2hivnx2qi2 */
    case 5546:  /* truncvnx4hivnx4qi2 */
    case 5545:  /* truncvnx8hivnx8qi2 */
    case 5175:  /* *vec_extractvnx2dfdf_0 */
    case 5174:  /* *vec_extractvnx4sfsf_0 */
    case 5173:  /* *vec_extractvnx8hfhf_0 */
    case 5172:  /* *vec_extractvnx8bfbf_0 */
    case 5171:  /* *vec_extractvnx2didi_0 */
    case 5170:  /* *vec_extractvnx4sisi_0 */
    case 5169:  /* *vec_extractvnx8hihi_0 */
    case 5168:  /* *vec_extractvnx16qiqi_0 */
    case 5096:  /* aarch64_vec_duplicate_vqvnx2df_le */
    case 5095:  /* aarch64_vec_duplicate_vqvnx4sf_le */
    case 5094:  /* aarch64_vec_duplicate_vqvnx8hf_le */
    case 5093:  /* aarch64_vec_duplicate_vqvnx8bf_le */
    case 5092:  /* aarch64_vec_duplicate_vqvnx2di_le */
    case 5091:  /* aarch64_vec_duplicate_vqvnx4si_le */
    case 5090:  /* aarch64_vec_duplicate_vqvnx8hi_le */
    case 5089:  /* aarch64_vec_duplicate_vqvnx16qi_le */
    case 4304:  /* truncv2div2si2 */
    case 4303:  /* truncv4siv4hi2 */
    case 4302:  /* truncv8hiv8qi2 */
    case 4301:  /* zero_extendv2siv2di2 */
    case 4300:  /* extendv2siv2di2 */
    case 4299:  /* zero_extendv4hiv4si2 */
    case 4298:  /* extendv4hiv4si2 */
    case 4297:  /* zero_extendv8qiv8hi2 */
    case 4296:  /* extendv8qiv8hi2 */
    case 4191:  /* *aarch64_simd_ld1rv2df */
    case 4190:  /* *aarch64_simd_ld1rv4sf */
    case 4189:  /* *aarch64_simd_ld1rv2sf */
    case 4188:  /* *aarch64_simd_ld1rv8bf */
    case 4187:  /* *aarch64_simd_ld1rv4bf */
    case 4186:  /* *aarch64_simd_ld1rv8hf */
    case 4185:  /* *aarch64_simd_ld1rv4hf */
    case 4184:  /* *aarch64_simd_ld1rv2di */
    case 4183:  /* *aarch64_simd_ld1rv4si */
    case 4182:  /* *aarch64_simd_ld1rv2si */
    case 4181:  /* *aarch64_simd_ld1rv8hi */
    case 4180:  /* *aarch64_simd_ld1rv4hi */
    case 4179:  /* *aarch64_simd_ld1rv16qi */
    case 4178:  /* *aarch64_simd_ld1rv8qi */
    case 3519:  /* *sqrtv2df2 */
    case 3518:  /* *sqrtv4sf2 */
    case 3517:  /* *sqrtv2sf2 */
    case 3516:  /* *sqrtv8hf2 */
    case 3515:  /* *sqrtv4hf2 */
    case 2888:  /* aarch64_sqabsdi */
    case 2887:  /* aarch64_sqnegdi */
    case 2886:  /* aarch64_sqabssi */
    case 2885:  /* aarch64_sqnegsi */
    case 2884:  /* aarch64_sqabshi */
    case 2883:  /* aarch64_sqneghi */
    case 2882:  /* aarch64_sqabsqi */
    case 2881:  /* aarch64_sqnegqi */
    case 2880:  /* aarch64_sqabsv2di */
    case 2879:  /* aarch64_sqnegv2di */
    case 2878:  /* aarch64_sqabsv4si */
    case 2877:  /* aarch64_sqnegv4si */
    case 2876:  /* aarch64_sqabsv2si */
    case 2875:  /* aarch64_sqnegv2si */
    case 2874:  /* aarch64_sqabsv8hi */
    case 2873:  /* aarch64_sqnegv8hi */
    case 2872:  /* aarch64_sqabsv4hi */
    case 2871:  /* aarch64_sqnegv4hi */
    case 2870:  /* aarch64_sqabsv16qi */
    case 2869:  /* aarch64_sqnegv16qi */
    case 2868:  /* aarch64_sqabsv8qi */
    case 2867:  /* aarch64_sqnegv8qi */
    case 2827:  /* aarch64_uqmovndi */
    case 2826:  /* aarch64_sqmovndi */
    case 2825:  /* aarch64_uqmovnsi */
    case 2824:  /* aarch64_sqmovnsi */
    case 2823:  /* aarch64_uqmovnhi */
    case 2822:  /* aarch64_sqmovnhi */
    case 2424:  /* popcountv16qi2 */
    case 2423:  /* popcountv8qi2 */
    case 2422:  /* clzv4si2 */
    case 2421:  /* clzv2si2 */
    case 2420:  /* clzv8hi2 */
    case 2419:  /* clzv4hi2 */
    case 2418:  /* clzv16qi2 */
    case 2417:  /* clzv8qi2 */
    case 2416:  /* clrsbv4si2 */
    case 2415:  /* clrsbv2si2 */
    case 2414:  /* clrsbv8hi2 */
    case 2413:  /* clrsbv4hi2 */
    case 2412:  /* clrsbv16qi2 */
    case 2411:  /* clrsbv8qi2 */
    case 2330:  /* aarch64_float_truncate_lo_v4hf */
    case 2329:  /* aarch64_float_truncate_lo_v2sf */
    case 2324:  /* aarch64_float_extend_lo_v4sf */
    case 2323:  /* aarch64_float_extend_lo_v2df */
    case 2298:  /* floatunsv2div2df2 */
    case 2297:  /* floatv2div2df2 */
    case 2296:  /* floatunsv4siv4sf2 */
    case 2295:  /* floatv4siv4sf2 */
    case 2294:  /* floatunsv2siv2sf2 */
    case 2293:  /* floatv2siv2sf2 */
    case 2292:  /* floatunsv8hiv8hf2 */
    case 2291:  /* floatv8hiv8hf2 */
    case 2290:  /* floatunsv4hiv4hf2 */
    case 2289:  /* floatv4hiv4hf2 */
    case 2282:  /* floatunshihf2 */
    case 2281:  /* floathihf2 */
    case 2280:  /* fixuns_trunchfhi2 */
    case 2279:  /* fix_trunchfhi2 */
    case 2143:  /* absv2df2 */
    case 2142:  /* absv4sf2 */
    case 2141:  /* absv2sf2 */
    case 2140:  /* absv8hf2 */
    case 2139:  /* absv4hf2 */
    case 2138:  /* negv2df2 */
    case 2137:  /* negv4sf2 */
    case 2136:  /* negv2sf2 */
    case 2135:  /* negv8hf2 */
    case 2134:  /* negv4hf2 */
    case 1702:  /* one_cmplv2di2 */
    case 1701:  /* one_cmplv4si2 */
    case 1700:  /* one_cmplv2si2 */
    case 1699:  /* one_cmplv8hi2 */
    case 1698:  /* one_cmplv4hi2 */
    case 1697:  /* one_cmplv16qi2 */
    case 1696:  /* one_cmplv8qi2 */
    case 1598:  /* absv2di2 */
    case 1597:  /* absv4si2 */
    case 1596:  /* absv2si2 */
    case 1595:  /* absv8hi2 */
    case 1594:  /* absv4hi2 */
    case 1593:  /* absv16qi2 */
    case 1592:  /* absv8qi2 */
    case 1591:  /* negv2di2 */
    case 1590:  /* negv4si2 */
    case 1589:  /* negv2si2 */
    case 1588:  /* negv8hi2 */
    case 1587:  /* negv4hi2 */
    case 1586:  /* negv16qi2 */
    case 1585:  /* negv8qi2 */
    case 1453:  /* bswapv2di2 */
    case 1452:  /* bswapv4si2 */
    case 1451:  /* bswapv2si2 */
    case 1450:  /* bswapv8hi2 */
    case 1449:  /* bswapv4hi2 */
    case 1150:  /* aarch64_simd_dupv8bf */
    case 1149:  /* aarch64_simd_dupv4bf */
    case 1148:  /* aarch64_simd_dupv2df */
    case 1147:  /* aarch64_simd_dupv4sf */
    case 1146:  /* aarch64_simd_dupv2sf */
    case 1145:  /* aarch64_simd_dupv8hf */
    case 1144:  /* aarch64_simd_dupv4hf */
    case 1143:  /* aarch64_simd_dupv2di */
    case 1142:  /* aarch64_simd_dupv4si */
    case 1141:  /* aarch64_simd_dupv2si */
    case 1140:  /* aarch64_simd_dupv8hi */
    case 1139:  /* aarch64_simd_dupv4hi */
    case 1138:  /* aarch64_simd_dupv16qi */
    case 1137:  /* aarch64_simd_dupv8qi */
    case 1023:  /* aarch64_movtflow_di */
    case 1022:  /* aarch64_movtilow_di */
    case 1019:  /* aarch64_movdi_tfhigh */
    case 1018:  /* aarch64_movdi_tihigh */
    case 1017:  /* aarch64_movdi_tflow */
    case 1016:  /* aarch64_movdi_tilow */
    case 997:  /* absdf2 */
    case 996:  /* abssf2 */
    case 995:  /* abshf2 */
    case 994:  /* *sqrtdf2 */
    case 993:  /* *sqrtsf2 */
    case 992:  /* *sqrthf2 */
    case 991:  /* negdf2 */
    case 990:  /* negsf2 */
    case 989:  /* neghf2 */
    case 952:  /* aarch64_fp16_floatunsdihf2 */
    case 951:  /* aarch64_fp16_floatdihf2 */
    case 950:  /* aarch64_fp16_floatunssihf2 */
    case 949:  /* aarch64_fp16_floatsihf2 */
    case 948:  /* floatunssidf2 */
    case 947:  /* floatsidf2 */
    case 946:  /* floatunsdisf2 */
    case 945:  /* floatdisf2 */
    case 944:  /* floatunsdidf2 */
    case 943:  /* floatdidf2 */
    case 942:  /* floatunssisf2 */
    case 941:  /* floatsisf2 */
    case 930:  /* fixuns_truncsfdi2 */
    case 929:  /* fix_truncsfdi2 */
    case 928:  /* fixuns_truncdfsi2 */
    case 927:  /* fix_truncdfsi2 */
    case 926:  /* fixuns_trunchfdi2 */
    case 925:  /* fix_trunchfdi2 */
    case 924:  /* fixuns_trunchfsi2 */
    case 923:  /* fix_trunchfsi2 */
    case 922:  /* fixuns_truncdfdi2 */
    case 921:  /* fix_truncdfdi2 */
    case 920:  /* fixuns_truncsfsi2 */
    case 919:  /* fix_truncsfsi2 */
    case 918:  /* truncdfhf2 */
    case 917:  /* truncsfhf2 */
    case 916:  /* truncdfsf2 */
    case 915:  /* extendhfdf2 */
    case 914:  /* extendhfsf2 */
    case 913:  /* extendsfdf2 */
    case 801:  /* bswaphi2 */
    case 800:  /* bswapdi2 */
    case 799:  /* bswapsi2 */
    case 657:  /* ctzdi2 */
    case 656:  /* ctzsi2 */
    case 653:  /* clrsbdi2 */
    case 652:  /* clrsbsi2 */
    case 651:  /* clzdi2 */
    case 650:  /* clzsi2 */
    case 570:  /* one_cmpldi2 */
    case 569:  /* one_cmplsi2 */
    case 354:  /* negdi2 */
    case 353:  /* negsi2 */
    case 122:  /* *zero_extendqihi2_aarch64 */
    case 121:  /* *extendqihi2_aarch64 */
    case 120:  /* *zero_extendhidi2_aarch64 */
    case 119:  /* *zero_extendqidi2_aarch64 */
    case 118:  /* *zero_extendhisi2_aarch64 */
    case 117:  /* *zero_extendqisi2_aarch64 */
    case 116:  /* *extendhidi2_aarch64 */
    case 115:  /* *extendqidi2_aarch64 */
    case 114:  /* *extendhisi2_aarch64 */
    case 113:  /* *extendqisi2_aarch64 */
    case 111:  /* *zero_extendsidi2_aarch64 */
    case 109:  /* *extendsidi2_aarch64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 108:  /* storewb_pairtf_di */
    case 107:  /* storewb_pairti_di */
    case 106:  /* storewb_pairtf_si */
    case 105:  /* storewb_pairti_si */
    case 104:  /* storewb_pairdf_di */
    case 103:  /* storewb_pairsf_di */
    case 102:  /* storewb_pairdf_si */
    case 101:  /* storewb_pairsf_si */
    case 100:  /* storewb_pairdi_di */
    case 99:  /* storewb_pairdi_si */
    case 98:  /* storewb_pairsi_di */
    case 97:  /* storewb_pairsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 1);
      recog_data.dup_num[2] = 4;
      break;

    case 96:  /* loadwb_pairtf_di */
    case 95:  /* loadwb_pairti_di */
    case 94:  /* loadwb_pairtf_si */
    case 93:  /* loadwb_pairti_si */
    case 92:  /* loadwb_pairdf_di */
    case 91:  /* loadwb_pairsf_di */
    case 90:  /* loadwb_pairdf_si */
    case 89:  /* loadwb_pairsf_si */
    case 88:  /* loadwb_pairdi_di */
    case 87:  /* loadwb_pairdi_si */
    case 86:  /* loadwb_pairsi_di */
    case 85:  /* loadwb_pairsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 1402:  /* vec_store_pairv8bfv2df */
    case 1401:  /* vec_store_pairv8bfv4sf */
    case 1400:  /* vec_store_pairv8bfv8bf */
    case 1399:  /* vec_store_pairv8bfv8hf */
    case 1398:  /* vec_store_pairv8bfv2di */
    case 1397:  /* vec_store_pairv8bfv4si */
    case 1396:  /* vec_store_pairv8bfv8hi */
    case 1395:  /* vec_store_pairv8bfv16qi */
    case 1394:  /* vec_store_pairv2dfv2df */
    case 1393:  /* vec_store_pairv2dfv4sf */
    case 1392:  /* vec_store_pairv2dfv8bf */
    case 1391:  /* vec_store_pairv2dfv8hf */
    case 1390:  /* vec_store_pairv2dfv2di */
    case 1389:  /* vec_store_pairv2dfv4si */
    case 1388:  /* vec_store_pairv2dfv8hi */
    case 1387:  /* vec_store_pairv2dfv16qi */
    case 1386:  /* vec_store_pairv4sfv2df */
    case 1385:  /* vec_store_pairv4sfv4sf */
    case 1384:  /* vec_store_pairv4sfv8bf */
    case 1383:  /* vec_store_pairv4sfv8hf */
    case 1382:  /* vec_store_pairv4sfv2di */
    case 1381:  /* vec_store_pairv4sfv4si */
    case 1380:  /* vec_store_pairv4sfv8hi */
    case 1379:  /* vec_store_pairv4sfv16qi */
    case 1378:  /* vec_store_pairv8hfv2df */
    case 1377:  /* vec_store_pairv8hfv4sf */
    case 1376:  /* vec_store_pairv8hfv8bf */
    case 1375:  /* vec_store_pairv8hfv8hf */
    case 1374:  /* vec_store_pairv8hfv2di */
    case 1373:  /* vec_store_pairv8hfv4si */
    case 1372:  /* vec_store_pairv8hfv8hi */
    case 1371:  /* vec_store_pairv8hfv16qi */
    case 1370:  /* vec_store_pairv2div2df */
    case 1369:  /* vec_store_pairv2div4sf */
    case 1368:  /* vec_store_pairv2div8bf */
    case 1367:  /* vec_store_pairv2div8hf */
    case 1366:  /* vec_store_pairv2div2di */
    case 1365:  /* vec_store_pairv2div4si */
    case 1364:  /* vec_store_pairv2div8hi */
    case 1363:  /* vec_store_pairv2div16qi */
    case 1362:  /* vec_store_pairv4siv2df */
    case 1361:  /* vec_store_pairv4siv4sf */
    case 1360:  /* vec_store_pairv4siv8bf */
    case 1359:  /* vec_store_pairv4siv8hf */
    case 1358:  /* vec_store_pairv4siv2di */
    case 1357:  /* vec_store_pairv4siv4si */
    case 1356:  /* vec_store_pairv4siv8hi */
    case 1355:  /* vec_store_pairv4siv16qi */
    case 1354:  /* vec_store_pairv8hiv2df */
    case 1353:  /* vec_store_pairv8hiv4sf */
    case 1352:  /* vec_store_pairv8hiv8bf */
    case 1351:  /* vec_store_pairv8hiv8hf */
    case 1350:  /* vec_store_pairv8hiv2di */
    case 1349:  /* vec_store_pairv8hiv4si */
    case 1348:  /* vec_store_pairv8hiv8hi */
    case 1347:  /* vec_store_pairv8hiv16qi */
    case 1346:  /* vec_store_pairv16qiv2df */
    case 1345:  /* vec_store_pairv16qiv4sf */
    case 1344:  /* vec_store_pairv16qiv8bf */
    case 1343:  /* vec_store_pairv16qiv8hf */
    case 1342:  /* vec_store_pairv16qiv2di */
    case 1341:  /* vec_store_pairv16qiv4si */
    case 1340:  /* vec_store_pairv16qiv8hi */
    case 1339:  /* vec_store_pairv16qiv16qi */
    case 1338:  /* load_pairv8bfv2df */
    case 1337:  /* load_pairv8bfv4sf */
    case 1336:  /* load_pairv8bfv8bf */
    case 1335:  /* load_pairv8bfv8hf */
    case 1334:  /* load_pairv8bfv2di */
    case 1333:  /* load_pairv8bfv4si */
    case 1332:  /* load_pairv8bfv8hi */
    case 1331:  /* load_pairv8bfv16qi */
    case 1330:  /* load_pairv2dfv2df */
    case 1329:  /* load_pairv2dfv4sf */
    case 1328:  /* load_pairv2dfv8bf */
    case 1327:  /* load_pairv2dfv8hf */
    case 1326:  /* load_pairv2dfv2di */
    case 1325:  /* load_pairv2dfv4si */
    case 1324:  /* load_pairv2dfv8hi */
    case 1323:  /* load_pairv2dfv16qi */
    case 1322:  /* load_pairv4sfv2df */
    case 1321:  /* load_pairv4sfv4sf */
    case 1320:  /* load_pairv4sfv8bf */
    case 1319:  /* load_pairv4sfv8hf */
    case 1318:  /* load_pairv4sfv2di */
    case 1317:  /* load_pairv4sfv4si */
    case 1316:  /* load_pairv4sfv8hi */
    case 1315:  /* load_pairv4sfv16qi */
    case 1314:  /* load_pairv8hfv2df */
    case 1313:  /* load_pairv8hfv4sf */
    case 1312:  /* load_pairv8hfv8bf */
    case 1311:  /* load_pairv8hfv8hf */
    case 1310:  /* load_pairv8hfv2di */
    case 1309:  /* load_pairv8hfv4si */
    case 1308:  /* load_pairv8hfv8hi */
    case 1307:  /* load_pairv8hfv16qi */
    case 1306:  /* load_pairv2div2df */
    case 1305:  /* load_pairv2div4sf */
    case 1304:  /* load_pairv2div8bf */
    case 1303:  /* load_pairv2div8hf */
    case 1302:  /* load_pairv2div2di */
    case 1301:  /* load_pairv2div4si */
    case 1300:  /* load_pairv2div8hi */
    case 1299:  /* load_pairv2div16qi */
    case 1298:  /* load_pairv4siv2df */
    case 1297:  /* load_pairv4siv4sf */
    case 1296:  /* load_pairv4siv8bf */
    case 1295:  /* load_pairv4siv8hf */
    case 1294:  /* load_pairv4siv2di */
    case 1293:  /* load_pairv4siv4si */
    case 1292:  /* load_pairv4siv8hi */
    case 1291:  /* load_pairv4siv16qi */
    case 1290:  /* load_pairv8hiv2df */
    case 1289:  /* load_pairv8hiv4sf */
    case 1288:  /* load_pairv8hiv8bf */
    case 1287:  /* load_pairv8hiv8hf */
    case 1286:  /* load_pairv8hiv2di */
    case 1285:  /* load_pairv8hiv4si */
    case 1284:  /* load_pairv8hiv8hi */
    case 1283:  /* load_pairv8hiv16qi */
    case 1282:  /* load_pairv16qiv2df */
    case 1281:  /* load_pairv16qiv4sf */
    case 1280:  /* load_pairv16qiv8bf */
    case 1279:  /* load_pairv16qiv8hf */
    case 1278:  /* load_pairv16qiv2di */
    case 1277:  /* load_pairv16qiv4si */
    case 1276:  /* load_pairv16qiv8hi */
    case 1275:  /* load_pairv16qiv16qi */
    case 1274:  /* vec_store_pairdfdf */
    case 1273:  /* vec_store_pairv2sfdf */
    case 1272:  /* vec_store_pairv2sidf */
    case 1271:  /* vec_store_pairv4hfdf */
    case 1270:  /* vec_store_pairv4hidf */
    case 1269:  /* vec_store_pairv8qidf */
    case 1268:  /* vec_store_pairdfv2sf */
    case 1267:  /* vec_store_pairv2sfv2sf */
    case 1266:  /* vec_store_pairv2siv2sf */
    case 1265:  /* vec_store_pairv4hfv2sf */
    case 1264:  /* vec_store_pairv4hiv2sf */
    case 1263:  /* vec_store_pairv8qiv2sf */
    case 1262:  /* vec_store_pairdfv2si */
    case 1261:  /* vec_store_pairv2sfv2si */
    case 1260:  /* vec_store_pairv2siv2si */
    case 1259:  /* vec_store_pairv4hfv2si */
    case 1258:  /* vec_store_pairv4hiv2si */
    case 1257:  /* vec_store_pairv8qiv2si */
    case 1256:  /* vec_store_pairdfv4hf */
    case 1255:  /* vec_store_pairv2sfv4hf */
    case 1254:  /* vec_store_pairv2siv4hf */
    case 1253:  /* vec_store_pairv4hfv4hf */
    case 1252:  /* vec_store_pairv4hiv4hf */
    case 1251:  /* vec_store_pairv8qiv4hf */
    case 1250:  /* vec_store_pairdfv4hi */
    case 1249:  /* vec_store_pairv2sfv4hi */
    case 1248:  /* vec_store_pairv2siv4hi */
    case 1247:  /* vec_store_pairv4hfv4hi */
    case 1246:  /* vec_store_pairv4hiv4hi */
    case 1245:  /* vec_store_pairv8qiv4hi */
    case 1244:  /* vec_store_pairdfv8qi */
    case 1243:  /* vec_store_pairv2sfv8qi */
    case 1242:  /* vec_store_pairv2siv8qi */
    case 1241:  /* vec_store_pairv4hfv8qi */
    case 1240:  /* vec_store_pairv4hiv8qi */
    case 1239:  /* vec_store_pairv8qiv8qi */
    case 1238:  /* load_pairdfdf */
    case 1237:  /* load_pairv2sfdf */
    case 1236:  /* load_pairv2sidf */
    case 1235:  /* load_pairv4hfdf */
    case 1234:  /* load_pairv4hidf */
    case 1233:  /* load_pairv8qidf */
    case 1232:  /* load_pairdfv2sf */
    case 1231:  /* load_pairv2sfv2sf */
    case 1230:  /* load_pairv2siv2sf */
    case 1229:  /* load_pairv4hfv2sf */
    case 1228:  /* load_pairv4hiv2sf */
    case 1227:  /* load_pairv8qiv2sf */
    case 1226:  /* load_pairdfv2si */
    case 1225:  /* load_pairv2sfv2si */
    case 1224:  /* load_pairv2siv2si */
    case 1223:  /* load_pairv4hfv2si */
    case 1222:  /* load_pairv4hiv2si */
    case 1221:  /* load_pairv8qiv2si */
    case 1220:  /* load_pairdfv4hf */
    case 1219:  /* load_pairv2sfv4hf */
    case 1218:  /* load_pairv2siv4hf */
    case 1217:  /* load_pairv4hfv4hf */
    case 1216:  /* load_pairv4hiv4hf */
    case 1215:  /* load_pairv8qiv4hf */
    case 1214:  /* load_pairdfv4hi */
    case 1213:  /* load_pairv2sfv4hi */
    case 1212:  /* load_pairv2siv4hi */
    case 1211:  /* load_pairv4hfv4hi */
    case 1210:  /* load_pairv4hiv4hi */
    case 1209:  /* load_pairv8qiv4hi */
    case 1208:  /* load_pairdfv8qi */
    case 1207:  /* load_pairv2sfv8qi */
    case 1206:  /* load_pairv2siv8qi */
    case 1205:  /* load_pairv4hfv8qi */
    case 1204:  /* load_pairv4hiv8qi */
    case 1203:  /* load_pairv8qiv8qi */
    case 84:  /* store_pair_dw_tftf */
    case 83:  /* store_pair_dw_dfdf */
    case 82:  /* store_pair_dw_dfdi */
    case 81:  /* store_pair_dw_didf */
    case 80:  /* store_pair_dw_didi */
    case 79:  /* store_pair_sw_sfsf */
    case 78:  /* store_pair_sw_sisf */
    case 77:  /* store_pair_sw_sfsi */
    case 76:  /* store_pair_sw_sisi */
    case 75:  /* load_pair_dw_tftf */
    case 74:  /* load_pair_dw_dfdf */
    case 73:  /* load_pair_dw_dfdi */
    case 72:  /* load_pair_dw_didf */
    case 71:  /* load_pair_dw_didi */
    case 70:  /* load_pair_sw_sfsf */
    case 69:  /* load_pair_sw_sisf */
    case 68:  /* load_pair_sw_sfsi */
    case 67:  /* load_pair_sw_sisi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      break;

    case 66:  /* *aarch64_setmemdi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      break;

    case 65:  /* aarch64_movmemdi */
    case 64:  /* *aarch64_cpymemdi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0, 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 9384:  /* aarch64_sve2_eor3vnx2di */
    case 9383:  /* aarch64_sve2_eor3vnx4si */
    case 9382:  /* aarch64_sve2_eor3vnx8hi */
    case 9381:  /* aarch64_sve2_eor3vnx16qi */
    case 9376:  /* aarch64_sve2_xarvnx2di */
    case 9375:  /* aarch64_sve2_xarvnx4si */
    case 9374:  /* aarch64_sve2_xarvnx8hi */
    case 9373:  /* aarch64_sve2_xarvnx16qi */
    case 4256:  /* aarch64_xarqv2di */
    case 3432:  /* *aarch64_cmtst_same_v2di */
    case 3431:  /* *aarch64_cmtst_same_v4si */
    case 3430:  /* *aarch64_cmtst_same_v2si */
    case 3429:  /* *aarch64_cmtst_same_v8hi */
    case 3428:  /* *aarch64_cmtst_same_v4hi */
    case 3427:  /* *aarch64_cmtst_same_v16qi */
    case 3426:  /* *aarch64_cmtst_same_v8qi */
    case 1768:  /* *aarch64_simd_srav2di */
    case 1767:  /* *aarch64_simd_srav2di */
    case 1766:  /* *aarch64_simd_srav4si */
    case 1765:  /* *aarch64_simd_srav4si */
    case 1764:  /* *aarch64_simd_srav2si */
    case 1763:  /* *aarch64_simd_srav2si */
    case 1762:  /* *aarch64_simd_srav8hi */
    case 1761:  /* *aarch64_simd_srav8hi */
    case 1760:  /* *aarch64_simd_srav4hi */
    case 1759:  /* *aarch64_simd_srav4hi */
    case 1758:  /* *aarch64_simd_srav16qi */
    case 1757:  /* *aarch64_simd_srav16qi */
    case 1756:  /* *aarch64_simd_srav8qi */
    case 1755:  /* *aarch64_simd_srav8qi */
    case 797:  /* *ashiftdi_extv_bfiz */
    case 796:  /* *ashiftsi_extv_bfiz */
    case 795:  /* *andim_ashiftdi_bfiz */
    case 794:  /* *andim_ashiftsi_bfiz */
    case 553:  /* *xor_roldi3 */
    case 552:  /* *ior_roldi3 */
    case 551:  /* *and_roldi3 */
    case 550:  /* *xor_rolsi3 */
    case 549:  /* *ior_rolsi3 */
    case 548:  /* *and_rolsi3 */
    case 547:  /* *xor_rotrdi3 */
    case 546:  /* *ior_rotrdi3 */
    case 545:  /* *and_rotrdi3 */
    case 544:  /* *xor_lshrdi3 */
    case 543:  /* *ior_lshrdi3 */
    case 542:  /* *and_lshrdi3 */
    case 541:  /* *xor_ashrdi3 */
    case 540:  /* *ior_ashrdi3 */
    case 539:  /* *and_ashrdi3 */
    case 538:  /* *xor_ashldi3 */
    case 537:  /* *ior_ashldi3 */
    case 536:  /* *and_ashldi3 */
    case 535:  /* *xor_rotrsi3 */
    case 534:  /* *ior_rotrsi3 */
    case 533:  /* *and_rotrsi3 */
    case 532:  /* *xor_lshrsi3 */
    case 531:  /* *ior_lshrsi3 */
    case 530:  /* *and_lshrsi3 */
    case 529:  /* *xor_ashrsi3 */
    case 528:  /* *ior_ashrsi3 */
    case 527:  /* *and_ashrsi3 */
    case 526:  /* *xor_ashlsi3 */
    case 525:  /* *ior_ashlsi3 */
    case 524:  /* *and_ashlsi3 */
    case 382:  /* madddi */
    case 381:  /* maddsi */
    case 335:  /* *subdi3_carryin */
    case 334:  /* *subsi3_carryin */
    case 214:  /* *add_lsr_di */
    case 213:  /* *add_asr_di */
    case 212:  /* *add_lsl_di */
    case 211:  /* *add_lsr_si */
    case 210:  /* *add_asr_si */
    case 209:  /* *add_lsl_si */
    case 57:  /* aarch64_movkdi */
    case 56:  /* aarch64_movksi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 55:  /* insv_immdi */
    case 54:  /* insv_immsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 2));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 4628:  /* *aarch64_sve_movvnx2bi */
    case 4627:  /* *aarch64_sve_movvnx4bi */
    case 4626:  /* *aarch64_sve_movvnx8bi */
    case 4625:  /* *aarch64_sve_movvnx16bi */
    case 4600:  /* *aarch64_sve_movvnx8df_be */
    case 4599:  /* *aarch64_sve_movvnx16sf_be */
    case 4598:  /* *aarch64_sve_movvnx32hf_be */
    case 4597:  /* *aarch64_sve_movvnx32bf_be */
    case 4596:  /* *aarch64_sve_movvnx8di_be */
    case 4595:  /* *aarch64_sve_movvnx16si_be */
    case 4594:  /* *aarch64_sve_movvnx32hi_be */
    case 4593:  /* *aarch64_sve_movvnx64qi_be */
    case 4592:  /* *aarch64_sve_movvnx6df_be */
    case 4591:  /* *aarch64_sve_movvnx12sf_be */
    case 4590:  /* *aarch64_sve_movvnx24hf_be */
    case 4589:  /* *aarch64_sve_movvnx24bf_be */
    case 4588:  /* *aarch64_sve_movvnx6di_be */
    case 4587:  /* *aarch64_sve_movvnx12si_be */
    case 4586:  /* *aarch64_sve_movvnx24hi_be */
    case 4585:  /* *aarch64_sve_movvnx48qi_be */
    case 4584:  /* *aarch64_sve_movvnx4df_be */
    case 4583:  /* *aarch64_sve_movvnx8sf_be */
    case 4582:  /* *aarch64_sve_movvnx16hf_be */
    case 4581:  /* *aarch64_sve_movvnx16bf_be */
    case 4580:  /* *aarch64_sve_movvnx4di_be */
    case 4579:  /* *aarch64_sve_movvnx8si_be */
    case 4578:  /* *aarch64_sve_movvnx16hi_be */
    case 4577:  /* *aarch64_sve_movvnx32qi_be */
    case 4576:  /* *aarch64_sve_movvnx8df_le */
    case 4575:  /* *aarch64_sve_movvnx16sf_le */
    case 4574:  /* *aarch64_sve_movvnx32hf_le */
    case 4573:  /* *aarch64_sve_movvnx32bf_le */
    case 4572:  /* *aarch64_sve_movvnx8di_le */
    case 4571:  /* *aarch64_sve_movvnx16si_le */
    case 4570:  /* *aarch64_sve_movvnx32hi_le */
    case 4569:  /* *aarch64_sve_movvnx64qi_le */
    case 4568:  /* *aarch64_sve_movvnx6df_le */
    case 4567:  /* *aarch64_sve_movvnx12sf_le */
    case 4566:  /* *aarch64_sve_movvnx24hf_le */
    case 4565:  /* *aarch64_sve_movvnx24bf_le */
    case 4564:  /* *aarch64_sve_movvnx6di_le */
    case 4563:  /* *aarch64_sve_movvnx12si_le */
    case 4562:  /* *aarch64_sve_movvnx24hi_le */
    case 4561:  /* *aarch64_sve_movvnx48qi_le */
    case 4560:  /* *aarch64_sve_movvnx4df_le */
    case 4559:  /* *aarch64_sve_movvnx8sf_le */
    case 4558:  /* *aarch64_sve_movvnx16hf_le */
    case 4557:  /* *aarch64_sve_movvnx16bf_le */
    case 4556:  /* *aarch64_sve_movvnx4di_le */
    case 4555:  /* *aarch64_sve_movvnx8si_le */
    case 4554:  /* *aarch64_sve_movvnx16hi_le */
    case 4553:  /* *aarch64_sve_movvnx32qi_le */
    case 4495:  /* *aarch64_sve_movvnx2df_no_ldr_str */
    case 4494:  /* *aarch64_sve_movvnx2di_no_ldr_str */
    case 4493:  /* *aarch64_sve_movvnx2sf_no_ldr_str */
    case 4492:  /* *aarch64_sve_movvnx4sf_no_ldr_str */
    case 4491:  /* *aarch64_sve_movvnx2si_no_ldr_str */
    case 4490:  /* *aarch64_sve_movvnx4si_no_ldr_str */
    case 4489:  /* *aarch64_sve_movvnx2bf_no_ldr_str */
    case 4488:  /* *aarch64_sve_movvnx4bf_no_ldr_str */
    case 4487:  /* *aarch64_sve_movvnx8bf_no_ldr_str */
    case 4486:  /* *aarch64_sve_movvnx2hf_no_ldr_str */
    case 4485:  /* *aarch64_sve_movvnx4hf_no_ldr_str */
    case 4484:  /* *aarch64_sve_movvnx8hf_no_ldr_str */
    case 4483:  /* *aarch64_sve_movvnx2hi_no_ldr_str */
    case 4482:  /* *aarch64_sve_movvnx4hi_no_ldr_str */
    case 4481:  /* *aarch64_sve_movvnx8hi_no_ldr_str */
    case 4480:  /* *aarch64_sve_movvnx2qi_no_ldr_str */
    case 4479:  /* *aarch64_sve_movvnx4qi_no_ldr_str */
    case 4478:  /* *aarch64_sve_movvnx8qi_no_ldr_str */
    case 4477:  /* *aarch64_sve_movvnx2df_ldr_str */
    case 4476:  /* *aarch64_sve_movvnx4sf_ldr_str */
    case 4475:  /* *aarch64_sve_movvnx8hf_ldr_str */
    case 4474:  /* *aarch64_sve_movvnx8bf_ldr_str */
    case 4473:  /* *aarch64_sve_movvnx2di_ldr_str */
    case 4472:  /* *aarch64_sve_movvnx4si_ldr_str */
    case 4471:  /* *aarch64_sve_movvnx8hi_ldr_str */
    case 4470:  /* *aarch64_sve_movvnx16qi_ldr_str */
    case 3972:  /* *aarch64_be_movxi */
    case 3971:  /* *aarch64_be_movv4x8bf */
    case 3970:  /* *aarch64_be_movv4x2df */
    case 3969:  /* *aarch64_be_movv4x4sf */
    case 3968:  /* *aarch64_be_movv4x8hf */
    case 3967:  /* *aarch64_be_movv4x2di */
    case 3966:  /* *aarch64_be_movv4x4si */
    case 3965:  /* *aarch64_be_movv4x8hi */
    case 3964:  /* *aarch64_be_movv4x16qi */
    case 3963:  /* *aarch64_be_movv4x4bf */
    case 3962:  /* *aarch64_be_movv4x1df */
    case 3961:  /* *aarch64_be_movv4x2sf */
    case 3960:  /* *aarch64_be_movv4x4hf */
    case 3959:  /* *aarch64_be_movv4x1di */
    case 3958:  /* *aarch64_be_movv4x2si */
    case 3957:  /* *aarch64_be_movv4x4hi */
    case 3956:  /* *aarch64_be_movv4x8qi */
    case 3955:  /* *aarch64_be_movci */
    case 3954:  /* *aarch64_be_movv3x8bf */
    case 3953:  /* *aarch64_be_movv3x2df */
    case 3952:  /* *aarch64_be_movv3x4sf */
    case 3951:  /* *aarch64_be_movv3x8hf */
    case 3950:  /* *aarch64_be_movv3x2di */
    case 3949:  /* *aarch64_be_movv3x4si */
    case 3948:  /* *aarch64_be_movv3x8hi */
    case 3947:  /* *aarch64_be_movv3x16qi */
    case 3946:  /* *aarch64_be_movv3x4bf */
    case 3945:  /* *aarch64_be_movv3x1df */
    case 3944:  /* *aarch64_be_movv3x2sf */
    case 3943:  /* *aarch64_be_movv3x4hf */
    case 3942:  /* *aarch64_be_movv3x1di */
    case 3941:  /* *aarch64_be_movv3x2si */
    case 3940:  /* *aarch64_be_movv3x4hi */
    case 3939:  /* *aarch64_be_movv3x8qi */
    case 3938:  /* *aarch64_be_movoi */
    case 3937:  /* *aarch64_be_movv2x8bf */
    case 3936:  /* *aarch64_be_movv2x2df */
    case 3935:  /* *aarch64_be_movv2x4sf */
    case 3934:  /* *aarch64_be_movv2x8hf */
    case 3933:  /* *aarch64_be_movv2x2di */
    case 3932:  /* *aarch64_be_movv2x4si */
    case 3931:  /* *aarch64_be_movv2x8hi */
    case 3930:  /* *aarch64_be_movv2x16qi */
    case 3929:  /* *aarch64_be_movv2x4bf */
    case 3928:  /* *aarch64_be_movv2x1df */
    case 3927:  /* *aarch64_be_movv2x2sf */
    case 3926:  /* *aarch64_be_movv2x4hf */
    case 3925:  /* *aarch64_be_movv2x1di */
    case 3924:  /* *aarch64_be_movv2x2si */
    case 3923:  /* *aarch64_be_movv2x4hi */
    case 3922:  /* *aarch64_be_movv2x8qi */
    case 3891:  /* *aarch64_movv8di */
    case 3890:  /* *aarch64_movxi */
    case 3889:  /* *aarch64_movci */
    case 3888:  /* *aarch64_movoi */
    case 3887:  /* *aarch64_movv4x8bf */
    case 3886:  /* *aarch64_movv4x2df */
    case 3885:  /* *aarch64_movv4x4sf */
    case 3884:  /* *aarch64_movv4x8hf */
    case 3883:  /* *aarch64_movv4x2di */
    case 3882:  /* *aarch64_movv4x4si */
    case 3881:  /* *aarch64_movv4x8hi */
    case 3880:  /* *aarch64_movv4x16qi */
    case 3879:  /* *aarch64_movv3x8bf */
    case 3878:  /* *aarch64_movv3x2df */
    case 3877:  /* *aarch64_movv3x4sf */
    case 3876:  /* *aarch64_movv3x8hf */
    case 3875:  /* *aarch64_movv3x2di */
    case 3874:  /* *aarch64_movv3x4si */
    case 3873:  /* *aarch64_movv3x8hi */
    case 3872:  /* *aarch64_movv3x16qi */
    case 3871:  /* *aarch64_movv2x8bf */
    case 3870:  /* *aarch64_movv2x2df */
    case 3869:  /* *aarch64_movv2x4sf */
    case 3868:  /* *aarch64_movv2x8hf */
    case 3867:  /* *aarch64_movv2x2di */
    case 3866:  /* *aarch64_movv2x4si */
    case 3865:  /* *aarch64_movv2x8hi */
    case 3864:  /* *aarch64_movv2x16qi */
    case 3863:  /* *aarch64_movv4x4bf */
    case 3862:  /* *aarch64_movv4x1df */
    case 3861:  /* *aarch64_movv4x2sf */
    case 3860:  /* *aarch64_movv4x4hf */
    case 3859:  /* *aarch64_movv4x1di */
    case 3858:  /* *aarch64_movv4x2si */
    case 3857:  /* *aarch64_movv4x4hi */
    case 3856:  /* *aarch64_movv4x8qi */
    case 3855:  /* *aarch64_movv3x4bf */
    case 3854:  /* *aarch64_movv3x1df */
    case 3853:  /* *aarch64_movv3x2sf */
    case 3852:  /* *aarch64_movv3x4hf */
    case 3851:  /* *aarch64_movv3x1di */
    case 3850:  /* *aarch64_movv3x2si */
    case 3849:  /* *aarch64_movv3x4hi */
    case 3848:  /* *aarch64_movv3x8qi */
    case 3847:  /* *aarch64_movv2x4bf */
    case 3846:  /* *aarch64_movv2x1df */
    case 3845:  /* *aarch64_movv2x2sf */
    case 3844:  /* *aarch64_movv2x4hf */
    case 3843:  /* *aarch64_movv2x1di */
    case 3842:  /* *aarch64_movv2x2si */
    case 3841:  /* *aarch64_movv2x4hi */
    case 3840:  /* *aarch64_movv2x8qi */
    case 1188:  /* *aarch64_simd_movv2df */
    case 1187:  /* *aarch64_simd_movv4sf */
    case 1186:  /* *aarch64_simd_movv8bf */
    case 1185:  /* *aarch64_simd_movv8hf */
    case 1184:  /* *aarch64_simd_movv2di */
    case 1183:  /* *aarch64_simd_movv4si */
    case 1182:  /* *aarch64_simd_movv8hi */
    case 1181:  /* *aarch64_simd_movv16qi */
    case 1180:  /* *aarch64_simd_movv2sf */
    case 1179:  /* *aarch64_simd_movv2si */
    case 1178:  /* *aarch64_simd_movv4bf */
    case 1177:  /* *aarch64_simd_movv4hf */
    case 1176:  /* *aarch64_simd_movv4hi */
    case 1175:  /* *aarch64_simd_movv8qi */
    case 63:  /* *movtf_aarch64 */
    case 62:  /* *movdf_aarch64 */
    case 61:  /* *movsf_aarch64 */
    case 60:  /* *movbf_aarch64 */
    case 59:  /* *movhf_aarch64 */
    case 58:  /* *movti_aarch64 */
    case 53:  /* *movdi_aarch64 */
    case 52:  /* *movsi_aarch64 */
    case 51:  /* *movhi_aarch64 */
    case 50:  /* *movqi_aarch64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 49:  /* *sibcall_value_insn */
    case 47:  /* *call_value_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 48:  /* *sibcall_insn */
    case 46:  /* *call_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 45:  /* *cbgedi1 */
    case 44:  /* *cbltdi1 */
    case 43:  /* *cbgesi1 */
    case 42:  /* *cbltsi1 */
    case 41:  /* *cbgehi1 */
    case 40:  /* *cblthi1 */
    case 39:  /* *cbgeqi1 */
    case 38:  /* *cbltqi1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 37:  /* *tbnedi1 */
    case 36:  /* *tbeqdi1 */
    case 35:  /* *tbnesi1 */
    case 34:  /* *tbeqsi1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 33:  /* *cbnedi1 */
    case 32:  /* *cbeqdi1 */
    case 31:  /* *cbnesi1 */
    case 30:  /* *cbeqsi1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 26:  /* prefetch */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 2));
      break;

    case 4646:  /* aarch64_update_ffrt */
    case 4639:  /* aarch64_copy_ffr_to_ffrt */
    case 4638:  /* aarch64_update_ffr_for_load */
    case 1122:  /* tcommit */
    case 1089:  /* speculation_barrier */
    case 1088:  /* bti_jc */
    case 1087:  /* bti_j */
    case 1086:  /* bti_c */
    case 1085:  /* bti_noarg */
    case 1065:  /* blockage */
    case 1064:  /* xpaclri */
    case 1063:  /* autib1716 */
    case 1062:  /* pacib1716 */
    case 1061:  /* autia1716 */
    case 1060:  /* pacia1716 */
    case 1059:  /* autibsp */
    case 1058:  /* pacibsp */
    case 1057:  /* autiasp */
    case 1056:  /* paciasp */
    case 29:  /* simple_return */
    case 28:  /* *do_return */
    case 27:  /* trap */
    case 25:  /* nop */
      break;

    case 24:  /* *casesi_dispatch */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 23:  /* *compare_condjumpdi */
    case 22:  /* *compare_condjumpdi */
    case 21:  /* *compare_condjumpdi */
    case 20:  /* *compare_condjumpdi */
    case 19:  /* *compare_condjumpsi */
    case 18:  /* *compare_condjumpsi */
    case 17:  /* *compare_condjumpsi */
    case 16:  /* *compare_condjumpsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 15:  /* condjump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 14:  /* ccmpccfpedf_rev */
    case 13:  /* ccmpccfpesf_rev */
    case 12:  /* ccmpccfpdf_rev */
    case 11:  /* ccmpccfpsf_rev */
    case 10:  /* ccmpccdi_rev */
    case 9:  /* ccmpccsi_rev */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 8:  /* ccmpccfpedf */
    case 7:  /* ccmpccfpesf */
    case 6:  /* ccmpccfpdf */
    case 5:  /* ccmpccfpsf */
    case 4:  /* ccmpccdi */
    case 3:  /* ccmpccsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      break;

    case 659:  /* *andhi_compare0 */
    case 658:  /* *andqi_compare0 */
    case 2:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1:  /* indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    }
}
