/*
 * libdpkg - Debian packaging suite library routines
 * pager.h - pager execution support
 *
 * Copyright © 2018 Guillem Jover <guillem@debian.org>
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef LIBDPKG_PAGER_H
#define LIBDPKG_PAGER_H

#include <dpkg/macros.h>

DPKG_BEGIN_DECLS

/**
 * @defgroup pager Pager execution
 * @ingroup dpkg-internal
 * @{
 */

struct pager;

const char *
pager_get_exec(void);

/** @} */

DPKG_END_DECLS

#endif /* LIBDPKG_PAGER_H */
