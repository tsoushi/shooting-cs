#pragma once
#include "Bullet.h"
#include "EntityManager.h"

class EnemyBullet :
    public Bullet
{
public:
	void hitCheck() override;
};

