/*
 * Person.h
 *
 *  Created on: 2019Äê5ÔÂ3ÈÕ
 *      Author: wl
 */

#ifndef BASE_PERSON_H_
#define BASE_PERSON_H_

#include <string>

class Person
{
public:
	Person(std::string n);

	void print() const;

	void printWithPrefix(std::string prefix) const;

private:
	std::string name;
};
#endif /* BASE_PERSON_H_ */
