// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_RUNAROUNDLIKECRAZYGOAL
#include "Extra/RunAroundLikeCrazyGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_RUNAROUNDLIKECRAZYGOAL
class RunAroundLikeCrazyGoal {
#include "Extra/RunAroundLikeCrazyGoalAPI.hpp"
public:
    virtual ~RunAroundLikeCrazyGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();

public:
    MCAPI RunAroundLikeCrazyGoal(class Mob&, float);
};