#include "pch.h"
#include "Player.h"
#include "Champion.h"

Player::Player(int paramPlayerId) : playerId(paramPlayerId)
{
	champion = make_unique<Champion>();
}

void Player::SendToClient()
{
	if (sptr<ClientSession> tempClient = client.lock()) {
		//tempClient->Send();
	}
}
