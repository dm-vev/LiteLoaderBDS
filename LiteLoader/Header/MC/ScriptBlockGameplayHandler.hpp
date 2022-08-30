/**
 * @file  ScriptBlockGameplayHandler.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"
#include "ScriptModuleMinecraft.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptBlockGameplayHandler.
 *
 */
class ScriptBlockGameplayHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCKGAMEPLAYHANDLER
public:
    class ScriptBlockGameplayHandler& operator=(class ScriptBlockGameplayHandler const &) = delete;
    ScriptBlockGameplayHandler(class ScriptBlockGameplayHandler const &) = delete;
    ScriptBlockGameplayHandler() = delete;
#endif

public:
    virtual ~ScriptBlockGameplayHandler();
    virtual void __unk_vfn_1();
    virtual void __unk_vfn_2();
    virtual void __unk_vfn_3();
    virtual void __unk_vfn_4();
    virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct ExplosionStartedEvent &);
    virtual void __unk_vfn_6();
    virtual void __unk_vfn_7();
    virtual void __unk_vfn_8();
    virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct PistonActionEvent const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTBLOCKGAMEPLAYHANDLER
#endif

//private:
    MCAPI bool _handleExplosionStartedEvent(struct ExplosionStartedEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>) const;
    MCAPI bool _handlePistonActionEvent(struct PistonActionEvent const &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>) const;

private:

};