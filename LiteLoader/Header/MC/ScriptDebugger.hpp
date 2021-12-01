// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTDEBUGGER
#include "Extra/ScriptDebuggerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTDEBUGGER
class ScriptDebugger {
#include "Extra/ScriptDebuggerAPI.hpp"
public:
    virtual bool listen(unsigned short);
    virtual bool connect(std::string const&, unsigned short);
    virtual void close();
    virtual ~ScriptDebugger();

public:
    MCAPI ScriptDebugger(class Scripting::ScriptEngine&, class IScriptDebuggerWatchdog&);
    MCAPI void checkConnections();


private:
    MCAPI class Scripting::IDebuggerController* _createController();
    MCAPI void _releaseController();
};