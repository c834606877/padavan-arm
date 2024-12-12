/* Type information for ipa-modref.cc.
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
gt_ggc_mx_modref_summary_lto (void *x_p)
{
  struct modref_summary_lto * const x = (struct modref_summary_lto *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_17modref_tree_tree_ ((*x).loads);
      gt_ggc_m_17modref_tree_tree_ ((*x).stores);
    }
}

void
gt_ggc_mx_fast_function_summary_modref_summary__va_gc_ (void *x_p)
{
  fast_function_summary<modref_summary*,va_gc> * const x = (fast_function_summary<modref_summary*,va_gc> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_ggc_mx (struct modref_summary *& x)
{
  if (x)
    gt_ggc_mx_modref_summary ((void *) x);
}

void
gt_ggc_mx_fast_function_summary_modref_summary_lto__va_gc_ (void *x_p)
{
  fast_function_summary<modref_summary_lto*,va_gc> * const x = (fast_function_summary<modref_summary_lto*,va_gc> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_ggc_mx (struct modref_summary_lto *& x)
{
  if (x)
    gt_ggc_mx_modref_summary_lto ((void *) x);
}

void
gt_ggc_mx_modref_tree_tree_ (void *x_p)
{
  modref_tree<tree> * const x = (modref_tree<tree> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_pch_nx_modref_summary_lto (void *x_p)
{
  struct modref_summary_lto * const x = (struct modref_summary_lto *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_18modref_summary_lto))
    {
      gt_pch_n_17modref_tree_tree_ ((*x).loads);
      gt_pch_n_17modref_tree_tree_ ((*x).stores);
    }
}

void
gt_pch_nx_fast_function_summary_modref_summary__va_gc_ (void *x_p)
{
  fast_function_summary<modref_summary*,va_gc> * const x = (fast_function_summary<modref_summary*,va_gc> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_44fast_function_summary_modref_summary__va_gc_))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_nx (struct modref_summary *& x)
{
  if (x)
    gt_pch_nx_modref_summary ((void *) x);
}

void
gt_pch_nx_fast_function_summary_modref_summary_lto__va_gc_ (void *x_p)
{
  fast_function_summary<modref_summary_lto*,va_gc> * const x = (fast_function_summary<modref_summary_lto*,va_gc> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_48fast_function_summary_modref_summary_lto__va_gc_))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_nx (struct modref_summary_lto *& x)
{
  if (x)
    gt_pch_nx_modref_summary_lto ((void *) x);
}

void
gt_pch_nx_modref_tree_tree_ (void *x_p)
{
  modref_tree<tree> * const x = (modref_tree<tree> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_17modref_tree_tree_))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_p_18modref_summary_lto (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct modref_summary_lto * x ATTRIBUTE_UNUSED = (struct modref_summary_lto *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).loads), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).stores), NULL, cookie);
}

void
gt_pch_p_44fast_function_summary_modref_summary__va_gc_ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct fast_function_summary<modref_summary*,va_gc> * x ATTRIBUTE_UNUSED = (struct fast_function_summary<modref_summary*,va_gc> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

void
gt_pch_p_48fast_function_summary_modref_summary_lto__va_gc_ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct fast_function_summary<modref_summary_lto*,va_gc> * x ATTRIBUTE_UNUSED = (struct fast_function_summary<modref_summary_lto*,va_gc> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

void
gt_pch_p_17modref_tree_tree_ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct modref_tree<tree> * x ATTRIBUTE_UNUSED = (struct modref_tree<tree> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

/* GC roots.  */

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_ipa_modref_h[] = {
  {
    &summaries_lto,
    1,
    sizeof (summaries_lto),
    &gt_ggc_mx_fast_function_summary_modref_summary_lto__va_gc_,
    &gt_pch_nx_fast_function_summary_modref_summary_lto__va_gc_
  },
  {
    &optimization_summaries,
    1,
    sizeof (optimization_summaries),
    &gt_ggc_mx_fast_function_summary_modref_summary__va_gc_,
    &gt_pch_nx_fast_function_summary_modref_summary__va_gc_
  },
  {
    &summaries,
    1,
    sizeof (summaries),
    &gt_ggc_mx_fast_function_summary_modref_summary__va_gc_,
    &gt_pch_nx_fast_function_summary_modref_summary__va_gc_
  },
  LAST_GGC_ROOT_TAB
};

