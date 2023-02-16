#pragma once
#include "pch.h"
#include "ClientSession.h"

class InGamePlayer
{
private:
	wptr<ClientSession> client;

public:
	InGamePlayer();

private:
	int playerId;

public:
	int GetPlayerId() { return playerId; }
	void SetPlayerId(int id) { playerId = id; }

public:
	bool IsMatched() { return isMatched; }
	void SetMatched(bool value) { isMatched = value; }
	void SetClientSession(wptr<ClientSession> p_clinet) { client = p_clinet; }
	void SendToClient();

private:
	bool isMatched;
};
