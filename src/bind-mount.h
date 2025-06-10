/* Bind mount detection.

Copyright (C) 2005, 2007, 2008 Red Hat, Inc. All rights reserved.
This copyrighted material is made available to anyone wishing to use, modify,
copy, or redistribute it subject to the terms and conditions of the GNU General
Public License v.2.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 51 Franklin
Street, Fifth Floor, Boston, MA 02110-1301, USA.

Author: Miloslav Trmac <mitr@redhat.com> */

#ifndef BIND_MOUNT_H__
#define BIND_MOUNT_H__

#include <config.h>

#include <stdbool.h>

/* System mount information file */
#define MOUNTINFO_PATH "/proc/self/mountinfo"

/* Return true if PATH is a destination of a bind mount.
   (Bind mounts "to self" are ignored.) */
extern bool is_bind_mount (const char *path);

/* Initialize state for is_bind_mount(), to read data from MOUNTINFO. */
extern void bind_mount_init (const char *mountinfo);

#endif
