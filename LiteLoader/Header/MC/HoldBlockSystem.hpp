/**
 * @file  HoldBlockSystem.hpp
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
 * @brief MC class HoldBlockSystem.
 *
 */
class HoldBlockSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOLDBLOCKSYSTEM
public:
    class HoldBlockSystem& operator=(class HoldBlockSystem const &) = delete;
    HoldBlockSystem(class HoldBlockSystem const &) = delete;
    HoldBlockSystem() = delete;
#endif

public:
    virtual ~HoldBlockSystem();
    virtual void registerEvents(class entt::basic_dispatcher<class std::allocator<void>> &);
    virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HOLDBLOCKSYSTEM
#endif

//private:
    MCAPI static void _holdBlockSystemOnActorDie(struct ActorDieEvent &);

private:

};