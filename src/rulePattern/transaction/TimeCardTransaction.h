/*
 * TimeCardTransaction.h
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_TIMECARDTRANSACTION_H_
#define RULEPATTERN_TIMECARDTRANSACTION_H_

#include "../Date.h"
#include "intf/Transaction.h"

class TimeCardTransaction: public Transaction {
public:
	TimeCardTransaction(long date, double hours, int empid);
	virtual ~TimeCardTransaction();

	virtual void Execute();

private:
	int itsEmpid;
	Date itsDate;
	double itsHours;
};

#endif /* RULEPATTERN_TIMECARDTRANSACTION_H_ */
