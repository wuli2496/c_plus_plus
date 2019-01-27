/*
 * SalesReceipt.h
 *
 *  Created on: 2019��1��27��
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
