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
#include "Queue.h"
#include "TableTennisPlayer.h"
#include "Brass.h"
#include "BrassPlus.h"

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

bool newCustomer(double x)
{
	return rand() * x / RAND_MAX < 1;
}

void testQueue()
{
	const int MIN_PER_HR = 60;

	srand(time(0));

	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "Enter maximum size of queue: ";

	int qs;
	cin >> qs;
	Queue line(qs);

	cout << "Enter the number of simulation hours: ";
	int hours;
	cin >> hours;
	long cyclelimit = MIN_PER_HR * hours;

	cout << "Enter the average number of customers per hour: ";
	double perhour;
	cin >> perhour;
	double min_per_cust;
	min_per_cust = MIN_PER_HR / perhour;

	Item temp;
	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	int wait_time = 0;
	long line_wait = 0;

	for (int cycle = 0; cycle < cyclelimit; ++cycle)
	{
		if (newCustomer(min_per_cust))
		{
			if (line.isFull())
			{
				turnaways++;
			}
			else
			{
				customers++;
				temp.set(cycle);
				line.enQueue(temp);
			}
		}

		if (wait_time <= 0 && !line.isEmpty())
		{
			line.deQueue(temp);
			wait_time = temp.pTime();
			line_wait += cycle - temp.when();
			served++;
		}

		if (wait_time > 0)
		{
			wait_time--;
		}

		sum_line += line.queueCount();
	}

	if (customers > 0)
	{
		cout << "customers accepted: " << customers << endl;
		cout << " customers served: " << served << endl;
		cout << "	turnaways: " << turnaways << endl;
		cout << "average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout.setf(ios_base::showpoint);
		cout << (double)sum_line / cyclelimit << endl;
		cout << " average wait time: " << (double)line_wait / served << " minutes\n";
	}
	else
	{
		cout << "No customers!\n";
	}

	cout << "Done!\n";
}

void testTableTennisPlayer()
{
	using std::cout;

	TableTennisPlayer player1("Chunck", "Blizzard", true);
	TableTennisPlayer player2("Tara", "Boomdea", false);

	player1.name();
	if (player1.isHasTable())
	{
		cout << ": has a table.\n";
	}
	else
	{
		cout << ": hasn't a table.\n";
	}

	player2.name();
	if (player2.isHasTable())
	{
		cout << ": has a table.\n";
	}
	else
	{
		cout << ": hasn't a table.\n";
	}
}

void testBrass()
{
	Brass piggy("Porcelot Pigg", 381299, 4000.00);
	BrassPlus hoggy("Horatio Hogg", 382288, 3000.00);
	piggy.viewAcct();
	cout << endl;
	hoggy.viewAcct();
	cout << endl;
	cout << "depositing $1000 into the Hogg Account: \n";
	hoggy.deposit(1000.00);
	cout << "New balance: $" << hoggy.getBalance() << endl;
	cout << "withdrawing $4200 from the pigg Account: \n";
	piggy.withdraw(4200.00);
	cout << "Pigg account balance: $" << piggy.getBalance() << endl;
	cout << "Withdrawing $4200 from the hoggy Account: \n";
	hoggy.withdraw(4200.00);
	hoggy.viewAcct();
}

void testVirtualBrass()
{
	const int CLIENTS = 4;
	const int LEN = 40;

	Brass *p_clients[CLIENTS];
	for (int i = 0; i < CLIENTS; i++)
	{
		char temp[LEN];
		long tempnum;
		double tempbal;
		char kind;

		cout << "Enter client's name: ";
		cin.getline(temp, LEN);
		cout << "Enter client's account number: ";
		cin >> tempnum;
		cout << "Enter opening balance: $";
		cin >> tempbal;
		cout << "Enter 1 for Brass Account or 2 for BrassPlus Account: ";

		while (cin >> kind && (kind != '1' && kind != '2'))
		{
			cout << "Enter either 1 or 2:";
		}

		if ('1' == kind)
		{
			p_clients[i] = new Brass(temp, tempnum, tempbal);
		}
		else
		{
			double tmax, trate;
			cout << "Enter the overdraft limit: $";
			cin >> tmax;
			cout << "Enter the interst rate as a decimal fraction: ";
			cin >> trate;
			p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
		}

		while (cin.get() != '\n') continue;
	}
	cout << endl;

	for (int i = 0; i < CLIENTS; ++i)
	{
		p_clients[i]->viewAcct();
		cout << endl;
	}

	for (int i = 0; i < CLIENTS; ++i)
	{
		delete p_clients[i];
	}

	cout << "Done.\n";
}

int main()
{
	testVirtualBrass();
	return 0;
}
