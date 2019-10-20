/*
 * ref.cpp
 *
 *  Created on: 2018Äê4ÔÂ5ÈÕ
 *      Author: John
 */
//#include "ref.h"
#include <iostream>

void testReference()
{
	using namespace std;

	int rats = 101;
	int& rodents = rats;

	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	rodents++;

	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;
}

void testSecref()
{
	using namespace std;

	int rats = 101;
	int& rodents = rats;

	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies;
	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats;
	cout << ", rodents = " << rodents << endl;


	cout << "bunnies address = " << &bunnies;
	cout << ", rodents address = " << &rodents << endl;

}

void testRef2()
{
	using namespace std;

	int rats = 101;
	int *pt = &rats;
	int& rodents = *pt;
	cout << "rodents = " << rodents << endl;
	int bunnies = 50;
	pt = &bunnies;
	cout << "rodents = " << rodents << endl;

	const int &b = rats + 10;

	cout << b << endl;
}



