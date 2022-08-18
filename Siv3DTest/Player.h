#pragma once
#include "PlayerUnit.h"

class Player :
    public PlayerUnit
{
	using PlayerUnit::PlayerUnit;
private:
	int bulletR = 0;
	int fireInterval = 5;
	int fireCount = 0;
public:
	void move() override;
	void draw() override;
};
