/*
 * placenew.cpp
 *
 *  Created on: 2018Äê4ÔÂ6ÈÕ
 *      Author: John
 */
#include "placenew.h"
#include <new>

char buffer1[50];
char buffer2[500];

void placeNew()
{
	chaff *p1, *p2;
	int *p3, *p4;

	p1 = new chaff;
	p3 = new int[20];

	p2 = new (buffer1) chaff;
	p4 = new (p3) int[20];

}



