/* Generated automatically by the program `genpeep'
from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "tree.h"
#include "rtl.h"
#include "insn-config.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "regs.h"
#include "output.h"
#include "recog.h"
#include "except.h"
#include "diagnostic-core.h"
#include "flags.h"
#include "tm-constrs.h"

extern rtx peep_operand[];

#define operands peep_operand

rtx_insn *
peephole (rtx_insn *ins1)
{
  rtx_insn *insn ATTRIBUTE_UNUSED;
  rtx x ATTRIBUTE_UNUSED, pat ATTRIBUTE_UNUSED;

  if (NEXT_INSN (ins1)
      && BARRIER_P (NEXT_INSN (ins1)))
    return 0;

  return 0;
}

rtx peep_operand[2];
