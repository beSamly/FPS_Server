#pragma once
namespace PacketId_CL_GM {

	enum Prefix : int {
		AUTH = 1,
		DEBUG,
		GAME,
	};

	enum Auth : int { LOGIN_REQ = 1, LOGIN_RES, LOGOUT_REQ };

	enum Debug : int { HOST_CREATE_REQ = 1, GAME_START_REQ };

	enum InGame : int { KEY_INPUT = 1, MOVE_REQ, JUMP_REQ, FIRE_REQ };

}  // namespace PacketId_CL_GM
