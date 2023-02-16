#pragma once
#include "ClientSession.h"
#include "Champion.h"

class Player
{
private:
	int playerId;
	wptr<ClientSession> client;
	uptr<Champion> champion;

public:
	Player(int playerId);
	int GetPlayerId() { return playerId; }
	void SetClientSession(wptr<ClientSession> p_clinet) { client = p_clinet; }
	void SendToClient();
	// Player(){};
};
