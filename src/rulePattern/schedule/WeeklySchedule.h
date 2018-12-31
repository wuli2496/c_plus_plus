/*
 * WeeklySchedule.h
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_WEEKLYSCHEDULE_H_
#define RULEPATTERN_WEEKLYSCHEDULE_H_

#include "intf/PaymentSchedule.h"

class WeeklySchedule: public PaymentSchedule {
public:
	WeeklySchedule();
	virtual ~WeeklySchedule();
};

#endif /* RULEPATTERN_WEEKLYSCHEDULE_H_ */
