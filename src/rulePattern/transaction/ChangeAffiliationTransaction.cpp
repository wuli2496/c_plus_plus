/*
 * ChangeAffiliationTransaction.cpp
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#include "ChangeAffiliationTransaction.h"

ChangeAffiliationTransaction::ChangeAffiliationTransaction(int empid)
:ChangeEmployeeTransaction(empid)
{
	// TODO Auto-generated constructor stub

}

ChangeAffiliationTransaction::~ChangeAffiliationTransaction() {
	// TODO Auto-generated destructor stub
}

void ChangeAffiliationTransaction::Change(Employee& e)
{
	RecordMembership(&e);
	e.SetAffiliation(GetAffiliation());
}

