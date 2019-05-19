/*
 * print.h
 *
 *  Created on: 2019Äê5ÔÂ1ÈÕ
 *      Author: wl
 */

#ifndef BASE_PRINT_H_
#define BASE_PRINT_H_

#include <iostream>

template <class T>
inline void PRINT_ELEMENTS(const T& coll, const char* optcstr = "")
{
	typename T::const_iterator pos;

	std::cout << optcstr;
	for (pos = coll.begin(); pos != coll.end(); ++pos)
	{
		std::cout << *pos << " ";
	}

	std::cout << std::endl;
}


#endif /* BASE_PRINT_H_ */
