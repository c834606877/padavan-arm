/* Type information for cp/name-lookup.cc.
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
gt_ggc_mx_cp_binding_level (void *x_p)
{
  struct cp_binding_level * const x = (struct cp_binding_level *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).names);
      gt_ggc_m_15vec_tree_va_gc_ ((*x).using_directives);
      gt_ggc_m_27vec_cp_class_binding_va_gc_ ((*x).class_shadowed);
      gt_ggc_m_9tree_node ((*x).type_shadowed);
      gt_ggc_m_9tree_node ((*x).blocks);
      gt_ggc_m_9tree_node ((*x).this_entity);
      gt_ggc_m_16cp_binding_level ((*x).level_chain);
      gt_ggc_m_9tree_node ((*x).statement_list);
    }
}

void
gt_ggc_mx_cxx_binding (void *x_p)
{
  struct cxx_binding * const x = (struct cxx_binding *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_11cxx_binding ((*x).previous);
      gt_ggc_m_9tree_node ((*x).value);
      gt_ggc_m_9tree_node ((*x).type);
      gt_ggc_m_16cp_binding_level ((*x).scope);
    }
}

void
gt_ggc_mx_vec_cp_class_binding_va_gc_ (void *x_p)
{
  vec<cp_class_binding,va_gc> * const x = (vec<cp_class_binding,va_gc> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_ggc_mx (struct cp_class_binding& x_r ATTRIBUTE_UNUSED)
{
  struct cp_class_binding * ATTRIBUTE_UNUSED x = &x_r;
  gt_ggc_m_11cxx_binding ((*x).base);
  gt_ggc_m_9tree_node ((*x).identifier);
}

void
gt_pch_nx_cp_binding_level (void *x_p)
{
  struct cp_binding_level * const x = (struct cp_binding_level *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_16cp_binding_level))
    {
      gt_pch_n_9tree_node ((*x).names);
      gt_pch_n_15vec_tree_va_gc_ ((*x).using_directives);
      gt_pch_n_27vec_cp_class_binding_va_gc_ ((*x).class_shadowed);
      gt_pch_n_9tree_node ((*x).type_shadowed);
      gt_pch_n_9tree_node ((*x).blocks);
      gt_pch_n_9tree_node ((*x).this_entity);
      gt_pch_n_16cp_binding_level ((*x).level_chain);
      gt_pch_n_9tree_node ((*x).statement_list);
    }
}

void
gt_pch_nx_cxx_binding (void *x_p)
{
  struct cxx_binding * const x = (struct cxx_binding *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_11cxx_binding))
    {
      gt_pch_n_11cxx_binding ((*x).previous);
      gt_pch_n_9tree_node ((*x).value);
      gt_pch_n_9tree_node ((*x).type);
      gt_pch_n_16cp_binding_level ((*x).scope);
    }
}

void
gt_pch_nx_vec_cp_class_binding_va_gc_ (void *x_p)
{
  vec<cp_class_binding,va_gc> * const x = (vec<cp_class_binding,va_gc> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_27vec_cp_class_binding_va_gc_))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_nx (struct cp_class_binding& x_r ATTRIBUTE_UNUSED)
{
  struct cp_class_binding * ATTRIBUTE_UNUSED x = &x_r;
  gt_pch_n_11cxx_binding ((*x).base);
  gt_pch_n_9tree_node ((*x).identifier);
}

void
gt_pch_p_16cp_binding_level (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct cp_binding_level * x ATTRIBUTE_UNUSED = (struct cp_binding_level *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).names), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).using_directives), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).class_shadowed), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).type_shadowed), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).blocks), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).this_entity), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).level_chain), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).statement_list), NULL, cookie);
}

void
gt_pch_p_11cxx_binding (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct cxx_binding * x ATTRIBUTE_UNUSED = (struct cxx_binding *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).previous), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).value), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).type), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).scope), NULL, cookie);
}

void
gt_pch_p_27vec_cp_class_binding_va_gc_ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct vec<cp_class_binding,va_gc> * x ATTRIBUTE_UNUSED = (struct vec<cp_class_binding,va_gc> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

void
gt_pch_nx (struct cp_class_binding* x ATTRIBUTE_UNUSED,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
    op (&((*x).base), NULL, cookie);
    op (&((*x).identifier), NULL, cookie);
}

/* GC roots.  */

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_cp_name_lookup_h[] = {
  {
    &extern_c_decls,
    1,
    sizeof (extern_c_decls),
    &gt_ggc_mx_hash_table_named_decl_hash_,
    &gt_pch_nx_hash_table_named_decl_hash_
  },
  LAST_GGC_ROOT_TAB
};

EXPORTED_CONST struct ggc_root_tab gt_ggc_rd_gt_cp_name_lookup_h[] = {
  { &free_saved_scope, 1, sizeof (free_saved_scope), NULL, NULL },
  { &free_binding_level, 1, sizeof (free_binding_level), NULL, NULL },
  { &free_bindings, 1, sizeof (free_bindings), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

