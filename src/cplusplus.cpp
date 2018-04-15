//============================================================================
// Name        : cplusplus.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stock.h"
#include "MyTime.h"
#include <iostream>
#include "Vector.h"
#include "StringBad.h"

using namespace std;

void classTest()
{
	using std::ios_base;
	using std::cout;

	cout.precision(2);
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.setf(ios_base::showpoint);


	cout << "Using constructors to create new objects\n";
	Stock stock1("NanoSmart", 12, 20.0);
	stock1.show();
	Stock stock2 = Stock("Boffo objects", 2, 2.0);
	stock2.show();

	cout << "Assigning stock1 to stock2:\n";
	stock2 = stock1;
	cout << "Listing stock1 and stock2:\n";
	stock1.show();
	stock2.show();

	cout << "Using a constructor to reset an object\n";
	stock1 = Stock("Nifty Foods", 10, 50.0);
	cout << "Revised stock1:\n";
	stock1.show();
	cout << "Done\n";

	const Stock tmp = Stock("Test", 1, 100.0);
	tmp.show();

	Stock s = "abc";
}

void classArrayInitial()
{
	/*
	const int STKS = 4;
	Stock stocks[STKS] = {
			Stock("NanoSmart", 12.5, 20),
			Stock("Boffo Objects", 200, 2.0),
			Stock("Monolithic Obelisks", 130, 3.25),
			Stock("Fleep Enterprises", 60, 6.5)
	};
	*/
}

void testMyTime()
{
	MyTime planning;
	MyTime coding(2, 40);
	MyTime fixing(5, 55);
	MyTime total;

	std::cout << "planning time = ";
	planning.show();
	std::cout << std::endl;

	std::cout << "coding time = ";
	coding.show();
	std::cout << std::endl;

	std::cout << "fixing time = ";
	fixing.show();
	std::cout << std::endl;

	total = coding + fixing;
	std::cout << "coding + fixing = ";
	total.show();
	std::cout << std::endl;

	MyTime morefixing(3, 28);
	std::cout << "more fixing time = ";
	morefixing.show();
	std::cout << std::endl;
	total = morefixing.operator+(total);
	std::cout << "morefixing.operator+(total) = ";
	total.show();
	std::cout << std::endl;

	std::cout << "friend operator*(result) = ";
	MyTime result = 2 * total;
	result.show();
	std::cout << std::endl;

	std::cout << "friend operator<<(ostream&os, const MyTime&t) = ";
	std::cout << result;
	std::cout << std::endl;
}

void randWalk()
{
	using namespace std;
	using VECTOR::Vector;

	srand(time(0));

	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;

	cout << "Enter target distance (q to quit):";
	while (cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep)) break;

		while (result.magVal() < target)
		{
			direction = rand() % 360;
			step.set(dstep, direction, 'p');
			result = result + step;
			steps++;
		}

		cout << "After " << steps << " steps, the subject "
				"has the following location: \n";
		cout << result << endl;
		result.polarMode();
		cout << " or\n" << result << endl;
		cout << "Average outward distance per step = "
				<< result.magVal() / steps << endl;
		steps = 0;
		result.set(0.0, 0.0);

		cout << "Enter target distance (q to quit): ";
	}

	cout << "Bye!\n";
	return ;
}

void callme1(StringBad& s)
{
	cout << "String passed by reference: \n";
	cout << " \"" << s << "\"\n";
}

void callme2(StringBad sb)
{
	cout << "String passed by value: \n";
	cout << " \"" << sb << "\"\n";
}

void testCopyConstructor()
{
	StringBad headline1("Celery Stalks at Midnight");
	StringBad headline2("Lecture Prey");
	StringBad sports("Spinach Leaves Bowl for Dollars");

	cout << "headline1: " << headline1 << endl;
	cout << "headline2: " << headline2 << endl;
	cout << "sports: " << sports << endl;

	callme1(headline1);
	cout << "headline1: " << headline1 << endl;
	callme2(headline2);
	cout << "headline2: " << headline2 << endl;

	cout << "Initialize one object to another: \n";
	StringBad sailor = sports;
	cout << "sailor: " << sailor << endl;

	cout << "Assign one object to another: \n";
	StringBad knot;
	knot = headline1;
	cout << "knot: " << knot << endl;

	cout << "End of main()\n";

}

int main()
{
	testCopyConstructor();
	return 0;
}
