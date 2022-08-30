/**
 * @file  TargetWhenPushedGoal.hpp
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
 * @brief MC class TargetWhenPushedGoal.
 *
 */
class TargetWhenPushedGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETWHENPUSHEDGOAL
public:
    class TargetWhenPushedGoal& operator=(class TargetWhenPushedGoal const &) = delete;
    TargetWhenPushedGoal(class TargetWhenPushedGoal const &) = delete;
    TargetWhenPushedGoal() = delete;
#endif

public:
    virtual ~TargetWhenPushedGoal();
    virtual bool canUse();
    virtual void __unk_vfn_2();
    virtual void __unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TARGETWHENPUSHEDGOAL
    MCVAPI bool canBeInterrupted();
    MCVAPI bool canContinueToUse();
#endif
    MCAPI TargetWhenPushedGoal(class Mob &, std::vector<struct MobDescriptor>, float);

};