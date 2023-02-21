#pragma once
#include "TempClientManager.h"
#include "ChampDataFactory.h"
#include "NavmeshDataManager.h"

class DataSystem
{
private:
	sptr<TempClientManager> tempClientManager;
	sptr<ChampDataFactory> champDataFactory;
	sptr<NavmeshDataManager> navmeshDataManager;

	void LoadJsonData();

public:
	DataSystem();

	sptr<TempClientManager> GetTempClientManager() { return tempClientManager; }
	sptr<NavmeshDataManager> GetNavmeshDataManager() { return navmeshDataManager; }
};
