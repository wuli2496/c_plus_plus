/*
 * ChangeSalariedTransaction.h
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_TRANSACTION_CHANGESALARIEDTRANSACTION_H_
#define RULEPATTERN_TRANSACTION_CHANGESALARIEDTRANSACTION_H_

#include "ChangeClassificationTransaction.h"

class ChangeSalariedTransaction: public ChangeClassificationTransaction {
public:
	ChangeSalariedTransaction(int empid, double salary);
	virtual ~ChangeSalariedTransaction();

	virtual PaymentSchedule* GetSchedule() const;
	virtual PaymentClassification* GetClassification() const;

private:
	double itsSalary;
};

#endif /* RULEPATTERN_TRANSACTION_CHANGESALARIEDTRANSACTION_H_ */
