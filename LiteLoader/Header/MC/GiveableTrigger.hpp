// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_GIVEABLETRIGGER
#include "Extra/GiveableTriggerAPI.hpp"
#undef EXTRA_INCLUDE_PART_GIVEABLETRIGGER
class GiveableTrigger {
#include "Extra/GiveableTriggerAPI.hpp"

public:
    MCAPI GiveableTrigger(struct GiveableTrigger const&);
    MCAPI void addItem(class ItemDescriptor const&);
    MCAPI ~GiveableTrigger();
};