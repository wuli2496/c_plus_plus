/*
 * Palindrom.cpp
 *
 *  Created on: 2020Äê3ÔÂ15ÈÕ
 *      Author: wl
 */

#include "Palindrom.h"

namespace String
{

Palindrom::Palindrom(const string& s)
{
    this->s = s;

}

Palindrom::~Palindrom()
{
    // TODO Auto-generated destructor stub
}

vector<vector<bool>> Palindrom::execute()
{
    vector<vector<bool>> dp;
    dp.resize(s.length());

    for (size_t i = 0; i < s.length(); ++i)
    {
        dp[i].resize(s.length());
    }

    for (int len = 0; len < s.length(); ++len)
    {
        for (int i = 0; i + len < s.length(); ++i)
        {
            int j = i + len;
            if (s[i] == s[j] && (j - i <= 2 || dp[i + 1][j - 1]))
            {
                dp[i][j] = true;
            }
        }
    }

    return dp;
}

} /* namespace String */
