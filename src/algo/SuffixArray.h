/*
 * SuffixArray.h
 *
 *  Created on: 2019Äê8ÔÂ18ÈÕ
 *      Author: wl
 */

#ifndef ALGO_SUFFIXARRAY_H_
#define ALGO_SUFFIXARRAY_H_

class SuffixArray
{
public:
    SuffixArray(int* pa, int n);
    ~SuffixArray();

    void buildSa();
    void buildHeight();

    const int* getSa();
    const int* getHeight();
private:
    int *m_prank;
    int *m_pheight;
    int *m_psa;
    int m_n;
    int* m_a;
};
#endif /* ALGO_SUFFIXARRAY_H_ */
