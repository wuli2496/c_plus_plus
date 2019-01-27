/*
 * MonthlySchedule.h
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_MONTHLYSCHEDULE_H_
#define RULEPATTERN_MONTHLYSCHEDULE_H_

#include "intf/PaymentSchedule.h"

class MonthlySchedule: public PaymentSchedule {
public:
	MonthlySchedule();
	virtual ~MonthlySchedule();

	virtual bool IsPayDate(const Date&) const;
	virtual Date GetPayPeriodStartDate(const Date&);
};

#endif /* RULEPATTERN_MONTHLYSCHEDULE_H_ */
