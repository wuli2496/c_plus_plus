/*
 * StlSearchTest.cpp
 *
 *  Created on: 2019Äê10ÔÂ5ÈÕ
 *      Author: wl
 */

#include "StlSearchTest.h"
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION(StlSearchTest);

void StlSearchTest::lowerBound()
{
    vector<int> v{1, 2, 3, 4, 5};

    auto iter = lower_bound(v.begin(), v.end(), 6, equal_to<int>());

    CPPUNIT_ASSERT(iter != v.end());
}
