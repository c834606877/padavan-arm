/* Type information for cp/module.cc.
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
gt_ggc_mx_module_state (void *x_p)
{
  struct module_state * x = (struct module_state *)x_p;
  struct module_state * xlimit = x;
  while (ggc_test_and_set_mark (xlimit))
   xlimit = ((*xlimit).parent);
  while (x != xlimit)
    {
      gt_ggc_m_11bitmap_head ((*x).imports);
      gt_ggc_m_11bitmap_head ((*x).exports);
      gt_ggc_m_12module_state ((*x).parent);
      gt_ggc_m_9tree_node ((*x).name);
      gt_ggc_m_8slurping ((*x).slurp);
      gt_ggc_m_S ((*x).flatname);
      gt_ggc_m_S ((*x).filename);
      x = ((*x).parent);
    }
}

void
gt_ggc_mx (struct module_state& x_r ATTRIBUTE_UNUSED)
{
  struct module_state * ATTRIBUTE_UNUSED x = &x_r;
  gt_ggc_m_11bitmap_head ((*x).imports);
  gt_ggc_m_11bitmap_head ((*x).exports);
  gt_ggc_m_12module_state ((*x).parent);
  gt_ggc_m_9tree_node ((*x).name);
  gt_ggc_m_8slurping ((*x).slurp);
  gt_ggc_m_S ((*x).flatname);
  gt_ggc_m_S ((*x).filename);
}

void
gt_ggc_mx (struct module_state *& x)
{
  if (x)
    gt_ggc_mx_module_state ((void *) x);
}

void
gt_ggc_mx_slurping (void *x_p)
{
  struct slurping * const x = (struct slurping *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_11bitmap_head ((*x).headers);
    }
}

void
gt_ggc_mx_vec_module_state__va_gc_ (void *x_p)
{
  vec<module_state*,va_gc> * const x = (vec<module_state*,va_gc> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_ggc_mx_hash_table_module_state_hash_ (void *x_p)
{
  hash_table<module_state_hash> * const x = (hash_table<module_state_hash> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_ggc_mx (struct module_state_hash& x_r ATTRIBUTE_UNUSED)
{
  struct module_state_hash * ATTRIBUTE_UNUSED x = &x_r;
}

void
gt_ggc_mx_hash_table_note_def_cache_hasher_ (void *x_p)
{
  hash_table<note_def_cache_hasher> * const x = (hash_table<note_def_cache_hasher> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_ggc_mx (struct note_def_cache_hasher& x_r ATTRIBUTE_UNUSED)
{
  struct note_def_cache_hasher * ATTRIBUTE_UNUSED x = &x_r;
}

void
gt_ggc_mx_vec_macro_export_va_gc_ (void *x_p)
{
  vec<macro_export,va_gc> * const x = (vec<macro_export,va_gc> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_ggc_mx (struct macro_export& x_r ATTRIBUTE_UNUSED)
{
  struct macro_export * ATTRIBUTE_UNUSED x = &x_r;
  gt_ggc_m_9cpp_macro ((*x).def);
}

void
gt_pch_nx_module_state (void *x_p)
{
  struct module_state * x = (struct module_state *)x_p;
  struct module_state * xlimit = x;
  while (gt_pch_note_object (xlimit, xlimit, gt_pch_p_12module_state))
   xlimit = ((*xlimit).parent);
  while (x != xlimit)
    {
      gt_pch_n_11bitmap_head ((*x).imports);
      gt_pch_n_11bitmap_head ((*x).exports);
      gt_pch_n_12module_state ((*x).parent);
      gt_pch_n_9tree_node ((*x).name);
      gt_pch_n_8slurping ((*x).slurp);
      gt_pch_n_S ((*x).flatname);
      gt_pch_n_S ((*x).filename);
      x = ((*x).parent);
    }
}

void
gt_pch_nx (struct module_state& x_r ATTRIBUTE_UNUSED)
{
  struct module_state * ATTRIBUTE_UNUSED x = &x_r;
  gt_pch_n_11bitmap_head ((*x).imports);
  gt_pch_n_11bitmap_head ((*x).exports);
  gt_pch_n_12module_state ((*x).parent);
  gt_pch_n_9tree_node ((*x).name);
  gt_pch_n_8slurping ((*x).slurp);
  gt_pch_n_S ((*x).flatname);
  gt_pch_n_S ((*x).filename);
}

void
gt_pch_nx (struct module_state *& x)
{
  if (x)
    gt_pch_nx_module_state ((void *) x);
}

void
gt_pch_nx_slurping (void *x_p)
{
  struct slurping * const x = (struct slurping *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_8slurping))
    {
      gt_pch_n_11bitmap_head ((*x).headers);
    }
}

void
gt_pch_nx_vec_module_state__va_gc_ (void *x_p)
{
  vec<module_state*,va_gc> * const x = (vec<module_state*,va_gc> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_24vec_module_state__va_gc_))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_nx_hash_table_module_state_hash_ (void *x_p)
{
  hash_table<module_state_hash> * const x = (hash_table<module_state_hash> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_29hash_table_module_state_hash_))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_nx (struct module_state_hash& x_r ATTRIBUTE_UNUSED)
{
  struct module_state_hash * ATTRIBUTE_UNUSED x = &x_r;
}

void
gt_pch_nx_hash_table_note_def_cache_hasher_ (void *x_p)
{
  hash_table<note_def_cache_hasher> * const x = (hash_table<note_def_cache_hasher> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_33hash_table_note_def_cache_hasher_))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_nx (struct note_def_cache_hasher& x_r ATTRIBUTE_UNUSED)
{
  struct note_def_cache_hasher * ATTRIBUTE_UNUSED x = &x_r;
}

void
gt_pch_nx_vec_macro_export_va_gc_ (void *x_p)
{
  vec<macro_export,va_gc> * const x = (vec<macro_export,va_gc> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_23vec_macro_export_va_gc_))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_nx (struct macro_export& x_r ATTRIBUTE_UNUSED)
{
  struct macro_export * ATTRIBUTE_UNUSED x = &x_r;
  gt_pch_n_9cpp_macro ((*x).def);
}

void
gt_pch_p_12module_state (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct module_state * x ATTRIBUTE_UNUSED = (struct module_state *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).imports), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).exports), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).parent), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).name), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).slurp), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).flatname), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).filename), NULL, cookie);
}

void
gt_pch_nx (struct module_state* x ATTRIBUTE_UNUSED,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
    op (&((*x).imports), NULL, cookie);
    op (&((*x).exports), NULL, cookie);
    op (&((*x).parent), NULL, cookie);
    op (&((*x).name), NULL, cookie);
    op (&((*x).slurp), NULL, cookie);
    op (&((*x).flatname), NULL, cookie);
    op (&((*x).filename), NULL, cookie);
}

void
gt_pch_p_8slurping (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct slurping * x ATTRIBUTE_UNUSED = (struct slurping *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).headers), NULL, cookie);
}

void
gt_pch_p_24vec_module_state__va_gc_ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct vec<module_state*,va_gc> * x ATTRIBUTE_UNUSED = (struct vec<module_state*,va_gc> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

void
gt_pch_p_29hash_table_module_state_hash_ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct hash_table<module_state_hash> * x ATTRIBUTE_UNUSED = (struct hash_table<module_state_hash> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

void
gt_pch_nx (struct module_state_hash* x ATTRIBUTE_UNUSED,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
}

void
gt_pch_p_33hash_table_note_def_cache_hasher_ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct hash_table<note_def_cache_hasher> * x ATTRIBUTE_UNUSED = (struct hash_table<note_def_cache_hasher> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

void
gt_pch_nx (struct note_def_cache_hasher* x ATTRIBUTE_UNUSED,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
}

void
gt_pch_p_23vec_macro_export_va_gc_ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct vec<macro_export,va_gc> * x ATTRIBUTE_UNUSED = (struct vec<macro_export,va_gc> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

void
gt_pch_nx (struct macro_export* x ATTRIBUTE_UNUSED,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
    op (&((*x).def), NULL, cookie);
}

/* GC roots.  */

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_cp_module_h[] = {
  {
    &headers,
    1,
    sizeof (headers),
    &gt_ggc_mx_bitmap_head,
    &gt_pch_nx_bitmap_head
  },
  {
    &macro_exports,
    1,
    sizeof (macro_exports),
    &gt_ggc_mx_vec_macro_export_va_gc_,
    &gt_pch_nx_vec_macro_export_va_gc_
  },
  {
    &note_defs,
    1,
    sizeof (note_defs),
    &gt_ggc_mx_hash_table_note_def_cache_hasher_,
    &gt_pch_nx_hash_table_note_def_cache_hasher_
  },
  {
    &partial_specializations,
    1,
    sizeof (partial_specializations),
    &gt_ggc_mx_vec_tree_va_gc_,
    &gt_pch_nx_vec_tree_va_gc_
  },
  {
    &class_members,
    1,
    sizeof (class_members),
    &gt_ggc_mx_vec_tree_va_gc_,
    &gt_pch_nx_vec_tree_va_gc_
  },
  {
    &modules_hash,
    1,
    sizeof (modules_hash),
    &gt_ggc_mx_hash_table_module_state_hash_,
    &gt_pch_nx_hash_table_module_state_hash_
  },
  {
    &modules,
    1,
    sizeof (modules),
    &gt_ggc_mx_vec_module_state__va_gc_,
    &gt_pch_nx_vec_module_state__va_gc_
  },
  {
    &fixed_trees,
    1,
    sizeof (fixed_trees),
    &gt_ggc_mx_vec_tree_va_gc_,
    &gt_pch_nx_vec_tree_va_gc_
  },
  LAST_GGC_ROOT_TAB
};

void
gt_clear_caches_gt_cp_module_h ()
{
  gt_cleare_cache (note_defs);
}

