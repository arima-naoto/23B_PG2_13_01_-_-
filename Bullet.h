#pragma once
#include "Struct.h"

class Bullet
{
public:
	Bullet();

	~Bullet();

	void Update();

	void Draw();

public:

	Vector2 position_;

	int radius_;

	int speed_;

	int color_;

	bool isShot_;

};