#include "Collision.h"

bool Collision::Box(Vector2 bullet, Vector2 enemy, int bulletRadius, int enemyRadius)
{
	if (bullet.x - bulletRadius <= enemy.x + enemyRadius && enemy.x - enemyRadius <= bullet.x + bulletRadius && 
		bullet.y - bulletRadius <= enemy.y + enemyRadius && enemy.y - enemyRadius <= bullet.y + bulletRadius){
		return true;
	}
	else {
		return false;
	}
}