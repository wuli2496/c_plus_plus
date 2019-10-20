/*
 * StlSearchTest.h
 *
 *  Created on: 2019Äê10ÔÂ5ÈÕ
 *      Author: wl
 */

#ifndef TEST_STLSEARCHTEST_H_
#define TEST_STLSEARCHTEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class StlSearchTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(StlSearchTest);
    CPPUNIT_TEST(lowerBound);
    CPPUNIT_TEST_SUITE_END();
public:
    void lowerBound();
};

#endif /* TEST_STLSEARCHTEST_H_ */
