// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "MeleeAttackGoal.hpp"
#define EXTRA_INCLUDE_PART_STOMPATTACKGOAL
#include "Extra/StompAttackGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_STOMPATTACKGOAL
class StompAttackGoal : public MeleeAttackGoal {
#include "Extra/StompAttackGoalAPI.hpp"
public:
    virtual ~StompAttackGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_12();
    virtual void unk_vfn_13();
    virtual void unk_vfn_14();
    virtual void unk_vfn_15();
    virtual void unk_vfn_16();
    virtual void unk_vfn_17();
    virtual void unk_vfn_18();
};