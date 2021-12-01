// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_WORLDGENCACHE
#include "Extra/WorldGenCacheAPI.hpp"
#undef EXTRA_INCLUDE_PART_WORLDGENCACHE
class WorldGenCache {
#include "Extra/WorldGenCacheAPI.hpp"

public:
    MCAPI WorldGenCache(class ChunkLocalNoiseCache, class SurfaceLevelCache);
    MCAPI class ChunkLocalNoiseCache const& getChunkLocalNoiseCache() const;
    MCAPI class SurfaceLevelCache const& getSurfaceLevelCache() const;
    MCAPI ~WorldGenCache();
};