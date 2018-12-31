/*
 * AddHourlyEmployee.h
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_TRANSACTION_ADDHOURLYEMPLOYEE_H_
#define RULEPATTERN_TRANSACTION_ADDHOURLYEMPLOYEE_H_

#include "AddEmployeeTransaction.h"

class AddHourlyEmployee: public AddEmployeeTransaction {
public:
	AddHourlyEmployee(int empid, std::string name, std::string address);
	virtual ~AddHourlyEmployee();

	PaymentClassification* GetClassification() const;
	PaymentSchedule* GetSchedule() const;
private:
	double itsHourlyRate;
};

#endif /* RULEPATTERN_TRANSACTION_ADDHOURLYEMPLOYEE_H_ */
