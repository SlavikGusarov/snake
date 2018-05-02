#include "stdafx.h"
#include "FoodTile.h"



FoodTile::FoodTile() : Tile(174){}
bool FoodTile::isWall(){
	return false;

}
int FoodTile::collect(){
	return 10;
}
