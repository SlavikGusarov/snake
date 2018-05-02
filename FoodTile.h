#pragma once
#include "Tile.h"



class FoodTile : public Tile
{
public:
	FoodTile();
	virtual bool isWall();
	virtual int collect();
};
