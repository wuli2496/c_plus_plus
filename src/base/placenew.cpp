/*
 * placenew.cpp
 *
 *  Created on: 2018Äê4ÔÂ6ÈÕ
 *      Author: John
 */
#include "placenew.h"
#include <new>
#include <iostream>

using namespace std;

char buffer1[50];
char buffer2[500];

void placeNew()
{
	chaff *p1 = 0, *p2 = 0;
	int *p3 = 0, *p4 = 0;

	p1 = new chaff;
	p3 = new int[20];

	p2 = new (buffer1) chaff;
	p4 = new (p3) int[20];

	cout << p1 << endl;
	cout << p2 << endl;
	cout << p3 << endl;
	cout << p4 << endl;

}



