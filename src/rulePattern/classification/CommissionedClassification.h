/*
 * CommissionedClassification.h
 *
 *  Created on: 2018��12��31��
 *      Author: wl
 */

#ifndef RULEPATTERN_CLASSIFICATION_COMMISSIONEDCLASSIFICATION_H_
#define RULEPATTERN_CLASSIFICATION_COMMISSIONEDCLASSIFICATION_H_

#include "intf/PaymentClassification.h"

class CommissionedClassification: public PaymentClassification {
public:
	CommissionedClassification();
	virtual ~CommissionedClassification();
};

#endif /* RULEPATTERN_CLASSIFICATION_COMMISSIONEDCLASSIFICATION_H_ */
