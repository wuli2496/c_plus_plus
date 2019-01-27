/*
 * ChangeNameTransaction.cpp
 *
 *  Created on: 2019��1��27��
 *      Author: wl
 */

#include "ChangeNameTransaction.h"

ChangeNameTransaction::ChangeNameTransaction(int empid, std::string name)
:ChangeEmployeeTransaction(empid), itsName(name)
{
	// TODO Auto-generated constructor stub

}

ChangeNameTransaction::~ChangeNameTransaction() {
	// TODO Auto-generated destructor stub
}

void ChangeNameTransaction::Change(Employee& e)
{
	e.SetName(itsName);
}

