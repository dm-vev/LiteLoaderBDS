/**
 * @file  MoveToLandGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveToLandGoal.
 *
 */
class MoveToLandGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOLANDGOAL
public:
    class MoveToLandGoal& operator=(class MoveToLandGoal const &) = delete;
    MoveToLandGoal(class MoveToLandGoal const &) = delete;
    MoveToLandGoal() = delete;
#endif

public:
    virtual ~MoveToLandGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void __unk_vfn_3();
    virtual void appendDebugInfo(std::string &) const;
    virtual void __unk_vfn_8();
    virtual void __unk_vfn_9();
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    virtual void _moveToBlock();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVETOLANDGOAL
#endif
    MCAPI MoveToLandGoal(class Mob &, float, int, int, int, float);

};