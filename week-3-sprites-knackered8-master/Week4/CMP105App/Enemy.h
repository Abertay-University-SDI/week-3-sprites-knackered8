#pragma once
#include "Framework/GameObject.h"

class Enemy : public GameObject
{
	private:


	public:
	
		float enemySpeed = 100;
		float enemyPos = 0;
		int enemyDirection = 1;

		Enemy();

		void EnemyBounce(float dt);
		void EnemyMove(float dt);
		
};

