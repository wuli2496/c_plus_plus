/*
 * AddSalariedEmployee.h
 *
 *  Created on: 2018��12��31��
 *      Author: wl
 */

#ifndef RULEPATTERN_TRANSACTION_ADDSALARIEDEMPLOYEE_H_
#define RULEPATTERN_TRANSACTION_ADDSALARIEDEMPLOYEE_H_

#include "AddEmployeeTransaction.h"

class AddSalariedEmployee: public AddEmployeeTransaction {
public:
	AddSalariedEmployee(int empid, std::string name, std::string address, double salary);
	virtual ~AddSalariedEmployee();

	PaymentClassification* GetClassification() const;
	PaymentSchedule* GetSchedule() const;

private:
	double itsSalary;
};

#endif /* RULEPATTERN_TRANSACTION_ADDSALARIEDEMPLOYEE_H_ */
