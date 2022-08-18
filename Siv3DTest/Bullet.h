#pragma once
#include "Entity.h"
class Bullet :
    public Entity
{
	using Entity::Entity;
protected:
	int power;
};
