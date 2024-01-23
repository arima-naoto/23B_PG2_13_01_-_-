#include "EnemyB.h"
#include "Novice.h"

EnemyB::EnemyB()
{
	position_.x = 350;
	position_.y = 150;
	radius_ = 20;
	speed_ = 7;
	color_ = RED;
}

EnemyB::~EnemyB() {}

void EnemyB::Update()
{
	position_.x -= speed_;

	if (position_.x <= 20 || position_.x >= 1260) {
		speed_ *= -1;
	}
}

void EnemyB::Draw() {
	Novice::DrawEllipse(position_.x, position_.y, radius_, radius_, 0.0f, color_, kFillModeSolid);
}