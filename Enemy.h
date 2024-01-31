#pragma once
#include "Struct.h"

const int MAX = 2;

class Enemy
{
public:

	Enemy();

	~Enemy();

	void Update();

	void Draw();

public:

	Vector2 position_[MAX];

	int radius_[MAX];

	int speed_[MAX];

	unsigned int color_[MAX];

};

