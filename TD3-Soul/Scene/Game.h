#pragma once
#include "Scene.h"
class BlockEmitter;
class CircleEmitter;
class Game : public Scene
{
public:
	Game();
	~Game() = default;

	void onEnter() override;
	void onInput(char* keys, char* prekeys) override;
	void Update() override;
	void Draw(const Camera& camera) override;
	void onExit() override;

private:
	//BlockEmitter* blockEmitter = nullptr;
	//CircleEmitter* circleEmitter = nullptr;
	bool isOver = false;
};
