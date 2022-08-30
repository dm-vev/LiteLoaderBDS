/**
 * @file  ServerScriptDebugCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerScriptDebugCommand.
 *
 */
class ServerScriptDebugCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERSCRIPTDEBUGCOMMAND
public:
    class ServerScriptDebugCommand& operator=(class ServerScriptDebugCommand const &) = delete;
    ServerScriptDebugCommand(class ServerScriptDebugCommand const &) = delete;
    ServerScriptDebugCommand() = delete;
#endif

public:
    virtual ~ServerScriptDebugCommand();
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERSCRIPTDEBUGCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &, class IScriptDebugger *, class std::optional<struct ScriptSettings> const &);

//private:

private:
MCAPI static class std::optional<unsigned short> sForcedPort;
MCAPI static class IScriptDebugger * sServerScriptDebugger;

};