/*
 * ChangeDirectTransaction.cpp
 *
 *  Created on: 2019��1��27��
 *      Author: wl
 */

#include "ChangeDirectTransaction.h"
#include "../method/DirectMethod.h"

ChangeDirectTransaction::ChangeDirectTransaction(int empId)
: ChangeMethodTransaction(empId)
{
	// TODO Auto-generated constructor stub

}

ChangeDirectTransaction::~ChangeDirectTransaction() {
	// TODO Auto-generated destructor stub
}

PaymentMethod* ChangeDirectTransaction::GetMethod() const
{
	return new DirectMethod();
}

