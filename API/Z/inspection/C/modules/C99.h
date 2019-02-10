/* Z Kit - inspection/C/modules/C99.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2019 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_inspection_C_modules_C99_H_
#define Z_inspection_C_modules_C99_H_

#include <Z/inspection/C/modules/C95.h>

#define Z_C_HAS_C99_RULES_ON_INTEGER_LITERALS		      TRUE
#define Z_C_HAS_C99_RULES_ON_TYPE_COMPATIBILITY		      TRUE
#define Z_C_HAS_C99_RULES_ON_TYPE_CONVERSION		      TRUE
#define Z_C_HAS_COMPOUND_LITERAL			      TRUE
#define Z_C_HAS_CONVERSION_OF_NON_LVALUE_ARRAY_TO_POINTER     TRUE
#define Z_C_HAS_CPP_STYLE_COMMENT			      TRUE
#define Z_C_HAS_DESIGNATED_INITIALIZER			      TRUE
#define Z_C_HAS_EMPTY_MACRO_ARGUMENT			      TRUE
#define Z_C_HAS_EXTENDED_IDENTIFIER			      TRUE
#define Z_C_HAS_FLEXIBLE_ARRAY_MEMBER			      TRUE
#define Z_C_HAS_FOR_WITH_DECLARATION			      TRUE
#define Z_C_HAS_IDEMPOTENT_TYPE_QUALIFIERS		      TRUE
#define Z_C_HAS_LOCAL_AGGREGATE_NON_CONSTANT_INITIALIZATION   TRUE
#define Z_C_HAS_MIXED_DECLARATIONS_AND_CODE		      TRUE
#define Z_C_HAS_PREPROCESSOR_ARITHMETIC_DONE_IN_INTMAX	      TRUE
#define Z_C_HAS_RELIABLE_INTEGER_DIVISION		      TRUE
#define Z_C_HAS_REMOVAL_OF_ILL_FORMED_RETURN		      TRUE
#define Z_C_HAS_REMOVAL_OF_IMPLICIT_FUNCTION_DECLARATION      TRUE
#define Z_C_HAS_REMOVAL_OF_IMPLICIT_INT			      TRUE
#define Z_C_HAS_STATIC_AND_TYPE_QUALIFIERS_IN_ARRAY_PARAMETER TRUE
#define Z_C_HAS_TRAILING_COMMA_ALLOWED_IN_ENUMERATION	      TRUE
#define Z_C_HAS_UNIVERSAL_CHARACTER_NAMES		      TRUE
#define Z_C_HAS_VARIADIC_MACRO				      TRUE
#define Z_C_HAS_VLA					      TRUE
#define Z_C_HAS_IDENTIFIER_FUNC				      TRUE
#define Z_C_HAS_LITERAL_HEXADECIMAL_FLOATING_POINT	      TRUE
#define Z_C_HAS_LITERAL_WCHAR_T_CHARACTER		      TRUE
#define Z_C_HAS_LITERAL_WCHAR_T_STRING			      TRUE
#define Z_C_HAS_PREPROCESSOR_OPERATOR_PRAGMA		      TRUE
#define Z_C_HAS_SPECIFIER_INLINE			      TRUE
#define Z_C_HAS_STANDARD_PRAGMA_CX_LIMITED_RANGE	      TRUE
#define Z_C_HAS_STANDARD_PRAGMA_FENV_ACCESS		      TRUE
#define Z_C_HAS_STANDARD_PRAGMA_FP_CONTRACT		      TRUE
#define Z_C_HAS_TYPE_BOOL				      TRUE
#define Z_C_HAS_TYPE_LONG_LONG				      TRUE
#define Z_C_HAS_TYPE_QUALIFIER_RESTRICT			      TRUE

#if defined(__STDC_IEC_559_COMPLEX__) && __STDC_IEC_559_COMPLEX__ == 1
#	define Z_C_HAS_TYPE_DOUBLE_COMPLEX	TRUE
#	define Z_C_HAS_TYPE_FLOAT_COMPLEX	TRUE
#	define Z_C_HAS_TYPE_LONG_DOUBLE_COMPLEX TRUE
#	define Z_C_HAS_TYPE_MODIFIER_COMPLEX	TRUE

#	ifdef _Imaginary_I
#		define Z_C_HAS_TYPE_DOUBLE_IMAGINARY	  TRUE
#		define Z_C_HAS_TYPE_FLOAT_IMAGINARY	  TRUE
#		define Z_C_HAS_TYPE_LONG_DOUBLE_IMAGINARY TRUE
#		define Z_C_HAS_TYPE_MODIFIER_IMAGINARY	  TRUE
#	endif
#endif

#endif /* Z_inspection_C_modules_C99_H_ */
