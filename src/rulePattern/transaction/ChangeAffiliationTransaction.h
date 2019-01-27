/*
 * ChangeAffiliationTransaction.h
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_TRANSACTION_CHANGEAFFILIATIONTRANSACTION_H_
#define RULEPATTERN_TRANSACTION_CHANGEAFFILIATIONTRANSACTION_H_

#include "ChangeEmployeeTransaction.h"

class ChangeAffiliationTransaction: public ChangeEmployeeTransaction {
public:
	ChangeAffiliationTransaction(int empid);
	virtual ~ChangeAffiliationTransaction();

	virtual void Change(Employee&);
	virtual Affiliation* GetAffiliation() const = 0;
	virtual void RecordMembership(Employee*) = 0;
};

#endif /* RULEPATTERN_TRANSACTION_CHANGEAFFILIATIONTRANSACTION_H_ */
