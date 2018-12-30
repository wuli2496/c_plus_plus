/*
 * stlIterator.cpp
 *
 *  Created on: 2018Äê10ÔÂ28ÈÕ
 *      Author: wl
 */

#include "stlIterator.h"
#include <list>
#include <vector>
#include <set>
#include <deque>
#include <algorithm>
#include <string>
#include <iostream>
#include <iterator>

using namespace std;

void testInserter()
{
	list<int> coll1;
	for (int i = 0; i <= 9; ++i)
	{
		coll1.push_back(i);
	}

	vector<int> coll2;
	copy(coll1.begin(), coll1.end(), back_inserter(coll2));

	deque<int> coll3;
	copy(coll1.begin(), coll1.end(), front_inserter(coll3));

	set<int> coll4;
	copy(coll1.begin(), coll1.end(), inserter(coll4, coll4.begin()));
}

void testStreamIterator()
{
	vector<string> coll;

	copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(coll));

	sort(coll.begin(), coll.end());

	unique_copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));
}

void testRevIterator()
{
	vector<int> coll;
	for (int i = 0; i <= 9; ++i)
	{
		coll.push_back(i);
	}

	copy(coll.rbegin(), coll.rend(), ostream_iterator<int>(cout, " "));
}
