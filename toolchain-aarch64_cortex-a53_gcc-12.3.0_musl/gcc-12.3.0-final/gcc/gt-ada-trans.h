/* Type information for ada/gcc-interface/trans.cc.
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
gt_ggc_mx_language_function (void *x_p)
{
  struct language_function * const x = (struct language_function *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_20vec_parm_attr_va_gc_ ((*x).parm_attr_cache);
      gt_ggc_m_11bitmap_head ((*x).named_ret_val);
      gt_ggc_m_15vec_tree_va_gc_ ((*x).other_ret_val);
    }
}

void
gt_ggc_mx_parm_attr_d (void *x_p)
{
  struct parm_attr_d * const x = (struct parm_attr_d *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).first);
      gt_ggc_m_9tree_node ((*x).last);
      gt_ggc_m_9tree_node ((*x).length);
    }
}

void
gt_ggc_mx_vec_parm_attr_va_gc_ (void *x_p)
{
  vec<parm_attr,va_gc> * const x = (vec<parm_attr,va_gc> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_ggc_mx (struct parm_attr_d *& x)
{
  if (x)
    gt_ggc_mx_parm_attr_d ((void *) x);
}

void
gt_ggc_mx_stmt_group (void *x_p)
{
  struct stmt_group * x = (struct stmt_group *)x_p;
  struct stmt_group * xlimit = x;
  while (ggc_test_and_set_mark (xlimit))
   xlimit = ((*xlimit).previous);
  while (x != xlimit)
    {
      gt_ggc_m_10stmt_group ((*x).previous);
      gt_ggc_m_9tree_node ((*x).stmt_list);
      gt_ggc_m_9tree_node ((*x).block);
      gt_ggc_m_9tree_node ((*x).cleanups);
      x = ((*x).previous);
    }
}

void
gt_ggc_mx_elab_info (void *x_p)
{
  struct elab_info * x = (struct elab_info *)x_p;
  struct elab_info * xlimit = x;
  while (ggc_test_and_set_mark (xlimit))
   xlimit = ((*xlimit).next);
  while (x != xlimit)
    {
      gt_ggc_m_9elab_info ((*x).next);
      gt_ggc_m_9tree_node ((*x).elab_proc);
      x = ((*x).next);
    }
}

void
gt_ggc_mx_range_check_info_d (void *x_p)
{
  struct range_check_info_d * const x = (struct range_check_info_d *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).low_bound);
      gt_ggc_m_9tree_node ((*x).high_bound);
      gt_ggc_m_9tree_node ((*x).disp);
      gt_ggc_m_9tree_node ((*x).type);
      gt_ggc_m_9tree_node ((*x).invariant_cond);
      gt_ggc_m_9tree_node ((*x).inserted_cond);
    }
}

void
gt_ggc_mx_vec_range_check_info_va_gc_ (void *x_p)
{
  vec<range_check_info,va_gc> * const x = (vec<range_check_info,va_gc> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_ggc_mx (struct range_check_info_d *& x)
{
  if (x)
    gt_ggc_mx_range_check_info_d ((void *) x);
}

void
gt_ggc_mx_loop_info_d (void *x_p)
{
  struct loop_info_d * const x = (struct loop_info_d *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).fndecl);
      gt_ggc_m_9tree_node ((*x).stmt);
      gt_ggc_m_9tree_node ((*x).loop_var);
      gt_ggc_m_9tree_node ((*x).low_bound);
      gt_ggc_m_9tree_node ((*x).high_bound);
      gt_ggc_m_9tree_node ((*x).omp_loop_clauses);
      gt_ggc_m_9tree_node ((*x).omp_construct_clauses);
      gt_ggc_m_27vec_range_check_info_va_gc_ ((*x).checks);
      gt_ggc_m_15vec_tree_va_gc_ ((*x).invariants);
    }
}

void
gt_ggc_mx_vec_loop_info_va_gc_ (void *x_p)
{
  vec<loop_info,va_gc> * const x = (vec<loop_info,va_gc> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_ggc_mx (struct loop_info_d *& x)
{
  if (x)
    gt_ggc_mx_loop_info_d ((void *) x);
}

void
gt_pch_nx_language_function (void *x_p)
{
  struct language_function * const x = (struct language_function *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_17language_function))
    {
      gt_pch_n_20vec_parm_attr_va_gc_ ((*x).parm_attr_cache);
      gt_pch_n_11bitmap_head ((*x).named_ret_val);
      gt_pch_n_15vec_tree_va_gc_ ((*x).other_ret_val);
    }
}

void
gt_pch_nx_parm_attr_d (void *x_p)
{
  struct parm_attr_d * const x = (struct parm_attr_d *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_11parm_attr_d))
    {
      gt_pch_n_9tree_node ((*x).first);
      gt_pch_n_9tree_node ((*x).last);
      gt_pch_n_9tree_node ((*x).length);
    }
}

void
gt_pch_nx_vec_parm_attr_va_gc_ (void *x_p)
{
  vec<parm_attr,va_gc> * const x = (vec<parm_attr,va_gc> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_20vec_parm_attr_va_gc_))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_nx (struct parm_attr_d *& x)
{
  if (x)
    gt_pch_nx_parm_attr_d ((void *) x);
}

void
gt_pch_nx_stmt_group (void *x_p)
{
  struct stmt_group * x = (struct stmt_group *)x_p;
  struct stmt_group * xlimit = x;
  while (gt_pch_note_object (xlimit, xlimit, gt_pch_p_10stmt_group))
   xlimit = ((*xlimit).previous);
  while (x != xlimit)
    {
      gt_pch_n_10stmt_group ((*x).previous);
      gt_pch_n_9tree_node ((*x).stmt_list);
      gt_pch_n_9tree_node ((*x).block);
      gt_pch_n_9tree_node ((*x).cleanups);
      x = ((*x).previous);
    }
}

void
gt_pch_nx_elab_info (void *x_p)
{
  struct elab_info * x = (struct elab_info *)x_p;
  struct elab_info * xlimit = x;
  while (gt_pch_note_object (xlimit, xlimit, gt_pch_p_9elab_info))
   xlimit = ((*xlimit).next);
  while (x != xlimit)
    {
      gt_pch_n_9elab_info ((*x).next);
      gt_pch_n_9tree_node ((*x).elab_proc);
      x = ((*x).next);
    }
}

void
gt_pch_nx_range_check_info_d (void *x_p)
{
  struct range_check_info_d * const x = (struct range_check_info_d *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_18range_check_info_d))
    {
      gt_pch_n_9tree_node ((*x).low_bound);
      gt_pch_n_9tree_node ((*x).high_bound);
      gt_pch_n_9tree_node ((*x).disp);
      gt_pch_n_9tree_node ((*x).type);
      gt_pch_n_9tree_node ((*x).invariant_cond);
      gt_pch_n_9tree_node ((*x).inserted_cond);
    }
}

void
gt_pch_nx_vec_range_check_info_va_gc_ (void *x_p)
{
  vec<range_check_info,va_gc> * const x = (vec<range_check_info,va_gc> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_27vec_range_check_info_va_gc_))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_nx (struct range_check_info_d *& x)
{
  if (x)
    gt_pch_nx_range_check_info_d ((void *) x);
}

void
gt_pch_nx_loop_info_d (void *x_p)
{
  struct loop_info_d * const x = (struct loop_info_d *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_11loop_info_d))
    {
      gt_pch_n_9tree_node ((*x).fndecl);
      gt_pch_n_9tree_node ((*x).stmt);
      gt_pch_n_9tree_node ((*x).loop_var);
      gt_pch_n_9tree_node ((*x).low_bound);
      gt_pch_n_9tree_node ((*x).high_bound);
      gt_pch_n_9tree_node ((*x).omp_loop_clauses);
      gt_pch_n_9tree_node ((*x).omp_construct_clauses);
      gt_pch_n_27vec_range_check_info_va_gc_ ((*x).checks);
      gt_pch_n_15vec_tree_va_gc_ ((*x).invariants);
    }
}

void
gt_pch_nx_vec_loop_info_va_gc_ (void *x_p)
{
  vec<loop_info,va_gc> * const x = (vec<loop_info,va_gc> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_20vec_loop_info_va_gc_))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_nx (struct loop_info_d *& x)
{
  if (x)
    gt_pch_nx_loop_info_d ((void *) x);
}

void
gt_pch_p_17language_function (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct language_function * x ATTRIBUTE_UNUSED = (struct language_function *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).parm_attr_cache), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).named_ret_val), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).other_ret_val), NULL, cookie);
}

void
gt_pch_p_11parm_attr_d (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct parm_attr_d * x ATTRIBUTE_UNUSED = (struct parm_attr_d *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).first), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).last), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).length), NULL, cookie);
}

void
gt_pch_p_20vec_parm_attr_va_gc_ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct vec<parm_attr,va_gc> * x ATTRIBUTE_UNUSED = (struct vec<parm_attr,va_gc> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

void
gt_pch_p_10stmt_group (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct stmt_group * x ATTRIBUTE_UNUSED = (struct stmt_group *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).previous), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).stmt_list), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).block), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).cleanups), NULL, cookie);
}

void
gt_pch_p_9elab_info (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct elab_info * x ATTRIBUTE_UNUSED = (struct elab_info *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).next), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).elab_proc), NULL, cookie);
}

void
gt_pch_p_18range_check_info_d (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct range_check_info_d * x ATTRIBUTE_UNUSED = (struct range_check_info_d *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).low_bound), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).high_bound), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).disp), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).type), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).invariant_cond), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).inserted_cond), NULL, cookie);
}

void
gt_pch_p_27vec_range_check_info_va_gc_ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct vec<range_check_info,va_gc> * x ATTRIBUTE_UNUSED = (struct vec<range_check_info,va_gc> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

void
gt_pch_p_11loop_info_d (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct loop_info_d * x ATTRIBUTE_UNUSED = (struct loop_info_d *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).fndecl), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).stmt), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).loop_var), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).low_bound), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).high_bound), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).omp_loop_clauses), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).omp_construct_clauses), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).checks), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).invariants), NULL, cookie);
}

void
gt_pch_p_20vec_loop_info_va_gc_ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct vec<loop_info,va_gc> * x ATTRIBUTE_UNUSED = (struct vec<loop_info,va_gc> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

/* GC roots.  */

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_ada_trans_h[] = {
  {
    &gnu_loop_stack,
    1,
    sizeof (gnu_loop_stack),
    &gt_ggc_mx_vec_loop_info_va_gc_,
    &gt_pch_nx_vec_loop_info_va_gc_
  },
  {
    &gnu_return_var_stack,
    1,
    sizeof (gnu_return_var_stack),
    &gt_ggc_mx_vec_tree_va_gc_,
    &gt_pch_nx_vec_tree_va_gc_
  },
  {
    &gnu_return_label_stack,
    1,
    sizeof (gnu_return_label_stack),
    &gt_ggc_mx_vec_tree_va_gc_,
    &gt_pch_nx_vec_tree_va_gc_
  },
  {
    &gnu_elab_proc_stack,
    1,
    sizeof (gnu_elab_proc_stack),
    &gt_ggc_mx_vec_tree_va_gc_,
    &gt_pch_nx_vec_tree_va_gc_
  },
  {
    &gnu_incoming_exc_ptr,
    1,
    sizeof (gnu_incoming_exc_ptr),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gnu_except_ptr_stack,
    1,
    sizeof (gnu_except_ptr_stack),
    &gt_ggc_mx_vec_tree_va_gc_,
    &gt_pch_nx_vec_tree_va_gc_
  },
  {
    &elab_info_list,
    1,
    sizeof (elab_info_list),
    &gt_ggc_mx_elab_info,
    &gt_pch_nx_elab_info
  },
  {
    &current_stmt_group,
    1,
    sizeof (current_stmt_group),
    &gt_ggc_mx_stmt_group,
    &gt_pch_nx_stmt_group
  },
  LAST_GGC_ROOT_TAB
};

EXPORTED_CONST struct ggc_root_tab gt_ggc_rd_gt_ada_trans_h[] = {
  { &stmt_group_free_list, 1, sizeof (stmt_group_free_list), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

EXPORTED_CONST struct ggc_root_tab gt_pch_rs_gt_ada_trans_h[] = {
  { &thunk_labelno, 1, sizeof (thunk_labelno), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

