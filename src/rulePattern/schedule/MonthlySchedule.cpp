/*
 * MonthlySchedule.cpp
 *
 *  Created on: 2018��12��31��
 *      Author: wl
 */

#include "MonthlySchedule.h"
#include "../Date.h"

MonthlySchedule::MonthlySchedule() {
	// TODO Auto-generated constructor stub

}

MonthlySchedule::~MonthlySchedule() {
	// TODO Auto-generated destructor stub
}

bool MonthlySchedule::IsPayDate(const Date&) const
{
	return false;
}

Date MonthlySchedule::GetPayPeriodStartDate(const Date&)
{
	return Date();
}
