/*
 * DirectMethod.h
 *
 *  Created on: 2019��1��27��
 *      Author: wl
 */

#ifndef RULEPATTERN_METHOD_DIRECTMETHOD_H_
#define RULEPATTERN_METHOD_DIRECTMETHOD_H_

#include "intf/PaymentMethod.h"

class DirectMethod: public PaymentMethod {
public:
	DirectMethod();
	virtual ~DirectMethod();

	virtual void Pay(Paycheck&);
};

#endif /* RULEPATTERN_METHOD_DIRECTMETHOD_H_ */
