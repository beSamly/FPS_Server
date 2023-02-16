#pragma once
#include "Vector3.h"

using PhysicsEngine::Vector3;

class TransformController
{
private:
	Vector3 position;
	Vector3 targetPosition;

public:
	TransformController() {};
	Vector3 GetPosition();
	Vector3 GetTargetPosition() { return targetPosition; };
	void SetTargetPosition(Vector3 p_position) { targetPosition = p_position; };
	void Update(float deltaTime);
	bool IsMoving();
};
