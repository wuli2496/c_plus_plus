/*
 * ServiceChargeTransaction.cpp
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#include "ServiceChargeTransaction.h"
#include "../PayrollDatabase.h"
#include "../affiliation/UnionAffiliation.h"
#include "../affiliation/intf/Affiliation.h"
#include "../Employee.h"

extern PayrollDatabase GpayrollDatabase;

ServiceChargeTransaction::ServiceChargeTransaction(int memberId, long date, double charge)
	:itsMemberId(memberId),
	 itsDate(date),
	 itsCharge(charge)
{
	// TODO Auto-generated constructor stub

}

ServiceChargeTransaction::~ServiceChargeTransaction() {
	// TODO Auto-generated destructor stub
}

void ServiceChargeTransaction::Execute()
{
	Employee* e = GpayrollDatabase.GetUnionMember(itsMemberId);
	Affiliation* af = e->GetAffiliation();
	if (UnionAffiliation* uaf = dynamic_cast<UnionAffiliation*>(af)) {

	}
}

