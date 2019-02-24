/* Z Kit - inspection/Z.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2019 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_inspection_Z_H
#define Z_inspection_Z_H

#define Z_HAS(		  WHAT ) Z_HAS_##WHAT
#define Z_HAS_CLASS(	  Which) Z_HAS_CLASS_##Which
#define Z_HAS_FUNCTION(	  which) Z_HAS_FUNCTION_##which
#define Z_HAS_TRAIT(	  Which) Z_HAS_TRAIT_##Which
#define Z_HAS_TRAIT_ALIAS(which) Z_HAS_TRAIT_ALIAS_##which
#define Z_HAS_TYPE(	  Which) Z_HAS_TYPE_##Which

#define Z_CLASS_HAS(Class, what) Z_CLASS_##Class##_HAS_##what
#define Z_TRAIT_HAS(Trait, what) Z_TRAIT_##Trait##_HAS_##what

#endif /* Z_inspection_Z_H */
