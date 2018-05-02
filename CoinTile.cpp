#include "stdafx.h"
#include "CoinTile.h"



CoinTile::CoinTile() : Tile(174){}
bool CoinTile::isWall(){
	return false;

}
int CoinTile::collect(){
	return 10;
}
