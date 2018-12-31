/*
 * AddEmployeeTransaction.cpp
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#include "AddEmployeeTransaction.h"

#include "../method/HoldMethod.h"
#include "../Employee.h"
#include "../PayrollDatabase.h"

class PaymentMethod;
class PaymentSchedule;
class PaymentClassification;

extern PayrollDatabase GpayrollDatabase;

AddEmployeeTransaction::AddEmployeeTransaction(int empid, std::string name, std::string address)
	:itsEmpid(empid),
	 itsName(name),
	 itsAddress(address)
{
	// TODO Auto-generated constructor stub

}

AddEmployeeTransaction::~AddEmployeeTransaction() {
	// TODO Auto-generated destructor stub
}

void AddEmployeeTransaction::Execute()
{
	PaymentClassification* pc = GetClassification();
	PaymentSchedule* ps = GetSchedule();
	PaymentMethod* pm = new HoldMethod();
	Employee* e = new Employee(itsEmpid, itsName, itsAddress);
	e->SetClassification(pc);
	e->SetSchedule(ps);
	e->SetMethod(pm);
	GpayrollDatabase.AddEmployee(itsEmpid, e);
}
