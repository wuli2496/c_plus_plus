/*
 * type_select.h
 *
 *  Created on: 2019Äê12ÔÂ19ÈÕ
 *      Author: wl
 */

#ifndef DESIGN_TYPE_SELECT_H_
#define DESIGN_TYPE_SELECT_H_

template<bool flag, typename T, typename U>
struct Select
{
    typedef T Result;
};

template<typename T, typename U>
struct Select<false, T, U>
{
    typedef U Result;
};

template<typename T, bool isPolymorphic>
class NiftyContainer
{
    typedef typename Select<isPolymorphic, T*, T>::Result ValueType;
};


#endif /* DESIGN_TYPE_SELECT_H_ */
