/*
 * objModel.cpp
 *
 *  Created on: 2018Äê6ÔÂ10ÈÕ
 *      Author: John
 */
#include "objModel.h"
#include <iostream>

using namespace std;

class ObjModel
{
public:
	virtual void f()
	{
		cout << "Base::f()" << endl;
	}

	virtual void g()
	{
		cout << "Base::g()" << endl;
	}

	virtual void h()
	{
		cout << "Base::h()" << endl;
	}

	virtual ~ObjModel() {}
};

typedef void (*Fun)();

void testFooBar();
void testSize();
void testOffset();

void testObjModel()
{
	cout << "testObjModel" << endl;
	ObjModel b;

	Fun fun = NULL;

	fun = (Fun)*((int*)*(int*)(&b));
	fun();

	fun = (Fun)*((int*)*(int*)(&b) + 1);
	fun();

	fun = (Fun)*((int*)*(int*)(&b) + 2);
	fun();

	testFooBar();
	testSize();
	testOffset();
}

class Foo
{
public:
	Foo()
	{
		m_i = 0;
		cout << "Foo() constructor" << endl;
	}

	Foo(int i)
	{
		m_i = i;
	}

private:
	int m_i;
};

class Bar
{
public:
	Foo foo;
	char *str;
};

void testFooBar()
{
	Bar bar;

}

class X {};

class Y : public virtual X {};

class Z : public virtual X {};

class A : public Y, public Z {};

void testSize()
{
	cout << "sizeof(X):" << sizeof(X) << endl;
	cout << "sizeof(Y):" << sizeof(Y) << endl;
	cout << "sizeof(Z):" << sizeof(Z) << endl;
	cout << "sizeof(A):" << sizeof(A) << endl;
}

class Point3d
{
public:
	virtual ~Point3d();

	static Point3d origin;
	float x, y, z;
};

void testOffset()
{
	cout << "&Point3d::x = " << &Point3d::x << endl;
	cout << "&Point3d::y = " << &Point3d::y << endl;
	cout << "&Point3d::z = " << &Point3d::z << endl;
}
