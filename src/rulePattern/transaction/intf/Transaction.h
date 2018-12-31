/*
 * Transaction.h
 *
 *  Created on: 2018��12��31��
 *      Author: wl
 */

#ifndef RULEPATTERN_TRANSACTION_INTF_TRANSACTION_H_
#define RULEPATTERN_TRANSACTION_INTF_TRANSACTION_H_

class Transaction {
public:
	virtual ~Transaction();
	virtual void Execute() = 0;
};

#endif /* RULEPATTERN_TRANSACTION_INTF_TRANSACTION_H_ */
