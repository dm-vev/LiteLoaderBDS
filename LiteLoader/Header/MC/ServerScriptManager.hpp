/**
 * @file  ServerScriptManager.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerScriptManager.
 *
 */
class ServerScriptManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERSCRIPTMANAGER
public:
    class ServerScriptManager& operator=(class ServerScriptManager const &) = delete;
    ServerScriptManager(class ServerScriptManager const &) = delete;
    ServerScriptManager() = delete;
#endif

public:
    virtual ~ServerScriptManager();
    virtual enum EventResult onServerLevelInitialized(class ServerInstance &, class Level &);
    virtual void __unk_vfn_2();
    virtual void __unk_vfn_3();
    virtual void __unk_vfn_4();
    virtual enum EventResult onServerUpdateStart(class ServerInstance &);
    virtual void __unk_vfn_6();
    virtual void __unk_vfn_7();
    virtual void __unk_vfn_8();
    virtual enum EventResult onServerThreadStarted(class ServerInstance &);
    virtual enum EventResult onServerThreadStopped(class ServerInstance &);
    virtual void __unk_vfn_11();
    virtual enum EventResult onEvent(struct ServerInstanceRequestResourceReload const &);
    virtual enum EventResult onEvent(struct ServerInstanceNotificationEvent const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERSCRIPTMANAGER
#endif
    MCAPI ServerScriptManager(struct ScriptSettings, class Bedrock::NonOwnerPointer<class Scheduler>, class IMinecraftEventing &, bool);
    MCAPI void onMainThreadStartLeaveGame();

//private:
    MCAPI void _loadAndRunAllPlugins(class ServerInstance &, class ServerLevel &);
    MCAPI void _registerEventHandlers(class Level &) const;
    MCAPI void _sendInitializeEvent(class ServerLevel &) const;
    MCAPI void _unregisterEventHandlers(class Level &) const;

private:

};