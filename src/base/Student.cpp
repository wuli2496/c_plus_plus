/*
 * Student.cpp
 *
 *  Created on: 2018Äê4ÔÂ25ÈÕ
 *      Author: John
 */

#include "Student.h"
#include <iostream>

using namespace std;

Student::~Student()
{
	// TODO Auto-generated destructor stub
}

double Student::average() const
{
	if (ArrayDb::size() > 0)
	{
		return ArrayDb::sum() / ArrayDb::size();
	}
	else
	{
		return 0;
	}
}


const std::string& Student::name() const
{
	return (const std::string&)*this;
}

ostream& operator<<(ostream &os, const Student &stu)
{
	os << "Scores for " << (const std::string&)stu << ":\n";

	stu.arr_out(os);

	return os;
}

double& Student::operator [](int i)
{
	return ArrayDb::operator[](i);
}

double Student::operator[](int i) const
{
	return ArrayDb::operator[](i);
}

ostream& Student::arr_out(ostream &os)const
{
	int i;
	int lim = ArrayDb::size();

	if (lim > 0)
	{
		for (i = 0; i < lim; ++i)
		{
			os << ArrayDb::operator[](i) << " ";
			if (4 == i % 5)
			{
				os << std::endl;
			}
		}
		if (i % 5 != 0)
		{
			os << std::endl;
		}
	}
	else
	{
		os << " empty array ";
	}

	return os;
}

istream& operator>>(istream &is, Student &stu)
{
	is >> (string&)stu;

	return is;
}

istream& getline(istream &is, Student &stu)
{
	getline(is, (string&)stu);

	return is;
}

