#pragma once
#include "Struct.h"
#include "Bullet.h"

class Player 
{
public:

	Player();

	~Player();

	void Update(char* keys,char *preKeys);

	void Draw();

public:

	Vector2 position_;

	int radius_;

	int speed_;

	unsigned int color_;

	Bullet* bullet;
};