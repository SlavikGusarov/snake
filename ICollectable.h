#pragma once
class ICollectable
{
public:
	//ICollectable();
	virtual ~ICollectable() = default;
	virtual int collect() = 0;
};

