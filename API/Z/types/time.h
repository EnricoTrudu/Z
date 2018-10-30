/* Z Kit - types/time.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2018 Manuel Sainz de Baranda y Goñi.

This library  is free software: you  can redistribute it and/or  modify it under
the terms  of the  GNU Lesser General  Public License as  published by  the Free
Software Foundation,  either version 3 of  the License, or (at  your option) any
later version.

This library is distributed in the hope  that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty  of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

You should have received  a copy of the GNU Lesser  General Public License along
with this library. If not, see <http://www.gnu.org/licenses/>. */

#ifndef _Z_types_time_H_
#define _Z_types_time_H_

#include <Z/types/base.h>

Z_DEFINE_STRICT_STRUCTURE (
	Z128Bit	seconds;
	Z64Bit	attoseconds;
) ZAttotime;

Z_DEFINE_STRICT_STRUCTURE (
	Z128Bit seconds;
	zuint32 nanoseconds;
) ZNanotime;

#endif /* _Z_types_time_H_ */
