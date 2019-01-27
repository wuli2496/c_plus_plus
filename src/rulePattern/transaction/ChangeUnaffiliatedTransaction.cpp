/*
 * ChangeUnaffiliatedTransaction.cpp
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#include "ChangeUnaffiliatedTransaction.h"
#include "../affiliation/NoAffiliation.h"
#include "../affiliation/UnionAffiliation.h"
#include "../PayrollDatabase.h"

extern PayrollDatabase GpayrollDatabase;

ChangeUnaffiliatedTransaction::ChangeUnaffiliatedTransaction(int empid)
:ChangeAffiliationTransaction(empid)
{
	// TODO Auto-generated constructor stub

}

ChangeUnaffiliatedTransaction::~ChangeUnaffiliatedTransaction() {
	// TODO Auto-generated destructor stub
}

Affiliation* ChangeUnaffiliatedTransaction::GetAffiliation() const
{
	return new NoAffiliation();
}

void ChangeUnaffiliatedTransaction::RecordMembership(Employee* e)
{
	Affiliation* af = e->GetAffiliation();
	if (UnionAffiliation* uf = dynamic_cast<UnionAffiliation*>(af)) {
		int memberId = uf->GetMemberId();
		GpayrollDatabase.RemoveUnionMember(memberId);
	}
}
