#include "Rect.h"


Rect::Rect(int inLeft, int inTop, int inRight, int inBottom) :
	left(inLeft),
	top(inTop),
	right(inRight),
	bottom(inBottom)
{
}

Rect::Rect(Vec2 topLeft, Vec2 bottomRight) {
	Rect(topLeft.x, topLeft.y, bottomRight.x, bottomRight.y);
}

Rect::Rect(Vec2 topLeft, int width,int height) {
	Rect(topLeft, Vec2(width, height));
}

