/*
 * ExceptTest.cpp
 *
 *  Created on: 2018Äê10ÔÂ5ÈÕ
 *      Author: John
 */
#include "ExceptTest.h"
#include <iostream>
#include <vector>
#include <stdexcept>
#include <bitset>
#include <string>

using namespace std;

void outOfRangeTest()
{
	vector<int> a;
	a.push_back(1);

	try
	{
		a.at(1);
	}
	catch (out_of_range &ex)
	{
		cerr << ex.what() << " line:" << __LINE__ << " file:" << __FILE__ << endl;
	}
}

void invaldArgumentTest()
{
	try
	{
		bitset<5> b(string("012345"));
	}
	catch (invalid_argument& ex)
	{
		cerr << ex.what() << " line:" << __LINE__ << " file:" << __FILE__ << endl;
	}
}

void lengthErrorTest()
{
	try
	{
		vector<int> v;
		v.resize(v.max_size() + 1);
	}
	catch (length_error& ex)
	{
		cerr << ex.what() << " line:" << __LINE__ << " file:" << __FILE__ << endl;
	}
}

