/*
 * PermuAlgo.h
 *
 *  Created on: 2020Äê2ÔÂ14ÈÕ
 *      Author: wl
 */

#ifndef ALGO_PERMUALGO_H_
#define ALGO_PERMUALGO_H_

#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
class PermuAlgo
{
public:
    PermuAlgo(const vector<T>& in)
    {
        nums = in;
    }

    void execute(vector<vector<T>>& ans)
    {
        dfs(0, ans);
    }

private:
    void dfs(int cur, vector<vector<T>>& ans)
    {
        if (cur == nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for (size_t i = cur; i < nums.size(); ++i)
        {
            swap(nums[cur], nums[i]);
            dfs(cur + 1, ans);
            swap(nums[cur], nums[i]);
        }
    }

private:
    vector<T> nums;
};

#endif /* ALGO_PERMUALGO_H_ */
