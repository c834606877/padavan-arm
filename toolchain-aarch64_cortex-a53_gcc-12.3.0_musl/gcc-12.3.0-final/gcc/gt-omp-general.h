/* Type information for omp-general.cc.
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
gt_ggc_mx_vec_omp_declare_variant_entry_va_gc_ (void *x_p)
{
  vec<omp_declare_variant_entry,va_gc> * const x = (vec<omp_declare_variant_entry,va_gc> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_ggc_mx (struct omp_declare_variant_entry& x_r ATTRIBUTE_UNUSED)
{
  struct omp_declare_variant_entry * ATTRIBUTE_UNUSED x = &x_r;
  gt_ggc_m_11symtab_node ((*x).variant);
  gt_ggc_m_9tree_node ((*x).ctx);
}

void
gt_ggc_mx_omp_declare_variant_base_entry (void *x_p)
{
  struct omp_declare_variant_base_entry * const x = (struct omp_declare_variant_base_entry *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_11symtab_node ((*x).base);
      gt_ggc_m_11symtab_node ((*x).node);
      gt_ggc_m_36vec_omp_declare_variant_entry_va_gc_ ((*x).variants);
    }
}

void
gt_ggc_mx (struct omp_declare_variant_base_entry& x_r ATTRIBUTE_UNUSED)
{
  struct omp_declare_variant_base_entry * ATTRIBUTE_UNUSED x = &x_r;
  gt_ggc_m_11symtab_node ((*x).base);
  gt_ggc_m_11symtab_node ((*x).node);
  gt_ggc_m_36vec_omp_declare_variant_entry_va_gc_ ((*x).variants);
}

void
gt_ggc_mx (struct omp_declare_variant_base_entry *& x)
{
  if (x)
    gt_ggc_mx_omp_declare_variant_base_entry ((void *) x);
}

void
gt_ggc_mx_hash_table_omp_declare_variant_hasher_ (void *x_p)
{
  hash_table<omp_declare_variant_hasher> * const x = (hash_table<omp_declare_variant_hasher> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_ggc_mx (struct omp_declare_variant_hasher& x_r ATTRIBUTE_UNUSED)
{
  struct omp_declare_variant_hasher * ATTRIBUTE_UNUSED x = &x_r;
}

void
gt_ggc_mx_hash_table_omp_declare_variant_alt_hasher_ (void *x_p)
{
  hash_table<omp_declare_variant_alt_hasher> * const x = (hash_table<omp_declare_variant_alt_hasher> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_ggc_mx (struct omp_declare_variant_alt_hasher& x_r ATTRIBUTE_UNUSED)
{
  struct omp_declare_variant_alt_hasher * ATTRIBUTE_UNUSED x = &x_r;
}

void
gt_pch_nx_vec_omp_declare_variant_entry_va_gc_ (void *x_p)
{
  vec<omp_declare_variant_entry,va_gc> * const x = (vec<omp_declare_variant_entry,va_gc> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_36vec_omp_declare_variant_entry_va_gc_))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_nx (struct omp_declare_variant_entry& x_r ATTRIBUTE_UNUSED)
{
  struct omp_declare_variant_entry * ATTRIBUTE_UNUSED x = &x_r;
  gt_pch_n_11symtab_node ((*x).variant);
  gt_pch_n_9tree_node ((*x).ctx);
}

void
gt_pch_nx_omp_declare_variant_base_entry (void *x_p)
{
  struct omp_declare_variant_base_entry * const x = (struct omp_declare_variant_base_entry *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_30omp_declare_variant_base_entry))
    {
      gt_pch_n_11symtab_node ((*x).base);
      gt_pch_n_11symtab_node ((*x).node);
      gt_pch_n_36vec_omp_declare_variant_entry_va_gc_ ((*x).variants);
    }
}

void
gt_pch_nx (struct omp_declare_variant_base_entry& x_r ATTRIBUTE_UNUSED)
{
  struct omp_declare_variant_base_entry * ATTRIBUTE_UNUSED x = &x_r;
  gt_pch_n_11symtab_node ((*x).base);
  gt_pch_n_11symtab_node ((*x).node);
  gt_pch_n_36vec_omp_declare_variant_entry_va_gc_ ((*x).variants);
}

void
gt_pch_nx (struct omp_declare_variant_base_entry *& x)
{
  if (x)
    gt_pch_nx_omp_declare_variant_base_entry ((void *) x);
}

void
gt_pch_nx_hash_table_omp_declare_variant_hasher_ (void *x_p)
{
  hash_table<omp_declare_variant_hasher> * const x = (hash_table<omp_declare_variant_hasher> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_38hash_table_omp_declare_variant_hasher_))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_nx (struct omp_declare_variant_hasher& x_r ATTRIBUTE_UNUSED)
{
  struct omp_declare_variant_hasher * ATTRIBUTE_UNUSED x = &x_r;
}

void
gt_pch_nx_hash_table_omp_declare_variant_alt_hasher_ (void *x_p)
{
  hash_table<omp_declare_variant_alt_hasher> * const x = (hash_table<omp_declare_variant_alt_hasher> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_42hash_table_omp_declare_variant_alt_hasher_))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_nx (struct omp_declare_variant_alt_hasher& x_r ATTRIBUTE_UNUSED)
{
  struct omp_declare_variant_alt_hasher * ATTRIBUTE_UNUSED x = &x_r;
}

void
gt_pch_p_36vec_omp_declare_variant_entry_va_gc_ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct vec<omp_declare_variant_entry,va_gc> * x ATTRIBUTE_UNUSED = (struct vec<omp_declare_variant_entry,va_gc> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

void
gt_pch_nx (struct omp_declare_variant_entry* x ATTRIBUTE_UNUSED,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
    op (&((*x).variant), NULL, cookie);
    op (&((*x).ctx), NULL, cookie);
}

void
gt_pch_p_30omp_declare_variant_base_entry (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct omp_declare_variant_base_entry * x ATTRIBUTE_UNUSED = (struct omp_declare_variant_base_entry *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).base), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).node), NULL, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).variants), NULL, cookie);
}

void
gt_pch_nx (struct omp_declare_variant_base_entry* x ATTRIBUTE_UNUSED,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
    op (&((*x).base), NULL, cookie);
    op (&((*x).node), NULL, cookie);
    op (&((*x).variants), NULL, cookie);
}

void
gt_pch_p_38hash_table_omp_declare_variant_hasher_ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct hash_table<omp_declare_variant_hasher> * x ATTRIBUTE_UNUSED = (struct hash_table<omp_declare_variant_hasher> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

void
gt_pch_nx (struct omp_declare_variant_hasher* x ATTRIBUTE_UNUSED,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
}

void
gt_pch_p_42hash_table_omp_declare_variant_alt_hasher_ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct hash_table<omp_declare_variant_alt_hasher> * x ATTRIBUTE_UNUSED = (struct hash_table<omp_declare_variant_alt_hasher> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

void
gt_pch_nx (struct omp_declare_variant_alt_hasher* x ATTRIBUTE_UNUSED,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
}

/* GC roots.  */

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_omp_general_h[] = {
  {
    &omp_declare_variant_alt,
    1,
    sizeof (omp_declare_variant_alt),
    &gt_ggc_mx_hash_table_omp_declare_variant_alt_hasher_,
    &gt_pch_nx_hash_table_omp_declare_variant_alt_hasher_
  },
  {
    &omp_declare_variants,
    1,
    sizeof (omp_declare_variants),
    &gt_ggc_mx_hash_table_omp_declare_variant_hasher_,
    &gt_pch_nx_hash_table_omp_declare_variant_hasher_
  },
  LAST_GGC_ROOT_TAB
};

