/**
 * @file  MoveTowardsRestrictionGoal.hpp
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
 * @brief MC class MoveTowardsRestrictionGoal.
 *
 */
class MoveTowardsRestrictionGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWARDSRESTRICTIONGOAL
public:
    class MoveTowardsRestrictionGoal& operator=(class MoveTowardsRestrictionGoal const &) = delete;
    MoveTowardsRestrictionGoal(class MoveTowardsRestrictionGoal const &) = delete;
    MoveTowardsRestrictionGoal() = delete;
#endif

public:
    virtual ~MoveTowardsRestrictionGoal();
    virtual void __unk_vfn_1() = 0;
    virtual bool canContinueToUse();
    virtual void __unk_vfn_3();
    virtual void start();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVETOWARDSRESTRICTIONGOAL
#endif
    MCAPI MoveTowardsRestrictionGoal(class Mob &);

//protected:
    MCAPI class Mob const & _getMob() const;
    MCAPI bool _randomizeWantedPositionTowardsRestriction(class Vec3 const &);

protected:

};