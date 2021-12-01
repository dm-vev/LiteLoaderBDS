// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "GenericMoveControl.hpp"
#define EXTRA_INCLUDE_PART_AMPHIBIOUSMOVECONTROL
#include "Extra/AmphibiousMoveControlAPI.hpp"
#undef EXTRA_INCLUDE_PART_AMPHIBIOUSMOVECONTROL
class AmphibiousMoveControl : public GenericMoveControl {
#include "Extra/AmphibiousMoveControlAPI.hpp"
public:
    virtual ~AmphibiousMoveControl();
    virtual void tick(class MoveControlComponent&, class Mob&);

public:
    MCAPI AmphibiousMoveControl();
};