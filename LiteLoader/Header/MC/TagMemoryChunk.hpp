// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_TAGMEMORYCHUNK
#include "Extra/TagMemoryChunkAPI.hpp"
#undef EXTRA_INCLUDE_PART_TAGMEMORYCHUNK
class TagMemoryChunk {
#include "Extra/TagMemoryChunkAPI.hpp"

public:
    MCAPI bool operator!=(struct TagMemoryChunk const&);
    MCAPI struct TagMemoryChunk copy() const;
    MCAPI ~TagMemoryChunk();
};