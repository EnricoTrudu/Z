/* Z Kit - formats/floating-point/x87.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2018 Manuel Sainz de Baranda y Goñi.

This library is  free software: you can redistribute it  and/or modify it under
the terms  of the GNU  Lesser General Public License  as published by  the Free
Software Foundation, either  version 3 of the License, or  (at your option) any
later version.

This library is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

You should have received  a copy of the GNU Lesser General Public License along
with this library. If not, see <http://www.gnu.org/licenses/>. */

#ifndef _Z_formats_floating_point_x87_H_
#define _Z_formats_floating_point_x87_H_

/* MARK: - binary80 */

#define Z_X87_BINARY80_BITS		    80
#define Z_X87_BINARY80_BIAS		    16383
#define Z_X87_BINARY80_EPSILON		    1.0842021724855044340075e-19
#define Z_X87_BINARY80_MINIMUM		    3.3621031431120935062627e-4932
#define Z_X87_BINARY80_MAXIMUM		    1.1897314953572317650213e+4932
#define Z_X87_BINARY80_DECIMAL_DIGITS	    18
#define Z_X87_BINARY80_SIGNIFICAND_OFFSET   0
#define Z_X87_BINARY80_SIGNIFICAND_BITS	    64
#define Z_X87_BINARY80_SIGNIFICAND_DIGITS   64
#define Z_X87_BINARY80_EXPONENT_OFFSET	    64
#define Z_X87_BINARY80_EXPONENT_BITS	    15
#define Z_X87_BINARY80_EXPONENT_RADIX	    2
#define Z_X87_BINARY80_EXPONENT_MINIMUM	    -16381
#define Z_X87_BINARY80_EXPONENT_MAXIMUM	    16384
#define Z_X87_BINARY80_EXPONENT_10_MINIMUM  -4931
#define Z_X87_BINARY80_EXPONENT_10_MAXIMUM  4932
#define Z_X87_BINARY80_SIGN_OFFSET	    79
#define Z_X87_BINARY80_SIGN_BITS	    1

/* MARK: - binary96 */

#define Z_X87_BINARY96_BITS		    96
#define Z_X87_BINARY96_BIAS		    Z_X87_BINARY80_BIAS
#define Z_X87_BINARY96_EPSILON		    Z_X87_BINARY80_EPSILON
#define Z_X87_BINARY96_MINIMUM		    Z_X87_BINARY80_MINIMUM
#define Z_X87_BINARY96_MAXIMUM		    Z_X87_BINARY80_MAXIMUM
#define Z_X87_BINARY96_DECIMAL_DIGITS	    Z_X87_BINARY80_DECIMAL_DIGITS
#define Z_X87_BINARY96_SIGNIFICAND_OFFSET   Z_X87_BINARY80_SIGNIFICAND_OFFSET
#define Z_X87_BINARY96_SIGNIFICAND_BITS	    Z_X87_BINARY80_SIGNIFICAND_BITS
#define Z_X87_BINARY96_SIGNIFICAND_DIGITS   Z_X87_BINARY80_SIGNIFICAND_DIGITS
#define Z_X87_BINARY96_EXPONENT_OFFSET	    Z_X87_BINARY80_EXPONENT_OFFSET
#define Z_X87_BINARY96_EXPONENT_BITS	    Z_X87_BINARY80_EXPONENT_BITS
#define Z_X87_BINARY96_EXPONENT_RADIX	    Z_X87_BINARY80_EXPONENT_RADIX
#define Z_X87_BINARY96_EXPONENT_MINIMUM	    Z_X87_BINARY80_EXPONENT_MINIMUM
#define Z_X87_BINARY96_EXPONENT_MAXIMUM	    Z_X87_BINARY80_EXPONENT_MAXIMUM
#define Z_X87_BINARY96_EXPONENT_10_MINIMUM  Z_X87_BINARY80_EXPONENT_10_MINIMUM
#define Z_X87_BINARY96_EXPONENT_10_MAXIMUM  Z_X87_BINARY80_EXPONENT_10_MAXIMUM
#define Z_X87_BINARY96_SIGN_OFFSET	    Z_X87_BINARY80_SIGN_OFFSET
#define Z_X87_BINARY96_SIGN_BITS	    Z_X87_BINARY80_SIGN_BITS

/* MARK: - binary128 */

#define Z_X87_BINARY128_BITS		    128
#define Z_X87_BINARY128_BIAS		    Z_X87_BINARY80_BIAS
#define Z_X87_BINARY128_EPSILON		    Z_X87_BINARY80_EPSILON
#define Z_X87_BINARY128_MINIMUM		    Z_X87_BINARY80_MINIMUM
#define Z_X87_BINARY128_MAXIMUM		    Z_X87_BINARY80_MAXIMUM
#define Z_X87_BINARY128_DECIMAL_DIGITS	    Z_X87_BINARY80_DECIMAL_DIGITS
#define Z_X87_BINARY128_SIGNIFICAND_OFFSET  Z_X87_BINARY80_SIGNIFICAND_OFFSET
#define Z_X87_BINARY128_SIGNIFICAND_BITS    Z_X87_BINARY80_SIGNIFICAND_BITS
#define Z_X87_BINARY128_SIGNIFICAND_DIGITS  Z_X87_BINARY80_SIGNIFICAND_DIGITS
#define Z_X87_BINARY128_EXPONENT_OFFSET	    Z_X87_BINARY80_EXPONENT_OFFSET
#define Z_X87_BINARY128_EXPONENT_BITS	    Z_X87_BINARY80_EXPONENT_BITS
#define Z_X87_BINARY128_EXPONENT_RADIX	    Z_X87_BINARY80_EXPONENT_RADIX
#define Z_X87_BINARY128_EXPONENT_MINIMUM    Z_X87_BINARY80_EXPONENT_MINIMUM
#define Z_X87_BINARY128_EXPONENT_MAXIMUM    Z_X87_BINARY80_EXPONENT_MAXIMUM
#define Z_X87_BINARY128_EXPONENT_10_MINIMUM Z_X87_BINARY80_EXPONENT_10_MINIMUM
#define Z_X87_BINARY128_EXPONENT_10_MAXIMUM Z_X87_BINARY80_EXPONENT_10_MAXIMUM
#define Z_X87_BINARY128_SIGN_OFFSET	    Z_X87_BINARY80_SIGN_OFFSET
#define Z_X87_BINARY128_SIGN_BITS	    Z_X87_BINARY80_SIGN_BITS

#endif /* _Z_formats_floating_point_Intel_H_ */
