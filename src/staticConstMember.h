/*
 * staticConstMember.h
 *
 *  Created on: 2018��10��4��
 *      Author: John
 */

#ifndef STATICCONSTMEMBER_H_
#define STATICCONSTMEMBER_H_

class staticConstMember {
public:
	staticConstMember();
	virtual ~staticConstMember();

private:
	static const int num = 100;
	int elems[num];
};

#endif /* STATICCONSTMEMBER_H_ */
