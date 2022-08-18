#pragma once
#include "Entity.h"
class Unit :
    public Entity
{
	using Entity::Entity;

protected:
	int hp;

public:
	virtual void attacked(int);
};
