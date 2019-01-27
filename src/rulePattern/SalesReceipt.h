/*
 * SalesReceipt.h
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_SALESRECEIPT_H_
#define RULEPATTERN_SALESRECEIPT_H_

#include "Date.h"

class SalesReceipt {
public:
	SalesReceipt(Date date, int amout);
	virtual ~SalesReceipt();

private:
	Date itsDate;
	int itsAmount;
};

#endif /* RULEPATTERN_SALESRECEIPT_H_ */
