/*
 * exString.h
 *
 *  Created on: 2018��7��22��
 *      Author: John
 */

#ifndef EXSTRING_H_
#define EXSTRING_H_

class ex_String {
public:
	ex_String();
	virtual ~ex_String();

	void makeNull() {d_str_p = 0;}
	void makeEmpty() const {d_str_p[0] = 0;}
private:
	char *d_str_p;
};

#endif /* EXSTRING_H_ */
