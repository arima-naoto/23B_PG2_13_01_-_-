#include "Bullet.h"
#include "Novice.h"


Bullet::Bullet()
{
	position_.x = 0;
	position_.y = -10;
	radius_ = 20;
	speed_ = 10;
	color_ = WHITE;
	isShot_ = false;

	collision_ = new Collision();
}

Bullet::~Bullet()
{
	delete collision_;
}

void Bullet::Update()
{
	if(isShot_ == true)
	{
		position_.y -= speed_;

		if(position_.y <= -20)
		{
			isShot_ = false;
		}
	}
}

void Bullet::Draw()
{
	if (isShot_ == true)
	{
		Novice::DrawEllipse(position_.x, position_.y, radius_, radius_, 0.0f, color_, kFillModeSolid);
	}
}

void Bullet::IsHit(Enemy *enemy)
{
	for (int i = 0; i < MAX; i++) {
		if(collision_->Box(position_, enemy->position_[i], radius_, enemy->radius_[i])){
			Enemy::isAlive = false;
		}
	}
}