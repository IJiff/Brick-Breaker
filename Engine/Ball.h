#pragma once

#include "Graphics.h"
#include "SpriteCodex.h"


class Ball {
public:
	Ball() = default;
	Ball(Vec2 inLoc, Vec2 in_velocity);
	Ball(float x, float y, float vy, float vx);
	void Draw(Graphics& gfx) const;
	void Move();
	void WallCollision();

private:
	Vec2 pos;
	Vec2 velocity;
	float halfWidth = 7;
};