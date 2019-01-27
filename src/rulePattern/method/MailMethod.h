/*
 * MailMethod.h
 *
 *  Created on: 2019��1��27��
 *      Author: wl
 */

#ifndef RULEPATTERN_METHOD_MAILMETHOD_H_
#define RULEPATTERN_METHOD_MAILMETHOD_H_

#include "intf/PaymentMethod.h"

class MailMethod: public PaymentMethod {
public:
	MailMethod();
	virtual ~MailMethod();

	virtual void Pay(Paycheck&);
};

#endif /* RULEPATTERN_METHOD_MAILMETHOD_H_ */
