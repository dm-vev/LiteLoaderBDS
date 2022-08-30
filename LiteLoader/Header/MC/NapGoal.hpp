/**
 * @file  NapGoal.hpp
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
 * @brief MC class NapGoal.
 *
 */
class NapGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAPGOAL
public:
    class NapGoal& operator=(class NapGoal const &) = delete;
    NapGoal(class NapGoal const &) = delete;
    NapGoal() = delete;
#endif

public:
    virtual ~NapGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void __unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void __unk_vfn_6();
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NAPGOAL
#endif
    MCAPI NapGoal(class Mob &, float, float, float, float, class ActorFilterGroup const &, class ActorFilterGroup const &);

//private:
    MCAPI bool _canSleep(struct Tick const &) const;
    MCAPI bool _detectsMobs() const;
    MCAPI void _setCooldown();

private:
MCAPI static float const MOB_DETECT_TIME;

};