/*
  Copyright (c) 2012-2013 DataLab, S.L. <http://www.datalab.es>

  This file is part of the cluster/ida translator for GlusterFS.

  The cluster/ida translator for GlusterFS is free software: you can
  redistribute it and/or modify it under the terms of the GNU General
  Public License as published by the Free Software Foundation, either
  version 3 of the License, or (at your option) any later version.

  The cluster/ida translator for GlusterFS is distributed in the hope
  that it will be useful, but WITHOUT ANY WARRANTY; without even the
  implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE. See the GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with the cluster/ida translator for GlusterFS. If not, see
  <http://www.gnu.org/licenses/>.
*/

#include "ida-check.h"
#include "ida-manager.h"

int32_t ida_lock_assign(ida_local_t * local, struct gf_flock * dst, struct gf_flock * src)
{
    IDA_VALIDATE_OR_RETURN_ERROR(local->xl->name, src, EINVAL);
    *dst = *src;

    return 0;
}

void ida_lock_unassign(struct gf_flock * dst)
{
}

int32_t ida_lock_combine(ida_local_t * local, struct gf_flock * dst, struct gf_flock * src)
{
    // TODO: Combine locks
    return 0;
}
