/**
 * @file  TrailSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TrailSystem.
 *
 */
class TrailSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRAILSYSTEM
public:
    class TrailSystem& operator=(class TrailSystem const &) = delete;
    TrailSystem(class TrailSystem const &) = delete;
    TrailSystem() = delete;
#endif

public:
    virtual ~TrailSystem();
    virtual void __unk_vfn_1();
    virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRAILSYSTEM
#endif

//private:
    MCAPI void _tickComponent(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class TrailComponent> &);

private:

};