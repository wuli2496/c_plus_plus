/*
 * TimeCardTransaction.cpp
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#include "TimeCardTransaction.h"

#include "../classification/HourlyClassification.h"
#include "../Employee.h"
#include "../PayrollDatabase.h"
#include "../TimeCard.h"

extern PayrollDatabase GpayrollDatabase;

TimeCardTransaction::TimeCardTransaction(long date, double hours, int empid)
	:itsDate(date), itsHours(hours), itsEmpid(empid)
{
	// TODO Auto-generated constructor stub

}

TimeCardTransaction::~TimeCardTransaction()
{
	// TODO Auto-generated destructor stub
}

void TimeCardTransaction::Execute()
{
	Employee* e = GpayrollDatabase.GetEmployee(itsEmpid);
	if (e) {
		PaymentClassification* pc = e->GetClassification();
		if (HourlyClassification* hc = dynamic_cast<HourlyClassification*>(pc)) {
			hc->AddTimeCard(new TimeCard(itsDate, itsHours));
		} else {
			throw("Tried to add timecard to non-hourly employee");
		}
	} else {
		throw("No such employee");
	}
}

