#include "Rect.h"


Rect::Rect(int inLeft, int inTop, int inRight, int inBottom) :
	left(inLeft),
	top(inTop),
	right(inRight),
	bottom(inBottom)
{
}

Rect::Rect(Vec2 topLeft, Vec2 bottomRight) {
	Rect(int(topLeft.x), int(topLeft.y), int(bottomRight.x), int(bottomRight.y));
}

Rect::Rect(Vec2 topLeft, int width,int height) {
	Rect(topLeft, Vec2(float(width), float(height)));
}

