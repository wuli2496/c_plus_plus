/*
 * PermuAlgoTest.h
 *
 *  Created on: 2020Äê2ÔÂ14ÈÕ
 *      Author: wl
 */

#ifndef TEST_PERMUALGOTEST_H_
#define TEST_PERMUALGOTEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class PermuAlgoTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(PermuAlgoTest);
    CPPUNIT_TEST(testPermuAlgo);
    CPPUNIT_TEST_SUITE_END();

public:
    void testPermuAlgo();
};

#endif /* TEST_PERMUALGOTEST_H_ */
