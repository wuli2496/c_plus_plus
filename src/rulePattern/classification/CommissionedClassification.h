/*
 * CommissionedClassification.h
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_CLASSIFICATION_COMMISSIONEDCLASSIFICATION_H_
#define RULEPATTERN_CLASSIFICATION_COMMISSIONEDCLASSIFICATION_H_

#include "intf/PaymentClassification.h"

class SalesReceipt;

class CommissionedClassification: public PaymentClassification {
public:
	CommissionedClassification();
	virtual ~CommissionedClassification();

	void AddSalesReceipt(SalesReceipt* sr);

	virtual double CalculatePay(Paycheck&);
};

#endif /* RULEPATTERN_CLASSIFICATION_COMMISSIONEDCLASSIFICATION_H_ */
