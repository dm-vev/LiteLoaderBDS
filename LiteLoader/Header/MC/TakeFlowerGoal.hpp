/**
 * @file  TakeFlowerGoal.hpp
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
 * @brief MC class TakeFlowerGoal.
 *
 */
class TakeFlowerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAKEFLOWERGOAL
public:
    class TakeFlowerGoal& operator=(class TakeFlowerGoal const &) = delete;
    TakeFlowerGoal(class TakeFlowerGoal const &) = delete;
    TakeFlowerGoal() = delete;
#endif

public:
    virtual ~TakeFlowerGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void __unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TAKEFLOWERGOAL
#endif
    MCAPI TakeFlowerGoal(class Mob &);

};