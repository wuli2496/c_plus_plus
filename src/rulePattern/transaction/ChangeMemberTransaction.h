/*
 * ChangeMemberTransaction.h
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_TRANSACTION_CHANGEMEMBERTRANSACTION_H_
#define RULEPATTERN_TRANSACTION_CHANGEMEMBERTRANSACTION_H_

#include "ChangeAffiliationTransaction.h"

class ChangeMemberTransaction: public ChangeAffiliationTransaction {
public:
	ChangeMemberTransaction(int empid, int memberid, double dues);
	virtual ~ChangeMemberTransaction();

	virtual Affiliation* GetAffiliation() const;
	virtual void RecordMembership(Employee*);

private:
	int itsMemberId;
	double itsDues;
};

#endif /* RULEPATTERN_TRANSACTION_CHANGEMEMBERTRANSACTION_H_ */
