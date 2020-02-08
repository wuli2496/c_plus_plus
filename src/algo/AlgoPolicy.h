/*
 * AlgoPolicy.h
 *
 *  Created on: 2019Äê10ÔÂ20ÈÕ
 *      Author: wl
 */

#ifndef ALGO_ALGOPOLICY_H_
#define ALGO_ALGOPOLICY_H_

template<typename Result>
class AlgoPolicy
{
public:
    virtual ~AlgoPolicy() {}

    virtual Result execute() = 0;
};

template<typename Result>
class InputPolicy
{
public:
    virtual ~InputPolicy() {}

    virtual bool hasNext() = 0;

    virtual Result next() = 0;
};

class OutputPolicy
{
public:
    virtual ~OutputPolicy() {}

    virtual void write() = 0;
};

#endif /* ALGO_ALGOPOLICY_H_ */
