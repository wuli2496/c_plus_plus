/*
 * PaymentMethod.h
 *
 *  Created on: 2018��12��31��
 *      Author: wl
 */

#ifndef RULEPATTERN_PAYMENTMETHOD_H_
#define RULEPATTERN_PAYMENTMETHOD_H_

class Paycheck;

class PaymentMethod {
public:
	PaymentMethod();
	virtual ~PaymentMethod();

	virtual void Pay(Paycheck&) = 0;
};

#endif /* RULEPATTERN_PAYMENTMETHOD_H_ */
