/*
 * AddHourlyEmployee.cpp
 *
 *  Created on: 2018��12��31��
 *      Author: wl
 */

#include "AddHourlyEmployee.h"

AddHourlyEmployee::AddHourlyEmployee(int empid, std::string name, std::string address)
	:AddEmployeeTransaction(empid, name, address)
{
	// TODO Auto-generated constructor stub

}

AddHourlyEmployee::~AddHourlyEmployee() {
	// TODO Auto-generated destructor stub
}

PaymentClassification* AddHourlyEmployee::GetClassification() const
{
	return NULL;
}

PaymentSchedule* AddHourlyEmployee::GetSchedule() const
{
	return NULL;
}

