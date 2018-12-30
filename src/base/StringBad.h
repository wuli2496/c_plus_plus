/*
 * StringBad.h
 *
 *  Created on: 2018Äê4ÔÂ15ÈÕ
 *      Author: John
 */

#ifndef STRINGBAD_H_
#define STRINGBAD_H_

#include <iostream>

using std::ostream;

class StringBad {
public:
	StringBad();
	StringBad(const char* s);
	StringBad(const StringBad& s);
	StringBad& operator=(const StringBad& s);
	virtual ~StringBad();

	friend ostream& operator<<(ostream& os, const StringBad& st);

private:
	char *str;
	int len;
	static int num_strings;
};

#endif /* STRINGBAD_H_ */
