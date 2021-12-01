// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTSERVERNETWORKEVENTHANDLER
#include "Extra/ScriptServerNetworkEventHandlerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSERVERNETWORKEVENTHANDLER
class ScriptServerNetworkEventHandler {
#include "Extra/ScriptServerNetworkEventHandlerAPI.hpp"
public:
    virtual ~ScriptServerNetworkEventHandler();
    virtual struct GameplayHandlerResult<int /*enum CoordinatorResult*/> handleChat(struct ChatEvent&);


private:
    MCAPI bool _handleChat(struct ChatEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptWorldEvents>) const;
};