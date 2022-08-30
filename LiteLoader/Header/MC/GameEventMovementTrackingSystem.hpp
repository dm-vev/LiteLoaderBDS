/**
 * @file  GameEventMovementTrackingSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GameEventMovementTrackingSystem.
 *
 */
class GameEventMovementTrackingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTMOVEMENTTRACKINGSYSTEM
public:
    class GameEventMovementTrackingSystem& operator=(class GameEventMovementTrackingSystem const &) = delete;
    GameEventMovementTrackingSystem(class GameEventMovementTrackingSystem const &) = delete;
    GameEventMovementTrackingSystem() = delete;
#endif

public:
    virtual ~GameEventMovementTrackingSystem();
    virtual void __unk_vfn_1();
    virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMEEVENTMOVEMENTTRACKINGSYSTEM
#endif

//private:
    MCAPI static void _tickGameEventMovementTrackingComponent(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class GameEventMovementTrackingComponent> &);
    MCAPI static void _trackMovement(class Actor &, class GameEventMovementTrackingComponent &);

private:

};