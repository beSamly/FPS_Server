#include "pch.h"
#include "GameController.h"
#include "GameSystem.h"
#include "PacketHeader.h"
#include "spdlog/spdlog.h"
#include "PacketId_MT_GM.h"
#include "IController.h"
#include "PacketId_CL_GM.h"
#include "MoveRequest.pb.h"

GameController::GameController(sptr<GameSystem> paramGameSystem) : gameSystem(paramGameSystem)
{
	AddPlayerHandler((int)PacketId_CL_GM::InGame::MOVE_REQ, LAMBDAFY_PLAYER_PACKET_HANDLER(HandleMoveRequest));
};

void GameController::HandleMoveRequest(sptr<ClientSession>& session, sptr<Player>& player, sptr<GameHost>& gameHost, BYTE* buffer, int32 len) {

	Protocol::MoveRequest moveReq;
	if (moveReq.ParseFromArray(buffer + sizeof(PacketHeader), len - sizeof(PacketHeader)) == false)
		return;

	//string input = ;
	//PhysicsEngine::Vector3 newVector(cameraDirection.x(), cameraDirection.y(), cameraDirection.z());

	Protocol::Vector3 cameraDirection = moveReq.cameradirection();

	sptr<MoveCommand> command = make_shared<MoveCommand>(
		session->GetPlayerId(),
		moveReq.input(),
		PhysicsEngine::Vector3(cameraDirection.x(), cameraDirection.y(), cameraDirection.z())
		);

	gameHost->PushCommand(command);
}