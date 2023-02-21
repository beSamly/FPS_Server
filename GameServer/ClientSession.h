#pragma once
#include "pch.h"
#include "AsioSession.h"
#include <asio/io_context.hpp>

/*-----------------
				ClientSession
------------------*/

class ClientSession : public AsioSession
{
private:
	int playerId;
public:
	ClientSession(sptr<asio::io_context> context);
	virtual ~ClientSession();
	void SetPlayerId(int id) { playerId = id; }
	int GetPlayerId() { return playerId; }

public:
	bool isAuthenticated = false;
	int tempClientId = 0;
};
