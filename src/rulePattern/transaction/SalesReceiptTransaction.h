/*
 * SalesReceiptTransaction.h
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_TRANSACTION_SALESRECEIPTTRANSACTION_H_
#define RULEPATTERN_TRANSACTION_SALESRECEIPTTRANSACTION_H_

#include "intf/Transaction.h"
#include "../Date.h"

class SalesReceiptTransaction: public Transaction {
public:
	SalesReceiptTransaction(long date, int amount, int empid);
	virtual ~SalesReceiptTransaction();

	virtual void Execute();

private:
	Date itsDate;
	int itsEmpid;
	int itsAmount;
};

#endif /* RULEPATTERN_TRANSACTION_SALESRECEIPTTRANSACTION_H_ */
