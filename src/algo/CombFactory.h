/*
 * CombFactory.h
 *
 *  Created on: 2020Äê2ÔÂ25ÈÕ
 *      Author: wl
 */

#ifndef ALGO_COMBFACTORY_H_
#define ALGO_COMBFACTORY_H_

#include "AlgoPolicy.h"
#include <vector>
#include <string>

using namespace std;

class CombDfs : public AlgoPolicy<vector<vector<int>>>
{
public:
    CombDfs(int n, int k)
    {
        this->n = n;
        this->k = k;
    }

    vector<vector<int>> execute()
    {
        vector<vector<int>> ans;
        vector<int> nums;
        dfs(0, 0, k, ans, nums);

        return ans;
    }

private:
    void dfs(int cur, int curdep, int dep, vector<vector<int>>& ans, vector<int>& nums)
    {
        if (curdep == dep)
        {
            ans.push_back(nums);
            return;
        }

        for (int i = cur; i < n; ++i)
        {
            nums.push_back(i + 1);
            dfs(i + 1, curdep + 1, dep, ans, nums);
            nums.pop_back();
        }
    }
private:
    int n, k;
};


class CombFactory
{
public:
    static CombFactory& getInstance()
    {
        static CombFactory instance;
        return instance;
    }

    AlgoPolicy<vector<vector<int>>>* create(std::string name, int n, int k)
    {
        if (name == "dfs")
        {
            return new CombDfs(n, k);
        }

        return nullptr;
    }

private:
    CombFactory() {}
    CombFactory(const CombFactory& other) = delete;
    CombFactory& operator=(const CombFactory& other) = delete;
    ~CombFactory() {}
};


#endif /* ALGO_COMBFACTORY_H_ */
