// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "MoveToLiquidGoal.hpp"
#define EXTRA_INCLUDE_PART_MOVETOLAVAGOAL
#include "Extra/MoveToLavaGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOVETOLAVAGOAL
class MoveToLavaGoal : public MoveToLiquidGoal {
#include "Extra/MoveToLavaGoalAPI.hpp"
public:
    virtual ~MoveToLavaGoal();
    virtual void unk_vfn_3();
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_16();

public:
    MCAPI MoveToLavaGoal(class Mob&, float, int, int, int, float);
};