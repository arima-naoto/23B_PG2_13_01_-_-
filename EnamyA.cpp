#include "EnemyA.h"
#include "Novice.h"

EnemyA::EnemyA() 
{
	position_.x = 640;
	position_.y = 300;
	radius_ = 20;
	speed_ = 7;
	color_ = RED;
}

EnemyA::~EnemyA(){}

void EnemyA::Update() 
{
	position_.x -= speed_;

	if (position_.x <= 20 || position_.x >= 1260) {
		speed_ *= -1;
	}
}

void EnemyA::Draw() {
	Novice::DrawEllipse(position_.x, position_.y, radius_, radius_, 0.0f, color_, kFillModeSolid);
}