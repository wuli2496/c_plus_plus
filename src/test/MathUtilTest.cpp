/*
 * MathUtilTest.cpp
 *
 *  Created on: 2019Äê8ÔÂ25ÈÕ
 *      Author: wl
 */

#include "MathUtilTest.h"
#include <cppunit/TestAssert.h>
#include "../algo/MathUtil.h"
#include <vector>
#include <iostream>
#include <algorithm>

CPPUNIT_TEST_SUITE_REGISTRATION(MathUtilTest);

void printHelp(int num)
{
    std::cout << num << std::endl;
}

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

void MathUtilTest::getnPanlindRecur()
{
    std::vector<int> v;
    MathUtil::genPanlindRecur(2, 0, 10, 1, v);
    std::vector<int> ans = {0, 11, 22, 33, 44, 55, 66, 77, 88, 99};
    CPPUNIT_ASSERT(v == ans);
}

void MathUtilTest::numToBin()
{
    int num = 10;
    std::string ans = MathUtil::numToBin(num);
    std::string target = "1010";
    CPPUNIT_ASSERT(ans == target);
}
