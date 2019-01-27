/*
 * UnionAffiliation.cpp
 *
 *  Created on: 2018Äê12ÔÂ31ÈÕ
 *      Author: wl
 */

#include "UnionAffiliation.h"

UnionAffiliation::UnionAffiliation(int memberId, double dues)
: itsMemberId(memberId), itsDues(dues)
{
	// TODO Auto-generated constructor stub

}

UnionAffiliation::~UnionAffiliation() {
	// TODO Auto-generated destructor stub
}

double UnionAffiliation::CalculateDeductions(Paycheck& pc)
{
	return 0;
}

void UnionAffiliation::AddServiceCharge(Date date, double charge)
{

}

int UnionAffiliation::GetMemberId()
{
	return itsMemberId;
}

