/**
 * @file  OwnerHurtByTargetGoal.hpp
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
 * @brief MC class OwnerHurtByTargetGoal.
 *
 */
class OwnerHurtByTargetGoal : public TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OWNERHURTBYTARGETGOAL
public:
    class OwnerHurtByTargetGoal& operator=(class OwnerHurtByTargetGoal const &) = delete;
    OwnerHurtByTargetGoal(class OwnerHurtByTargetGoal const &) = delete;
    OwnerHurtByTargetGoal() = delete;
#endif

public:
    virtual ~OwnerHurtByTargetGoal();
    virtual bool canUse();
    virtual void start();
    virtual void __unk_vfn_8();
    virtual void __unk_vfn_9();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OWNERHURTBYTARGETGOAL
#endif
    MCAPI OwnerHurtByTargetGoal(class Mob &, std::vector<struct MobDescriptor> const &);

};