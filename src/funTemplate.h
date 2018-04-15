/*
 * funTemplate.h
 *
 *  Created on: 2018Äê4ÔÂ6ÈÕ
 *      Author: John
 */

#ifndef FUNTEMPLATE_H_
#define FUNTEMPLATE_H_

#include <iostream>

template <class Any>
void Swap(Any &a, Any &b);

struct job
{
	char name[40];
	double salary;
	int floor;
};

template <>
void Swap<job>(job &j1, job &j2);

void Show(job &j);


template <class Any>
void Swap(Any &a, Any &b)
{
	Any temp;
	temp = a;
	a = b;
	b = temp;
}

template <>
void Swap<job>(job &j1, job &j2)
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;

	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void Show(job &j)
{
	using namespace std;
	cout << j.name << ": $" << j.salary << " on floor " << j.floor << endl;
}
#endif /* FUNTEMPLATE_H_ */
