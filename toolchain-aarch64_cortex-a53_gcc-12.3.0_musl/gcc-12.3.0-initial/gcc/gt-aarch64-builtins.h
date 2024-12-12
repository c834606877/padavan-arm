/* Type information for config/aarch64/aarch64-builtins.cc.
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

/* GC roots.  */

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_aarch64_builtins_h[] = {
  {
    &ls64_arm_data_t,
    1,
    sizeof (ls64_arm_data_t),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &aarch64_simd_intXI_type_node,
    1,
    sizeof (aarch64_simd_intXI_type_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &aarch64_simd_intCI_type_node,
    1,
    sizeof (aarch64_simd_intCI_type_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &aarch64_simd_intOI_type_node,
    1,
    sizeof (aarch64_simd_intOI_type_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &aarch64_simd_tuple_types[0][0],
    1 * (ARM_NEON_H_TYPES_LAST) * (3),
    sizeof (aarch64_simd_tuple_types[0][0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &aarch64_simd_types[0].name,
    1 * ARRAY_SIZE (aarch64_simd_types),
    sizeof (aarch64_simd_types[0]),
    (gt_pointer_walker) &gt_ggc_m_S,
    (gt_pointer_walker) &gt_pch_n_S
  },
  {
    &aarch64_simd_types[0].mangle,
    1 * ARRAY_SIZE (aarch64_simd_types),
    sizeof (aarch64_simd_types[0]),
    (gt_pointer_walker) &gt_ggc_m_S,
    (gt_pointer_walker) &gt_pch_n_S
  },
  {
    &aarch64_simd_types[0].itype,
    1 * ARRAY_SIZE (aarch64_simd_types),
    sizeof (aarch64_simd_types[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &aarch64_simd_types[0].eltype,
    1 * ARRAY_SIZE (aarch64_simd_types),
    sizeof (aarch64_simd_types[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &aarch64_builtin_decls[0],
    1 * (AARCH64_BUILTIN_MAX),
    sizeof (aarch64_builtin_decls[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  LAST_GGC_ROOT_TAB
};

EXPORTED_CONST struct ggc_root_tab gt_pch_rs_gt_aarch64_builtins_h[] = {
  { &aarch64_simd_types, 1, sizeof (aarch64_simd_types), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

