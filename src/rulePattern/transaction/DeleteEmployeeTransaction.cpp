/*
 * DeleteEmployeeTransaction.cpp
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#include "DeleteEmployeeTransaction.h"
#include "../PayrollDatabase.h"

extern PayrollDatabase GpayrollDatabase;

DeleteEmployeeTransaction::DeleteEmployeeTransaction(int empid)
	: itsEmpid(empid)
{
	// TODO Auto-generated constructor stub

}

DeleteEmployeeTransaction::~DeleteEmployeeTransaction()
{
	// TODO Auto-generated destructor stub
}

void DeleteEmployeeTransaction::Execute()
{
	GpayrollDatabase.DeleteEmployee(itsEmpid);
}

