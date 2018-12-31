/*
 * ServiceChargeTransaction.h
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_TRANSACTION_SERVICECHARGETRANSACTION_H_
#define RULEPATTERN_TRANSACTION_SERVICECHARGETRANSACTION_H_

#include "intf/Transaction.h"
#include "../Date.h"

class ServiceChargeTransaction: public Transaction {
public:
	ServiceChargeTransaction(int memberId, long date, double charge);
	virtual ~ServiceChargeTransaction();

	virtual void Execute();

private:
	int itsMemberId;
	Date itsDate;
	double itsCharge;
};

#endif /* RULEPATTERN_TRANSACTION_SERVICECHARGETRANSACTION_H_ */
