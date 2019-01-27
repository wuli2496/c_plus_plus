/*
 * ChangeCommisssionedTransaction.h
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_TRANSACTION_CHANGECOMMISSSIONEDTRANSACTION_H_
#define RULEPATTERN_TRANSACTION_CHANGECOMMISSSIONEDTRANSACTION_H_

#include "ChangeClassificationTransaction.h"

class ChangeCommisssionedTransaction: public ChangeClassificationTransaction {
public:
	ChangeCommisssionedTransaction(int empid, double amount);
	virtual ~ChangeCommisssionedTransaction();

	virtual PaymentClassification* GetClassification() const;
	virtual PaymentSchedule* GetSchedule() const;

private:
	double itsAmount;
};

#endif /* RULEPATTERN_TRANSACTION_CHANGECOMMISSSIONEDTRANSACTION_H_ */
