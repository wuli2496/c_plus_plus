/*
 * ChangeSalariedTransaction.cpp
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#include "ChangeSalariedTransaction.h"
#include "../schedule/MonthlySchedule.h"
#include "../classification/SalariedClassification.h"

ChangeSalariedTransaction::ChangeSalariedTransaction(int empid, double salary)
:ChangeClassificationTransaction(empid), itsSalary(salary)
{
	// TODO Auto-generated constructor stub

}

ChangeSalariedTransaction::~ChangeSalariedTransaction() {
	// TODO Auto-generated destructor stub
}

PaymentSchedule* ChangeSalariedTransaction::GetSchedule() const
{
	return new MonthlySchedule();
}

PaymentClassification* ChangeSalariedTransaction::GetClassification() const
{
	return new SalariedClassification(itsSalary);
}

