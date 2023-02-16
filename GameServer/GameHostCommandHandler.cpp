#include "pch.h"
#include "GameHostCommandHandler.h"
#include "Command.h"
#include "GameHost.h"
#include "spdlog/spdlog.h"

using namespace Command;
using namespace Command::N2G;
namespace
{
#define LAMBDAFY_COMMAND_HANDLER(FUNC) [&](GameHost& host, sptr<ICommand> command) { FUNC(host, command); }
} // namespace

GameHostCommandHandler::GameHostCommandHandler()
{
	commandHandler.emplace((int)N2G::CommandId::CREATE_HOST, LAMBDAFY_COMMAND_HANDLER(HandleHostCreateCommand));
}

void GameHostCommandHandler::ProcessCommand(GameHost& host, sptr<ICommand> command)
{
	int commandId = command->GetCommandId();

	if (commandHandler.count(commandId)) {
		commandHandler[commandId](host, command);
	}
}

void GameHostCommandHandler::HandleHostCreateCommand(GameHost& host, sptr<ICommand> command)
{

}
