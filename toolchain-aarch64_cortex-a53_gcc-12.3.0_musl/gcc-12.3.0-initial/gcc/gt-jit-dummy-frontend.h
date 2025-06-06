/* Type information for jit/dummy-frontend.cc.
   Copyright (C) 2004-2022 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* This file is machine generated.  Do not edit.  */

void
gt_ggc_mx_lang_type (void *x_p)
{
  struct lang_type * const x = (struct lang_type *)x_p;
  if (ggc_test_and_set_mark (x))
    {
    }
}

void
gt_ggc_mx_lang_decl (void *x_p)
{
  struct lang_decl * const x = (struct lang_decl *)x_p;
  if (ggc_test_and_set_mark (x))
    {
    }
}

void
gt_ggc_mx_lang_tree_node (void *x_p)
{
  union lang_tree_node * x = (union lang_tree_node *)x_p;
  union lang_tree_node * xlimit = x;
  while (ggc_test_and_set_mark (xlimit))
   xlimit = (CODE_CONTAINS_STRUCT (TREE_CODE (&(*xlimit).generic), TS_COMMON) ? ((union lang_tree_node *) TREE_CHAIN (&(*xlimit).generic)) : NULL);
  while (x != xlimit)
    {
      switch ((int) (TREE_CODE (&((*x)).generic) == IDENTIFIER_NODE))
        {
        case 0:
          switch ((int) (tree_node_structure (&((*x).generic))))
            {
            case TS_BASE:
              break;
            case TS_TYPED:
              gt_ggc_m_9tree_node ((*x).generic.typed.type);
              break;
            case TS_COMMON:
              gt_ggc_m_9tree_node ((*x).generic.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.common.chain);
              break;
            case TS_INT_CST:
              gt_ggc_m_9tree_node ((*x).generic.int_cst.typed.type);
              break;
            case TS_POLY_INT_CST:
              gt_ggc_m_9tree_node ((*x).generic.poly_int_cst.typed.type);
              {
                size_t i0;
                size_t l0 = (size_t)(NUM_POLY_INT_COEFFS);
                for (i0 = 0; i0 != l0; i0++) {
                  gt_ggc_m_9tree_node ((*x).generic.poly_int_cst.coeffs[i0]);
                }
              }
              break;
            case TS_REAL_CST:
              gt_ggc_m_9tree_node ((*x).generic.real_cst.typed.type);
              gt_ggc_m_10real_value ((*x).generic.real_cst.real_cst_ptr);
              break;
            case TS_FIXED_CST:
              gt_ggc_m_9tree_node ((*x).generic.fixed_cst.typed.type);
              gt_ggc_m_11fixed_value ((*x).generic.fixed_cst.fixed_cst_ptr);
              break;
            case TS_VECTOR:
              {
                size_t l1 = (size_t)(vector_cst_encoded_nelts ((tree) &((*x).generic.vector)));
                gt_ggc_m_9tree_node ((*x).generic.vector.typed.type);
                {
                  size_t i1;
                  for (i1 = 0; i1 != l1; i1++) {
                    gt_ggc_m_9tree_node ((*x).generic.vector.elts[i1]);
                  }
                }
              }
              break;
            case TS_STRING:
              gt_ggc_m_9tree_node ((*x).generic.string.typed.type);
              break;
            case TS_COMPLEX:
              gt_ggc_m_9tree_node ((*x).generic.complex.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.complex.real);
              gt_ggc_m_9tree_node ((*x).generic.complex.imag);
              break;
            case TS_IDENTIFIER:
              gt_ggc_m_9tree_node ((*x).generic.identifier.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.identifier.common.chain);
              gt_ggc_m_S ((*x).generic.identifier.id.str);
              break;
            case TS_DECL_MINIMAL:
              gt_ggc_m_9tree_node ((*x).generic.decl_minimal.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.decl_minimal.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.decl_minimal.name);
              gt_ggc_m_9tree_node ((*x).generic.decl_minimal.context);
              break;
            case TS_DECL_COMMON:
              gt_ggc_m_9tree_node ((*x).generic.decl_common.common.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.size);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.initial);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.decl_common.lang_specific);
              break;
            case TS_DECL_WRTL:
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.common.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.size);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.decl_with_rtl.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.decl_with_rtl.rtl);
              break;
            case TS_DECL_NON_COMMON:
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.common.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.decl_non_common.common.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.decl_non_common.common.common.rtl);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.assembler_name);
              gt_ggc_m_11symtab_node ((*x).generic.decl_non_common.common.symtab_node);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.result);
              break;
            case TS_PARM_DECL:
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.common.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.parm_decl.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.parm_decl.common.rtl);
              gt_ggc_m_7rtx_def ((*x).generic.parm_decl.incoming_rtl);
              break;
            case TS_DECL_WITH_VIS:
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.common.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.decl_with_vis.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.decl_with_vis.common.rtl);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.assembler_name);
              gt_ggc_m_11symtab_node ((*x).generic.decl_with_vis.symtab_node);
              break;
            case TS_VAR_DECL:
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.common.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.var_decl.common.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.var_decl.common.common.rtl);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.assembler_name);
              gt_ggc_m_11symtab_node ((*x).generic.var_decl.common.symtab_node);
              break;
            case TS_FIELD_DECL:
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.common.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.size);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.field_decl.common.lang_specific);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.offset);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.bit_field_type);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.qualifier);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.bit_offset);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.fcontext);
              break;
            case TS_LABEL_DECL:
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.common.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.label_decl.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.label_decl.common.rtl);
              break;
            case TS_RESULT_DECL:
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.common.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.result_decl.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.result_decl.common.rtl);
              break;
            case TS_CONST_DECL:
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.size);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.const_decl.common.lang_specific);
              break;
            case TS_TYPE_DECL:
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.common.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.type_decl.common.common.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.type_decl.common.common.common.rtl);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.assembler_name);
              gt_ggc_m_11symtab_node ((*x).generic.type_decl.common.common.symtab_node);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.result);
              break;
            case TS_FUNCTION_DECL:
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.common.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.function_decl.common.common.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.function_decl.common.common.common.rtl);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.assembler_name);
              gt_ggc_m_11symtab_node ((*x).generic.function_decl.common.common.symtab_node);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.result);
              gt_ggc_m_8function ((*x).generic.function_decl.f);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.arguments);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.personality);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.function_specific_target);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.function_specific_optimization);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.saved_tree);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.vindex);
              break;
            case TS_TRANSLATION_UNIT_DECL:
              gt_ggc_m_9tree_node ((*x).generic.translation_unit_decl.common.common.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.translation_unit_decl.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.translation_unit_decl.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.translation_unit_decl.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.translation_unit_decl.common.size);
              gt_ggc_m_9tree_node ((*x).generic.translation_unit_decl.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.translation_unit_decl.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.translation_unit_decl.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.translation_unit_decl.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.translation_unit_decl.common.lang_specific);
              gt_ggc_m_S ((*x).generic.translation_unit_decl.language);
              break;
            case TS_TYPE_COMMON:
              gt_ggc_m_9tree_node ((*x).generic.type_common.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.type_common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.type_common.size);
              gt_ggc_m_9tree_node ((*x).generic.type_common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.type_common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.type_common.pointer_to);
              gt_ggc_m_9tree_node ((*x).generic.type_common.reference_to);
              switch ((int) (debug_hooks->tree_type_symtab_field))
                {
                case TYPE_SYMTAB_IS_ADDRESS:
                  break;
                case TYPE_SYMTAB_IS_DIE:
                  gt_ggc_m_10die_struct ((*x).generic.type_common.symtab.die);
                  break;
                default:
                  break;
                }
              gt_ggc_m_9tree_node ((*x).generic.type_common.canonical);
              gt_ggc_m_9tree_node ((*x).generic.type_common.next_variant);
              gt_ggc_m_9tree_node ((*x).generic.type_common.main_variant);
              gt_ggc_m_9tree_node ((*x).generic.type_common.context);
              gt_ggc_m_9tree_node ((*x).generic.type_common.name);
              break;
            case TS_TYPE_WITH_LANG_SPECIFIC:
              gt_ggc_m_9tree_node ((*x).generic.type_with_lang_specific.common.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.type_with_lang_specific.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.type_with_lang_specific.common.size);
              gt_ggc_m_9tree_node ((*x).generic.type_with_lang_specific.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.type_with_lang_specific.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.type_with_lang_specific.common.pointer_to);
              gt_ggc_m_9tree_node ((*x).generic.type_with_lang_specific.common.reference_to);
              switch ((int) (debug_hooks->tree_type_symtab_field))
                {
                case TYPE_SYMTAB_IS_ADDRESS:
                  break;
                case TYPE_SYMTAB_IS_DIE:
                  gt_ggc_m_10die_struct ((*x).generic.type_with_lang_specific.common.symtab.die);
                  break;
                default:
                  break;
                }
              gt_ggc_m_9tree_node ((*x).generic.type_with_lang_specific.common.canonical);
              gt_ggc_m_9tree_node ((*x).generic.type_with_lang_specific.common.next_variant);
              gt_ggc_m_9tree_node ((*x).generic.type_with_lang_specific.common.main_variant);
              gt_ggc_m_9tree_node ((*x).generic.type_with_lang_specific.common.context);
              gt_ggc_m_9tree_node ((*x).generic.type_with_lang_specific.common.name);
              gt_ggc_m_9lang_type ((*x).generic.type_with_lang_specific.lang_specific);
              break;
            case TS_TYPE_NON_COMMON:
              gt_ggc_m_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.size);
              gt_ggc_m_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.pointer_to);
              gt_ggc_m_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.reference_to);
              switch ((int) (debug_hooks->tree_type_symtab_field))
                {
                case TYPE_SYMTAB_IS_ADDRESS:
                  break;
                case TYPE_SYMTAB_IS_DIE:
                  gt_ggc_m_10die_struct ((*x).generic.type_non_common.with_lang_specific.common.symtab.die);
                  break;
                default:
                  break;
                }
              gt_ggc_m_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.canonical);
              gt_ggc_m_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.next_variant);
              gt_ggc_m_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.main_variant);
              gt_ggc_m_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.context);
              gt_ggc_m_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.name);
              gt_ggc_m_9lang_type ((*x).generic.type_non_common.with_lang_specific.lang_specific);
              gt_ggc_m_9tree_node ((*x).generic.type_non_common.values);
              gt_ggc_m_9tree_node ((*x).generic.type_non_common.minval);
              gt_ggc_m_9tree_node ((*x).generic.type_non_common.maxval);
              gt_ggc_m_9tree_node ((*x).generic.type_non_common.lang_1);
              break;
            case TS_LIST:
              gt_ggc_m_9tree_node ((*x).generic.list.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.list.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.list.purpose);
              gt_ggc_m_9tree_node ((*x).generic.list.value);
              break;
            case TS_VEC:
              {
                size_t l2 = (size_t)(TREE_VEC_LENGTH ((tree)&((*x).generic.vec)));
                gt_ggc_m_9tree_node ((*x).generic.vec.common.typed.type);
                gt_ggc_m_9tree_node ((*x).generic.vec.common.chain);
                {
                  size_t i2;
                  for (i2 = 0; i2 != l2; i2++) {
                    gt_ggc_m_9tree_node ((*x).generic.vec.a[i2]);
                  }
                }
              }
              break;
            case TS_EXP:
              gt_ggc_m_9tree_node ((*x).generic.exp.typed.type);
              switch ((int) (TREE_CODE ((tree) &(*x))))
                {
                default:
                  {
                    size_t i3;
                    size_t l3 = (size_t)(TREE_OPERAND_LENGTH ((tree) &(*x)));
                    for (i3 = 0; i3 != l3; i3++) {
                      gt_ggc_m_9tree_node ((*x).generic.exp.operands[i3]);
                    }
                  }
                  break;
                }
              break;
            case TS_SSA_NAME:
              gt_ggc_m_9tree_node ((*x).generic.ssa_name.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.ssa_name.var);
              gt_ggc_m_6gimple ((*x).generic.ssa_name.def_stmt);
              switch ((int) (((*x).generic.ssa_name).typed.type ?!POINTER_TYPE_P (TREE_TYPE ((tree)&((*x).generic.ssa_name))) : 2))
                {
                case 0:
                  gt_ggc_m_12ptr_info_def ((*x).generic.ssa_name.info.ptr_info);
                  break;
                case 1:
                  gt_ggc_m_14range_info_def ((*x).generic.ssa_name.info.range_info);
                  break;
                default:
                  break;
                }
              break;
            case TS_BLOCK:
              gt_ggc_m_9tree_node ((*x).generic.block.chain);
              gt_ggc_m_9tree_node ((*x).generic.block.vars);
              gt_ggc_m_15vec_tree_va_gc_ ((*x).generic.block.nonlocalized_vars);
              gt_ggc_m_9tree_node ((*x).generic.block.subblocks);
              gt_ggc_m_9tree_node ((*x).generic.block.supercontext);
              gt_ggc_m_9tree_node ((*x).generic.block.abstract_origin);
              gt_ggc_m_9tree_node ((*x).generic.block.fragment_origin);
              gt_ggc_m_9tree_node ((*x).generic.block.fragment_chain);
              gt_ggc_m_10die_struct ((*x).generic.block.die);
              break;
            case TS_BINFO:
              gt_ggc_m_9tree_node ((*x).generic.binfo.common.typed.type);
              gt_ggc_m_9tree_node ((*x).generic.binfo.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.binfo.offset);
              gt_ggc_m_9tree_node ((*x).generic.binfo.vtable);
              gt_ggc_m_9tree_node ((*x).generic.binfo.virtuals);
              gt_ggc_m_9tree_node ((*x).generic.binfo.vptr_field);
              gt_ggc_m_15vec_tree_va_gc_ ((*x).generic.binfo.base_accesses);
              gt_ggc_m_9tree_node ((*x).generic.binfo.inheritance);
              gt_ggc_m_9tree_node ((*x).generic.binfo.vtt_subvtt);
              gt_ggc_m_9tree_node ((*x).generic.binfo.vtt_vptr);
              gt_ggc_mx (&((*x).generic.binfo.base_binfos));
              break;
            case TS_STATEMENT_LIST:
              gt_ggc_m_9tree_node ((*x).generic.stmt_list.typed.type);
              gt_ggc_m_24tree_statement_list_node ((*x).generic.stmt_list.head);
              gt_ggc_m_24tree_statement_list_node ((*x).generic.stmt_list.tail);
              break;
            case TS_CONSTRUCTOR:
              gt_ggc_m_9tree_node ((*x).generic.constructor.typed.type);
              gt_ggc_m_26vec_constructor_elt_va_gc_ ((*x).generic.constructor.elts);
              break;
            case TS_OMP_CLAUSE:
              {
                size_t l4 = (size_t)(omp_clause_num_ops[OMP_CLAUSE_CODE ((tree)&((*x).generic.omp_clause))]);
                gt_ggc_m_9tree_node ((*x).generic.omp_clause.common.typed.type);
                gt_ggc_m_9tree_node ((*x).generic.omp_clause.common.chain);
                gt_ggc_m_6gimple ((*x).generic.omp_clause.gimple_reduction_init);
                gt_ggc_m_6gimple ((*x).generic.omp_clause.gimple_reduction_merge);
                {
                  size_t i4;
                  for (i4 = 0; i4 != l4; i4++) {
                    gt_ggc_m_9tree_node ((*x).generic.omp_clause.ops[i4]);
                  }
                }
              }
              break;
            case TS_OPTIMIZATION:
              gt_ggc_m_15cl_optimization ((*x).generic.optimization.opts);
              if ((*x).generic.optimization.optabs != NULL) {
                ggc_mark ((*x).generic.optimization.optabs);
              }
              break;
            case TS_TARGET_OPTION:
              gt_ggc_m_14target_globals ((*x).generic.target_option.globals);
              gt_ggc_m_16cl_target_option ((*x).generic.target_option.opts);
              break;
            default:
              break;
            }
          break;
        case 1:
          gt_ggc_m_9tree_node ((*x).identifier.common.common.typed.type);
          gt_ggc_m_9tree_node ((*x).identifier.common.common.chain);
          gt_ggc_m_S ((*x).identifier.common.id.str);
          break;
        default:
          break;
        }
      x = (CODE_CONTAINS_STRUCT (TREE_CODE (&(*x).generic), TS_COMMON) ? ((union lang_tree_node *) TREE_CHAIN (&(*x).generic)) : NULL);
    }
}

void
gt_ggc_mx_language_function (void *x_p)
{
  struct language_function * const x = (struct language_function *)x_p;
  if (ggc_test_and_set_mark (x))
    {
    }
}

void
gt_pch_nx_lang_type (void *x_p)
{
  struct lang_type * const x = (struct lang_type *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9lang_type))
    {
    }
}

void
gt_pch_nx_lang_decl (void *x_p)
{
  struct lang_decl * const x = (struct lang_decl *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9lang_decl))
    {
    }
}

void
gt_pch_nx_lang_tree_node (void *x_p)
{
  union lang_tree_node * x = (union lang_tree_node *)x_p;
  union lang_tree_node * xlimit = x;
  while (gt_pch_note_object (xlimit, xlimit, gt_pch_p_14lang_tree_node))
   xlimit = (CODE_CONTAINS_STRUCT (TREE_CODE (&(*xlimit).generic), TS_COMMON) ? ((union lang_tree_node *) TREE_CHAIN (&(*xlimit).generic)) : NULL);
  while (x != xlimit)
    {
      switch ((int) (TREE_CODE (&((*x)).generic) == IDENTIFIER_NODE))
        {
        case 0:
          switch ((int) (tree_node_structure (&((*x).generic))))
            {
            case TS_BASE:
              break;
            case TS_TYPED:
              gt_pch_n_9tree_node ((*x).generic.typed.type);
              break;
            case TS_COMMON:
              gt_pch_n_9tree_node ((*x).generic.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.common.chain);
              break;
            case TS_INT_CST:
              gt_pch_n_9tree_node ((*x).generic.int_cst.typed.type);
              break;
            case TS_POLY_INT_CST:
              gt_pch_n_9tree_node ((*x).generic.poly_int_cst.typed.type);
              {
                size_t i0;
                size_t l0 = (size_t)(NUM_POLY_INT_COEFFS);
                for (i0 = 0; i0 != l0; i0++) {
                  gt_pch_n_9tree_node ((*x).generic.poly_int_cst.coeffs[i0]);
                }
              }
              break;
            case TS_REAL_CST:
              gt_pch_n_9tree_node ((*x).generic.real_cst.typed.type);
              gt_pch_n_10real_value ((*x).generic.real_cst.real_cst_ptr);
              break;
            case TS_FIXED_CST:
              gt_pch_n_9tree_node ((*x).generic.fixed_cst.typed.type);
              gt_pch_n_11fixed_value ((*x).generic.fixed_cst.fixed_cst_ptr);
              break;
            case TS_VECTOR:
              {
                size_t l1 = (size_t)(vector_cst_encoded_nelts ((tree) &((*x).generic.vector)));
                gt_pch_n_9tree_node ((*x).generic.vector.typed.type);
                {
                  size_t i1;
                  for (i1 = 0; i1 != l1; i1++) {
                    gt_pch_n_9tree_node ((*x).generic.vector.elts[i1]);
                  }
                }
              }
              break;
            case TS_STRING:
              gt_pch_n_9tree_node ((*x).generic.string.typed.type);
              break;
            case TS_COMPLEX:
              gt_pch_n_9tree_node ((*x).generic.complex.typed.type);
              gt_pch_n_9tree_node ((*x).generic.complex.real);
              gt_pch_n_9tree_node ((*x).generic.complex.imag);
              break;
            case TS_IDENTIFIER:
              gt_pch_n_9tree_node ((*x).generic.identifier.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.identifier.common.chain);
              gt_pch_n_S ((*x).generic.identifier.id.str);
              break;
            case TS_DECL_MINIMAL:
              gt_pch_n_9tree_node ((*x).generic.decl_minimal.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.decl_minimal.common.chain);
              gt_pch_n_9tree_node ((*x).generic.decl_minimal.name);
              gt_pch_n_9tree_node ((*x).generic.decl_minimal.context);
              break;
            case TS_DECL_COMMON:
              gt_pch_n_9tree_node ((*x).generic.decl_common.common.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.decl_common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.decl_common.common.name);
              gt_pch_n_9tree_node ((*x).generic.decl_common.common.context);
              gt_pch_n_9tree_node ((*x).generic.decl_common.size);
              gt_pch_n_9tree_node ((*x).generic.decl_common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.decl_common.initial);
              gt_pch_n_9tree_node ((*x).generic.decl_common.attributes);
              gt_pch_n_9tree_node ((*x).generic.decl_common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.decl_common.lang_specific);
              break;
            case TS_DECL_WRTL:
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.common.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.size);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.initial);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.decl_with_rtl.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.decl_with_rtl.rtl);
              break;
            case TS_DECL_NON_COMMON:
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.common.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.decl_non_common.common.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.decl_non_common.common.common.rtl);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.assembler_name);
              gt_pch_n_11symtab_node ((*x).generic.decl_non_common.common.symtab_node);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.result);
              break;
            case TS_PARM_DECL:
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.common.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.parm_decl.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.parm_decl.common.rtl);
              gt_pch_n_7rtx_def ((*x).generic.parm_decl.incoming_rtl);
              break;
            case TS_DECL_WITH_VIS:
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.common.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.decl_with_vis.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.decl_with_vis.common.rtl);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.assembler_name);
              gt_pch_n_11symtab_node ((*x).generic.decl_with_vis.symtab_node);
              break;
            case TS_VAR_DECL:
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.common.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.var_decl.common.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.var_decl.common.common.rtl);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.assembler_name);
              gt_pch_n_11symtab_node ((*x).generic.var_decl.common.symtab_node);
              break;
            case TS_FIELD_DECL:
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.common.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.size);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.initial);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.field_decl.common.lang_specific);
              gt_pch_n_9tree_node ((*x).generic.field_decl.offset);
              gt_pch_n_9tree_node ((*x).generic.field_decl.bit_field_type);
              gt_pch_n_9tree_node ((*x).generic.field_decl.qualifier);
              gt_pch_n_9tree_node ((*x).generic.field_decl.bit_offset);
              gt_pch_n_9tree_node ((*x).generic.field_decl.fcontext);
              break;
            case TS_LABEL_DECL:
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.common.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.label_decl.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.label_decl.common.rtl);
              break;
            case TS_RESULT_DECL:
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.common.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.result_decl.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.result_decl.common.rtl);
              break;
            case TS_CONST_DECL:
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.size);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.initial);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.const_decl.common.lang_specific);
              break;
            case TS_TYPE_DECL:
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.common.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.type_decl.common.common.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.type_decl.common.common.common.rtl);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.assembler_name);
              gt_pch_n_11symtab_node ((*x).generic.type_decl.common.common.symtab_node);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.result);
              break;
            case TS_FUNCTION_DECL:
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.common.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.function_decl.common.common.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.function_decl.common.common.common.rtl);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.assembler_name);
              gt_pch_n_11symtab_node ((*x).generic.function_decl.common.common.symtab_node);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.result);
              gt_pch_n_8function ((*x).generic.function_decl.f);
              gt_pch_n_9tree_node ((*x).generic.function_decl.arguments);
              gt_pch_n_9tree_node ((*x).generic.function_decl.personality);
              gt_pch_n_9tree_node ((*x).generic.function_decl.function_specific_target);
              gt_pch_n_9tree_node ((*x).generic.function_decl.function_specific_optimization);
              gt_pch_n_9tree_node ((*x).generic.function_decl.saved_tree);
              gt_pch_n_9tree_node ((*x).generic.function_decl.vindex);
              break;
            case TS_TRANSLATION_UNIT_DECL:
              gt_pch_n_9tree_node ((*x).generic.translation_unit_decl.common.common.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.translation_unit_decl.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.translation_unit_decl.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.translation_unit_decl.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.translation_unit_decl.common.size);
              gt_pch_n_9tree_node ((*x).generic.translation_unit_decl.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.translation_unit_decl.common.initial);
              gt_pch_n_9tree_node ((*x).generic.translation_unit_decl.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.translation_unit_decl.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.translation_unit_decl.common.lang_specific);
              gt_pch_n_S ((*x).generic.translation_unit_decl.language);
              break;
            case TS_TYPE_COMMON:
              gt_pch_n_9tree_node ((*x).generic.type_common.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.type_common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.type_common.size);
              gt_pch_n_9tree_node ((*x).generic.type_common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.type_common.attributes);
              gt_pch_n_9tree_node ((*x).generic.type_common.pointer_to);
              gt_pch_n_9tree_node ((*x).generic.type_common.reference_to);
              switch ((int) (debug_hooks->tree_type_symtab_field))
                {
                case TYPE_SYMTAB_IS_ADDRESS:
                  break;
                case TYPE_SYMTAB_IS_DIE:
                  gt_pch_n_10die_struct ((*x).generic.type_common.symtab.die);
                  break;
                default:
                  break;
                }
              gt_pch_n_9tree_node ((*x).generic.type_common.canonical);
              gt_pch_n_9tree_node ((*x).generic.type_common.next_variant);
              gt_pch_n_9tree_node ((*x).generic.type_common.main_variant);
              gt_pch_n_9tree_node ((*x).generic.type_common.context);
              gt_pch_n_9tree_node ((*x).generic.type_common.name);
              break;
            case TS_TYPE_WITH_LANG_SPECIFIC:
              gt_pch_n_9tree_node ((*x).generic.type_with_lang_specific.common.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.type_with_lang_specific.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.type_with_lang_specific.common.size);
              gt_pch_n_9tree_node ((*x).generic.type_with_lang_specific.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.type_with_lang_specific.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.type_with_lang_specific.common.pointer_to);
              gt_pch_n_9tree_node ((*x).generic.type_with_lang_specific.common.reference_to);
              switch ((int) (debug_hooks->tree_type_symtab_field))
                {
                case TYPE_SYMTAB_IS_ADDRESS:
                  break;
                case TYPE_SYMTAB_IS_DIE:
                  gt_pch_n_10die_struct ((*x).generic.type_with_lang_specific.common.symtab.die);
                  break;
                default:
                  break;
                }
              gt_pch_n_9tree_node ((*x).generic.type_with_lang_specific.common.canonical);
              gt_pch_n_9tree_node ((*x).generic.type_with_lang_specific.common.next_variant);
              gt_pch_n_9tree_node ((*x).generic.type_with_lang_specific.common.main_variant);
              gt_pch_n_9tree_node ((*x).generic.type_with_lang_specific.common.context);
              gt_pch_n_9tree_node ((*x).generic.type_with_lang_specific.common.name);
              gt_pch_n_9lang_type ((*x).generic.type_with_lang_specific.lang_specific);
              break;
            case TS_TYPE_NON_COMMON:
              gt_pch_n_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.size);
              gt_pch_n_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.pointer_to);
              gt_pch_n_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.reference_to);
              switch ((int) (debug_hooks->tree_type_symtab_field))
                {
                case TYPE_SYMTAB_IS_ADDRESS:
                  break;
                case TYPE_SYMTAB_IS_DIE:
                  gt_pch_n_10die_struct ((*x).generic.type_non_common.with_lang_specific.common.symtab.die);
                  break;
                default:
                  break;
                }
              gt_pch_n_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.canonical);
              gt_pch_n_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.next_variant);
              gt_pch_n_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.main_variant);
              gt_pch_n_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.context);
              gt_pch_n_9tree_node ((*x).generic.type_non_common.with_lang_specific.common.name);
              gt_pch_n_9lang_type ((*x).generic.type_non_common.with_lang_specific.lang_specific);
              gt_pch_n_9tree_node ((*x).generic.type_non_common.values);
              gt_pch_n_9tree_node ((*x).generic.type_non_common.minval);
              gt_pch_n_9tree_node ((*x).generic.type_non_common.maxval);
              gt_pch_n_9tree_node ((*x).generic.type_non_common.lang_1);
              break;
            case TS_LIST:
              gt_pch_n_9tree_node ((*x).generic.list.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.list.common.chain);
              gt_pch_n_9tree_node ((*x).generic.list.purpose);
              gt_pch_n_9tree_node ((*x).generic.list.value);
              break;
            case TS_VEC:
              {
                size_t l2 = (size_t)(TREE_VEC_LENGTH ((tree)&((*x).generic.vec)));
                gt_pch_n_9tree_node ((*x).generic.vec.common.typed.type);
                gt_pch_n_9tree_node ((*x).generic.vec.common.chain);
                {
                  size_t i2;
                  for (i2 = 0; i2 != l2; i2++) {
                    gt_pch_n_9tree_node ((*x).generic.vec.a[i2]);
                  }
                }
              }
              break;
            case TS_EXP:
              gt_pch_n_9tree_node ((*x).generic.exp.typed.type);
              switch ((int) (TREE_CODE ((tree) &(*x))))
                {
                default:
                  {
                    size_t i3;
                    size_t l3 = (size_t)(TREE_OPERAND_LENGTH ((tree) &(*x)));
                    for (i3 = 0; i3 != l3; i3++) {
                      gt_pch_n_9tree_node ((*x).generic.exp.operands[i3]);
                    }
                  }
                  break;
                }
              break;
            case TS_SSA_NAME:
              gt_pch_n_9tree_node ((*x).generic.ssa_name.typed.type);
              gt_pch_n_9tree_node ((*x).generic.ssa_name.var);
              gt_pch_n_6gimple ((*x).generic.ssa_name.def_stmt);
              switch ((int) (((*x).generic.ssa_name).typed.type ?!POINTER_TYPE_P (TREE_TYPE ((tree)&((*x).generic.ssa_name))) : 2))
                {
                case 0:
                  gt_pch_n_12ptr_info_def ((*x).generic.ssa_name.info.ptr_info);
                  break;
                case 1:
                  gt_pch_n_14range_info_def ((*x).generic.ssa_name.info.range_info);
                  break;
                default:
                  break;
                }
              break;
            case TS_BLOCK:
              gt_pch_n_9tree_node ((*x).generic.block.chain);
              gt_pch_n_9tree_node ((*x).generic.block.vars);
              gt_pch_n_15vec_tree_va_gc_ ((*x).generic.block.nonlocalized_vars);
              gt_pch_n_9tree_node ((*x).generic.block.subblocks);
              gt_pch_n_9tree_node ((*x).generic.block.supercontext);
              gt_pch_n_9tree_node ((*x).generic.block.abstract_origin);
              gt_pch_n_9tree_node ((*x).generic.block.fragment_origin);
              gt_pch_n_9tree_node ((*x).generic.block.fragment_chain);
              gt_pch_n_10die_struct ((*x).generic.block.die);
              break;
            case TS_BINFO:
              gt_pch_n_9tree_node ((*x).generic.binfo.common.typed.type);
              gt_pch_n_9tree_node ((*x).generic.binfo.common.chain);
              gt_pch_n_9tree_node ((*x).generic.binfo.offset);
              gt_pch_n_9tree_node ((*x).generic.binfo.vtable);
              gt_pch_n_9tree_node ((*x).generic.binfo.virtuals);
              gt_pch_n_9tree_node ((*x).generic.binfo.vptr_field);
              gt_pch_n_15vec_tree_va_gc_ ((*x).generic.binfo.base_accesses);
              gt_pch_n_9tree_node ((*x).generic.binfo.inheritance);
              gt_pch_n_9tree_node ((*x).generic.binfo.vtt_subvtt);
              gt_pch_n_9tree_node ((*x).generic.binfo.vtt_vptr);
              gt_pch_nx (&((*x).generic.binfo.base_binfos));
              break;
            case TS_STATEMENT_LIST:
              gt_pch_n_9tree_node ((*x).generic.stmt_list.typed.type);
              gt_pch_n_24tree_statement_list_node ((*x).generic.stmt_list.head);
              gt_pch_n_24tree_statement_list_node ((*x).generic.stmt_list.tail);
              break;
            case TS_CONSTRUCTOR:
              gt_pch_n_9tree_node ((*x).generic.constructor.typed.type);
              gt_pch_n_26vec_constructor_elt_va_gc_ ((*x).generic.constructor.elts);
              break;
            case TS_OMP_CLAUSE:
              {
                size_t l4 = (size_t)(omp_clause_num_ops[OMP_CLAUSE_CODE ((tree)&((*x).generic.omp_clause))]);
                gt_pch_n_9tree_node ((*x).generic.omp_clause.common.typed.type);
                gt_pch_n_9tree_node ((*x).generic.omp_clause.common.chain);
                gt_pch_n_6gimple ((*x).generic.omp_clause.gimple_reduction_init);
                gt_pch_n_6gimple ((*x).generic.omp_clause.gimple_reduction_merge);
                {
                  size_t i4;
                  for (i4 = 0; i4 != l4; i4++) {
                    gt_pch_n_9tree_node ((*x).generic.omp_clause.ops[i4]);
                  }
                }
              }
              break;
            case TS_OPTIMIZATION:
              gt_pch_n_15cl_optimization ((*x).generic.optimization.opts);
              if ((*x).generic.optimization.optabs != NULL) {
                gt_pch_note_object ((*x).generic.optimization.optabs, x, gt_pch_p_14lang_tree_node);
              }
              break;
            case TS_TARGET_OPTION:
              gt_pch_n_14target_globals ((*x).generic.target_option.globals);
              gt_pch_n_16cl_target_option ((*x).generic.target_option.opts);
              break;
            default:
              break;
            }
          break;
        case 1:
          gt_pch_n_9tree_node ((*x).identifier.common.common.typed.type);
          gt_pch_n_9tree_node ((*x).identifier.common.common.chain);
          gt_pch_n_S ((*x).identifier.common.id.str);
          break;
        default:
          break;
        }
      x = (CODE_CONTAINS_STRUCT (TREE_CODE (&(*x).generic), TS_COMMON) ? ((union lang_tree_node *) TREE_CHAIN (&(*x).generic)) : NULL);
    }
}

void
gt_pch_nx_language_function (void *x_p)
{
  struct language_function * const x = (struct language_function *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_17language_function))
    {
    }
}

void
gt_pch_p_9lang_type (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct lang_type * x ATTRIBUTE_UNUSED = (struct lang_type *)x_p;
}

void
gt_pch_p_9lang_decl (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct lang_decl * x ATTRIBUTE_UNUSED = (struct lang_decl *)x_p;
}

void
gt_pch_p_14lang_tree_node (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  union lang_tree_node * x ATTRIBUTE_UNUSED = (union lang_tree_node *)x_p;
  switch ((int) (TREE_CODE (&((*x)).generic) == IDENTIFIER_NODE))
    {
    case 0:
      switch ((int) (tree_node_structure (&((*x).generic))))
        {
        case TS_BASE:
          break;
        case TS_TYPED:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.typed.type), NULL, cookie);
          break;
        case TS_COMMON:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.common.chain), NULL, cookie);
          break;
        case TS_INT_CST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.int_cst.typed.type), NULL, cookie);
          break;
        case TS_POLY_INT_CST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.poly_int_cst.typed.type), NULL, cookie);
          {
            size_t i0;
            size_t l0 = (size_t)(NUM_POLY_INT_COEFFS);
            for (i0 = 0; i0 != l0; i0++) {
              if ((void *)(x) == this_obj)
                op (&((*x).generic.poly_int_cst.coeffs[i0]), NULL, cookie);
            }
          }
          break;
        case TS_REAL_CST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.real_cst.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.real_cst.real_cst_ptr), NULL, cookie);
          break;
        case TS_FIXED_CST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.fixed_cst.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.fixed_cst.fixed_cst_ptr), NULL, cookie);
          break;
        case TS_VECTOR:
          {
            size_t l1 = (size_t)(vector_cst_encoded_nelts ((tree) &((*x).generic.vector)));
            if ((void *)(x) == this_obj)
              op (&((*x).generic.vector.typed.type), NULL, cookie);
            {
              size_t i1;
              for (i1 = 0; i1 != l1; i1++) {
                if ((void *)(x) == this_obj)
                  op (&((*x).generic.vector.elts[i1]), NULL, cookie);
              }
            }
          }
          break;
        case TS_STRING:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.string.typed.type), NULL, cookie);
          break;
        case TS_COMPLEX:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.real), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.imag), NULL, cookie);
          break;
        case TS_IDENTIFIER:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.identifier.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.identifier.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.identifier.id.str), NULL, cookie);
          break;
        case TS_DECL_MINIMAL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_minimal.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_minimal.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_minimal.name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_minimal.context), NULL, cookie);
          break;
        case TS_DECL_COMMON:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.common.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.common.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.common.name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.common.context), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.size), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.size_unit), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.initial), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.attributes), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.abstract_origin), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.lang_specific), NULL, cookie);
          break;
        case TS_DECL_WRTL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.common.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.common.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.common.name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.common.context), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.size), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.size_unit), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.initial), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.attributes), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.abstract_origin), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.lang_specific), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.rtl), NULL, cookie);
          break;
        case TS_DECL_NON_COMMON:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.common.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.common.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.common.name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.common.context), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.size), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.size_unit), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.initial), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.attributes), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.abstract_origin), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.lang_specific), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.rtl), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.assembler_name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.symtab_node), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.result), NULL, cookie);
          break;
        case TS_PARM_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.common.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.common.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.common.name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.common.context), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.size), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.size_unit), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.initial), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.attributes), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.abstract_origin), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.lang_specific), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.rtl), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.incoming_rtl), NULL, cookie);
          break;
        case TS_DECL_WITH_VIS:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.common.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.common.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.common.name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.common.context), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.size), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.size_unit), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.initial), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.attributes), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.abstract_origin), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.lang_specific), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.rtl), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.assembler_name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.symtab_node), NULL, cookie);
          break;
        case TS_VAR_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.common.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.common.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.common.name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.common.context), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.size), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.size_unit), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.initial), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.attributes), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.abstract_origin), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.lang_specific), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.rtl), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.assembler_name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.symtab_node), NULL, cookie);
          break;
        case TS_FIELD_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.common.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.common.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.common.name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.common.context), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.size), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.size_unit), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.initial), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.attributes), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.abstract_origin), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.lang_specific), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.offset), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.bit_field_type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.qualifier), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.bit_offset), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.fcontext), NULL, cookie);
          break;
        case TS_LABEL_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.common.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.common.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.common.name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.common.context), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.size), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.size_unit), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.initial), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.attributes), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.abstract_origin), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.lang_specific), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.rtl), NULL, cookie);
          break;
        case TS_RESULT_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.common.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.common.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.common.name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.common.context), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.size), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.size_unit), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.initial), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.attributes), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.abstract_origin), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.lang_specific), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.rtl), NULL, cookie);
          break;
        case TS_CONST_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.context), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.size), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.size_unit), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.initial), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.attributes), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.abstract_origin), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.lang_specific), NULL, cookie);
          break;
        case TS_TYPE_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.common.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.common.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.common.name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.common.context), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.size), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.size_unit), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.initial), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.attributes), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.abstract_origin), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.lang_specific), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.rtl), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.assembler_name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.symtab_node), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.result), NULL, cookie);
          break;
        case TS_FUNCTION_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.common.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.common.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.common.name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.common.context), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.size), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.size_unit), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.initial), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.attributes), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.abstract_origin), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.lang_specific), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.rtl), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.assembler_name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.symtab_node), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.result), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.f), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.arguments), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.personality), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.function_specific_target), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.function_specific_optimization), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.saved_tree), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.vindex), NULL, cookie);
          break;
        case TS_TRANSLATION_UNIT_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.translation_unit_decl.common.common.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.translation_unit_decl.common.common.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.translation_unit_decl.common.common.name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.translation_unit_decl.common.common.context), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.translation_unit_decl.common.size), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.translation_unit_decl.common.size_unit), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.translation_unit_decl.common.initial), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.translation_unit_decl.common.attributes), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.translation_unit_decl.common.abstract_origin), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.translation_unit_decl.common.lang_specific), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.translation_unit_decl.language), NULL, cookie);
          break;
        case TS_TYPE_COMMON:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_common.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_common.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_common.size), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_common.size_unit), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_common.attributes), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_common.pointer_to), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_common.reference_to), NULL, cookie);
          switch ((int) (debug_hooks->tree_type_symtab_field))
            {
            case TYPE_SYMTAB_IS_ADDRESS:
              break;
            case TYPE_SYMTAB_IS_DIE:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.type_common.symtab.die), NULL, cookie);
              break;
            default:
              break;
            }
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_common.canonical), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_common.next_variant), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_common.main_variant), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_common.context), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_common.name), NULL, cookie);
          break;
        case TS_TYPE_WITH_LANG_SPECIFIC:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_with_lang_specific.common.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_with_lang_specific.common.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_with_lang_specific.common.size), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_with_lang_specific.common.size_unit), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_with_lang_specific.common.attributes), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_with_lang_specific.common.pointer_to), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_with_lang_specific.common.reference_to), NULL, cookie);
          switch ((int) (debug_hooks->tree_type_symtab_field))
            {
            case TYPE_SYMTAB_IS_ADDRESS:
              break;
            case TYPE_SYMTAB_IS_DIE:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.type_with_lang_specific.common.symtab.die), NULL, cookie);
              break;
            default:
              break;
            }
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_with_lang_specific.common.canonical), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_with_lang_specific.common.next_variant), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_with_lang_specific.common.main_variant), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_with_lang_specific.common.context), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_with_lang_specific.common.name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_with_lang_specific.lang_specific), NULL, cookie);
          break;
        case TS_TYPE_NON_COMMON:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_non_common.with_lang_specific.common.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_non_common.with_lang_specific.common.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_non_common.with_lang_specific.common.size), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_non_common.with_lang_specific.common.size_unit), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_non_common.with_lang_specific.common.attributes), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_non_common.with_lang_specific.common.pointer_to), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_non_common.with_lang_specific.common.reference_to), NULL, cookie);
          switch ((int) (debug_hooks->tree_type_symtab_field))
            {
            case TYPE_SYMTAB_IS_ADDRESS:
              break;
            case TYPE_SYMTAB_IS_DIE:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.type_non_common.with_lang_specific.common.symtab.die), NULL, cookie);
              break;
            default:
              break;
            }
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_non_common.with_lang_specific.common.canonical), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_non_common.with_lang_specific.common.next_variant), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_non_common.with_lang_specific.common.main_variant), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_non_common.with_lang_specific.common.context), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_non_common.with_lang_specific.common.name), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_non_common.with_lang_specific.lang_specific), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_non_common.values), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_non_common.minval), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_non_common.maxval), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_non_common.lang_1), NULL, cookie);
          break;
        case TS_LIST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.purpose), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.value), NULL, cookie);
          break;
        case TS_VEC:
          {
            size_t l2 = (size_t)(TREE_VEC_LENGTH ((tree)&((*x).generic.vec)));
            if ((void *)(x) == this_obj)
              op (&((*x).generic.vec.common.typed.type), NULL, cookie);
            if ((void *)(x) == this_obj)
              op (&((*x).generic.vec.common.chain), NULL, cookie);
            {
              size_t i2;
              for (i2 = 0; i2 != l2; i2++) {
                if ((void *)(x) == this_obj)
                  op (&((*x).generic.vec.a[i2]), NULL, cookie);
              }
            }
          }
          break;
        case TS_EXP:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.exp.typed.type), NULL, cookie);
          switch ((int) (TREE_CODE ((tree) &(*x))))
            {
            default:
              {
                size_t i3;
                size_t l3 = (size_t)(TREE_OPERAND_LENGTH ((tree) &(*x)));
                for (i3 = 0; i3 != l3; i3++) {
                  if ((void *)(x) == this_obj)
                    op (&((*x).generic.exp.operands[i3]), NULL, cookie);
                }
              }
              break;
            }
          break;
        case TS_SSA_NAME:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.var), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.def_stmt), NULL, cookie);
          switch ((int) (((*x).generic.ssa_name).typed.type ?!POINTER_TYPE_P (TREE_TYPE ((tree)&((*x).generic.ssa_name))) : 2))
            {
            case 0:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.ssa_name.info.ptr_info), NULL, cookie);
              break;
            case 1:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.ssa_name.info.range_info), NULL, cookie);
              break;
            default:
              break;
            }
          break;
        case TS_BLOCK:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.vars), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.nonlocalized_vars), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.subblocks), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.supercontext), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.abstract_origin), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.fragment_origin), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.fragment_chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.die), NULL, cookie);
          break;
        case TS_BINFO:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.common.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.common.chain), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.offset), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.vtable), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.virtuals), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.vptr_field), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.base_accesses), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.inheritance), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.vtt_subvtt), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.vtt_vptr), NULL, cookie);
          if ((void *)(x) == this_obj)
            gt_pch_nx (&((*x).generic.binfo.base_binfos), op, cookie);
          break;
        case TS_STATEMENT_LIST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.stmt_list.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.stmt_list.head), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.stmt_list.tail), NULL, cookie);
          break;
        case TS_CONSTRUCTOR:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.constructor.typed.type), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.constructor.elts), NULL, cookie);
          break;
        case TS_OMP_CLAUSE:
          {
            size_t l4 = (size_t)(omp_clause_num_ops[OMP_CLAUSE_CODE ((tree)&((*x).generic.omp_clause))]);
            if ((void *)(x) == this_obj)
              op (&((*x).generic.omp_clause.common.typed.type), NULL, cookie);
            if ((void *)(x) == this_obj)
              op (&((*x).generic.omp_clause.common.chain), NULL, cookie);
            if ((void *)(x) == this_obj)
              op (&((*x).generic.omp_clause.gimple_reduction_init), NULL, cookie);
            if ((void *)(x) == this_obj)
              op (&((*x).generic.omp_clause.gimple_reduction_merge), NULL, cookie);
            {
              size_t i4;
              for (i4 = 0; i4 != l4; i4++) {
                if ((void *)(x) == this_obj)
                  op (&((*x).generic.omp_clause.ops[i4]), NULL, cookie);
              }
            }
          }
          break;
        case TS_OPTIMIZATION:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.optimization.opts), NULL, cookie);
          if ((*x).generic.optimization.optabs != NULL) {
            if ((void *)(x) == this_obj)
              op (&((*x).generic.optimization.optabs), NULL, cookie);
          }
          break;
        case TS_TARGET_OPTION:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.target_option.globals), NULL, cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.target_option.opts), NULL, cookie);
          break;
        default:
          break;
        }
      break;
    case 1:
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.common.common.typed.type), NULL, cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.common.common.chain), NULL, cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.common.id.str), NULL, cookie);
      break;
    default:
      break;
    }
}

void
gt_pch_p_17language_function (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct language_function * x ATTRIBUTE_UNUSED = (struct language_function *)x_p;
}
