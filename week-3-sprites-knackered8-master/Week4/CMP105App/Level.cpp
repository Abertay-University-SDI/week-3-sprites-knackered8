#include "Level.h"
#include "Player.h"
#include "Enemy.h"
#include "Background.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	Enemy enemyObject = Enemy(window);
	Enemy enemyObject2 = Enemy(window);

	//enemyObject.setWindow(window);
	//enemyObject.ReturnWindow(window);
	//enemyObject2.ReturnWindow(window);

	backObject.ReturnWindow(window);

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");
	enemyTexture.loadFromFile("gfx/Goomba.png");
	sonicTexture.loadFromFile("gfx/sonic.png");
	backTexture.loadFromFile("gfx/Level1_1.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);

	//playerObject.setFillColor(sf::Color::Red);
	playerObject.setPosition(100, 100);
	playerObject.setSize(sf::Vector2f(50, 50));
	playerObject.setTexture(&texture);

	enemyObject.setTexture(&enemyTexture);
	enemyObject.setPosition(400, 300);
	enemyObject.setSize(sf::Vector2f(50, 50));

	enemyObject2.setTexture(&sonicTexture);
	enemyObject2.setPosition(600, 300);
	enemyObject2.setSize(sf::Vector2f(50, 50));

	backObject.setTexture(&backTexture);
	backObject.setPosition(0, 0);
	backObject.setSize(sf::Vector2f(11038,675));


	backObject.setInput(input);
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
	backObject.handleInput(dt);

}

// Update game objects
void Level::update(float dt)
{
	enemyObject.EnemyMove(dt);
	enemyObject.EnemyBounce(dt);
	enemyObject2.EnemyMove(dt);
	enemyObject2.EnemyBounce(dt);
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(backObject);
	window->draw(testSprite);
	window->draw(playerObject);
	window->draw(enemyObject);
	window->draw(enemyObject2);
	

	endDraw();
}
