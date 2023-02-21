#pragma once
#include "Navmesh.h"

class NavmeshDataManager
{
private:
	map<int, Navmesh> mapNavmesh;

public:
	void LoadNavmeshData();
	Navmesh GetNavmeshDataByMapId(int mapId);
};

