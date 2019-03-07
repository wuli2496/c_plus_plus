/*
 * Employee.cpp
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#include "Employee.h"

#include "classification/intf/PaymentClassification.h"
#include "affiliation/NoAffiliation.h"
#include "schedule/intf/PaymentSchedule.h"
#include "method/intf/PaymentMethod.h"
#include "Paycheck.h"
#include "Date.h"

Employee::Employee(int empId, std::string name, std::string address)
	:itsEmpid(empId),
	 itsName(name),
	 itsAddress(address),
	 itsClassification(0),
	 itsSchedule(0),
	 itsPaymentMethod(0),
	 itsAffiliation(new NoAffiliation())
{
	// TODO Auto-generated constructor stub

}

Employee::~Employee()
{
	// TODO Auto-generated destructor stub
	delete itsClassification;
	delete itsSchedule;
	delete itsPaymentMethod;
}

void Employee::SetName(std::string name)
{
	itsName = name;
}

void Employee::SetClassification(PaymentClassification* pc)
{
	delete itsClassification;
	itsClassification = pc;
}

void Employee::SetSchedule(PaymentSchedule* ps)
{
	delete itsSchedule;
	itsSchedule = ps;
}

void Employee::SetMethod(PaymentMethod* pm)
{
	delete itsPaymentMethod;
	itsPaymentMethod = pm;
}

void Employee::SetAffiliation(Affiliation* af)
{
	delete itsAffiliation;
	itsAffiliation = af;
}

bool Employee::IsPayDate(const Date& payDate) const
{
	return itsSchedule->IsPayDate(payDate);
}

Date Employee::GetPayPeriodStartDate(const Date& payPeriodEndDate) const
{
	return itsSchedule->GetPayPeriodStartDate(payPeriodEndDate);
}

void Employee::Payday(Paycheck& pc)
{
	Date payDate = pc.GetPayPeriodEndDate();
	double grossPay = itsClassification->CalculatePay(pc);
	double deductions = itsAffiliation->CalculateDeductions(pc);
	double netPay = grossPay - deductions;
	pc.SetGrossPay(grossPay);
	pc.SetDeductions(deductions);
	pc.SetNetPay(netPay);
	itsPaymentMethod->Pay(pc);


}

