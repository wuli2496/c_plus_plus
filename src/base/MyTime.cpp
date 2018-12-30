/*
 * MyTime.cpp
 *
 *  Created on: 2018Äê4ÔÂ14ÈÕ
 *      Author: John
 */

#include "MyTime.h"
#include <iostream>

MyTime::MyTime() {
	// TODO Auto-generated constructor stub
	hours = minutes = 0;
}

MyTime::MyTime(int h, int m)
{
	hours = h;
	minutes = m;
}

void MyTime::addMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void MyTime::addHr(int h)
{
	hours += h;
}

void MyTime::reset(int h, int m)
{
	hours = h;
	minutes = m;
}

MyTime MyTime::sum(const MyTime& t) const
{
	MyTime sum;

	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;

	return sum;
}

void MyTime::show() const
{
	std::cout << hours << " hours " << minutes << " minutes";
}

MyTime::~MyTime() {
	// TODO Auto-generated destructor stub
}

MyTime MyTime::operator+(const MyTime& t) const
{
	MyTime sum;

		sum.minutes = minutes + t.minutes;
		sum.hours = hours + t.hours + sum.minutes / 60;
		sum.minutes %= 60;

		return sum;
}

MyTime MyTime::operator-(const MyTime& t) const
{
	MyTime diff;
	int tot1, tot2;
	tot1 = t.hours * 60 + t.minutes;
	tot2 = hours * 60 + minutes;
	diff.minutes = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;

	return diff;
}

MyTime MyTime::operator*(double mul) const
{
	MyTime result;
	long totalminutes = hours * mul * 60 + mul * minutes;
	result.minutes = totalminutes % 60;
	result.hours = totalminutes / 60;

	return result;
}

MyTime operator*(double m, const MyTime& t)
{
	MyTime result;
	long totalminutes = m * t.hours * 60 + m * t.minutes;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;

	return result;
}

ostream& operator<<(ostream &os, const MyTime& t)
{
	std::cout << t.hours << " hours, " << t.minutes << " minutes";
	return os;
}

