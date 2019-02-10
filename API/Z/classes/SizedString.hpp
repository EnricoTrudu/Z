/* Z Kit - classes/SizedString.hpp
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2017 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_classes_SizedString_HPP_
#define Z_classes_SizedString_HPP_

#include <Z/types/fundamental.hpp>


namespace Zeta {namespace Detail {namespace SizedString {

	template <USize I> class Element : public Element<I - 1> {
		protected:
		Char _character;

		public:
		Z_CT(CPP11) Element(const Char *string)
		: Element<I - 1>(string), _character(string[I]) {}
	};


	template <> class Element<0> {
		protected:
		Char _character;

		public:
		Z_CT(CPP11) Element(const Char *string)
		: _character(string[0]) {}
	};
}}}


namespace Zeta {

	template <USize S> class SizedString : public Detail::SizedString::Element<S - 1> {
		protected:
		Char _null_character;

		public:
		Z_CT(CPP11) SizedString(const Char *string)
		: Detail::SizedString::Element<S - 1>(string), _null_character('\0') {}

		Z_INLINE operator const Char *() const
			{return &this->Detail::SizedString::Element<0>::_character;}
	};


	template <> class SizedString<0> {
		protected:
		Char _null_character;

		public:
		Z_CT(CPP11) SizedString(const Char *string)
		: _null_character('\0') {}

		Z_INLINE operator const Char *() const
			{return &_null_character;}
	};
}


#endif // Z_classes_SizedString_HPP_
