/**
 * @file  ChargeAttackGoal.hpp
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
 * @brief MC class ChargeAttackGoal.
 *
 */
class ChargeAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHARGEATTACKGOAL
public:
    class ChargeAttackGoal& operator=(class ChargeAttackGoal const &) = delete;
    ChargeAttackGoal(class ChargeAttackGoal const &) = delete;
    ChargeAttackGoal() = delete;
#endif

public:
    virtual ~ChargeAttackGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void __unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHARGEATTACKGOAL
#endif
    MCAPI ChargeAttackGoal(class Mob &);

};