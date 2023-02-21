#pragma once
#include <Vector3.h>

using PhysicsEngine::Vector3;

class Navmesh
{
public:
	vector<int> triangles;
	vector<Vector3> vertices;
};

