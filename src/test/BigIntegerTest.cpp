/*
 * BigIntegerTest.cpp
 *
 *  Created on: 2020Äê2ÔÂ15ÈÕ
 *      Author: wl
 */

#include "BigIntegerTest.h"
#include <cppunit/TestAssert.h>
#include <vector>
#include "../algo/BigInteger.h"
#include <string>

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION(BigIntegerTest);

BigIntegerTest::BigIntegerTest()
{
    // TODO Auto-generated constructor stub

}

BigIntegerTest::~BigIntegerTest()
{
    // TODO Auto-generated destructor stub
}

void BigIntegerTest::testMul()
{
    vector<int> v = {3, 2, 1};
    BigInteger<int, 10> bigInteger(v);
    BigInteger<int, 10> result = bigInteger.mul(4);

    string expect = "492";
    string ans = result.toString();
    CPPUNIT_ASSERT(ans == expect);
}
