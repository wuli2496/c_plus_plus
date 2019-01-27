/*
 * ChangeMemberTransaction.cpp
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#include "ChangeMemberTransaction.h"
#include "../affiliation/UnionAffiliation.h"
#include "../PayrollDatabase.h"

extern PayrollDatabase GpayrollDatabase;

ChangeMemberTransaction::ChangeMemberTransaction(int empid, int memberid, double dues)
:ChangeAffiliationTransaction(empid), itsMemberId(memberid), itsDues(dues)
{
	// TODO Auto-generated constructor stub

}

ChangeMemberTransaction::~ChangeMemberTransaction() {
	// TODO Auto-generated destructor stub
}


Affiliation* ChangeMemberTransaction::GetAffiliation() const
{
	return new UnionAffiliation(itsMemberId, itsDues);
}

void ChangeMemberTransaction::RecordMembership(Employee* e)
{
	GpayrollDatabase.AddUnionMember(itsMemberId, e)
}
