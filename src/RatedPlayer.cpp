/*
 * RatedPlayer.cpp
 *
 *  Created on: 2018Äê4ÔÂ20ÈÕ
 *      Author: John
 */

#include "RatedPlayer.h"

RatedPlayer::RatedPlayer(unsigned int r, const char *fn, const char *ln, bool ht): TableTennisPlayer(fn, ln, ht)
{
	// TODO Auto-generated constructor stub
	rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer &tp): TableTennisPlayer(tp)
{
	rating = r;
}

RatedPlayer::~RatedPlayer() {
	// TODO Auto-generated destructor stub
}

