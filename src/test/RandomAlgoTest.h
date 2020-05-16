/*
 * RandomAlgoTest.h
 *
 *  Created on: 2020Äê5ÔÂ16ÈÕ
 *      Author: wl
 */

#ifndef TEST_RANDOMALGOTEST_H_
#define TEST_RANDOMALGOTEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class RandomAlgoTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(RandomAlgoTest);
    CPPUNIT_TEST(testRandomShuffle);
    CPPUNIT_TEST_SUITE_END();
public:
    RandomAlgoTest();
    virtual ~RandomAlgoTest();
    void testRandomShuffle();
};

#endif /* TEST_RANDOMALGOTEST_H_ */
