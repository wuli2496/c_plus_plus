/*
 * structur.cpp
 *
 *  Created on: 2018Äê4ÔÂ5ÈÕ
 *      Author: John
 */
#include "structur.h"
#include <iostream>

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

void structTest()
{
	using namespace std;

	inflatable guest =
	{
			"Glorious Gloria",
			1.88,
			29.99
	};

	inflatable pal =
	{
			"Audacious Arthur",
			3.12,
			32.99
	};

	cout << "Expanding your guest list with " << guest.name;
	cout << " and " << pal.name << "!\n";

	cout << "You can have both for $";
	cout << guest.price + pal.price << "!\n";
}



