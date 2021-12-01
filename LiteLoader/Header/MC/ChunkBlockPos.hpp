// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_CHUNKBLOCKPOS
#include "Extra/ChunkBlockPosAPI.hpp"
#undef EXTRA_INCLUDE_PART_CHUNKBLOCKPOS
class ChunkBlockPos {
#include "Extra/ChunkBlockPosAPI.hpp"

public:
    MCAPI ChunkBlockPos(unsigned char, class ChunkLocalHeight, unsigned char);
    MCAPI ChunkBlockPos(class BlockPos const&, short);
    MCAPI class Pos toPos() const;

    MCAPI static class ChunkBlockPos from2D(unsigned char, unsigned char);
    MCAPI static class ChunkBlockPos fromLegacyIndex(unsigned short);
};