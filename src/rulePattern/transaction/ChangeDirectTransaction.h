/*
 * ChangeDirectTransaction.h
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_TRANSACTION_CHANGEDIRECTTRANSACTION_H_
#define RULEPATTERN_TRANSACTION_CHANGEDIRECTTRANSACTION_H_

#include "ChangeMethodTransaction.h"

class ChangeDirectTransaction: public ChangeMethodTransaction {
public:
	ChangeDirectTransaction();
	virtual ~ChangeDirectTransaction();

	virtual PaymentMethod* GetMethod() const;
};

#endif /* RULEPATTERN_TRANSACTION_CHANGEDIRECTTRANSACTION_H_ */
