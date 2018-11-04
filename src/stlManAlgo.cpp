/*
 * stlManAlgo.cpp
 *
 *  Created on: 2018Äê10ÔÂ28ÈÕ
 *      Author: wl
 */

#include "stlManAlgo.h"

#include <list>
#include <algorithm>
#include <iostream>
#include <iterator>

using namespace std;

void testRemove()
{
	list<int> coll;
	for (int i = 0; i <= 6; ++i)
	{
		coll.push_front(i);
		coll.push_back(i);
	}

	cout << "pre: ";
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	remove(coll.begin(), coll.end(), 3);

	cout << "post: ";
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}
