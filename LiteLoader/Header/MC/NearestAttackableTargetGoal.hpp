/**
 * @file  NearestAttackableTargetGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TargetGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NearestAttackableTargetGoal.
 *
 */
class NearestAttackableTargetGoal : public TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NEARESTATTACKABLETARGETGOAL
public:
    class NearestAttackableTargetGoal& operator=(class NearestAttackableTargetGoal const &) = delete;
    NearestAttackableTargetGoal(class NearestAttackableTargetGoal const &) = delete;
    NearestAttackableTargetGoal() = delete;
#endif

public:
    virtual ~NearestAttackableTargetGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &) const;
    virtual void __unk_vfn_8();
    virtual void __unk_vfn_9();
    virtual struct ActorUniqueID _findTarget(struct MobDescriptor const **);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NEARESTATTACKABLETARGETGOAL
#endif
    MCAPI NearestAttackableTargetGoal(class Mob &);

//protected:
    MCAPI bool _canStartSearching();
    MCAPI std::vector<struct DistanceSortedActor> _getNearbyActors();
    MCAPI bool _isTargetVisible(class Mob const &, float, float) const;

//private:
    MCAPI bool _selectTarget();

protected:

private:

};