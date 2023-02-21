#pragma once

#include "GameSystem.h"
#include "IController.h"

class GameController : public IController
{
public:
	GameController(sptr<GameSystem> paramGameSystem);

private:
	sptr<GameSystem> gameSystem;
	void HandleMoveRequest(sptr<ClientSession>& session, sptr<Player>& player, sptr<GameHost>& gameHost, BYTE* buffer, int32 len);
};
