#pragma once
#include "pch.h"
#include "ChampRelatedStruct.h"

class Champion;

class ChampDataFactory
{
private:

public:
	ChampDataFactory() {};
	void LoadJsonData();

private:
	void LoadExample();
};
