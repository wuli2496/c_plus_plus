/*
 * funObj.cpp
 *
 *  Created on: 2019Äê5ÔÂ1ÈÕ
 *      Author: wl
 */

#include "funObj.h"
#include <list>
#include "print.h"
#include <algorithm>
#include <string>
#include <vector>
#include <functional>
#include "Person.h"

using namespace std;

class Nth
{
public:
	Nth(int n)
	:nth(n), count()
	{

	}

	bool operator()(int)
	{
		return ++count == nth;
	}

private:
	int nth;
	int count;
};

void testNth()
{
	list<int> coll;

	for (int i = 1; i <= 9; ++i)
	{
		coll.push_back(i);
	}

	PRINT_ELEMENTS(coll, "coll:      ");

	list<int>::iterator pos;
	pos = remove_if(coll.begin(), coll.end(), Nth(3));
	coll.erase(pos, coll.end());

	PRINT_ELEMENTS(coll, "nth removed: ");
}

void foo(const vector<Person>& coll)
{
	for_each(coll.begin(),
			coll.end(),
			mem_fun_ref(&Person::print));

	for_each(coll.begin(), coll.end(), bind2nd(mem_fun_ref(&Person::printWithPrefix), "person: "));

}
