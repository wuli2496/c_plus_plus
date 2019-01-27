/*
 * ChangeNameTransaction.h
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_TRANSACTION_CHANGENAMETRANSACTION_H_
#define RULEPATTERN_TRANSACTION_CHANGENAMETRANSACTION_H_

#include "ChangeEmployeeTransaction.h"
#include <string>

class ChangeNameTransaction: public ChangeEmployeeTransaction {
public:
	ChangeNameTransaction(int empid, std::string name);
	virtual ~ChangeNameTransaction();

	virtual void Change(Employee&);

private:
	std::string itsName;
};

#endif /* RULEPATTERN_TRANSACTION_CHANGENAMETRANSACTION_H_ */
