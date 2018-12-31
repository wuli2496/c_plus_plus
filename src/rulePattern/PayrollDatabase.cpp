/*
 * PayrollDatabase.cpp
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#include "PayrollDatabase.h"
#include "Employee.h"

PayrollDatabase GpayrollDatabase;

PayrollDatabase::~PayrollDatabase() {
	// TODO Auto-generated destructor stub
}

Employee* PayrollDatabase::GetEmployee(int empId)
{
	return itsEmployees[empId];
}

void PayrollDatabase::AddEmployee(int empId, Employee* e)
{
	itsEmployees[empId] = e;
}

void PayrollDatabase::DeleteEmployee(int empId)
{
	itsEmployees.erase(itsEmployees.find(empId));
}

Employee* PayrollDatabase::GetUnionMember(int memberId)
{
	return itsMembers[memberId];
}

