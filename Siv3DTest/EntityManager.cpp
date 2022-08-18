#include "stdafx.h"
#include "EntityManager.h"

void EntityManager::update() {
	auto enemy = enemies.begin();
	while (enemy != enemies.end()) {
		(*enemy)->move();
		(*enemy)->updateCordinate();
		if ((*enemy)->removeCheck()) {
			(*enemy)->remove();
			delete *enemy;
			enemy = enemies.erase(enemy);
			if (enemy == enemies.end()) break;
			continue;
		}
	}
	auto enemyBullet = enemyBullets.begin();
	while (enemyBullet != enemyBullets.end()) {
		(*enemyBullet)->move();
		(*enemyBullet)->updateCordinate();
		if ((*enemyBullet)->removeCheck()) {
			(*enemyBullet)->remove();
			delete *enemyBullet;
			enemyBullet = enemyBullets.erase(enemyBullet);
			if (enemyBullet == enemyBullets.end()) break;
			continue;
		}
		enemyBullet++;
	}
	auto player = players.begin();
	while (player != players.end()) {
		(*player)->move();
		(*player)->updateCordinate();
		if ((*player)->removeCheck()) {
			(*player)->remove();
			delete *player;
			player = players.erase(player);
			if (player == players.end()) break;
			continue;
		}
		player++;
	}
	auto playerBullet = playerBullets.begin();
	while (playerBullet != playerBullets.end()) {
		(*playerBullet)->move();
		(*playerBullet)->updateCordinate();
		if ((*playerBullet)->removeCheck()) {
			(*playerBullet)->remove();
			delete *playerBullet;
			playerBullet = playerBullets.erase(playerBullet);
			if (playerBullet == playerBullets.end()) break;
			continue;
		}
		playerBullet++;
	}
}

void EntityManager::hit() {
	//for (auto& enemy : enemies) {
	//	enemy->hitCheck();
	//}
	for (auto& bullet : enemyBullets) {
		bullet->hitCheck();
	}
	//for (auto& player : players) {
	//	player->hitCheck();
	//}
	for (auto& bullet : playerBullets) {
		bullet->hitCheck();
	}
}

void EntityManager::draw() {
	for (auto& enemy : enemies) {
		enemy->draw();
	}
	for (auto& bullet : enemyBullets) {
		bullet->draw();
	}
	for (auto& player : players) {
		player->draw();
	}
	for (auto& bullet : playerBullets) {
		bullet->draw();
	}
}


void EntityManager::add(PlayerUnit* entity) {
	players.push_back(entity);
}
void EntityManager::add(PlayerBullet* entity) {
	playerBullets.push_back(entity);
}
