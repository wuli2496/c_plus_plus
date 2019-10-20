/*
 * BinaryAlgoBase.h
 *
 *  Created on: 2019Äê10ÔÂ20ÈÕ
 *      Author: wl
 */

#ifndef ALGO_BINARYALGOBASE_H_
#define ALGO_BINARYALGOBASE_H_

#include "AlgoPolicy.h"

class BinaryAlgoBase : public AlgoPolicy<int>
{
public:
    virtual ~BinaryAlgoBase() {}

    virtual int getLeft() = 0;
    virtual int getRight() = 0;
    virtual bool check(int mid) = 0;

    virtual int execute() override
    {
        int l = getLeft();
        int r = getRight();

        while (l < r)
        {
            int mid = l + (r - l) / 2;
            if (check(mid))
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }

        return l;
    }
};



#endif /* ALGO_BINARYALGOBASE_H_ */
