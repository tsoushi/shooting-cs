# include <Siv3D.hpp>

#include "Global.h"
#include "EntityManager.h"
#include "Player.h"
#include "Summon.h"

EntityManager entityManager;

void Main()
{
	entityManager.add(new Player{ 300, 400 });
	

	while (System::Update()) {
		entityManager.update();
		entityManager.hit();
		entityManager.draw();
	}
}

