#pragma once

#include "Rect.h"
#include "Colors.h"


class Brick {
public:
	Brick(Rect in_rect);
	Brick(Vec2 topLeft, int width, int height);
	//bool CollidingWithBall(class Ball& ball) const;

private:
	Rect rect;
	bool isBroken = false;
	Color c;
};