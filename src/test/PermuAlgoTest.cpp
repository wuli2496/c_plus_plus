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

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION(PermuAlgoTest);

void PermuAlgoTest::testPermuAlgo()
{
    vector<int> v = {1, 2, 3};

    PermuAlgo<int> algo(v);
    vector<vector<int>> ans;
    algo.execute(ans);

    for(auto& v : ans)
    {
        for (auto& n : v)
        {
            cout << n << " ";
        }
        cout << endl;
    }
}
