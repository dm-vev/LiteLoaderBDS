// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_LOOKCONTROL
#include "Extra/LookControlAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOOKCONTROL
class LookControl {
#include "Extra/LookControlAPI.hpp"
public:
    virtual ~LookControl();
    virtual void unk_vfn_1();
    virtual void tick(class Mob&);

public:
    MCAPI LookControl();
};