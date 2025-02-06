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
}

void Enemy::EnemyMove(float dt)
{
	move(enemySpeed * -enemyDirection * dt,0);
}