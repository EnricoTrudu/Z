/* Z Kit - inspection/C++/modules/C++17.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2018 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef _Z_inspection_CPP_modules_CPP17_H_
#define _Z_inspection_CPP_modules_CPP17_H_

#include <Z/inspection/C++/modules/C++14.h>

#define Z_CPP_HAS_AGGREGATE_WITH_BASE_CLASSES			     TRUE /* P0017R1 */
#define Z_CPP_HAS_ATTRIBUTES_FOR_ENUMERATION			     TRUE /* N4266   */
#define Z_CPP_HAS_ATTRIBUTES_FOR_NAMESPACE			     TRUE /* N4266   */
#define Z_CPP_HAS_ATTRIBUTE_USING_PREFIX			     TRUE /* P0028R4 */
#define Z_CPP_HAS_CONSTANT_EXPRESSION_IF			     TRUE /* P0292R2 */
#define Z_CPP_HAS_CONSTANT_EXPRESSION_LAMBDA			     TRUE /* P0170R1 */
#define Z_CPP_HAS_CPP17_RULES_ON_BRACED_INITIALIZATION		     TRUE /* N3922   */
#define Z_CPP_HAS_CPP17_RULES_ON_EXPRESSION_EVALUATION_ORDER	     TRUE /* P0145R3, P0400R0 */
#define Z_CPP_HAS_CPP17_RULES_ON_INHERITING_CONSTRUCTORS	     TRUE /* P0136R1 */
#define Z_CPP_HAS_CPP17_RULES_ON_NON_TYPE_TEMPLATE_ARGUMENTS	     TRUE /* N4268   */
#define Z_CPP_HAS_CPP17_RULES_ON_TEMPLATE_TEMPLATE_ARGUMENT_MATCHING TRUE /* P0522R0 */
#define Z_CPP_HAS_DIFFERING_BEGIN_AND_END_TYPES_IN_RANGE_BASED_FOR   TRUE /* P0184R0 */
#define Z_CPP_HAS_DIRECT_LIST_INITIALIZATION_OF_ENUMERATION	     TRUE /* P0138R2 */
#define Z_CPP_HAS_EXCEPTION_SPECIFICATION_AS_PART_OF_THE_TYPE	     TRUE /* P0012R1 */
#define Z_CPP_HAS_FOLD_EXPRESSION				     TRUE /* N4295   */
#define Z_CPP_HAS_FOLD_EXPRESSION_SAFETY_WITH_EMPTY_PARAMETER_PACK   TRUE /* P0036R0 */
#define Z_CPP_HAS_GUARANTEED_COPY_ELISION			     TRUE /* P0135R1 */
#define Z_CPP_HAS_IF_WITH_INITIALIZER				     TRUE /* P0305R1 */
#define Z_CPP_HAS_IGNORATION_OF_UNKNOWN_ATTRIBUTES		     TRUE /* P0283R2 */
#define Z_CPP_HAS_INLINE_VARIABLE				     TRUE /* P0386R2 */
#define Z_CPP_HAS_LAMBDA_CAPTURE_OF_THIS_OBJECT_BY_VALUE	     TRUE /* P0018R3 */
#define Z_CPP_HAS_LAUNDER /* Not a good name */			     TRUE /* P0137R1 */
#define Z_CPP_HAS_NESTED_NAMESPACE_DEFINITION			     TRUE /* N4230   */
#define Z_CPP_HAS_NON_TYPE_TEMPLATE_PARAMETER_WITH_AUTO_TYPE	     TRUE /* P0127R2 */
#define Z_CPP_HAS_OVER_ALIGNED_DYNAMIC_ALLOCATION		     TRUE /* P0035R4 */
#define Z_CPP_HAS_REMOVAL_OF_DYNAMIC_EXCEPTION_SPECIFICATION	     TRUE /* P0003R5 */
#define Z_CPP_HAS_REMOVAL_OF_INCREMENT_BOOLEAN_OPERATOR		     TRUE /* P0002R1 */
#define Z_CPP_HAS_REMOVAL_OF_REGISTER_AS_STORAGE_CLASS		     TRUE /* P0001R1 */
#define Z_CPP_HAS_REMOVAL_OF_TRIGRAPHS				     TRUE /* N4086   */
#define Z_CPP_HAS_STATIC_ASSERTION_WITH_NO_MESSAGE		     TRUE /* N3928   */
#define Z_CPP_HAS_STRUCTURED_BINDING				     TRUE /* P0217R3 */
#define Z_CPP_HAS_SWITCH_WITH_INITIALIZER			     TRUE /* P0305R1 */
#define Z_CPP_HAS_TEMPLATE_ARGUMENTS_DEDUCTION_FOR_CLASS_TEMPLATE    TRUE /* P0091R3, P0512R0, P0620R0 (!!) */
#define Z_CPP_HAS_TYPENAME_IN_TEMPLATE_TEMPLATE_PARAMETER	     TRUE /* N4051   */
#define Z_CPP_HAS_VARIADIC_USING				     TRUE /* P0195R2 */
#define Z_CPP_HAS_ATTRIBUTE_FALL_THROUGH			     TRUE /* P0188R1: [[fallthrough]]  */
#define Z_CPP_HAS_ATTRIBUTE_MAYBE_UNUSED			     TRUE /* P0212R1: [[maybe_unused]] */
#define Z_CPP_HAS_ATTRIBUTE_NO_DISCARD				     TRUE /* P0189R1: [[nodiscard]]    */
#define Z_CPP_HAS_LITERAL_HEXADECIMAL_FLOATING_POINT		     TRUE /* P0245R1 */
#define Z_CPP_HAS_LITERAL_UTF8_CHARACTER			     TRUE /* N4267   */
#define Z_CPP_HAS_PREPROCESSOR_OPERATOR_HAS_INCLUDE		     TRUE /* P0061R1 */

#endif /* _Z_inspection_CPP_modules_CPP17_H_ */
