/*
 * ChangeUnaffiliatedTransaction.h
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_TRANSACTION_CHANGEUNAFFILIATEDTRANSACTION_H_
#define RULEPATTERN_TRANSACTION_CHANGEUNAFFILIATEDTRANSACTION_H_

#include "ChangeAffiliationTransaction.h"

class ChangeUnaffiliatedTransaction: public ChangeAffiliationTransaction {
public:
	ChangeUnaffiliatedTransaction(int empid);
	virtual ~ChangeUnaffiliatedTransaction();

	virtual Affiliation* GetAffiliation() const;
	virtual void RecordMembership(Employee*);
};

#endif /* RULEPATTERN_TRANSACTION_CHANGEUNAFFILIATEDTRANSACTION_H_ */
