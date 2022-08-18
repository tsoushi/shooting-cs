#include "stdafx.h"
#include "Player.h"
#include "Summon.h"
#include "PlayerBullets.h"

void Player::move() {
	int speed = 3;

	// 移動入力
	if (KeyD.pressed()) x += speed;
	if (KeyA.pressed()) x -= speed;
	if (KeyS.pressed()) y += speed;
	if (KeyW.pressed()) y -= speed;

	// 移動範囲制限
	if (x < 0) x = 0;
	if (x > Scene::Width()) x = Scene::Width();
	if (y < 0) y = 0;
	if (y > Scene::Height()) y = Scene::Height();

	// 弾丸発射
	if (fireCount > 0) fireCount--;
	if (KeySpace.pressed() && fireCount == 0) {
		auto p = new PlayerBullet1(x, y);
		entityManager.add(p);
		p->r = 90;
		fireCount = fireInterval;
	}

}

void Player::draw() {
	Circle{ x, y, 10 }.draw();
}
