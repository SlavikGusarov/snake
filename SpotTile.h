#pragma once
#include "Tile.h"


class SpotTile : public Tile
{
public:
	SpotTile();
	virtual bool isWall();
};