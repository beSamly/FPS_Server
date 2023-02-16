#pragma once
#include "ClientSession.h"
#include "ProxyManager.h"
#include "GameHost.h"
#include "Player.h"

#define LAMBDAFY_CLIENT_PACKET_HANDLER(FUNC) [&](sptr<ClientSession>& session, BYTE* buffer, int32 len) { FUNC(session, buffer, len); }
#define LAMBDAFY_PROXY_PACKET_HANDLER(FUNC) [&](sptr<Proxy>& session, BYTE* buffer, int32 len) { FUNC(session, buffer, len); }
#define LAMBDAFY_PLAYER_PACKET_HANDLER(FUNC) [&](sptr<ClientSession>& session, sptr<Player>& player, sptr<GameHost>& gameHost, BYTE* buffer, int32 len) { FUNC(session, player, gameHost, buffer, len); }

class IController
{
private:
	map<int, std::function<void(sptr<ClientSession>&, BYTE*, int32)>> clientHandlers;
	map<int, std::function<void(sptr<Proxy>&, BYTE*, int32)>> proxyHandlers;
	map<int, function<void(sptr<ClientSession>& session, sptr<Player>& player, sptr<GameHost>& gameHost, BYTE* buffer, int32 len)>> playerHandlers;

public:
	void AddClientHandler(int key, function<void(sptr<ClientSession>& client, BYTE* buffer, int32 len)> handler);
	void AddPlayerHandler(int key, function<void(sptr<ClientSession>& session, sptr<Player>& player, sptr<GameHost>& gameHost, BYTE* buffer, int32 len)> handler);
	void AddProxyHandler(int key, function<void(sptr<Proxy>& client, BYTE* buffer, int32 len)> handler);

	virtual void HandleClientPacket(sptr<ClientSession>& session, BYTE* buffer, int32 len);
	virtual void HandlePlayerPacket(sptr<ClientSession>& session, BYTE* buffer, int32 len);
	virtual void HandleProxyPacket(sptr<Proxy>& session, BYTE* buffer, int32 len);
};
