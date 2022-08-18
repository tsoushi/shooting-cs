#include "stdafx.h"
#include "PlayerBullet.h"
#include "EntityManager.h"
#include "EnemyUnit.h"
#include "Global.h"

void PlayerBullet::hitCheck() {
	for (auto& enemy : entityManager.enemies) {
		if (this->realBody.intersects(enemy->realBody)) {
			hit(*enemy);
		}
	}
}

int PlayerBullet::removeCheck() {
	if (x < -30 || x > Scene::Width() + 30 || y < -30 || y > Scene::Height() + 30) {
		return 1;
	}
	return 0;
}
