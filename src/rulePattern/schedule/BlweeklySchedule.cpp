/*
 * BlweeklySchedule.cpp
 *
 *  Created on: 2018��12��31��
 *      Author: wl
 */

#include "BlweeklySchedule.h"

BlweeklySchedule::BlweeklySchedule() {
	// TODO Auto-generated constructor stub

}

BlweeklySchedule::~BlweeklySchedule() {
	// TODO Auto-generated destructor stub
}

bool BlweeklySchedule::IsPayDate(const Date&) const
{
	return false;
}

Date BlweeklySchedule::GetPayPeriodStartDate(const Date&)
{
	return Date(0);
}
