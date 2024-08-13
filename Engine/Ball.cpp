#include "Ball.h"


Ball::Ball(Rect inRect, Vec2 inVelocity) {
	rect = inRect;
	velocity = inVelocity;
}

Ball::Ball(Vec2 topLeft, Vec2 bottomRight, Vec2 inVelocity) {
	Ball(Rect(topLeft, bottomRight), inVelocity);
}

Ball::Ball(Vec2 topLeft, float width, float height, Vec2 inVelocity) {
	Ball(topLeft, Vec2(topLeft.x + width, topLeft.y + height), inVelocity);
}

Ball::Ball(int left, int right, int top, int bottom, Vec2 inVelocity) {
	rect.left = left;
	rect.right = right;
	rect.top = top;
	rect.bottom = bottom;
	velocity = inVelocity;
}


void Ball::Draw(Graphics& gfx) const {
	SpriteCodex::DrawBall(Vec2(float(rect.left), float(rect.top)), gfx);
}

void Ball::Move() {
	rect.left += int(velocity.x);
	rect.right += int(velocity.x);
	rect.top += int(velocity.y);
	rect.bottom += int(velocity.y);

	if (rect.left < 0) {
		rect.right -= rect.left;
		rect.left -= rect.left;
		velocity.x = -velocity.x;
	}
	else if (rect.right >= Graphics::ScreenWidth) {
		rect.left -= rect.right - Graphics::ScreenWidth + 1;
		rect.right -= rect.right - Graphics::ScreenWidth + 1;
		velocity.x = -velocity.x;
	}
	if (rect.top < 0) {
		rect.bottom -= rect.top;
		rect.top -= rect.top;
		velocity.y = -velocity.y;
	}
	else if (rect.bottom >= Graphics::ScreenHeight) {
		rect.top -= Graphics::ScreenHeight - rect.bottom;
		rect.bottom -= Graphics::ScreenHeight - rect.bottom;
		velocity.y = -velocity.y;
	}
}

Rect Ball::GetRect() const {
	return rect;
}