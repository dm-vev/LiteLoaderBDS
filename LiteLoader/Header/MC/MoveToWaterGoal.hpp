// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "MoveToLiquidGoal.hpp"
#define EXTRA_INCLUDE_PART_MOVETOWATERGOAL
#include "Extra/MoveToWaterGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOVETOWATERGOAL
class MoveToWaterGoal : public MoveToLiquidGoal {
#include "Extra/MoveToWaterGoalAPI.hpp"
public:
    virtual ~MoveToWaterGoal();
    virtual void unk_vfn_3();
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_16();

public:
    MCAPI MoveToWaterGoal(class Mob&, float, int, int, int, float);
};