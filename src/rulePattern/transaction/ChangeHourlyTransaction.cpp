/*
 * ChangeHourlyTransaction.cpp
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#include "ChangeHourlyTransaction.h"
#include "../schedule/WeeklySchedule.h"
#include "../classification/HourlyClassification.h"

ChangeHourlyTransaction::ChangeHourlyTransaction(int empid, double hourlyRate)
:ChangeClassificationTransaction(empid), itsHourlyRate(hourlyRate)
{
	// TODO Auto-generated constructor stub

}

ChangeHourlyTransaction::~ChangeHourlyTransaction() {
	// TODO Auto-generated destructor stub
}

PaymentSchedule* ChangeHourlyTransaction::GetSchedule() const
{
	return new WeeklySchedule();
}

PaymentClassification* ChangeHourlyTransaction::GetClassification() const
{
	return new HourlyClassification(itsHourlyRate);
}
