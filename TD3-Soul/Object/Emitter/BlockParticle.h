#pragma once
#include "Particle.h"
class BlockParticle : public Particle
{
public:
	BlockParticle(Vector3 pos, Vector3 toward,float lifeTime);
	BlockParticle(Vector3 pos, Vector2 size, Vector3 toward, Vector3 acceleration, float speed, float lifeTime, float rotateSpeed, int color);
	BlockParticle(Vector3 pos, Vector2 size,Vector3 toward, Vector3 acceleration, float speed,float lifeTime, float sizeSpeed,float rotateSpeed, int color);
	//BlockParticle(Vector3 pos, Vector3 toward, Vector2 size, float lifeTime);
	BlockParticle() = default;
	~BlockParticle() = default;
	void Update() override;
	void Draw(const Camera& camera) override;
private:
	//Vector2 leftTop;
	Vector2 corners[4];

	float rotate = 0.0f;
	float rotateSpeed = 0.0f;
};