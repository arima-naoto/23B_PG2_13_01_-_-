#pragma once
#include "Struct.h"

class Player 
{
public:

	Player();

	~Player();

	void Update(char* keys);

	void Draw();

public:

	Vector2 position_;

	int radius_;

	int speed_;

	int color_;
};