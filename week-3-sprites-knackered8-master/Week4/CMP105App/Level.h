#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include "Background.h"


class Level : BaseLevel {
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	Player playerObject;

	Enemy enemyObject;
	Enemy enemyObject2;

	Background backObject;

	void handleInput(float dt) override;
	void update(float dt) override;
	void render() override;

	

private:
	// Level objects
	GameObject testSprite;
	GameObject gObject;
	sf::Texture texture;
	sf::Texture enemyTexture;
	sf::Texture sonicTexture;
	sf::Texture backTexture;

};