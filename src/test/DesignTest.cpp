/*
 * DesignTest.cpp
 *
 *  Created on: 2019Äê12ÔÂ14ÈÕ
 *      Author: wl
 */

#include "DesignTest.h"
#include "../design/compile_assert.h"
#include "../design/convertibility.h"
#include <string>
#include <sstream>

CPPUNIT_TEST_SUITE_REGISTRATION(DesignTest);

DesignTest::DesignTest()
{

}

void DesignTest::setUp()
{

}

void DesignTest::tearDown()
{

}

void DesignTest::compileTimeAssert()
{
    int a = 10;

    safe_static_cast<int>(a);
}

void DesignTest::convertTest()
{
    using namespace std;

    ostringstream ostream;
    ostream << Conversion<double, int>::exists << " " << Conversion<char, char*>::exists << " "
            << Conversion<size_t, vector<int>>::exists;

    string s = ostream.str();
    string target = "1 0 0";

    CPPUNIT_ASSERT(s == target);

}
