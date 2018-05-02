#pragma once
#include "Tile.h"


class WallTile : public Tile
{
public:
	WallTile();
	virtual bool isWall();
};
