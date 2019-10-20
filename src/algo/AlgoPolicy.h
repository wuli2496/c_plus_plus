/*
 * AlgoPolicy.h
 *
 *  Created on: 2019��10��20��
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

#endif /* ALGO_ALGOPOLICY_H_ */
