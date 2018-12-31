/*
 * TimeCard.h
 *
 *  Created on: 2018��12��31��
 *      Author: wl
 */

#ifndef RULEPATTERN_TIMECARD_H_
#define RULEPATTERN_TIMECARD_H_

#include "Date.h"

class TimeCard {
public:
	TimeCard(Date date, double hours);
	virtual ~TimeCard();

	Date GetDate() {return itsDate;}
	double GetHours() {return itsHours;}

private:
	Date itsDate;
	double itsHours;
};

#endif /* RULEPATTERN_TIMECARD_H_ */
