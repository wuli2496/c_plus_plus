/*
 * Vector.h
 *
 *  Created on: 2018Äê4ÔÂ15ÈÕ
 *      Author: John
 */

#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>

namespace VECTOR {

class Vector {
public:
	Vector();
	Vector(double n1, double n2, char form = 'r');
	void set(double n1, double n2, char form = 'r');
	virtual ~Vector();

	double xVal() const
	{
		return x;
	}

	double yVal() const
	{
		return y;
	}

	double magVal() const
	{
		return mag;
	}

	double angVal() const {return ang;};
	void polarMode();
	void rectMode();

	Vector operator+(const Vector& b) const;
	Vector operator-(const Vector& b) const;
	Vector operator-()const;
	Vector operator*(double n) const;

	friend Vector operator*(double n, const Vector &a);
	friend std::ostream& operator<<(std::ostream& os, const Vector& v);

private:
	double x;
	double y;
	double mag;
	double ang;
	char mode;

	void setMag();
	void setAng();
	void setX();
	void setY();
};

} /* namespace VECTOR */

#endif /* VECTOR_H_ */
