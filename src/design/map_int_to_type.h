/*
 * map_int_to_type.h
 *
 *  Created on: 2019��12��19��
 *      Author: wl
 */

#ifndef DESIGN_MAP_INT_TO_TYPE_H_
#define DESIGN_MAP_INT_TO_TYPE_H_


template<int v>
struct Int2Type
{
    enum {value = v };
};


#endif /* DESIGN_MAP_INT_TO_TYPE_H_ */
