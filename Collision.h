#pragma once
#include "Struct.h"

class Collision
{
public:

	/// <summary>
	/// 当たり判定用のメンバ関数を用意
	/// </summary>
	/// <param name="player"></param>
	/// <param name="enemy"></param>
	/// <returns></returns>
	bool Box(Vector2 bullet, Vector2 enemy, int bulletRadius, int enemyRadius);

};

