/*
 * BlweeklySchedule.h
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_BLWEEKLYSCHEDULE_H_
#define RULEPATTERN_BLWEEKLYSCHEDULE_H_

#include "intf/PaymentSchedule.h"

class BlweeklySchedule: public PaymentSchedule {
public:
	BlweeklySchedule();
	virtual ~BlweeklySchedule();
};

#endif /* RULEPATTERN_BLWEEKLYSCHEDULE_H_ */
