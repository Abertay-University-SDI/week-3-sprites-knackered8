#pragma once
#include "Framework/GameObject.h"
class Player : public GameObject
{

	private:
		



	public:
		float playerSpeed = 100;
		float playerPos = 0;
		int playerDirection = 1;



		Player();
		

		void handleInput(float dt);



};