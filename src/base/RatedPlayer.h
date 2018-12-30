/*
 * RatedPlayer.h
 *
 *  Created on: 2018Äê4ÔÂ20ÈÕ
 *      Author: John
 */

#ifndef RATEDPLAYER_H_
#define RATEDPLAYER_H_

#include "TableTennisPlayer.h"

class RatedPlayer: public TableTennisPlayer
{
public:
	RatedPlayer(unsigned int r = 0, const char *fn = "none", const char *ln = "none", bool bt = false);
	RatedPlayer(unsigned int r, const TableTennisPlayer &tp);
	virtual ~RatedPlayer();

	unsigned int getRating() {return rating;}
	void setRating(unsigned int r) {rating = r;}

private:
	unsigned int rating;
};

#endif /* RATEDPLAYER_H_ */
