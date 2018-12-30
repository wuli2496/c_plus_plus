/*
 * BrassPlus.h
 *
 *  Created on: 2018Äê4ÔÂ22ÈÕ
 *      Author: John
 */

#ifndef BRASSPLUS_H_
#define BRASSPLUS_H_

#include "Brass.h"

class BrassPlus : public Brass{
public:
	BrassPlus(const char *s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.10);
	BrassPlus(const Brass &ba, double ml = 500, double r = 0.1);
	virtual void viewAcct()const;
	virtual void withdraw(double amt);
	void resetMax(double m) { maxLoan = m;}
	void resetRate(double r) {rate = r;}
	void resetOwes() {owesBank = 0.0;}
	virtual ~BrassPlus();

private:
	double maxLoan;
	double rate;
	double owesBank;
};

#endif /* BRASSPLUS_H_ */
