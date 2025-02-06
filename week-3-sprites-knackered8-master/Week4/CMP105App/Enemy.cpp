#include "Enemy.h"



Enemy::Enemy()
{

}

void Enemy::ReturnWindow(sf::RenderWindow* win)
{
	window = win;
	
}

void Enemy::EnemyBounce(float dt)
{
	if (getPosition().x < 0)
	{
		enemyDirectionHoz = -enemyDirectionHoz;
	}
	if (getPosition().x + getGlobalBounds().width > window->getSize().x)
	{
		enemyDirectionHoz = -enemyDirectionHoz;
	}
	if (getPosition().y < 0)
	{
		enemyDirectionVer = -enemyDirectionVer;
	}
	if (getPosition().y + getGlobalBounds().height > window->getSize().y)
	{
		enemyDirectionVer = -enemyDirectionVer;
	}
}

void Enemy::EnemyMove(float dt)
{
	move(enemySpeed * -enemyDirectionHoz * dt, enemySpeed * -enemyDirectionVer * dt);
}