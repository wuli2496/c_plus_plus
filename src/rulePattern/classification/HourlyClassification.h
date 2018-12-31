/*
 * HourlyClassification.h
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_CLASSIFICATION_HOURLYCLASSIFICATION_H_
#define RULEPATTERN_CLASSIFICATION_HOURLYCLASSIFICATION_H_

#include "intf/PaymentClassification.h"

class TimeCard;

class HourlyClassification: public PaymentClassification {
public:
	HourlyClassification();
	virtual ~HourlyClassification();

	void AddTimeCard(TimeCard* tc);

	double CalculatePay(Paycheck&);
};

#endif /* RULEPATTERN_CLASSIFICATION_HOURLYCLASSIFICATION_H_ */
