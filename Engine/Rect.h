#pragma once

#include "Vec2.h"
#include "Graphics.h"


class Rect {
public:
	Rect(int inLeft, int inTop, int inRight, int inBottom);
	Rect(Vec2 topLeft, Vec2 bottomRight);
	Rect(Vec2 topLeft, int width, int height);


private:
	int left;
	int top;
	int right;
	int bottom;
};