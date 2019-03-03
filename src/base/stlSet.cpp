/*
 * stlSet.cpp
 *
 *  Created on: 2019Äê3ÔÂ3ÈÕ
 *      Author: wl
 */

#include "stlSet.h"
#include <set>
#include <iostream>
#include <iterator>

using namespace std;

void testFind();
void testBaseFun();

void testStlSet()
{
	testFind();
	testBaseFun();
}

void testFind()
{
	set<int> c;

	c.insert(1);
	c.insert(2);
	c.insert(4);
	c.insert(5);
	c.insert(6);

	cout << "lower_bound(3): " << *c.lower_bound(3) << endl;
	cout << "upper_bound(3): " << *c.upper_bound(3) << endl;
	cout << "equal_range(3): " << *c.equal_range(3).first << " " << *c.equal_range(3).second << endl;

	cout << "lower_bound(5): " << *c.lower_bound(5) << endl;
	cout << "upper_bound(5): " << *c.upper_bound(5) << endl;
	cout << "equal_range(5): " << *c.equal_range(5).first << " " << *c.equal_range(5).second << endl;
}

void testBaseFun()
{
	typedef set<int, greater<int> > IntSet;

	IntSet coll1;

	coll1.insert(3);
	coll1.insert(5);
	coll1.insert(1);
	coll1.insert(6);
	coll1.insert(2);
	coll1.insert(5);

	IntSet::iterator pos;
	for (pos = coll1.begin(); pos != coll1.end(); ++pos)
	{
		cout << *pos << ' ';
	}
	cout << endl;

	pair<IntSet::iterator, bool> status = coll1.insert(4);
	if (status.second)
	{
		cout << "4 inserted as element " << distance(coll1.begin(), status.first) + 1 << endl;
	}
	else
	{
		cout << "4 already exists" << endl;
	}

	set<int> coll2(coll1.begin(), coll1.end());
	copy(coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	coll2.erase(coll2.begin(), coll2.find(3));

	int num;
	num = coll2.erase(5);
	cout << num << " elements(s) removed" << endl;

	copy(coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

}
