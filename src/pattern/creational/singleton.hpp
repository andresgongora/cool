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
	| You should have received a copy of the GNU General Public License	|
	| along with this program.  If not, see <http://www.gnu.org/licenses/>. |
	|									|
	+-----------------------------------------------------------------------+	*/


#ifndef __COOL_PATTERN_CREATIONAL_SINGLETON_HPP_INCLUDED__
#define __COOL_PATTERN_CREATIONAL_SINGLETON_HPP_INCLUDED__


#include "../../idiom/trait/noncopyable.hpp"


namespace cool{
namespace pattern{ 
namespace creational{



/***********************************************************************************************//**
 * @brief	Singleton base class
 * @warning	All derived classes must befriend with Singleton and use the default private constructor
 *
 * @code
 * 	class myns::MyClass : public Singleton<myns::MyClass>
 * 	{
 * 		friend class Singleton<myns::MyClass>;
 * 	private:
 * 		MyClass(void) {}
 *		...
 *	public:
 *		...
 * 	};
 * @endcode
 **************************************************************************************************/
template<typename T>
class Singleton : public cool::idiom::trait::NonCopyable
{
protected:
				// PROTECTED CONSTRUCTOR
				Singleton(void)	{}

public:
				// ACCESSOR
	static inline T& 	getInstance(void) 	{ return instance_; }
//	static inline T const	getConstInstance(void)	{ return instance_; }

private:
				// SINGLETON INSTANCE
	static T 		instance_;
};



// CREATE INSTANCE
template<typename T> T Singleton<T>::instance_;




/* ---------------------------------------------------------------------------------------------- */
}	// namespace cool
}	// namespace pattern
}	// namespace creational
#endif 	// __COOL_PATTERN_CREATIONAL_SINGLETON_HPP_INCLUDED__
