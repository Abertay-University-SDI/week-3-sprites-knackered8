#pragma once
#include "Framework/GameObject.h"

class Enemy : public GameObject
{
	private:
		//GameObject gObject;

	public:
	
		float enemySpeed = 100;
		float enemyPos = 0;
		int enemyDirectionHoz = 1;
		int enemyDirectionVer = 1;

		//void ReturnWindow(sf::RenderWindow* win);
		Enemy() {};
		Enemy(sf::RenderWindow* win);

		void EnemyBounce(float dt);
		void EnemyMove(float dt);

		//gObject.setWindow(window);
		
};

