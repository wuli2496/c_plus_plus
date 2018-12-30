/*
 * TableTennisPlayer.h
 *
 *  Created on: 2018Äê4ÔÂ20ÈÕ
 *      Author: John
 */

#ifndef TABLETENNISPLAYER_H_
#define TABLETENNISPLAYER_H_

class TableTennisPlayer {
public:
	TableTennisPlayer(const char * fn = "none", const char * ln = "none", bool ht = false);
	void name() const;
	bool isHasTable() const {return hasTable;}
	void resetTable(bool v) {hasTable = v;}
	virtual ~TableTennisPlayer();

private:
	enum {LIM = 20};

	char firstName[LIM];
	char lastName[LIM];
	bool hasTable;
};

#endif /* TABLETENNISPLAYER_H_ */
