/*
 * AddCommissionedEmployee.h
 *
 *  Created on: 2018��12��31��
 *      Author: wl
 */

#ifndef RULEPATTERN_ADDCOMMISSIONEDEMPLOYEE_H_
#define RULEPATTERN_ADDCOMMISSIONEDEMPLOYEE_H_

#include "AddEmployeeTransaction.h"

class AddCommissionedEmployee: public AddEmployeeTransaction {
public:
	AddCommissionedEmployee(int empid, std::string name, std::string address);
	virtual ~AddCommissionedEmployee();

	PaymentClassification* GetClassification() const;
	PaymentSchedule* GetSchedule() const;

};

#endif /* RULEPATTERN_ADDCOMMISSIONEDEMPLOYEE_H_ */
