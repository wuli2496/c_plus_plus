/*
 * Convertibility.h
 *
 *  Created on: 2019Äê5ÔÂ1ÈÕ
 *      Author: wl
 */

template <class T, class U>
class Conversion
{
typedef char Small;
class Big {char dummy[2];};

static Small Test(U);

static Big Test(...);

static T MakeT();

public:
	enum {
		exists = sizeof(Test(MakeT())) == sizeof(Small)
	};

	enum {sameType = false};
};


template <class T>
class Conversion<T, T>
{
public:
    enum {exists = 1, sameType = 1};

};

#define SUPERSUBCLASS(T, U) \
    (Conversion<const U*, const* T>::exists && \
     !Conversion<const T*, const void*>::sameType)

#define SUPERSUBCLASS_STRUCT(T, U) \
        (SUPERSUBCLASS(T, U) && \
         !Conversion<const T, const U>::sameType)
