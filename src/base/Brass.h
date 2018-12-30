/*
 * Brass.h
 *
 *  Created on: 2018Äê4ÔÂ22ÈÕ
 *      Author: John
 */

#ifndef BRASS_H_
#define BRASS_H_

class Brass {
public:
	Brass(const char *s = "Nullbody", long an = -1, double bal = 0.0);
	void deposit(double amt);
	virtual void withdraw(double amt);
	double getBalance()const;
	virtual void viewAcct()const;
	virtual ~Brass();

private:
	enum {MAX = 35};
	char fullName[MAX];
	long acctNum;
	double balance;
};

#endif /* BRASS_H_ */
