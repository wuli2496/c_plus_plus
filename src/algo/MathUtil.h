/*
 * MathUtil.h
 *
 *  Created on: 2019Äê8ÔÂ18ÈÕ
 *      Author: wl
 */

#ifndef ALGO_MATHUTIL_H_
#define ALGO_MATHUTIL_H_

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <vector>

class MathUtil
{
public:
    static bool isPrime(int num)
    {
        if (num == 2)
        {
            return true;
        }

        if (num % 2 == 0)
        {
            return false;
        }

        for (int i = 3; i * i <= num; i += 2)
        {
            if (num % i == 0)
            {
                return false;
            }
        }

        return true;
    }

    static int genPanlind(int num, bool odd)
    {
        char buf[MAXN];

        sprintf(buf, "%d", num);
        char *p = buf + strlen(buf);
        char *q = p;

        if (odd)
        {
            q -= 1;
        }

        while (q > buf)
        {
            *p++ = *--q;
        }

        *p = '\0';

        return atol(buf);
    }

    static int genPanlindNum(int num, bool odd)
    {
        int temp = num;
        int middle = 0;
        int saved = 0;
        if (odd)
        {
            temp = num / 10;
            saved = temp;
            middle = num % 10;
        }

        int exp = 1;
        int sum = 0;
        while (temp > 0)
        {
            exp *= 10;
            sum = sum * 10 + temp % 10;
            temp /= 10;
        }

        int ans = 0;
        if (odd)
        {
            ans = saved * 10 * exp + middle *exp + sum;
        }
        else
        {
            ans = num * exp + sum;
        }

        return ans;
    }

    static void genPanlindRecur(int n, int sum, int leftexp, int rightexp, std::vector<int>& ans)
    {
        int num = 0;

        if (n == 2)
        {
            for (int i = 0; i < N; ++i)
            {
                num = sum + leftexp * i + rightexp * i;
                ans.push_back(num);
            }
            return;
        }
        else if (n == 1)
        {
            for (int i = 0; i < N; ++i)
            {
                num = sum + rightexp * i;
                ans.push_back(num);
            }
            return;
        }

        int nRightExp = rightexp * 10;
        int nLeftExp = leftexp / 10;
        for (int i = 0; i < N; ++i)
        {
            num = sum + i * rightexp + i * leftexp;
            genPanlindRecur(n - 2, num, nLeftExp, nRightExp, ans);
        }
    }

private:
    enum
    {
        MAXN = 30,
        N = 10
    };


    MathUtil();
    ~MathUtil();
    MathUtil(const MathUtil& other);
    MathUtil& operator=(const MathUtil& other);
};

#endif /* ALGO_MATHUTIL_H_ */
