#pragma once

#include "EnemyUnit.h"
#include "EnemyBullet.h"
#include "PlayerUnit.h"
#include "PlayerBullet.h"

class EntityManager {
public:
	Array<EnemyUnit*> enemies;
	Array<PlayerUnit*> players;
	Array<EnemyBullet*> enemyBullets;
	Array<PlayerBullet*> playerBullets;

	void update();
	void hit();
	void draw();

	void add(PlayerUnit*);
	void add(PlayerBullet*);
};
