/*
 * NoAffiliation.h
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#ifndef RULEPATTERN_NOAFFILIATION_H_
#define RULEPATTERN_NOAFFILIATION_H_

#include "intf/Affiliation.h"

class NoAffiliation: public Affiliation {
public:
	NoAffiliation();
	virtual ~NoAffiliation();

	double CalculateDeductions(Paycheck&);
};

#endif /* RULEPATTERN_NOAFFILIATION_H_ */
