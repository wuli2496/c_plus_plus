/*
 * Paycheck.cpp
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#include "Paycheck.h"
#include "Date.h"

Paycheck::Paycheck() :itsGrossPay(0), itsDeductions(9), itsNetPay(0)
{
	// TODO Auto-generated constructor stub

}

Paycheck::~Paycheck() {
	// TODO Auto-generated destructor stub
}

Date Paycheck::GetPayPeriodEndDate()
{
	return Date();
}

void Paycheck::SetGrossPay(double grossPay)
{
	itsGrossPay = grossPay;
}

void Paycheck::SetDeductions(double deductions)
{
	itsDeductions = deductions;
}

void Paycheck::SetNetPay(double netPay)
{
	itsNetPay = netPay;
}
