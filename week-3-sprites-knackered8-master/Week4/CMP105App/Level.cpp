#include "Level.h"
#include "Player.h"
#include "Enemy.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);

	playerObject.setFillColor(sf::Color::Red);
	playerObject.setPosition(100, 100);
	playerObject.setSize(sf::Vector2f(10, 10));

	enemyObject.setFillColor(sf::Color::Blue);
	enemyObject.setPosition(400, 300);
	enemyObject.setSize(sf::Vector2f(10, 10));

	
	playerObject.setInput(input);

	
	

}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}


	playerObject.handleInput(dt);

}

// Update game objects
void Level::update(float dt)
{
	enemyObject.EnemyMove(dt);
	enemyObject.EnemyBounce(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(testSprite);
	window->draw(playerObject);
	window->draw(enemyObject);

	endDraw();
}
