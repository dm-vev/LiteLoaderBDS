/**
 * @file  PanicGoal.hpp
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
 * @brief MC class PanicGoal.
 *
 */
class PanicGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PANICGOAL
public:
    class PanicGoal& operator=(class PanicGoal const &) = delete;
    PanicGoal(class PanicGoal const &) = delete;
    PanicGoal() = delete;
#endif

public:
    virtual ~PanicGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void __unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PANICGOAL
#endif
    MCAPI PanicGoal(class Mob &, float, bool, enum LevelSoundEvent, struct FloatRange, bool, bool, std::vector<enum ActorDamageCause>);

//private:
    MCAPI bool _tryGeneratePathEnd();

private:

};