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
	HourlyClassification(double hourlyRate);
	virtual ~HourlyClassification();

	void AddTimeCard(TimeCard* tc);

	double CalculatePay(Paycheck&);

private:
	double itsHourlyRate;
};

#endif /* RULEPATTERN_CLASSIFICATION_HOURLYCLASSIFICATION_H_ */
