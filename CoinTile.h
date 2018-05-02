#pragma once
#include "Tile.h"



class CoinTile : public Tile
{
public:
	CoinTile();
	virtual bool isWall();
	virtual int collect();
};
