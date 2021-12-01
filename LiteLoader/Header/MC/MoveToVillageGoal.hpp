// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BaseMoveToGoal.hpp"
#define EXTRA_INCLUDE_PART_MOVETOVILLAGEGOAL
#include "Extra/MoveToVillageGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOVETOVILLAGEGOAL
class MoveToVillageGoal : public BaseMoveToGoal {
#include "Extra/MoveToVillageGoalAPI.hpp"
public:
    virtual ~MoveToVillageGoal();
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
    virtual class BlockPos _selectRandomPosInVillage();

public:
    MCAPI MoveToVillageGoal(class Mob&, float, float, float, int);


protected:
    MCAPI class std::shared_ptr<class Village> _tryGetCurrentVillage();
};