/*
 * ChangeMailTransaction.h
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_TRANSACTION_CHANGEMAILTRANSACTION_H_
#define RULEPATTERN_TRANSACTION_CHANGEMAILTRANSACTION_H_

#include "ChangeMethodTransaction.h"

class ChangeMailTransaction: public ChangeMethodTransaction {
public:
	ChangeMailTransaction(int empid);
	virtual ~ChangeMailTransaction();

	virtual PaymentMethod* GetMethod() const;
};

#endif /* RULEPATTERN_TRANSACTION_CHANGEMAILTRANSACTION_H_ */
