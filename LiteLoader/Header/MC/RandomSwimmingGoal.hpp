/**
 * @file  RandomSwimmingGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RandomStrollGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomSwimmingGoal.
 *
 */
class RandomSwimmingGoal : public RandomStrollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSWIMMINGGOAL
public:
    class RandomSwimmingGoal& operator=(class RandomSwimmingGoal const &) = delete;
    RandomSwimmingGoal(class RandomSwimmingGoal const &) = delete;
    RandomSwimmingGoal() = delete;
#endif

public:
    virtual ~RandomSwimmingGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &) const;
    virtual void __unk_vfn_8();
    virtual void __unk_vfn_9();
    virtual bool _setWantedPosition();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMSWIMMINGGOAL
#endif
    MCAPI RandomSwimmingGoal(class Mob &, float, int, int, int, bool);

};