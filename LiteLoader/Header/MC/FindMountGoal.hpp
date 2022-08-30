/**
 * @file  FindMountGoal.hpp
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
 * @brief MC class FindMountGoal.
 *
 */
class FindMountGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINDMOUNTGOAL
public:
    class FindMountGoal& operator=(class FindMountGoal const &) = delete;
    FindMountGoal(class FindMountGoal const &) = delete;
    FindMountGoal() = delete;
#endif

public:
    virtual ~FindMountGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void __unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FINDMOUNTGOAL
#endif
    MCAPI FindMountGoal(class Mob &, float, int, bool, bool, float, int);
    MCAPI bool isInMountRange();

};