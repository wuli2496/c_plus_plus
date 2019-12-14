/*
 * StringUtilTest.h
 *
 *  Created on: 2019Äê12ÔÂ14ÈÕ
 *      Author: wl
 */

#ifndef TEST_STRINGUTILTEST_H_
#define TEST_STRINGUTILTEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class StringUtilTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(StringUtilTest);
    CPPUNIT_TEST(fill);
    CPPUNIT_TEST_SUITE_END();
public:
    StringUtilTest();

    void setUp();

    void tearDown();

    void fill();
};

#endif /* TEST_STRINGUTILTEST_H_ */
