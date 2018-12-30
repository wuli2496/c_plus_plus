/*
 * stlFunAsAlgoArg.cpp
 *
 *  Created on: 2018Äê11ÔÂ4ÈÕ
 *      Author: wl
 */

#include "stlFunAsAlgoArg.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
#include "stlDefFun.h"
#include <iterator>
#include <cstdlib>
#include <list>

using namespace std;

void print(int elem)
{
	cout << elem << ' ';
}

int square(int value)
{
	return value * value;
}

void testFunAsAlgoArg()
{
	vector<int> coll;
	for (int i = 1; i <= 9; ++i)
	{
		coll.push_back(i);
	}

	for_each(coll.begin(), coll.end(), print);
	cout << endl;
}

void testTransform()
{
	set<int> coll1;
	vector<int> coll2;

	for (int i = 1; i <= 9; ++i)
	{
		coll1.insert(i);
	}

	print_elements(coll1, "initialized: ");

	transform(coll1.begin(), coll1.end(), back_inserter(coll2), square);

	print_elements(coll2, "squared: ");
}

bool isPrime(int number)
{
	number = abs(number);
	if (number == 0 || number == 1)
	{
		return true;
	}

	int divisor;
	for (divisor = number / 2; number % divisor != 0; --divisor)
	{
		;
	}

	return divisor == 1;
}


void testPredicate()
{
	list<int> coll;
	for (int i = 24; i <= 30; ++i)
	{
		coll.push_back(i);
	}

	list<int>::iterator pos;
	pos = find_if(coll.begin(), coll.end(), isPrime);
	if (pos != coll.end())
	{
		cout << *pos << " is first prime number found" << endl;
	}
	else
	{
		cout << "no prime number found" << endl;
	}
}
