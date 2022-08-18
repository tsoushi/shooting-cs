#include "stdafx.h"
#include "EnemyBullet.h"
#include "EntityManager.h"
#include "PlayerUnit.h"

void EnemyBullet::hitCheck() {
	for (auto& player : entityManager.players) {
		if (this->realBody.intersects(player->realBody)) {
			hit(*player);
		}
	}
}
