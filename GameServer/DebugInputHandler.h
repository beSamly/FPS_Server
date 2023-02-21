#include "pch.h"
#include "GameSystem.h"
#include "GameHost.h"
#include "Command.h"
#include "spdlog/spdlog.h"
#include "Player.h"

/*
�׽�Ʈ ��� �޸�
ȣ��Ʈ ���� ���� - HostCreate
�÷��̾���� ���� Ȯ�� - ShowBencnAndFieldData
è�Ǿ� ���� - BuyChamp
�ʵ忡 ��ġ - ChampLocateToField
(Optional) ��ġ, �ʵ� ���� Ȯ��- ShowBencnAndFieldData
���� ���� - StartRound
*/

namespace {
#define LAMBDAFY_CLIENT_PACKET_HANDLER(FUNC) [&]() { FUNC(); }
}

class DebugInputHandler {

private:
	sptr<GameSystem> gameSystem;
	map<int, function<void()>> handlers;
	sptr<Proxy> proxySession;
	sptr<ClientSession> clientSession1;
	sptr<ClientSession> clientSession2;
	shared_ptr<asio::io_context> ioContext;

	DebugInputHandler() {
		proxySession = make_shared<Proxy>(SERVER_TYPE::AGENT, ioContext);
		clientSession1 = make_shared<ClientSession>(ioContext);
		sptr<Player> player1 = make_shared<Player>(1);

		clientSession2 = make_shared<ClientSession>(ioContext);
		sptr<Player> player2 = make_shared<Player>(2);
	}

private:
	sptr<GameHost> GetGameHost() {
		return gameSystem->GetGameHostByPlayerId(1);
	}

public:
	DebugInputHandler(sptr<GameSystem> paramGameSystem) : gameSystem(paramGameSystem) {
		handlers.emplace(1, LAMBDAFY_CLIENT_PACKET_HANDLER(HandleHostCreate));
		handlers.emplace(2, LAMBDAFY_CLIENT_PACKET_HANDLER(HandleEnterPlayer));
	}

	void PrintInstruction() {
		cout << "[1] HostCreate" << endl;
		cout << "[2] EnterPlayer" << endl;
		cout << "[3] ShowShopData" << endl;
		cout << "[4] BuyChamp" << endl;
		cout << "[5] ChampLocateToField" << endl;
		cout << "[6] ChampLocateToBench" << endl;
		cout << "[7] ShowBencnAndFieldData" << endl;
		cout << "[8] StartRound" << endl;
		cout << "[9] StopRound" << endl;
	}

	void HandleInput(int key) {

		if (!handlers.count(key))
		{
			spdlog::error("[DebugInputHandler] handler for key {} not found!", key);
		}
		else {
			handlers[key]();
		}
	};

	void HandleHostCreate() {
		vector<int> vecPlayerId;
		vecPlayerId.push_back(1);
		vecPlayerId.push_back(2);

		// ���� �ý��ۿ� ��û
		sptr<HostCreateCommand> command = make_shared<HostCreateCommand>(99999, vecPlayerId, proxySession);
		gameSystem->PushCommand(command);
	}

	void HandleEnterPlayer() {

		sptr<GameHost> host = gameSystem->GetGameHostByPlayerId(1);

		if (!host) {
			spdlog::error("[DebugInputController] host not found for playerId = {}", 1);
			return;
		}

		//host->EnterPlayer(clientSession1);
		//host->EnterPlayer(clientSession2);

	};
}