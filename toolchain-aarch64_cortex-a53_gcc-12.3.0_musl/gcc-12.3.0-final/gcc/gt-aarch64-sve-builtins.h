/* Type information for config/aarch64/aarch64-sve-builtins.cc.
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
gt_ggc_mx_registered_function (void *x_p)
{
  struct registered_function * const x = (struct registered_function *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (&((*x).instance));
      gt_ggc_m_9tree_node ((*x).decl);
    }
}

void
gt_ggc_mx_vec_registered_function__va_gc_ (void *x_p)
{
  vec<registered_function*,va_gc> * const x = (vec<registered_function*,va_gc> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_ggc_mx (struct registered_function *& x)
{
  if (x)
    gt_ggc_mx_registered_function ((void *) x);
}

void
gt_pch_nx_registered_function (void *x_p)
{
  struct registered_function * const x = (struct registered_function *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_19registered_function))
    {
      gt_pch_nx (&((*x).instance));
      gt_pch_n_9tree_node ((*x).decl);
    }
}

void
gt_pch_nx_vec_registered_function__va_gc_ (void *x_p)
{
  vec<registered_function*,va_gc> * const x = (vec<registered_function*,va_gc> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_31vec_registered_function__va_gc_))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_nx (struct registered_function *& x)
{
  if (x)
    gt_pch_nx_registered_function ((void *) x);
}

void
gt_pch_p_19registered_function (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct registered_function * x ATTRIBUTE_UNUSED = (struct registered_function *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x).instance), op, cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).decl), NULL, cookie);
}

void
gt_pch_p_31vec_registered_function__va_gc_ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct vec<registered_function*,va_gc> * x ATTRIBUTE_UNUSED = (struct vec<registered_function*,va_gc> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

/* GC roots.  */

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_aarch64_sve_builtins_h[] = {
  {
    &registered_functions,
    1,
    sizeof (registered_functions),
    &gt_ggc_mx_vec_registered_function__va_gc_,
    &gt_pch_nx_vec_registered_function__va_gc_
  },
  {
    &acle_svprfop,
    1,
    sizeof (acle_svprfop),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &acle_svpattern,
    1,
    sizeof (acle_svpattern),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &acle_vector_types[0][0],
    1 * (MAX_TUPLE_SIZE) * (NUM_VECTOR_TYPES + 1),
    sizeof (acle_vector_types[0][0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &abi_vector_types[0],
    1 * (NUM_VECTOR_TYPES + 1),
    sizeof (abi_vector_types[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &scalar_types[0],
    1 * (NUM_VECTOR_TYPES),
    sizeof (scalar_types[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  LAST_GGC_ROOT_TAB
};

