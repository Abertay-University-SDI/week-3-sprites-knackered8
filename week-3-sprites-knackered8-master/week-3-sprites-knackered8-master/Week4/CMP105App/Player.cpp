#include "Player.h"

Player::Player()
{

}

void Player::HandleInput(GameObject rect , float dt)
{
	if (input->isKeyDown(sf::Keyboard::D))
	{
		rect.move(playerSpeed * playerDirection * dt,0);
	}

	if (input->isKeyDown(sf::Keyboard::A))
	{
		rect.move(playerSpeed * -playerDirection * dt, 0);
	}

	if (input->isKeyDown(sf::Keyboard::W))
	{
		rect.move(0, playerSpeed * -playerDirection * dt);
	}

	if (input->isKeyDown(sf::Keyboard::S))
	{
		rect.move(0, playerSpeed * playerDirection * dt);
	}
}




void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::D))
	{
		move(playerSpeed * playerDirection * dt, 0);
	}

	if (input->isKeyDown(sf::Keyboard::A))
	{
		move(playerSpeed * -playerDirection * dt, 0);
	}

	if (input->isKeyDown(sf::Keyboard::W))
	{
		move(0, playerSpeed * -playerDirection * dt);
	}

	if (input->isKeyDown(sf::Keyboard::S))
	{
		move(0, playerSpeed * playerDirection * dt);
	}
}

















