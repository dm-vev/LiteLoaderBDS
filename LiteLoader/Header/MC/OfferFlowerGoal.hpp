// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_OFFERFLOWERGOAL
#include "Extra/OfferFlowerGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_OFFERFLOWERGOAL
class OfferFlowerGoal {
#include "Extra/OfferFlowerGoalAPI.hpp"
public:
    virtual ~OfferFlowerGoal();
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
    MCAPI OfferFlowerGoal(class IronGolem&);
};