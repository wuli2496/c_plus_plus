/*
 * ChangeHoldTransaction.cpp
 *
 *  Created on: 2019��1��27��
 *      Author: wl
 */

#include "ChangeHoldTransaction.h"
#include "../method/HoldMethod.h"

ChangeHoldTransaction::ChangeHoldTransaction() {
	// TODO Auto-generated constructor stub

}

ChangeHoldTransaction::~ChangeHoldTransaction() {
	// TODO Auto-generated destructor stub
}

PaymentMethod* ChangeHoldTransaction::GetMethod() const
{
	return new HoldMethod();
}
