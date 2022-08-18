#pragma once

#include "PlayerBullet.h"

class PlayerBullet1 : public PlayerBullet {
	using PlayerBullet::PlayerBullet;
public:
	double speed = 10;
	int check = 0;
	void move();
	void draw();
};
