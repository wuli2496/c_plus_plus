/*
 * PayrollDatabase.h
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_PAYROLLDATABASE_H_
#define RULEPATTERN_PAYROLLDATABASE_H_

#include <map>

class Employee;

class PayrollDatabase {
public:
	virtual ~PayrollDatabase();
	Employee* GetEmployee(int empId);
	void AddEmployee(int empId, Employee*);
	void DeleteEmployee(int empId);
	void clear()
	{
		itsEmployees.clear();
	}

	Employee* GetUnionMember(int itsMemberId);
	void AddUnionMember(int memberId, Employee* e);
	void RemoveUnionMember(int memberId);

private:
	std::map<int, Employee*> itsEmployees;
	std::map<int, Employee*> itsMembers;
};

#endif /* RULEPATTERN_PAYROLLDATABASE_H_ */
