/*
 * ChangeClassificationTransaction.cpp
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: wl
 */

#include "ChangeClassificationTransaction.h"

ChangeClassificationTransaction::ChangeClassificationTransaction(int empid)
: ChangeEmployeeTransaction(empid)
{
	// TODO Auto-generated constructor stub

}

ChangeClassificationTransaction::~ChangeClassificationTransaction() {
	// TODO Auto-generated destructor stub
}

void ChangeClassificationTransaction::Change(Employee& e)
{
	e.SetClassification(GetClassification());
	e.SetSchedule(GetSchedule());
}
