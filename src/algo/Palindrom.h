/*
 * Palindrom.h
 *
 *  Created on: 2020��3��15��
 *      Author: wl
 */

#ifndef ALGO_PALINDROM_H_
#define ALGO_PALINDROM_H_

#include "AlgoPolicy.h"
#include <vector>
#include <string>

using namespace std;

namespace String
{

class Palindrom : public AlgoPolicy<vector<vector<bool>>>
{
public:
    Palindrom(const string& s);
    virtual ~Palindrom();

    vector<vector<bool>> execute();

private:
    string s;
};

} /* namespace String */

#endif /* ALGO_PALINDROM_H_ */
