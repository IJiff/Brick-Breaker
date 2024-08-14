#include "Ball.h"


Ball::Ball(Vec2 inPos, Vec2 inVelocity){
	pos = inPos;
	velocity = inVelocity;
}

Ball::Ball(float x, float y, float vx, float vy) {
	pos.x = x;
	pos.y = y;
	velocity.x = vx;
	velocity.y = vy;
}


void Ball::Draw(Graphics& gfx) const {
	SpriteCodex::DrawBall(pos, gfx);
}

void Ball::Move() {
	pos += velocity;
}

void Ball::WallCollision() {
	if (pos.x - halfWidth < 0) {
		pos.x = halfWidth;
		velocity.x = -velocity.x;
	}
	else if (pos.x + halfWidth > Graphics::ScreenWidth - 1) {
		pos.x = Graphics::ScreenWidth - halfWidth - 1;
		velocity.x = -velocity.x;
	}
	if (pos.y - halfWidth< 0) {
		pos.y = halfWidth;
		velocity.y = -velocity.y;
	}
	else if (pos.y + halfWidth > Graphics::ScreenHeight - 1) {
		pos.y = Graphics::ScreenHeight - halfWidth - 1;
		velocity.y = -velocity.y;
	}
}