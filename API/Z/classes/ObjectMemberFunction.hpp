/* Z Kit - classes/ObjectMemberFunction.hpp
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2019 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_classes_ObjectMemberFunction_HPP_
#define Z_classes_ObjectMemberFunction_HPP_

#include <Z/inspection/Z.h>
#include <Z/classes/MemberFunction.hpp>

#if Z_HAS_CLASS(MemberFunction)


	namespace Zeta {

		template <class F> struct ObjectMemberFunction;

		template <class R, class... P> struct ObjectMemberFunction<R(P...)> : MemberFunction<R(P...)> {
			NaT *object;


			Z_INLINE ObjectMemberFunction() Z_NOTHROW
				Z_DEFAULTED({})


#			if Z_DIALECT_HAS(CPP, INHERITING_CONSTRUCTORS)
				using MemberFunction<R(P...)>::MemberFunction;
#			else
				template <class M, class E = typename TypeIf<
					Type<M>::is_member_function_pointer &&
					TypeAreEqual<typename Type<M>::flow::to_function::end::to_unqualified, R(P...)>::value,
				M>::type>
				Z_INLINE ObjectMemberFunction(M function) Z_NOTHROW
				: MemberFunction<R(P...)>(function) {}
#			endif


#			ifdef Z_NULL_POINTER
				Z_CT(CPP11) ObjectMemberFunction(NullPointer) Z_NOTHROW
				: MemberFunction<R(P...)>(NULL), object(NULL) {};
#			endif


			template <class O, class M, class E = typename TypeIf<
				(Type<O>::is_void_pointer		  ||
				 (Type<O>::is_pointer			  &&
				  Type<O>::flow::pointee_type::is_class)) &&
				Type<M>::is_member_function_pointer	  &&
				TypeAreEqual<typename Type<M>::flow::to_function::end::to_unqualified, R(P...)>::value,
			M>::type>
			Z_INLINE ObjectMemberFunction(O object, M function) Z_NOTHROW
			: MemberFunction<R(P...)>(function), object((NaT *)object) {}


			template <class O, class M, class E = typename TypeIf<
				Type<O>::is_class		    &&
				Type<M>::is_member_function_pointer &&
				TypeAreEqual<typename Type<M>::flow::to_function::end::to_unqualified, R(P...)>::value,
			M>::type>
			Z_INLINE ObjectMemberFunction(const O &object, M function) Z_NOTHROW
			: MemberFunction<R(P...)>(function), object((NaT *)&object) {}


			template <class O, class E = typename TypeIf<Type<O>::is_class, O>::type>
			Z_INLINE operator O *() const Z_NOTHROW
				{return (O *)object;}


			template <class O>
			Z_INLINE typename TypeIf<Type<O>::is_class, ObjectMemberFunction &>::type
			operator =(O *rhs) Z_NOTHROW
				{
				object = (NaT *)rhs;
				return *this;
				}


			template <class O>
			Z_INLINE typename TypeIf<Type<O>::is_class, ObjectMemberFunction &>::type
			operator =(const O &rhs) Z_NOTHROW
				{
				object = (NaT *)&rhs;
				return *this;
				}


			template <class M>
			Z_INLINE typename TypeIf<
				Type<M>::is_member_function_pointer &&
				TypeAreEqual<typename Type<M>::flow::to_function::end::to_unqualified, R(P...)>::value,
			ObjectMemberFunction &>::type
			operator =(M rhs) Z_NOTHROW
				{
				this->function = (R (NaT::*)(P...))rhs;
				return *this;
				}


			template <class RR = R>
			Z_INLINE typename TypeIf<Type<RR>::is_void, RR>::type
			operator ()(typename Type<P>::to_forwardable... arguments) const
				{(object->*this->function)(arguments...);}


			template <class O, class RR = R>
			Z_INLINE typename TypeIf<Type<RR>::is_void, RR>::type
			operator ()(O *object, typename Type<P>::to_forwardable... arguments) const
				{(((NaT *)object)->*this->function)(arguments...);}


			template <class O, class RR = R>
			Z_INLINE typename TypeIf<Type<RR>::is_void, RR>::type
			operator ()(const O &object, typename Type<P>::to_forwardable... arguments) const
				{(((NaT *)&object)->*this->function)(arguments...);}


			template <class RR = R>
			Z_INLINE typename TypeIf<!Type<RR>::is_void, RR>::type
			operator ()(typename Type<P>::to_forwardable... arguments) const
				{return (object->*this->function)(arguments...);}


			template <class O, class RR = R>
			Z_INLINE typename TypeIf<!Type<RR>::is_void, RR>::type
			operator ()(O *object, typename Type<P>::to_forwardable... arguments) const
				{return (((NaT *)object)->*this->function)(arguments...);}


			template <class O, class RR = R>
			Z_INLINE typename TypeIf<!Type<RR>::is_void, RR>::type
			operator ()(const O &object, typename Type<P>::to_forwardable... arguments) const
				{return (((NaT *)&object)->*this->function)(arguments...);}


			template <class O, class M>
			Z_INLINE typename TypeIf<
				(Type<O>::is_void_pointer		  ||
				 (Type<O>::is_pointer			  &&
				  Type<O>::flow::pointee_type::is_class)) &&
				Type<M>::is_member_function_pointer	  &&
				TypeAreEqual<typename Type<M>::flow::to_function::end::to_unqualified, R(P...)>::value,
			ObjectMemberFunction &>::type
			set(O object, M function) Z_NOTHROW
				{
				this->function = (R (NaT::*)(P...))function;
				this->object   = (NaT *)&object;
				return *this;
				}


			template <class O, class M>
			Z_INLINE typename TypeIf<
				Type<O>::is_class		    &&
				Type<M>::is_member_function_pointer &&
				TypeAreEqual<typename Type<M>::flow::to_function::end::to_unqualified, R(P...)>::value,
			ObjectMemberFunction &>::type
			set(const O &object, M function) Z_NOTHROW
				{
				this->function = (R (NaT::*)(P...))function;
				this->object   = (NaT *)&object;
				return *this;
				}
		};
	}


#	define Z_HAS_CLASS_ObjectMemberFunction TRUE
#else
#	define Z_HAS_CLASS_ObjectMemberFunction FALSE
#endif

#endif // Z_classes_ObjectMemberFunction_HPP_
