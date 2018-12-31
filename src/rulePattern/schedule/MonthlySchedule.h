/*
 * MonthlySchedule.h
 *
 *  Created on: 2018��12��31��
 *      Author: wl
 */

#ifndef RULEPATTERN_MONTHLYSCHEDULE_H_
#define RULEPATTERN_MONTHLYSCHEDULE_H_

#include "intf/PaymentSchedule.h"

class MonthlySchedule: public PaymentSchedule {
public:
	MonthlySchedule();
	virtual ~MonthlySchedule();

	bool IsPayDate(const Date&) const;
	Date GetPayPeriodStartDate(const Date&);
};

#endif /* RULEPATTERN_MONTHLYSCHEDULE_H_ */
