/*
 * StringBad.cpp
 *
 *  Created on: 2018Äê4ÔÂ15ÈÕ
 *      Author: John
 */

#include "StringBad.h"
#include <cstring>

using std::cout;

int StringBad::num_strings = 0;

StringBad::StringBad() {
	// TODO Auto-generated constructor stub
	len = 4;
	str = new char[4];
	std::strcpy(str, "C++");
	num_strings++;

	cout << num_strings << ": \"" << str
			<< "\" default object created\n";
}

StringBad::StringBad(const char *s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;

	cout << num_strings << ": \"" << str
				<< "\" default object created\n";
}

StringBad::StringBad(const StringBad& s)
{
	len = s.len;
	str = new char[len + 1];
	std::strcpy(str, s.str);
	num_strings++;

	cout << num_strings << ": \"" << str
				<< "\" default object created\n";
}

StringBad& StringBad::operator=(const StringBad& s)
{
	if (this == &s) return *this;

	delete[] str;

	len = s.len;
	str = new char[len + 1];
	std::strcpy(str, s.str);

	return *this;
}

StringBad::~StringBad() {
	// TODO Auto-generated destructor stub
	cout << "\"" << str << "\" object deleted, ";
	--num_strings;
	cout << num_strings << " left\n";

	delete[] str;
}

ostream& operator<<(ostream& os, const StringBad& st)
{
	os << st.str;

	return os;
}

