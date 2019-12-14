/*
 * StringUtil.h
 *
 *  Created on: 2019Äê12ÔÂ14ÈÕ
 *      Author: wl
 */

#ifndef ALGO_STRINGUTIL_H_
#define ALGO_STRINGUTIL_H_

#include <string>

class StringUtil
{
public:
    static std::string fill(std::string& s, char ch, size_t len)
    {
        if (s.length() >= len)
        {
            return s;
        }

        size_t l = len - s.length();
        std::string ans(l, ch);

        ans += s;
        return ans;
    }

private:
    StringUtil() = delete;
    StringUtil(const StringUtil& other) = delete;
    StringUtil& operator=(const StringUtil& other) = delete;
};


#endif /* ALGO_STRINGUTIL_H_ */
