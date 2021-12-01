// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_EATCARRIEDITEMGOAL
#include "Extra/EatCarriedItemGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_EATCARRIEDITEMGOAL
class EatCarriedItemGoal {
#include "Extra/EatCarriedItemGoalAPI.hpp"
public:
    virtual ~EatCarriedItemGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();

public:
    MCAPI EatCarriedItemGoal(class Mob&, int);


private:
    MCAPI static int const CHEW_CHANCE;
    MCAPI static int const EATING_TIME;
};