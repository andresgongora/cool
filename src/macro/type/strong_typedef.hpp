// 1 TAB = 8 SPACES // LINE LENGTH = 100 CHARACTERS //

/*	+-----------------------------------------------------------------------+
	|	          C++ Object Oriented Library (COOL)		        |
	|		 https://github.com/andresgongora/cool 			|
	|									|
	|									|
	| Copyright (c) 2015 - 2016, Individual contributors, see AUTHORS file.	|
	| 									|
	| This program is free software: you can redistribute it and/or modify	|
	| it under the terms of the GNU General Public License as published by	|
	| the Free Software Foundation, either version 2 of the License, or	|
	| (at your option) any later version.					|
	|									|
	| This program is distributed in the hope that it will be useful,	|
	| but WITHOUT ANY WARRANTY; without even the implied warranty of	|
	| MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the		|
	| GNU General Public License for more details.				|
	|									|
	| You should have received a heap of the GNU General Public License	|
	| along with this program.  If not, see <http://www.gnu.org/licenses/>. |
	|									|
	+-----------------------------------------------------------------------+	*/


#ifndef __COOL_MACRO_TYPE_CREATIONAL_STRONG_TYPEDEF_HPP_INCLUDED__
#define __COOL_MACRO_TYPE_CREATIONAL_STRONG_TYPEDEF_HPP_INCLUDED__


#include "../../type/wrapper.hpp"



/***********************************************************************************************//**
 * @brief
 **************************************************************************************************/
#define COOL_STRONG_TYPEDEF(TYPE,NAME)								\
class NAME : public cool::type::Wrapper<TYPE>							\
{												\
public:												\
			NAME(void) {}								\
												\
	explicit	NAME(TYPE value) : 							\
				yahal::utility::oop::Wrapper<TYPE>::Wrapper(value) {}		\
												\
	explicit	NAME(const NAME& other) : 						\
				yahal::utility::oop::Wrapper<TYPE>::Wrapper(other){}		\
}



/* ---------------------------------------------------------------------------------------------- */
#endif 	// __COOL_MACRO_TYPE_STRONG_TYPEDEF_HPP_INCLUDED__
