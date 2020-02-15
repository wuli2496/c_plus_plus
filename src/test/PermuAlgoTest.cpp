/*
 * PermuAlgoTest.cpp
 *
 *  Created on: 2020Äê2ÔÂ14ÈÕ
 *      Author: wl
 */

#include "PermuAlgoTest.h"
#include <vector>
#include <cppunit/TestAssert.h>
#include "../algo/PermuAlgo.h"
#include <iostream>

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION(PermuAlgoTest);

class OutputVisitor
{
public:
    OutputVisitor() : outstream(cout)
    {

    }
    OutputVisitor(ostream& out) : outstream(out)
    {

    }

    void finish(const vector<int>& ans)
    {
        for (size_t i = 0; i < ans.size(); ++i)
        {
            outstream << ans[i] << " ";
        }
        outstream << endl;
    }

    OutputVisitor operator=(const OutputVisitor& other)
    {
        return other;
    }
private:
    ostream& outstream;
};

void PermuAlgoTest::testPermuAlgo()
{
    vector<int> v = {1, 2, 3};
    OutputVisitor outputVisitor(cout);

    PermuAlgo<int, OutputVisitor> algo(v, outputVisitor);
    algo.execute();

}
