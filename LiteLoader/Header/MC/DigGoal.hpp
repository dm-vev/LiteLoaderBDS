/**
 * @file  DigGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DigGoal.
 *
 */
class DigGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIGGOAL
public:
    class DigGoal& operator=(class DigGoal const &) = delete;
    DigGoal(class DigGoal const &) = delete;
    DigGoal() = delete;
#endif

public:
    virtual ~DigGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void __unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIGGOAL
#endif
    MCAPI DigGoal(class Mob &);

};