/*
 * MathUtilTest.cpp
 *
 *  Created on: 2019Äê8ÔÂ25ÈÕ
 *      Author: wl
 */

#include "MathUtilTest.h"
#include <cppunit/TestAssert.h>
#include "../algo/MathUtil.h"

CPPUNIT_TEST_SUITE_REGISTRATION(MathUtilTest);

MathUtilTest::MathUtilTest()
{

}

void MathUtilTest::setUp()
{

}

void MathUtilTest::tearDown()
{

}

void MathUtilTest::genPanlindNum()
{
    int ans = MathUtil::genPanlindNum(100, false);

    CPPUNIT_ASSERT(ans == 100001);
}
