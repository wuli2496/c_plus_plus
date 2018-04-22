/*
 * BrassPlus.cpp
 *
 *  Created on: 2018Äê4ÔÂ22ÈÕ
 *      Author: John
 */

#include "BrassPlus.h"
#include <iostream>

using namespace std;

BrassPlus::BrassPlus(const char *s, long an, double bal, double ml, double r) : Brass(s, an, bal)
{
	// TODO Auto-generated constructor stub
	maxLoan = ml;
	owesBank = 0.0;
	rate =r ;
}

BrassPlus::BrassPlus(const Brass &ba, double ml, double r) : Brass(ba)
{
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}

void BrassPlus::viewAcct()const
{
	ios_base::fmtflags initialState = cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.setf(ios_base::showpoint);
	cout.precision(2);

	Brass::viewAcct();
	cout << "Maximum loan: $" << maxLoan << endl;
	cout << "Owed to bank: $" << owesBank << endl;
	cout << "Loan Rate: " << 100 * rate << "%\n";
	cout.setf(initialState);
}

void BrassPlus::withdraw(double amt)
{
	ios_base::fmtflags initialState = cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.setf(ios_base::showpoint);
	cout.precision(2);

	double bal = getBalance();
	if (amt <= bal)
	{
		Brass::withdraw(amt);
	}
	else if (amt <= bal + maxLoan - owesBank)
	{
		double advance = amt - bal;
		owesBank += advance * (1.0 + rate);
		cout << "Bank advance: $" << advance << endl;
		cout << "Finance charge: $" << advance * rate << endl;
		deposit(advance);
		Brass::withdraw(amt);
	}
	else
	{
		cout << "Credit limit exceeded, Transaction cancelled.\n";
	}

	cout.setf(initialState);
}

BrassPlus::~BrassPlus() {
	// TODO Auto-generated destructor stub
}

