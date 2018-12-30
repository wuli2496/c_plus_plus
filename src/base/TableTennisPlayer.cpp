/*
 * TableTennisPlayer.cpp
 *
 *  Created on: 2018Äê4ÔÂ20ÈÕ
 *      Author: John
 */
#include <cstring>
#include <iostream>
#include "TableTennisPlayer.h"

TableTennisPlayer::TableTennisPlayer(const char *fn, const char *ln, bool ht)
{
	// TODO Auto-generated constructor stub
	std::strncpy(firstName, fn, LIM - 1);
	firstName[LIM - 1] = 0;
	std::strncpy(lastName, ln, LIM - 1);
	lastName[LIM - 1] = 0;
	hasTable = ht;
}

void TableTennisPlayer::name() const
{
	std::cout << lastName << ", " << firstName;
}

TableTennisPlayer::~TableTennisPlayer() {
	// TODO Auto-generated destructor stub
}

