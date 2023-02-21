#include "pch.h"
#include "DataSystem.h"


DataSystem::DataSystem()
{
	tempClientManager = make_shared<TempClientManager>();
	navmeshDataManager = make_shared<NavmeshDataManager>();

	LoadJsonData();
}

void DataSystem::LoadJsonData()
{
	navmeshDataManager->LoadNavmeshData();
}
