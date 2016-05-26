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
	

#ifndef __COOL_MACRO_UTILITY_CONCTATENATE_HPP_INCLUDED__
#define __COOL_MACRO_UTILITY_CONCTATENATE_HPP_INCLUDED__



// Chain to concatenate up to 10 elements
#define COOL_DETAIL_CONCATENATE_1(a, b)		a ## b
#define COOL_DETAIL_CONCATENATE_2(a, b)		COOL_DETAIL_CONCATENATE_1(a, b)
#define COOL_DETAIL_CONCATENATE_3(a, b)		COOL_DETAIL_CONCATENATE_2(a, b)
#define COOL_DETAIL_CONCATENATE_4(a, b)		COOL_DETAIL_CONCATENATE_3(a, b)
#define COOL_DETAIL_CONCATENATE_5(a, b)		COOL_DETAIL_CONCATENATE_4(a, b)
#define COOL_DETAIL_CONCATENATE_6(a, b)		COOL_DETAIL_CONCATENATE_5(a, b)
#define COOL_DETAIL_CONCATENATE_7(a, b)		COOL_DETAIL_CONCATENATE_6(a, b)
#define COOL_DETAIL_CONCATENATE_8(a, b)		COOL_DETAIL_CONCATENATE_7(a, b)
#define COOL_DETAIL_CONCATENATE_9(a, b)		COOL_DETAIL_CONCATENATE_8(a, b)



/***********************************************************************************************//**
 * @brief	Macro to concatenate text
 * 
 *	Calls the CONCATENATE_N chain
 **************************************************************************************************/
#define COOL_CONCATENATE(a, b)	CONCATENATE_10(a, b)



/* ---------------------------------------------------------------------------------------------- */
#endif 	// __COOL_MACRO_UTILITY_CONCTATENATE_HPP_INCLUDED__
