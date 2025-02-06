#include "Enemy.h"

Enemy::Enemy()
{

}

void Enemy::EnemyBounce(float dt)
{
	if (getPosition().x < 0)
	{
		enemyDirection = -enemyDirection;
	}
	if (getPosition().x + getGlobalBounds().width > window->getSize().x)
	{
		enemyDirection = -enemyDirection;
	}
	if (getPosition().y < 0)
	{
		enemyDirection = -enemyDirection;
	}
	if (getPosition().y + getGlobalBounds().height > window->getSize().y)
	{
		enemyDirection = -enemyDirection;
	}
}

void Enemy::EnemyMove(float dt)
{
	move(enemySpeed * -enemyDirection * dt,0);
}