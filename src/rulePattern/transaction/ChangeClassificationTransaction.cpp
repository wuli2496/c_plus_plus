/*
 * ChangeClassificationTransaction.cpp
 *
 *  Created on: 2019��1��27��
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
