/*
 * Convertibility.h
 *
 *  Created on: 2019��5��1��
 *      Author: wl
 */

template <class T, class U>
class Conversion
{
typedef char Small;
class Big {char dummy[2];};

static Small Test(U);

static Big Test(...);

static T MakeT()
{
	return T();
}

public:
	enum {
		exists = sizeof(Test(MakeT())) == sizeof(Small)
	};

};




