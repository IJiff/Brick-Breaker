#pragma once

#include "Vec2.h"


class Rect {
public:
	Rect() = default;
	Rect(int inLeft, int inTop, int inRight, int inBottom);
	Rect(Vec2 topLeft, Vec2 bottomRight);
	Rect(Vec2 topLeft, int width, int height);
	bool IsColliding(const Rect& rect) const;


public:
	int left;
	int top;
	int right;
	int bottom;
};