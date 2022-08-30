/**
 * @file  SwimWanderGoal.hpp
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
 * @brief MC class SwimWanderGoal.
 *
 */
class SwimWanderGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMWANDERGOAL
public:
    class SwimWanderGoal& operator=(class SwimWanderGoal const &) = delete;
    SwimWanderGoal(class SwimWanderGoal const &) = delete;
    SwimWanderGoal() = delete;
#endif

public:
    virtual ~SwimWanderGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void __unk_vfn_3();
    virtual void start();
    virtual void __unk_vfn_5();
    virtual void tick();
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SWIMWANDERGOAL
#endif
    MCAPI SwimWanderGoal(class Mob &);

//protected:
    MCAPI bool _setWantedPosition();

protected:

};