/*
 * seqContainer.cpp
 *
 *  Created on: 2018Äê10ÔÂ12ÈÕ
 *      Author: wl
 */

#include "seqContainer.h"
#include <vector>
#include <iostream>
#include <deque>
#include <list>

using namespace std;

void testVector()
{
	vector<int> col;

	for (int i = 1; i <= 6; i++)
	{
		col.push_back(i);
	}

	for (int i = 0; i < (int)col.size(); i++)
	{
		cout << col[i] << ' ';
	}
	cout << endl;
}

void testDeque()
{
	deque<float> coll;

	for (int i = 1; i <= 6; ++i)
	{
		coll.push_front(i * 1.1);
	}

	for (int i = 0; i < (int)coll.size(); ++i)
	{
		cout << coll[i] << ' ';
	}
	cout << endl;
}

void testList()
{
	list<char> coll;

	for (char c = 'a'; c <= 'z'; ++c)
	{
		coll.push_back(c);
	}

	while (!coll.empty())
	{
		cout << coll.front() << ' ';
		coll.pop_front();
	}
	cout << endl;
}


