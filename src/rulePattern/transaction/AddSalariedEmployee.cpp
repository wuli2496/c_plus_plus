/*
 * AddSalariedEmployee.cpp
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#include "AddSalariedEmployee.h"

#include "../classification/SalariedClassification.h"
#include "../schedule/MonthlySchedule.h"

AddSalariedEmployee::AddSalariedEmployee(int empid, std::string name, std::string address, double salary)
	:AddEmployeeTransaction(empid, name, address),
	 itsSalary(salary)
{
	// TODO Auto-generated constructor stub

}

AddSalariedEmployee::~AddSalariedEmployee()
{
	// TODO Auto-generated destructor stub
}

PaymentClassification* AddSalariedEmployee::GetClassification() const
{
	return new SalariedClassification(itsSalary);
}

PaymentSchedule* AddSalariedEmployee::GetSchedule() const
{
	return new MonthlySchedule();
}

