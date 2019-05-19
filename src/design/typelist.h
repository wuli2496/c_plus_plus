/*
 * typelist.h
 *
 *  Created on: 2019Äê5ÔÂ18ÈÕ
 *      Author: wl
 */

#ifndef DESIGN_TYPELIST_H_
#define DESIGN_TYPELIST_H_

class NullType
{

};

class EmptyType
{

};

template <class T, class U>
struct TypeList
{
	typedef T Head;
	typedef U Tail;
};

#define TYPELIST_1(T1) TypeList<T1, NullType>
#define TYPELIST_2(T1, T2) TypeList<T1, TYPELIST_1(T2)>
#define TYPELIST_3(T1, T2, T3) TypeList<T1, TYPELIST_2(T2, T3)>
#define TYPELIST_4(T1, T2, T3, T4) TypeList<T1, TYPELIST_3(T2, T3, T4)>
#define TYPELIST_5(T1, T2, T3, T4, T5) TypeList<T1, TYPELIST_4(T2, T3, T4, T5)>

template <class TList> struct Length;
template <> struct Length<NullType>
{
	enum {value = 0};
};

template <class T, class U>
struct Length<TypeList<T, U>>
{
	enum {value = 1 + Length<U>::value};
};

#endif /* DESIGN_TYPELIST_H_ */
