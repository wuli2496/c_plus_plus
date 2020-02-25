/*
 * PermuFactory.h
 *
 *  Created on: 2020Äê2ÔÂ25ÈÕ
 *      Author: wl
 */

#ifndef ALGO_PERMUFACTORY_H_
#define ALGO_PERMUFACTORY_H_

#include "AlgoPolicy.h"
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

template<typename T>
class Permu : public AlgoPolicy<vector<vector<T>>>
{
public:
    Permu(vector<T> nums)
    {
        this->nums = nums;
    }

    vector<vector<T>> execute()
    {
        vector<vector<T>> ans;
        sort(nums.begin(), nums.end());
        do {
            ans.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));

        return ans;
    }


private:
    vector<T> nums;
};

template<typename T>
class PermuDfs : public AlgoPolicy<vector<vector<T>>>
{
public:
    PermuDfs(vector<T> nums)
    {
        this->nums = nums;
    }

    vector<vector<T>> execute()
    {
        vector<vector<T>> ans;
        dfs(0, nums.size(), ans, nums);

        return ans;
    }

private:
    void dfs(int cur, int depth, vector<vector<T>>& ans, vector<T>& nums)
    {
        if (cur == depth)
        {
            ans.push_back(nums);
            return;
        }

        for (size_t i = cur; i < nums.size(); ++i)
        {
            swap(nums[i], nums[cur]);
            dfs(cur + 1, depth, ans, nums);
            swap(nums[i], nums[cur]);
        }
    }
private:
    vector<T> nums;
};

class PermuFactory
{
public:
    static PermuFactory& getInstance()
    {
        static PermuFactory instance;
        return instance;
    }

    template <typename T, template<class> class AlgoPolicy>
    AlgoPolicy<vector<vector<T>>>* create(std::string name, vector<T> nums)
    {
        if (name == "stlpermu")
        {
            return new Permu<T>(nums);
        }
        else if (name == "dfs")
        {
            return new PermuDfs<T>(nums);
        }

        return nullptr;
    }

private:
    PermuFactory() {}
    PermuFactory(const PermuFactory& other) = delete;
    PermuFactory& operator=(const PermuFactory& other) = delete;
    ~PermuFactory() {}
};

#endif /* ALGO_PERMUFACTORY_H_ */
