#pragma once

#include "Graphics.h"
#include "SpriteCodex.h"
#include "Rect.h"


class Ball {
public:
	Ball() = default;
	Ball(Rect in_rect, Vec2 inVelocity);
	Ball(Vec2 topLeft, Vec2 bottomRight, Vec2 inVelocity);
	Ball(Vec2 topLeft, float width, float height, Vec2 inVelocity);
	Ball(int left, int right, int top, int bottom, Vec2 inVelocity);
	void Draw(Graphics& gfx) const;
	void Move();
	Rect GetRect() const;

private:
	Rect rect;
	Vec2 velocity;
};