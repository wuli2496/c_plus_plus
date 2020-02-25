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
#include "../algo/PermuFactory.h"
#include "../algo/CombFactory.h"
#include <iostream>
#include <memory>
#include <string>

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

void PermuAlgoTest::testPermuAlgoPolicy()
{
    vector<int> v = {1, 2, 3};
    AlgoPolicy<vector<vector<int>>>* algo = PermuFactory::getInstance().create<int, AlgoPolicy>(string("dfs"), v);
    shared_ptr<AlgoPolicy<vector<vector<int>>>> sp(algo);
    auto ans = sp->execute();
    cout << "------------perm---------" << endl;
    for (auto& v : ans)
    {
        for (auto& n : v)
        {
            cout << n << " ";
        }
        cout << endl;
    }
    cout << "------------perm---------" << endl;
}

void PermuAlgoTest::testComb()
{
    int n = 3, k = 2;
    AlgoPolicy<vector<vector<int>>>* algo = CombFactory::getInstance().create(string("dfs"), n, k);
    shared_ptr<AlgoPolicy<vector<vector<int>>>> sp(algo);
    auto ans = sp->execute();
    cout << "------------comb---------" << endl;
    for (auto& v : ans)
    {
        for (auto& n : v)
        {
            cout << n << " ";
        }
        cout << endl;
    }
    cout << "------------comb---------" << endl;
}
