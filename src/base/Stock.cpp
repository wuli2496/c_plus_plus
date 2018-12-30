/*
 * Stock.cpp
 *
 *  Created on: 2018Äê4ÔÂ13ÈÕ
 *      Author: John
 */

#include "Stock.h"
#include <cstring>
#include <iostream>

Stock::Stock()
{
	std::strcpy(company, "no name");
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}
Stock::Stock(const char *co, int n, double pr)
{
	std::cout << "Constructor using " << co << " called\n";
	std::strncpy(company, co, 29);
	company[29] = '\0';

	if (n < 0)
	{
		std::cerr << "Number of shares can't be negative;"
				<< company << " shares set to 0.\n";
		shares = 0;
	}
	else
		shares = n;

	share_val = pr;
	set_tot();
}


Stock::~Stock()
{
	std::cout << "Bye, " << company << std::endl;
}

void Stock::acquire(const char *co, int n, double pr)
{
	std::strncpy(company, co, 29);
	company[29] = '\0';
	if (n < 0)
	{
		std::cerr << "Number of shares can't be negative. "
		 	 	 << company << " shares set to 0.\n";
		 shares = 0;
	}
	else
		shares = n;

	share_val = pr;
	set_tot();
}

void Stock::buy(int num, double price)
{
	if (num < 0)
	{
		std::cerr << "Number of shares purchased can't be negative. "
				<< "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(int num, double price)
{
	if (num < 0)
	{
		std::cerr << "Number of shares sold can't be negative. "
				<< "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		std::cerr << "You can't sell more than you have! "
				<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show() const
{
	std::cout << "Company: " << company
			<< " Shares: " << shares << std::endl
			<< " Share Price: $" << share_val
			<< " Total Worth: $" << total_val << std::endl;
}

const Stock& Stock::topval(const Stock& s) const
{
	if (s.total_val > total_val)
	{
		return s;
	}
	else
	{
		return *this;
	}
}

