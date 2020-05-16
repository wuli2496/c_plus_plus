/*
 * RandomAlgoTest.cpp
 *
 *  Created on: 2020Äê5ÔÂ16ÈÕ
 *      Author: wl
 */

#include "RandomAlgoTest.h"
#include "../algo/randomAlgo.h"
#include <iostream>
#include <algorithm>

CPPUNIT_TEST_SUITE_REGISTRATION(RandomAlgoTest);

using namespace std;

RandomAlgoTest::RandomAlgoTest()
{
    // TODO Auto-generated constructor stub

}

RandomAlgoTest::~RandomAlgoTest()
{
    // TODO Auto-generated destructor stub
}


void RandomAlgoTest::testRandomShuffle()
{
    int a[4] = {2, 1, 3, 4};

    randomShuffle(a, a + 4);

    for (int n : a)
    {
        cout << n << endl;
    }
}

