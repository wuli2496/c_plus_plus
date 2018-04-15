/*
 * Stock.h
 *
 *  Created on: 2018Äê4ÔÂ13ÈÕ
 *      Author: John
 */

#ifndef STOCK_H_
#define STOCK_H_

#include <string>

class Stock {
private:
	char company[30];
	int shares;
	double share_val;
	double total_val;
	void set_tot() {total_val = shares * share_val;}

public:
	Stock();
	Stock(const char *co, int n = 0, double pt = 0.0);;
	~Stock();
	void acquire(const char *co, int n, double pr);
	void buy(int num, double price);
	void sell(int num, double price);
	void update(double price);
	void show() const ;
	const Stock& topval(const Stock &s)const;

};

#endif /* STOCK_H_ */
