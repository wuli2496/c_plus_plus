/*
 * MathUtil.h
 *
 *  Created on: 2019��8��18��
 *      Author: wl
 */

#ifndef ALGO_MATHUTIL_H_
#define ALGO_MATHUTIL_H_

class MathUtil
{
public:
    static bool isPrime(int num)
    {
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

private:
    MathUtil();
    ~MathUtil();
    MathUtil(const MathUtil& other);
    MathUtil& operator=(const MathUtil& other);
};

#endif /* ALGO_MATHUTIL_H_ */
