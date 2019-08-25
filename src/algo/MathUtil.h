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

private:
	enum
	{
		MAXN = 30
	};

	MathUtil();
	~MathUtil();
	MathUtil(const MathUtil& other);
	MathUtil& operator=(const MathUtil& other);
};

#endif /* ALGO_MATHUTIL_H_ */
