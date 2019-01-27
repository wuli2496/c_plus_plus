/*
 * UnionAffiliation.h
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_AFFILIATION_UNIONAFFILIATION_H_
#define RULEPATTERN_AFFILIATION_UNIONAFFILIATION_H_

#include "intf/Affiliation.h"
#include "../Date.h"

class UnionAffiliation: public Affiliation {
public:
	UnionAffiliation(int memberId, double dues);
	virtual ~UnionAffiliation();

	double CalculateDeductions(Paycheck&);
	void AddServiceCharge(Date date, double charge);

	int GetMemberId();

private:
	int itsMemberId;
	double itsDues;
};

#endif /* RULEPATTERN_AFFILIATION_UNIONAFFILIATION_H_ */
