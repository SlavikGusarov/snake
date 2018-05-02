#pragma once
class IWallable
{
public:
	//IWallable();
	virtual ~IWallable() = default;
	virtual bool isWall() = 0;
};

