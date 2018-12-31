/*
 * DeleteEmployeeTransaction.h
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_DELETEEMPLOYEETRANSACTION_H_
#define RULEPATTERN_DELETEEMPLOYEETRANSACTION_H_

#include "intf/Transaction.h"

class DeleteEmployeeTransaction: public Transaction {
public:
	DeleteEmployeeTransaction(int empid);
	virtual ~DeleteEmployeeTransaction();

	virtual void Execute();

private:
	int itsEmpid;
};

#endif /* RULEPATTERN_DELETEEMPLOYEETRANSACTION_H_ */
