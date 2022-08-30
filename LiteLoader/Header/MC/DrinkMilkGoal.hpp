/**
 * @file  DrinkMilkGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DrinkMilkGoal.
 *
 */
class DrinkMilkGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRINKMILKGOAL
public:
    class DrinkMilkGoal& operator=(class DrinkMilkGoal const &) = delete;
    DrinkMilkGoal(class DrinkMilkGoal const &) = delete;
    DrinkMilkGoal() = delete;
#endif

public:
    virtual ~DrinkMilkGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void __unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DRINKMILKGOAL
#endif
    MCAPI DrinkMilkGoal(class Mob &);

};