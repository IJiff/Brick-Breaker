#include "Brick.h"

Brick::Brick(Rect in_rect) {
	rect = in_rect;
}

Brick::Brick(Vec2 topLeft, int width, int height) {
	Brick(Rect::Rect(topLeft, width, height));
}

/*Brick::CollidingWithBall(class Ball& ball) {
	return rect.IsColliding(ball.GetRect());
}*/