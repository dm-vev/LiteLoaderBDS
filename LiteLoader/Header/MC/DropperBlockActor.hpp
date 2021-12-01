// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_DROPPERBLOCKACTOR
#include "Extra/DropperBlockActorAPI.hpp"
#undef EXTRA_INCLUDE_PART_DROPPERBLOCKACTOR
class DropperBlockActor {
#include "Extra/DropperBlockActorAPI.hpp"

public:
    MCAPI bool pushOutItems(class BlockSource&);


private:
    MCAPI bool _addItem(class BlockSource&, class Container&, class ItemStack&, int);
    MCAPI class Container* _getContainerAt(class BlockSource&, class Vec3 const&);
};