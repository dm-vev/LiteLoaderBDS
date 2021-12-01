// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BLOCKVOLUME
#include "Extra/BlockVolumeAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLOCKVOLUME
class BlockVolume {
#include "Extra/BlockVolumeAPI.hpp"

public:
    MCAPI BlockVolume(class buffer_span_mut<class Block const*>, int, int, int, class Block const&, int);
    MCAPI struct BlockVolume::BlockVolumeIter begin() const;
    MCAPI std::unique_ptr<std::vector<short>> computeHeightMap() const;
    MCAPI struct BlockVolume::BlockVolumeIter end() const;
    MCAPI short findHighestNonAirBlock() const;
    MCAPI short getAboveTopSolidBlock(class BlockPos const&, bool, bool, bool) const;
    MCAPI class Pos getDimensions() const;
    MCAPI unsigned int getIndexBounds() const;
    MCAPI unsigned int index(class BlockPos const&) const;
    MCAPI unsigned int index(class Pos const&) const;
    MCAPI unsigned int indexNoBoundsCheck(class BlockPos const&) const;
    MCAPI unsigned int indexNoBoundsCheck(class Pos const&) const;
    MCAPI bool isInBounds(class Pos const&) const;
    MCAPI bool isInBounds(class BlockPos const&) const;
};