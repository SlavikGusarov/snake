#include "stdafx.h"
#include "PlayerTile.h"

class Tile;

PlayerTile::PlayerTile() : Tile(64){}
bool PlayerTile::isWall(){
	return false;
}
