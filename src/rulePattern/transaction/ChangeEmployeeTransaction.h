/*
 * ChangeEmployeeTransaction.h
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_TRANSACTION_CHANGEEMPLOYEETRANSACTION_H_
#define RULEPATTERN_TRANSACTION_CHANGEEMPLOYEETRANSACTION_H_

#include "intf/Transaction.h"
#include "../Employee.h"

class ChangeEmployeeTransaction: public Transaction {
public:
	ChangeEmployeeTransaction(int empid);
	virtual ~ChangeEmployeeTransaction();

	virtual void Execute();
	virtual void Change(Employee&) = 0;

private:
	int itsEmpId;
};

#endif /* RULEPATTERN_TRANSACTION_CHANGEEMPLOYEETRANSACTION_H_ */
