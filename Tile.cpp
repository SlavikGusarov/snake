#include "stdafx.h"
#include "Tile.h"
#include <iostream>
using namespace std;


Tile::Tile(char symbol) : m_symbol(symbol)  // Список инициализации
{
}
void Tile::print() { cout << m_symbol; }

int Tile::collect()
{
	return 0;
}

Tile::~Tile()
{
}
