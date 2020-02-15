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
class PermuVisitor
{
public:
    void finish(const vector<T>& ans)
    {

    }
};

template <typename T, typename Visitor = PermuVisitor<T>>
class PermuAlgo
{
public:
    PermuAlgo(const vector<T>& in, const Visitor& visitor)
    {
        nums = in;
        vis = visitor;
    }

    void execute()
    {
        dfs(0);
    }

private:
    void dfs(int cur)
    {
        if (cur == static_cast<int>(nums.size()))
        {
            vis.finish(nums);
            return;
        }

        for (size_t i = cur; i < nums.size(); ++i)
        {
            swap(nums[cur], nums[i]);
            dfs(cur + 1);
            swap(nums[cur], nums[i]);
        }
    }

private:
    vector<T> nums;
    Visitor vis;
};

#endif /* ALGO_PERMUALGO_H_ */
