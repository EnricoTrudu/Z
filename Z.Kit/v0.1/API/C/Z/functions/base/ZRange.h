/* Z Kit C API - functions/base/ZRange.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2017 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_functions_base_ZRange_H__
#define __Z_functions_base_ZRange_H__

#include <Z/functions/base/constructors.h>
#include <Z/functions/base/value.h>


/* MARK: - Implementation */


#define Z_IMPLEMENTATION_RANGE(Type, type)						 \
											 \
											 \
Z_INLINE zboolean z_range_##type##_are_equal(ZRange##Type a, ZRange##Type b)		 \
	{return a.index == b.index && a.size == b.size;}				 \
											 \
											 \
Z_INLINE zboolean z_range_##type##_contains(ZRange##Type object, ZRange##Type other)	 \
	{										 \
	return	object.index		   <= other.index &&				 \
		object.index + object.size >= other.index + other.size;			 \
	}										 \
											 \
											 \
Z_INLINE zboolean z_range_##type##_contains_index(ZRange##Type object, z##type index)	 \
	{return index >= object.index && index < object.index + object.size;}		 \
											 \
											 \
Z_INLINE zsize z_range_##type##_end(ZRange##Type object)				 \
	{return object.index + object.size;}						 \
											 \
											 \
Z_INLINE ZRange##Type z_range_##type##_from_indices(z##type a, z##type b)		 \
	{return a < b ? z_range_##type(a, b - a) : z_range_##type(b, a - b);}		 \
											 \
											 \
Z_INLINE zboolean z_range_##type##_intersect(ZRange##Type a, ZRange##Type b)		 \
	{return a.index < b.index + b.size && b.index < a.index + a.size;}		 \
											 \
											 \
Z_INLINE ZRange##Type z_range_##type##_intersection(ZRange##Type a, ZRange##Type b)	 \
	{										 \
	z##type index = (a.index > b.index) ? a.index : b.index,			 \
		end   = z_##type##_minimum(a.index + a.size, b.index + b.size);		 \
											 \
	return end > index ? z_range_##type(index, end - index) : z_range_##type##_zero; \
	}										 \
											 \
											 \
Z_INLINE void z_range_##type##_swap(ZRange##Type *a, ZRange##Type *b)			 \
	{										 \
	ZRange##Type t = *a;								 \
											 \
	*a = *b; *b = t;								 \
	}										 \
											 \
											 \
Z_INLINE ZRange##Type z_range_##type##_union(ZRange##Type a, ZRange##Type b)		 \
	{										 \
	z##type	index = (a.index < b.index) ? a.index : b.index,			 \
		a_end = a.index + a.size,						 \
		b_end = b.index + b.size;						 \
											 \
        return z_range_##type(index, ((a_end > b_end) ? a_end : b_end) - index);	 \
	}										 \
											 \
											 \
Z_INLINE zboolean z_range_##type##_is_zero(ZRange##Type object)				 \
	{return object.index == 0 && object.size == 0;}


#define z_range_type_are_equal(	    TYPE) Z_INSERT_##TYPE##_fixed_type(z_range_, _are_equal	)
#define z_range_type_contains(	    TYPE) Z_INSERT_##TYPE##_fixed_type(z_range_, _contains	)
#define z_range_type_contains_index(TYPE) Z_INSERT_##TYPE##_fixed_type(z_range_, _contains_index)
#define z_range_type_end(	    TYPE) Z_INSERT_##TYPE##_fixed_type(z_range_, _end		)
#define z_range_type_from_indices(  TYPE) Z_INSERT_##TYPE##_fixed_type(z_range_, _from_indices	)
#define z_range_type_intersect(	    TYPE) Z_INSERT_##TYPE##_fixed_type(z_range_, _intersect	)
#define z_range_type_intersection(  TYPE) Z_INSERT_##TYPE##_fixed_type(z_range_, _intersection	)
#define z_range_type_is_zero(	    TYPE) Z_INSERT_##TYPE##_fixed_type(z_range_, _is_zero	)
#define z_range_type_swap(	    TYPE) Z_INSERT_##TYPE##_fixed_type(z_range_, _swap		)
#define z_range_type_union(	    TYPE) Z_INSERT_##TYPE##_fixed_type(z_range_, _union		)


/* MARK: - Implementation expansions */


Z_IMPLEMENTATION_RANGE(UInt8,  uint8 )
Z_IMPLEMENTATION_RANGE(UInt16, uint16)
Z_IMPLEMENTATION_RANGE(UInt32, uint32)

#ifdef Z_UINT64
	Z_IMPLEMENTATION_RANGE(UInt64, uint64)
#endif

#ifdef Z_UINT128
	Z_IMPLEMENTATION_RANGE(UInt128, uint128)
#endif


/* MARK: - Default type definitions */


#define z_range_are_equal      z_range_type_are_equal	  (SIZE)
#define z_range_contains       z_range_type_contains	  (SIZE)
#define z_range_contains_index z_range_type_contains_index(SIZE)
#define z_range_end	       z_range_type_end		  (SIZE)
#define z_range_from_indices   z_range_type_from_indices  (SIZE)
#define z_range_intersect      z_range_type_intersect	  (SIZE)
#define z_range_intersection   z_range_type_intersection  (SIZE)
#define z_range_is_zero	       z_range_type_is_zero	  (SIZE)
#define z_range_swap	       z_range_type_swap	  (SIZE)
#define z_range_union	       z_range_type_union	  (SIZE)


#endif /* __Z_functions_base_ZRange_H__ */
