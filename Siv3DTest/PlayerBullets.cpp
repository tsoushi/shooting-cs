#include "PlayerBullets.h"
#include "Global.h"

void PlayerBullet1::move() {
	x += Math::Cos(Math::ToRadians(r)) * speed;
	y -= Math::Sin(Math::ToRadians(r)) * speed;

}

void PlayerBullet1::draw() {
	Circle{ x, y, 5 }.draw(Color{ 255, 0, 0 });
}
