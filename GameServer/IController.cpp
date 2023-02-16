#include "pch.h"
#include "IController.h"
#include "PacketHeader.h"
#include "spdlog/spdlog.h"

void IController::AddClientHandler(int key,
	function<void(sptr<ClientSession>& client, BYTE* buffer, int32 len)> handler)
{
	clientHandlers[key] = handler;
}

void IController::AddPlayerHandler(int key, function<void(sptr<ClientSession>& session, sptr<Player>& player, sptr<GameHost>& gameHost, BYTE* buffer, int32 len)> handler)
{
	playerHandlers[key] = handler;
}

void IController::AddProxyHandler(int key, function<void(sptr<Proxy>& client, BYTE* buffer, int32 len)> handler)
{
	proxyHandlers[key] = handler;
}

void IController::HandleClientPacket(sptr<ClientSession>& session, BYTE* buffer, int32 len)
{
	PacketHeader* header = reinterpret_cast<PacketHeader*>(buffer);
	auto packetId = header->id;

	if (clientHandlers[packetId])
	{
		//TODO GameHost와 Player 찾아서 인자로 넘기기
		clientHandlers[packetId](session, buffer, len);
	}
	else
	{
		spdlog::error("[IController] invalid packetId = {}", packetId);
	}
}

void IController::HandlePlayerPacket(sptr<ClientSession>& session, BYTE* buffer, int32 len)
{
	PacketHeader* header = reinterpret_cast<PacketHeader*>(buffer);
	auto packetId = header->id;

	if (playerHandlers[packetId])
	{
		// TODO player하고 gmaehost 찾아주기
		//playerHandlers[packetId](session, buffer, len);
	}
	else
	{
		spdlog::error("[IController] invalid packetId = {}", packetId);
	}
}

void IController::HandleProxyPacket(sptr<Proxy>& session, BYTE* buffer, int32 len)
{
	PacketHeader* header = reinterpret_cast<PacketHeader*>(buffer);
	auto packetId = header->id;

	if (proxyHandlers[packetId])
	{
		proxyHandlers[packetId](session, buffer, len);
	}
	else
	{
		spdlog::error("[IController] invalid packetId = {}", packetId);
	}
}
