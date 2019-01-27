/*
 * ChangeCommisssionedTransaction.cpp
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#include "ChangeCommisssionedTransaction.h"
#include "../classification/CommissionedClassification.h"
#include "../schedule/BlweeklySchedule.h"

ChangeCommisssionedTransaction::ChangeCommisssionedTransaction(int empid, double amount)
:ChangeClassificationTransaction(empid), itsAmount(amount)
{
	// TODO Auto-generated constructor stub

}

ChangeCommisssionedTransaction::~ChangeCommisssionedTransaction() {
	// TODO Auto-generated destructor stub
}

PaymentClassification* ChangeCommisssionedTransaction::GetClassification() const
{
	return new CommissionedClassification();
}

PaymentSchedule* ChangeCommisssionedTransaction::GetSchedule() const
{
	return new BlweeklySchedule();
}
