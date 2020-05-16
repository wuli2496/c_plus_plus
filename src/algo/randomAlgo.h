/*
 * randomAlgo.h
 *
 *  Created on: 2020Äê5ÔÂ16ÈÕ
 *      Author: wl
 */

#ifndef ALGO_RANDOMALGO_H_
#define ALGO_RANDOMALGO_H_

#include <cstdlib>
#include <algorithm>

template<typename RandomAccessIter, typename RandomGenerator>
void randomShuffer(RandomAccessIter first, RandomAccessIter last, RandomGenerator generator)
{
    while (first != last)
    {
        std::iter_swap(first, first + generator() % (last - first));
        first++;
    }
}

template <typename RandomAccessIter>
void randomShuffle(RandomAccessIter first, RandomAccessIter last)
{
    randomShuffer(first, last, std::rand);
}

#endif /* ALGO_RANDOMALGO_H_ */
