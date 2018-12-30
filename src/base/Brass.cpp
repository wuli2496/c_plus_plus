/*
 * Brass.cpp
 *
 *  Created on: 2018Äê4ÔÂ22ÈÕ
 *      Author: John
 */

#include "Brass.h"
#include <iostream>
#include <cstring>

using namespace std;

Brass::Brass(const char *s, long an, double bal)
{
	// TODO Auto-generated constructor stub
	strncpy(fullName, s, MAX - 1);
	fullName[MAX - 1] = 0;
	acctNum = an;
	balance = bal;
}

Brass::~Brass() {
	// TODO Auto-generated destructor stub
}

void Brass::deposit(double amt)
{
	if (amt < 0)
	{
		cout << "Negative deposit not allowed: " << "deposit is cancelled.\n";
	}
	else
	{
		balance += amt;
	}
}

void Brass::withdraw(double amt)
{
	if (amt < 0)
	{
		cout << "withdraw amout must be positive: " << "withdraw cancelled.\n";
	}
	else if (amt <= balance)
	{
		balance -= amt;
	}
	else
	{
		cout << "withdraw amount of $" << amt << " exceeds your balance.\n" << " withdraw cancelled.\n";
	}
}

double Brass::getBalance()const
{
	return balance;
}

void Brass::viewAcct()const
{
	ios_base::fmtflags initialState = cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.setf(ios_base::showpoint);
	cout.precision(2);
	cout << "Client: " << fullName << endl;
	cout << "Account Number: " << acctNum << endl;
	cout << "Balance $" << balance << endl;
	cout.setf(initialState);
}

