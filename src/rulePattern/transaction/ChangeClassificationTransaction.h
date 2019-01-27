/*
 * ChangeClassificationTransaction.h
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_TRANSACTION_CHANGECLASSIFICATIONTRANSACTION_H_
#define RULEPATTERN_TRANSACTION_CHANGECLASSIFICATIONTRANSACTION_H_

#include "ChangeEmployeeTransaction.h"

class ChangeClassificationTransaction: public ChangeEmployeeTransaction {
public:
	ChangeClassificationTransaction(int empid);
	virtual ~ChangeClassificationTransaction();

	virtual void Change(Employee&);
	virtual PaymentClassification* GetClassification() const = 0;
	virtual PaymentSchedule* GetSchedule() const = 0;
};

#endif /* RULEPATTERN_TRANSACTION_CHANGECLASSIFICATIONTRANSACTION_H_ */
