// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BaseMoveToGoal.hpp"
#define EXTRA_INCLUDE_PART_LAYEGGGOAL
#include "Extra/LayEggGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_LAYEGGGOAL
class LayEggGoal : public BaseMoveToGoal {
#include "Extra/LayEggGoalAPI.hpp"
public:
    virtual ~LayEggGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&);
    virtual void _moveToBlock();
    virtual void unk_vfn_16();
    virtual bool findTargetBlock();

public:
    MCAPI LayEggGoal(class Mob&, float, int, int, float, class DefinitionTrigger const&);


protected:
    MCAPI void _layEgg(class BlockPos const&);
};