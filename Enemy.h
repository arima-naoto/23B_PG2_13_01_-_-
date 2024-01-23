#pragma once
#include "Struct.h"

class Enemy
{
public:

	virtual void Update();

	virtual void Draw();

protected:

	Vector2 position_;

	int radius_;

	int speed_;

	unsigned int color_;

};
