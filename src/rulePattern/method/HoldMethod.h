/*
 * HoldMethod.h
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_HOLDMETHOD_H_
#define RULEPATTERN_HOLDMETHOD_H_

#include "intf/PaymentMethod.h"

class HoldMethod: public PaymentMethod {
public:
	HoldMethod();
	virtual ~HoldMethod();

	void Pay(Paycheck&);
};

#endif /* RULEPATTERN_HOLDMETHOD_H_ */
