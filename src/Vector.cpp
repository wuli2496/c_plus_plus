/*
 * Vector.cpp
 *
 *  Created on: 2018Äê4ÔÂ15ÈÕ
 *      Author: John
 */

#include "Vector.h"
#include <cmath>

using std::cout;

namespace VECTOR {

const double RAD_TO_DEG = 57.2957795130823;

Vector::Vector() {
	// TODO Auto-generated constructor stub
	x = y = mag = ang = 0.0;
	mode = 'r';

}

Vector::Vector(double n1, double n2, char form)
{
	mode = form;
	if (form == 'r')
	{
		x = n1;
		y = n2;
		setMag();
		setAng();
	}
	else if (form == 'p')
	{
		mag = n1;
		ang = n2 / RAD_TO_DEG;
		setX();
		setY();
	}
	else
	{
		cout << "Incorrect 3rd argument to Vector()--";
		cout << "vector set to 0\n";
		x = y = mag = ang = 0.0;
		mode = 'r';
	}
}

Vector::~Vector() {
	// TODO Auto-generated destructor stub
}

void Vector::setMag()
{
	mag = sqrt(x * x + y * y);
}

void Vector::setAng()
{
	if (x == 0.0 && y == 0.0)
	{
		ang = 0.0;
	}
	else
	{
		ang = atan2(y, x);
	}
}

void Vector::setX()
{
	x = mag * cos(ang);
}

void Vector::setY()
{
	y = mag * sin(ang);
}

void Vector::set(double n1, double n2, char form)
{
	mode = form;
	if (form == 'r')
	{
		x = n1;
		y = n2;
		setMag();
		setAng();
	}
	else if (form == 'p')
	{
		mag = n1;
		ang = n2 / RAD_TO_DEG;
		setX();
		setY();
	}
	else
	{
		cout << "Incorrect 3rd argument to Vector()--";
		cout << "vector set to 0\n";
		x = y = mag = ang = 0.0;
		mode = 'r';
	}
}

void Vector::polarMode()
{
	mode = 'p';
}

void Vector::rectMode()
{
	mode = 'r';
}

Vector Vector::operator +(const Vector& b) const
{
	return Vector(x + b.x, y + b.y);
}

Vector Vector::operator -(const Vector& b) const
{
	return Vector(x - b.x, y - b.y);
}

Vector Vector::operator-()const
{
	return Vector(-x, -y);
}

Vector Vector::operator *(double n) const
{
	return Vector(n * x, n * y);
}

Vector operator*(double n, const Vector& a)
{
	return a * n;
}

std::ostream& operator<<(std::ostream& os, const Vector& v)
{
	if (v.mode == 'r')
	{
		os << "(x,y) = (" << v.x << ", " << v.y << ")";
	}
	else if (v.mode == 'p')
	{
		os << "(m, a) = (" << v.mag << ", " << v.ang  * RAD_TO_DEG  << ")";
	}
	else
	{
		os << "Vector object mode is invalid";
	}

	return os;
}
} /* namespace VECTOR */
