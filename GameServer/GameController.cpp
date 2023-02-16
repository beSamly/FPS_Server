#include "pch.h"
#include "GameController.h"
#include "GameSystem.h"
#include "PacketHeader.h"
#include "spdlog/spdlog.h"
#include "PacketId_MT_GM.h"
#include "IController.h"
#include "PacketId_CL_GM.h"

GameController::GameController(sptr<GameSystem> paramGameSystem) : gameSystem(paramGameSystem)
{
	AddPlayerHandler((int)PacketId_CL_GM::InGame::BUY_CHAMP, LAMBDAFY_PLAYER_PACKET_HANDLER(HandleExample));
};

void GameController::HandleExample(sptr<ClientSession>& session, sptr<Player>& player, sptr<GameHost>& gameHost, BYTE* buffer, int32 len) {}