#pragma once
#include "Struct.h"
#include "Bullet.h"
#include "Enemy.h"

class Player
{
public:

	Player();

	~Player();

	void Update(char* keys,char *preKeys,Enemy *enemy);

	void Draw();

public:

	Vector2 position_;

	Bullet* bullet;

	int radius_;

	int speed_;

	unsigned int color_;
};

