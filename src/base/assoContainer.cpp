/*
 * assoContainer.cpp
 *
 *  Created on: 2018Äê10ÔÂ25ÈÕ
 *      Author: wl
 */

#include "assoContainer.h"
#include <set>
#include <iostream>
#include <map>
#include <string>
#include <utility>

void testSet()
{
	typedef std::set<int> IntSet;

	IntSet coll;
	coll.insert(3);
	coll.insert(1);
	coll.insert(5);
	coll.insert(4);
	coll.insert(1);
	coll.insert(6);

	IntSet::const_iterator pos;
	for (pos = coll.begin(); pos != coll.end(); ++pos)
	{
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}

void testMap()
{
	typedef std::multimap<int, std::string> IntStringMap;

	IntStringMap coll;
	coll.insert(std::make_pair(5, "tagged"));
	coll.insert(std::make_pair(2, "a"));
	coll.insert(std::make_pair(1, "this"));
	coll.insert(std::make_pair(4, "of"));
	coll.insert(std::make_pair(6, "strings"));
	coll.insert(std::make_pair(1, "is"));
	coll.insert(std::make_pair(3, "multimap"));

	IntStringMap::iterator pos;
	for (pos = coll.begin(); pos != coll.end(); ++pos)
	{
		std::cout << pos->second << ' ';
	}
	std::cout << std::endl;
}

void testMapCreate()
{
	typedef std::map<std::string, float> StringFloatMap;
	StringFloatMap coll;

	coll["VAT"] = 0.15;
	coll["Pi"] = 3.1415;
	coll["an arbitrary number"] = 4983.223;
	coll["Null"] = 0;

	StringFloatMap::iterator pos;
	for (pos = coll.begin(); pos != coll.end(); ++pos)
	{
		std::cout << "key: \"" << pos->first << "\" "
				<< "value: " << pos->second << std::endl;
	}
}
