#pragma once
#include "Struct.h"
#include "Collision.h"
#include "Enemy.h"

class Bullet
{
public:

	Bullet();

	~Bullet();

	void Update();

	void Draw();

	void IsHit(Enemy *ememy);

public:

	Vector2 position_;

	int radius_;

	int speed_;

	unsigned int color_;

	bool isShot_;

	Collision* collision_;

};