/*
 * utilityTest.cpp
 *
 *  Created on: 2018Äê10ÔÂ7ÈÕ
 *      Author: wl
 */

#include "utilityTest.h"
#include <memory>
#include <iostream>
#include <limits>

using namespace std;

template <class T>
ostream& operator<< (ostream& strm, const auto_ptr<T>& p)
{
	if (p.get() == NULL)
	{
		strm << "NULL";
	}
	else
	{
		strm << *p;
	}

	return strm;
}

void autoPtrTest()
{
	auto_ptr<int> p(new int(42));
	auto_ptr<int> q;

	cout << "after initialization: " << endl;
	cout << "p:" << p << endl;
	cout << "q:" << q << endl;

	q = p;

	cout << "after assigning auto pointers: " << endl;
	cout << "p:" << p << endl;
	cout << "q:" << q << endl;

	*q += 13;
	p = q;
	cout << "after change and reassignment: " << endl;
	cout << "p:" << p << endl;
	cout << "q:" << q << endl;
}

void constAutoPtrTest()
{
	const auto_ptr<int> p(new int(42));
	const auto_ptr<int> q(new int(0));
	const auto_ptr<int> r;

	cout << "after initialization:" << endl;
	cout << "p:" << p << endl;
	cout << "q:" << q << endl;
	cout << "r:" << r << endl;

	*q = *p;
	//*r = *p;
	*p = -77;
	cout << "after assigning values:" << endl;
	cout << "p:" << p << endl;
	cout << "q:" << q << endl;
	cout << "r:" << r << endl;
}

void numericLimitTest()
{
	cout << boolalpha;
	cout << "max(short): " << numeric_limits<short>::max() << endl;
	cout << "max(int): " << numeric_limits<int>::max() << endl;
	cout << "max(long): " << numeric_limits<long>::max() << endl;
	cout << endl;

	cout << "max(float): " << numeric_limits<float>::max() << endl;
	cout << "max(double): " << numeric_limits<double>::max() << endl;
	cout << "max(long double): " << numeric_limits<long double>::max() << endl;
	cout << endl;

	cout << "is_signed(char): " << numeric_limits<char>::is_signed << endl;
	cout << endl;

	cout << "is_specialized(string): " << numeric_limits<string>::is_specialized << endl;
}
