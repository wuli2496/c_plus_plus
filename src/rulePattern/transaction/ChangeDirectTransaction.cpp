/*
 * ChangeDirectTransaction.cpp
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
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

