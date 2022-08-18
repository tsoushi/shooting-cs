#pragma once
#include "Classes.h"
class Entity
{
public:
	Entity(int x, int y);
	Entity(int x, int y, int colWidth, int colHeight);
	Entity(int x, int y, int colX, int colY, int colWidth, int colHeight);

	double x;
	double y;
	int r = 0;
	virtual void init();
	virtual void move();
	virtual void updateCordinate();
	virtual int removeCheck();
	virtual void remove();
	virtual void hitCheck();
	virtual void hit(Entity entity);
	virtual void draw();

	Rect realBody;
};
