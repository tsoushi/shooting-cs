#pragma once
#include "Bullet.h"
class PlayerBullet :
    public Bullet
{
	using Bullet::Bullet;

public:
	int power;
	virtual void hitCheck() override;
	virtual int removeCheck() override;
};

