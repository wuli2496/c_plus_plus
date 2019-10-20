/*
 * constTest.cpp
 *
 *  Created on: 2018Äê4ÔÂ5ÈÕ
 *      Author: John
 */

#include "constTest.h"
#include <iostream>

int sum(int arr[], int n)
{
	int ret = 0;
	for (int i = 0; i < n; ++i)
	{
		ret += arr[i];
	}

	return ret;
}

void testConst()
{

	int a = 10;
	const int **pp2 = NULL;
	int *p1 = &a;
	const int n = 13;
	// invalid pp2 = &p1;
	*pp2 = &n;
	*p1 = 10;
}

void testConstArray()
{
	using namespace std;
	const int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	//int ret = sum(months, 12);
	//cout << ret << endl;
}


