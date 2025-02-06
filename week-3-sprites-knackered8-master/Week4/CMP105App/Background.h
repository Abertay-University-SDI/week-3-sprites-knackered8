#pragma once

#include "Framework/GameObject.h"

class Background : public GameObject
{
public:

	Background();
	
	void ReturnWindow(sf::RenderWindow* win);
	//void MoveScreen(float dt);

	float speed = 50;
	float direction = 1;

	//sf::View view = window->getView();

	void handleInput(float dt);

	

private:

	

};
