/*
 * MathUtilTest.h
 *
 *  Created on: 2019Äê8ÔÂ25ÈÕ
 *      Author: wl
 */

#ifndef TEST_MATHUTILTEST_H_
#define TEST_MATHUTILTEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class MathUtilTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(MathUtilTest);
    CPPUNIT_TEST(genPanlindNum);
    CPPUNIT_TEST(getnPanlindRecur);
    CPPUNIT_TEST(numToBin);
    CPPUNIT_TEST_SUITE_END();
public:
    MathUtilTest();

    void setUp();

    void tearDown();

    void genPanlindNum();

    void getnPanlindRecur();

    void numToBin();
};

#endif /* TEST_MATHUTILTEST_H_ */
