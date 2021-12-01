// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SPAWNFINDER
#include "Extra/SpawnFinderAPI.hpp"
#undef EXTRA_INCLUDE_PART_SPAWNFINDER
namespace SpawnFinder {
#include "Extra/SpawnFinderAPI.hpp"

public:
MCAPI static class std::optional<class BlockPos> findStandupPosition(class BlockPos const&, class BlockSource const&);
MCAPI static bool isStandupPosition(class BlockPos const&, class BlockSource const&);


} // namespace SpawnFinder