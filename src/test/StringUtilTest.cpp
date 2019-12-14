/*
 * StringUtilTest.cpp
 *
 *  Created on: 2019Äê12ÔÂ14ÈÕ
 *      Author: wl
 */

#include "StringUtilTest.h"
#include "../algo/StringUtil.h"
#include <string>
#include <iostream>

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION(StringUtilTest);

StringUtilTest::StringUtilTest()
{

}

void StringUtilTest::setUp()
{

}

void StringUtilTest::tearDown()
{

}

void StringUtilTest::fill()
{
    string a = "10";
    string ans = StringUtil::fill(a, '0', 10);
    string target = "0000000010";
    CPPUNIT_ASSERT(ans == target);
}
