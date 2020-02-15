/*
 * BigInteger.h
 *
 *  Created on: 2020Äê2ÔÂ15ÈÕ
 *      Author: wl
 */

#ifndef ALGO_BIGINTEGER_H_
#define ALGO_BIGINTEGER_H_

#include <vector>
#include <string>
#include <sstream>

using namespace std;

template <typename T, int N>
class BigInteger
{
public:
    BigInteger()
    {
        num = 0;
    }

    BigInteger(const vector<int>& v)
    {
        num = v.size();
        for (size_t i = 0; i < v.size(); ++i)
        {
            nums[i] = v[i];
        }
    }

    BigInteger mul(int n)
    {
        int carry = 0;
        for (int i = 0; i < num; ++i)
        {
            int sum = nums[i] * n + carry;
            nums[i] = sum % 10;
            carry = sum / 10;
        }

        while (carry)
        {
            nums[num++] = carry % 10;
            carry /= 10;
        }

        return *this;
    }

    virtual ~BigInteger()
    {

    }

    string toString()
    {
        stringstream ss;
        for (int i = num - 1; i >= 0; --i)
        {
            ss << nums[i];
        }

        return ss.str();
    }
private:
    int num;
    T nums[N];
};

#endif /* ALGO_BIGINTEGER_H_ */
