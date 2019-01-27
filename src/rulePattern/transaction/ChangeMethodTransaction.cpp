/*
 * ChangeMethodTransaction.cpp
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#include "ChangeMethodTransaction.h"

ChangeMethodTransaction::ChangeMethodTransaction(int empid)
:ChangeEmployeeTransaction(empid)
{
	// TODO Auto-generated constructor stub

}

ChangeMethodTransaction::~ChangeMethodTransaction() {
	// TODO Auto-generated destructor stub
}

void ChangeMethodTransaction::Change(Employee& e)
{
	e.SetMethod(GetMethod());
}
