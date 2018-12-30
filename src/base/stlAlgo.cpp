/*
 * stlAlgo.cpp
 *
 *  Created on: 2018Äê10ÔÂ26ÈÕ
 *      Author: wl
 */

#include "stlAlgo.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

void testAlgo()
{
	std::vector<int> coll;
	std::vector<int>::iterator pos;

	coll.push_back(2);
	coll.push_back(5);
	coll.push_back(4);
	coll.push_back(1);
	coll.push_back(6);
	coll.push_back(3);

	pos = std::min_element(coll.begin(), coll.end());
	std::cout << "min: " << *pos << std::endl;
	pos = std::max_element(coll.begin(), coll.end());
	std::cout << "max: " << *pos << std::endl;

	std::sort(coll.begin(), coll.end());

	pos = std::find(coll.begin(), coll.end(), 3);

	std::reverse(pos, coll.end());

	for (pos = coll.begin(); pos != coll.end(); ++pos)
	{
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}

void testMultipleRange()
{
	list<int> coll1;
	vector<int> coll2;

	for (int i = 1; i <= 9; ++i)
	{
		coll1.push_back(i);
	}

	copy(coll1.begin(), coll1.end(), coll2.begin());
}
