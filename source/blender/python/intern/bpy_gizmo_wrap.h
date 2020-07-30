/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

/** \file
 * \ingroup pythonintern
 */

#ifndef __BPY_GIZMO_WRAP_H__
#define __BPY_GIZMO_WRAP_H__

struct wmGizmoGroupType;
struct wmGizmoType;

#ifdef __cplusplus
extern "C" {
#endif

/* exposed to rna/wm api */
void BPY_RNA_gizmo_wrapper(struct wmGizmoType *gzt, void *userdata);
void BPY_RNA_gizmogroup_wrapper(struct wmGizmoGroupType *gzgt, void *userdata);

#ifdef __cplusplus
}
#endif

#endif /* __BPY_GIZMO_WRAP_H__ */
