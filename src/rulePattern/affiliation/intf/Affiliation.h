/*
 * Affiliation.h
 *
 *  Created on: 2018��12��31��
 *      Author: wl
 */

#ifndef RULEPATTERN_AFFILIATION_H_
#define RULEPATTERN_AFFILIATION_H_

class Paycheck;

class Affiliation {
public:
	Affiliation();
	virtual ~Affiliation();

	virtual double CalculateDeductions(Paycheck&) = 0;
};

#endif /* RULEPATTERN_AFFILIATION_H_ */
