/*
 * WeeklySchedule.cpp
 *
 *  Created on: 2018��12��31��
 *      Author: wl
 */

#include "WeeklySchedule.h"
WeeklySchedule::WeeklySchedule() {
	// TODO Auto-generated constructor stub

}

WeeklySchedule::~WeeklySchedule() {
	// TODO Auto-generated destructor stub
}

bool WeeklySchedule::IsPayDate(const Date&) const
{
	return false;
}

Date WeeklySchedule::GetPayPeriodStartDate(const Date&)
{
	return Date(0);
}
