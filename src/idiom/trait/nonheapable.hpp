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



#ifndef __COOL_IDIOM_TRAIT_NONHEAPABLE_HPP_INCLUDED__
#define __COOL_IDIOM_TRAIT_NONHEAPABLE_HPP_INCLUDED__


#include <cstddef>


namespace cool{ 
namespace idiom{ 
namespace trait{



/***********************************************************************************************//**
 * Non Heapable base class.
 * Each class that inherits from this class can not be instantiated with new.
 * Also it can not be removed with delete.
 * Templated to allow for base class optimization.
 **************************************************************************************************/
class NonHeapable
{
protected:
			NonHeapable(void)			{}

	static void*	operator new(std::size_t)		{return static_cast<void*>(NULL);}
	static void*	operator new(std::size_t,void*)		{return static_cast<void*>(NULL);}
	static void*	operator new[](std::size_t)		{return static_cast<void*>(NULL);}
	static void*	operator new[](std::size_t,void*)	{return static_cast<void*>(NULL);}
};



/* ---------------------------------------------------------------------------------------------- */
}	// namespace trait
}	// namespace idiom
}	// namespace cool
#endif 	// __COOL_IDIOM_TRAIT_NONHEAPABLE_HPP_INCLUDED__
