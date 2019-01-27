/*
 * ChangeNameTransaction.cpp
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
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

