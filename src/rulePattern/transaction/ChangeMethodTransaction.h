/*
 * ChangeMethodTransaction.h
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_TRANSACTION_CHANGEMETHODTRANSACTION_H_
#define RULEPATTERN_TRANSACTION_CHANGEMETHODTRANSACTION_H_

#include "ChangeEmployeeTransaction.h"

class ChangeMethodTransaction: public ChangeEmployeeTransaction {
public:
	ChangeMethodTransaction(int empid);
	virtual ~ChangeMethodTransaction();

	virtual void Change(Employee&);
	virtual PaymentMethod* GetMethod() const = 0;
};

#endif /* RULEPATTERN_TRANSACTION_CHANGEMETHODTRANSACTION_H_ */
