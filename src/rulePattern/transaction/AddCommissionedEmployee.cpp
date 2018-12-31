/*
 * AddCommissionedEmployee.cpp
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#include "AddCommissionedEmployee.h"

AddCommissionedEmployee::AddCommissionedEmployee(int empid, std::string name, std::string address)
	:AddEmployeeTransaction(empid, name, address)
{
	// TODO Auto-generated constructor stub

}

AddCommissionedEmployee::~AddCommissionedEmployee() {
	// TODO Auto-generated destructor stub
}

PaymentClassification* AddCommissionedEmployee::GetClassification() const
{
	return NULL;
}

PaymentSchedule* AddCommissionedEmployee::GetSchedule() const
{
	return NULL;
}

