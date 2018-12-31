/*
 * Employee.h
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_EMPLOYEE_H_
#define RULEPATTERN_EMPLOYEE_H_

#include <string>

class PaymentSchedule;
class PaymentClassification;
class PaymentMethod;
class Affiliation;
class Paycheck;
class Date;

class Employee {
public:
	Employee(int empId, std::string name, std::string address);
	void SetName(std::string name);
	void SetAddress(std::string address);
	void SetClassification(PaymentClassification*);
	void SetMethod(PaymentMethod*);
	void SetSchedule(PaymentSchedule*);
	void SetAffiliation(Affiliation*);

	int GetEmpid() const {return itsEmpid;}
	std::string GetName() const {return itsName;}
	std::string GetAddress() const {return itsAddress;}
	PaymentMethod* GetMethod() {return itsPaymentMethod;}
	PaymentClassification* GetClassification() {return itsClassification;}
	PaymentSchedule* GetSchedule() {return itsSchedule;}
	Affiliation* GetAffiliation() {return itsAffiliation;}

	void Payday(Paycheck&);
	bool IsPayDate(const Date& payDate) const;
	Date GetPayPeriodStartDate(const Date& payPeriodEndDate) const;
	virtual ~Employee();

private:
	int itsEmpid;
	std::string itsName;
	std::string itsAddress;
	PaymentClassification* itsClassification;
	PaymentSchedule* itsSchedule;
	PaymentMethod* itsPaymentMethod;
	Affiliation* itsAffiliation;
};

#endif /* RULEPATTERN_EMPLOYEE_H_ */
