/*
 * stlFunObj.cpp
 *
 *  Created on: 2018Äê11ÔÂ4ÈÕ
 *      Author: wl
 */

#include "stlFunObj.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include "stlDefFun.h"

using namespace std;

class PrintInt
{
public:
	void operator()(int elem) const
	{
		cout << elem << ' ';
	}
};

void f1();

void testFunObj()
{
	vector<int> coll;
	for (int i = 0; i <= 9; ++i)
	{
		coll.push_back(i);
	}

	for_each(coll.begin(), coll.end(), PrintInt());

	cout << endl;

	f1();
}

void add10(int& elem)
{
	elem += 10;
}


template <int theValue>
void add(int& elem)
{
	elem += theValue;
}

class AddValue
{
private:
	int theValue;
public:
	AddValue(int v) : theValue(v) {}
	void operator()(int& elem)
	{
		elem += theValue;
	}
};

void f1()
{
	vector<int> coll;

	for (int i = 0; i < 10; ++i)
	{
		coll.push_back(i);
	}

	for_each(coll.begin(), coll.end(), AddValue(10));

	print_elements(coll);
}
