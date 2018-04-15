/*
 * assgn_st.cpp
 *
 *  Created on: 2018Äê4ÔÂ5ÈÕ
 *      Author: John
 */
#include "assgn_st.h"
#include <iostream>

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

void assignStructTest()
{
	using namespace std;

	inflatable bouquet =
	{
			"sunflowers",
			0.20,
			12.49
	};

	inflatable choice;

	cout << "bouquet: " << bouquet.name << " for $";
	cout << bouquet.price << endl;
	choice = bouquet;
	cout << "choice: " << choice.name << " for $";
	cout << choice.price << endl;
}

