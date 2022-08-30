/**
 * @file  BreakDoorGoal.hpp
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
 * @brief MC class BreakDoorGoal.
 *
 */
class BreakDoorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKDOORGOAL
public:
    class BreakDoorGoal& operator=(class BreakDoorGoal const &) = delete;
    BreakDoorGoal(class BreakDoorGoal const &) = delete;
    BreakDoorGoal() = delete;
#endif

public:
    virtual ~BreakDoorGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void __unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BREAKDOORGOAL
#endif
    MCAPI BreakDoorGoal(class Mob &);

};