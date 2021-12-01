// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_MOVETOWARDSRESTRICTIONGOAL
#include "Extra/MoveTowardsRestrictionGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOVETOWARDSRESTRICTIONGOAL
class MoveTowardsRestrictionGoal {
#include "Extra/MoveTowardsRestrictionGoalAPI.hpp"
public:
    virtual ~MoveTowardsRestrictionGoal();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual void unk_vfn_7();
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();

public:
    MCAPI MoveTowardsRestrictionGoal(class Mob&);


protected:
    MCAPI class Mob const& _getMob() const;
    MCAPI bool _randomizeWantedPositionTowardsRestriction(class Vec3 const&);
};