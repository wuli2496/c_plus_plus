/*
 * BigIntegerTest.h
 *
 *  Created on: 2020Äê2ÔÂ15ÈÕ
 *      Author: wl
 */

#ifndef TEST_BIGINTEGERTEST_H_
#define TEST_BIGINTEGERTEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class BigIntegerTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(BigIntegerTest);
    CPPUNIT_TEST(testMul);
    CPPUNIT_TEST_SUITE_END();
public:
    BigIntegerTest();
    virtual ~BigIntegerTest();

    void testMul();
};

#endif /* TEST_BIGINTEGERTEST_H_ */
