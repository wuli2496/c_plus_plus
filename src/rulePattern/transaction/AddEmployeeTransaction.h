/*
 * AddEmployeeTransaction.h
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_TRANSACTION_ADDEMPLOYEETRANSACTION_H_
#define RULEPATTERN_TRANSACTION_ADDEMPLOYEETRANSACTION_H_

#include <string>
#include "intf/Transaction.h"

class PaymentClassification;
class PaymentSchedule;

class AddEmployeeTransaction: public Transaction {
public:
	AddEmployeeTransaction(int empid, std::string name, std::string address);
	virtual ~AddEmployeeTransaction();
	virtual PaymentClassification* GetClassification() const = 0;
	virtual PaymentSchedule* GetSchedule() const = 0;
	virtual void Execute();

private:
	int itsEmpid;
	std::string itsName;
	std::string itsAddress;
};

#endif /* RULEPATTERN_TRANSACTION_ADDEMPLOYEETRANSACTION_H_ */
