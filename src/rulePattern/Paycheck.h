/*
 * Paycheck.h
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_PAYCHECK_H_
#define RULEPATTERN_PAYCHECK_H_

class Date;

class Paycheck {
public:
	Paycheck();
	virtual ~Paycheck();

	Date GetPayPeriodEndDate();
	void SetGrossPay(double);
	void SetDeductions(double);
	void SetNetPay(double);

private:
	double itsGrossPay;
	double itsDeductions;
	double itsNetPay;
};

#endif /* RULEPATTERN_PAYCHECK_H_ */
