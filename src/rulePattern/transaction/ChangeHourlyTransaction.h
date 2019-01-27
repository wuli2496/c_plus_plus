/*
 * ChangeHourlyTransaction.h
 *
 *  Created on: 2019��1��27��
 *      Author: wl
 */

#ifndef RULEPATTERN_TRANSACTION_CHANGEHOURLYTRANSACTION_H_
#define RULEPATTERN_TRANSACTION_CHANGEHOURLYTRANSACTION_H_

#include "ChangeClassificationTransaction.h"

class ChangeHourlyTransaction: public ChangeClassificationTransaction {
public:
	ChangeHourlyTransaction(int empid, double hourlyRate);
	virtual ~ChangeHourlyTransaction();

	virtual PaymentSchedule* GetSchedule() const;
	virtual PaymentClassification* GetClassification() const;

private:
	double itsHourlyRate;
};

#endif /* RULEPATTERN_TRANSACTION_CHANGEHOURLYTRANSACTION_H_ */
