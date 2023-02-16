#pragma once
#include "pch.h"
#include "Command.h"
#include "ChampDataFactory.h"
#include "Player.h"
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

	/* Data */
	sptr<ChampDataFactory> champDataFactory;

public:
	map<int, sptr<Player>> mapPlayer;

public:
	map<int, sptr<Player>>& GetPlayer() { return mapPlayer; }
	sptr<ChampDataFactory> GetChampDataFactory() { return champDataFactory; }
	sptr <Player> FindPlayer(int playerId) { return mapPlayer.count(playerId) ? mapPlayer[playerId] : nullptr; }
	void SetCurrentState(sptr<IGameState> state) { currentState = state; }

public:
	GameHost(sptr<ChampDataFactory> p_champDataFactory, int matchId, vector<int> paramVecPlayerId);
	void Start();
	bool EnterPlayer(sptr<Player> client);
	void PushCommand(sptr<ICommand> command);
	void Update(float deltaTime);

private:
	void ProcessCommand();
};
