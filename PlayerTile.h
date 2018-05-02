#pragma once
#include "Tile.h"


class PlayerTile : public Tile
{
public:
	PlayerTile();
	virtual bool isWall();
};
