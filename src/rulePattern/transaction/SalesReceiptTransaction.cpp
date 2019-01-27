/*
 * SalesReceiptTransaction.cpp
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#include "SalesReceiptTransaction.h"
#include "../Employee.h"
#include "../PayrollDatabase.h"
#include "../classification/CommissionedClassification.h"
#include "../SalesReceipt.h"

extern PayrollDatabase GpayrollDatabase;

SalesReceiptTransaction::SalesReceiptTransaction(long date, int amount, int empid)
: itsDate(date), itsAmount(amount), itsEmpid(empid)
{
	// TODO Auto-generated constructor stub

}

SalesReceiptTransaction::~SalesReceiptTransaction() {
	// TODO Auto-generated destructor stub
}

void SalesReceiptTransaction::Execute()
{
	Employee* e = GpayrollDatabase.GetEmployee(itsEmpid);
	if (e) {
		PaymentClassification* pc = e->GetClassification();
		if (CommissionedClassification* cc = dynamic_cast<CommissionedClassification*>(pc)) {
			cc->AddSalesReceipt(new SalesReceipt(itsDate, itsAmount));
		} else {
			throw("Tried to add salereceipt to commission employee");
		}
	} else {
		throw("No such employee");
	}
}
