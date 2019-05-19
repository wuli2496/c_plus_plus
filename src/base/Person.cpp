/*
 * Person.cpp
 *
 *  Created on: 2019��5��3��
 *      Author: wl
 */

#include "Person.h"

#include <iostream>

Person::Person(std::string n)
	: name(n)
{

}

void Person::print() const
{
	std::cout << name << std::endl;
}

void Person::printWithPrefix(std::string prefix) const
{
	std::cout << prefix << name << std::endl;
}
