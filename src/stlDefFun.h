/*
 * stlDefFun.h
 *
 *  Created on: 2018Äê11ÔÂ4ÈÕ
 *      Author: wl
 */

#ifndef STLDEFFUN_H_
#define STLDEFFUN_H_

#include <iostream>

template <class T>
void print_elements(const T& coll, const char* optcstr = "")
{
	typename T::const_iterator pos;
	std::cout << optcstr;
	for (pos = coll.begin(); pos != coll.end(); ++pos)
	{
		std::cout << *pos << ' ';
	}

	std::cout << std::endl;
}


#endif /* STLDEFFUN_H_ */
