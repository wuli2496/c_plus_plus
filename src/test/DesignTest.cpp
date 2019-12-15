/*
 * DesignTest.cpp
 *
 *  Created on: 2019Äê12ÔÂ14ÈÕ
 *      Author: wl
 */

#include "DesignTest.h"
#include "../design/compile_assert.h"

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

    safe_reinterpret_cast<char>(a);
}
