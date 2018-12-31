/*
 * SalariedClassification.h
 *
 *  Created on: 2018��12��31��
 *      Author: wl
 */

#ifndef RULEPATTERN_CLASSIFICATION_SALARIEDCLASSIFICATION_H_
#define RULEPATTERN_CLASSIFICATION_SALARIEDCLASSIFICATION_H_

#include "intf/PaymentClassification.h"

class SalariedClassification: public PaymentClassification {
public:
	SalariedClassification(double salary);
	virtual ~SalariedClassification();

	double CalculatePay(Paycheck&);

private:
	double itsSalary;
};

#endif /* RULEPATTERN_CLASSIFICATION_SALARIEDCLASSIFICATION_H_ */
