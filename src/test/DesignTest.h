/*
 * DesignTest.h
 *
 *  Created on: 2019Äê12ÔÂ14ÈÕ
 *      Author: wl
 */

#ifndef TEST_DESIGNTEST_H_
#define TEST_DESIGNTEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class DesignTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(DesignTest);
    CPPUNIT_TEST(compileTimeAssert);
    CPPUNIT_TEST_SUITE_END();
public:
    DesignTest();

    void setUp();

    void tearDown();

    void compileTimeAssert();

};

#endif /* TEST_DESIGNTEST_H_ */
