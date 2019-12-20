#include <cassert>
#include <iostream>

template<bool>
struct CompileTimeChecker
{
	CompileTimeChecker(...);
};

template<>
struct CompileTimeChecker<false>
{
};

#define STATIC_CHECK(expr, msg) \
{\
	class ERROR_##msg {};\
	ERROR_##msg a;\
	(void)sizeof( CompileTimeChecker< (expr) != 0>(a));\
}

template <class To, class From>
To safe_static_cast(From from)
{
	STATIC_CHECK(sizeof(From) <= sizeof(To),
	        Destination_Type_Too_Narrow);

	return static_cast<To>(from);
}
