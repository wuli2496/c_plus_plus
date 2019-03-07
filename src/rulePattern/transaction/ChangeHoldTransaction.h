/*
 * ChangeHoldTransaction.h
 *
 *  Created on: 2019��1��27��
 *      Author: wl
 */

#ifndef RULEPATTERN_TRANSACTION_CHANGEHOLDTRANSACTION_H_
#define RULEPATTERN_TRANSACTION_CHANGEHOLDTRANSACTION_H_

#include "ChangeMethodTransaction.h"

class ChangeHoldTransaction: public ChangeMethodTransaction {
public:
	ChangeHoldTransaction(int empId);
	virtual ~ChangeHoldTransaction();

	virtual PaymentMethod* GetMethod() const;
};

#endif /* RULEPATTERN_TRANSACTION_CHANGEHOLDTRANSACTION_H_ */
