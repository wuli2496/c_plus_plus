/*
 * ChangeMailTransaction.cpp
 *
 *  Created on: 2019��1��27��
 *      Author: wl
 */

#include "ChangeMailTransaction.h"
#include "../method/MailMethod.h"

ChangeMailTransaction::ChangeMailTransaction(int empId) : ChangeMethodTransaction(empId)
{
	// TODO Auto-generated constructor stub

}

ChangeMailTransaction::~ChangeMailTransaction() {
	// TODO Auto-generated destructor stub
}

PaymentMethod* ChangeMailTransaction::GetMethod() const
{
	return new MailMethod();
}
