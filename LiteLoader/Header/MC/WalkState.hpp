// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "PetSleepWithOwnerState.hpp"
#define EXTRA_INCLUDE_PART_WALKSTATE
#include "Extra/WalkStateAPI.hpp"
#undef EXTRA_INCLUDE_PART_WALKSTATE
class WalkState : public PetSleepWithOwnerState {
#include "Extra/WalkStateAPI.hpp"
public:
    virtual ~WalkState();
    virtual void tick();
    virtual void unk_vfn_2();
};