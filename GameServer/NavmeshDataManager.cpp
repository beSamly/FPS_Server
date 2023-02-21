#include "pch.h"
#include "NavmeshDataManager.h"

void NavmeshDataManager::LoadNavmeshData()
{
	//std::ifstream f("./json/SkillData.json");

	//json vectorData = json::parse(f);
	//for (auto& d : vectorData)
	//{
	//	SkillData data;

	//	data.skillIndex = d["Index"];
	//	data.aniDuration = d["AniDuration"];
	//	data.skillType = d["SkillType"];

	//	json triggerInfo = d["TriggerInfo"];
	//	data.triggerInfo.type = triggerInfo["Type"];
	//	data.triggerInfo.threshold = triggerInfo["Threshold"];
	//	data.triggerInfo.maxTriggerCount = triggerInfo["MaxTriggerCount"];

	//	json operationList = d["Operations"];
	//	for (auto& op : operationList)
	//	{
	//		// Operation base info
	//		Operation temp;
	//		temp.type = op["Type"];
	//		temp.value = op["Value"];
	//		temp.executeTime = op["ExecuteTime"];
	//		temp.duration = op["Duration"];

	//		// Operation target condition
	//		OperationTargetCondition tempTargetCondition;
	//		json targetCondition = op["TargetCondition"];
	//		tempTargetCondition.type = targetCondition["Type"];
	//		tempTargetCondition.targetNumber = targetCondition["TargetNumber"];
	//		tempTargetCondition.range = targetCondition["Range"];

	//		temp.condition = tempTargetCondition;
	//		data.operations.push_back(temp);
	//	}

	//	skillDataMap.emplace(data.skillIndex, data);
	//}
}

Navmesh NavmeshDataManager::GetNavmeshDataByMapId(int mapId)
{
	return mapNavmesh[mapId];
}
