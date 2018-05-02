#pragma once
#include "IWallable.h"
#include "ICollectable.h"


class Tile : public IWallable, public ICollectable
{
public:
	Tile(char symbol);
	void print();
	virtual int collect();
	~Tile();

private:
	char m_symbol;
};

