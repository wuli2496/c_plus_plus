/*
 * PaymentSchedule.h
 *
 *  Created on: 2018��12��31��
 *      Author: wl
 */

#ifndef RULEPATTERN_PAYMENTSCHEDULE_H_
#define RULEPATTERN_PAYMENTSCHEDULE_H_
#include "../../Date.h"

class PaymentSchedule {
public:
	PaymentSchedule();
	virtual ~PaymentSchedule();

	virtual bool IsPayDate(const Date&) const = 0;
	virtual Date GetPayPeriodStartDate(const Date&) = 0;
};

#endif /* RULEPATTERN_PAYMENTSCHEDULE_H_ */
