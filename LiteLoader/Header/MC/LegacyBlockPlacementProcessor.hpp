// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_LEGACYBLOCKPLACEMENTPROCESSOR
#include "Extra/LegacyBlockPlacementProcessorAPI.hpp"
#undef EXTRA_INCLUDE_PART_LEGACYBLOCKPLACEMENTPROCESSOR
class LegacyBlockPlacementProcessor {
#include "Extra/LegacyBlockPlacementProcessorAPI.hpp"

public:
    MCAPI LegacyBlockPlacementProcessor(class LegacyStructureSettings const&);
    MCAPI class Block const* applyBlockRules(class BlockSource&, class BlockPos&, class Block const*, class BlockPos const&);
    MCAPI class BlockPos& applyGravity(class BlockSource&, int, class BlockPos&) const;
    MCAPI ~LegacyBlockPlacementProcessor();
};