#include "stdafx.h"
#include "EntityManager.h"
#include "Entity.h"
#include "Global.h"

Entity::Entity(int x, int y) : x(x), y(y), realBody(Arg::center(x, y), 10, 10) {}
Entity::Entity(int x, int y, int colWidth, int colHeight) : x(x), y(y), realBody(Arg::center(x, y), colWidth, colHeight) {}
Entity::Entity(int x, int y, int colX, int colY, int colWidth, int colHeight) : x(x), y(y), realBody(x + colX, y + colY, colWidth, colHeight) {}

void Entity::init() {}
void Entity::move() {}
void Entity::updateCordinate() {
	this->realBody.x = x;
	this->realBody.y = y;
}
int Entity::removeCheck() { return 0; }
void Entity::remove() {}
void Entity::hitCheck() {}
void Entity::hit(Entity entity) {}
void Entity::draw() {}
