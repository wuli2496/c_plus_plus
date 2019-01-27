/*
 * BlweeklySchedule.h
 *
 *  Created on: 2018��12��31��
 *      Author: wl
 */

#ifndef RULEPATTERN_BLWEEKLYSCHEDULE_H_
#define RULEPATTERN_BLWEEKLYSCHEDULE_H_

#include "intf/PaymentSchedule.h"

class BlweeklySchedule: public PaymentSchedule {
public:
	BlweeklySchedule();
	virtual ~BlweeklySchedule();

	virtual bool IsPayDate(const Date&) const;
	virtual Date GetPayPeriodStartDate(const Date&);
};

#endif /* RULEPATTERN_BLWEEKLYSCHEDULE_H_ */
