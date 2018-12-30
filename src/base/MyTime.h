/*
 * MyTime.h
 *
 *  Created on: 2018Äê4ÔÂ14ÈÕ
 *      Author: John
 */

#ifndef MYTIME_H_
#define MYTIME_H_

#include <ostream>

using namespace std;

class MyTime {
public:
	MyTime();
	MyTime(int h, int m = 0);
	void addMin(int m);
	void addHr(int h);
	void reset(int h = 0, int m = 0);
	MyTime sum(const MyTime& t) const;
	MyTime operator+(const MyTime& t) const;
	MyTime operator-(const MyTime& t) const;
	MyTime operator*(double mul) const;
	void show() const;
	virtual ~MyTime();
	friend MyTime operator*(double m, const MyTime& t);
	friend ostream& operator<<(ostream &os, const MyTime& t);
private:
	int hours;
	int minutes;
};

#endif /* MYTIME_H_ */
