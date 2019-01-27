/*
 * ChangeEmployeeTransaction.cpp
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#include "ChangeEmployeeTransaction.h"
#include "../PayrollDatabase.h"

extern PayrollDatabase GpayrollDatabase;

ChangeEmployeeTransaction::ChangeEmployeeTransaction(int empid)
: itsEmpId(empid)
{
	// TODO Auto-generated constructor stub

}

ChangeEmployeeTransaction::~ChangeEmployeeTransaction() {
	// TODO Auto-generated destructor stub
}

void ChangeEmployeeTransaction::Execute()
{
	Employee* e = GpayrollDatabase.GetEmployee(itsEmpId);
	if (e != 0)
	{
		Change(*e);
	}
}
