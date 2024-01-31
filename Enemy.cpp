#include "Enemy.h"

Enemy::Enemy() 
{
	for(int i = 0; i < MAX; i++)
	{
		position_[i].x = 640 - 200 * i;
		position_[i].y = 350 - 100 * i;
		radius_[i] = 20;
		speed_[i] = 5;
		color_[i] = RED;
	}
}

Enemy::~Enemy(){}

void Enemy::Update()
{
	for(int i = 0; i < MAX; i++)
	{
		position_[i].x += speed_[i];

		if(position_[i].x >= 1260 || position_[i].x <= 20)
		{
			speed_[i] *= -1;
		}

	}
}

void Enemy::Draw()
{
	for (int i = 0; i < MAX; i++)
	{
		if (isAlive == true) 
		{
			Novice::DrawEllipse(position_[i].x, position_[i].y, radius_[i], radius_[i], 0.0f, color_[i], kFillModeSolid);
		}
	}
}