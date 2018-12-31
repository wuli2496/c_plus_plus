/*
 * PaymentClassificatoin.h
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_CLASSIFICATION_INTF_PAYMENTCLASSIFICATION_H_
#define RULEPATTERN_CLASSIFICATION_INTF_PAYMENTCLASSIFICATION_H_

class Paycheck;

class PaymentClassification {
public:
	PaymentClassification();
	virtual ~PaymentClassification();

	virtual double CalculatePay(Paycheck&) = 0;
};

#endif /* RULEPATTERN_CLASSIFICATION_INTF_PAYMENTCLASSIFICATION_H_ */
