#pragma once
#include "pch.h"
#include "Command.h"
#include "ChampDataFactory.h"
#include "InGamePlayer.h"
#include "IGameState.h"
#include "GameHostCommandHandler.h"

using Command::ICommand;

class GameHost
{
private:
	int matchId = 0;
	vector<int> vecPlayerId;
	bool isStarted = false;

public:
	int GetMatchId() { return matchId; }

private:
	USE_LOCK;
	sptr<IGameState> currentState = nullptr;
	queue<sptr<ICommand>> commandQueue;
	GameHostCommandHandler gameHostCommandHandler;
	map<int, vector<ChampData>> champPool; //map<cost, vector<ChampData>

	/* Data */
	sptr<ChampDataFactory> champDataFactory;

public:
	map<int, sptr<InGamePlayer>> mapInGamePlayer;

public:
	map<int, sptr<InGamePlayer>>& GetInGamePlayer() { return mapInGamePlayer; }
	sptr<ChampDataFactory> GetChampDataFactory() { return champDataFactory; }
	sptr <InGamePlayer> FindInGamePlayer(int playerId) { return mapInGamePlayer.count(playerId) ? mapInGamePlayer[playerId] : nullptr; }
	void SetCurrentState(sptr<IGameState> state) { currentState = state; }

public:
	GameHost(sptr<ChampDataFactory> p_champDataFactory, int matchId, vector<int> paramVecPlayerId);
	void Start();
	bool EnterClient(sptr<ClientSession> client);
	void PushCommand(sptr<ICommand> command);
	void Update(float deltaTime);

private:
	void ProcessCommand();
};
