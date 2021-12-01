// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_LEVELSOUNDEVENTMAP
#include "Extra/LevelSoundEventMapAPI.hpp"
#undef EXTRA_INCLUDE_PART_LEVELSOUNDEVENTMAP
class LevelSoundEventMap {
#include "Extra/LevelSoundEventMapAPI.hpp"

public:
    MCAPI static enum LevelSoundEvent getId(std::string const&);
    MCAPI static std::string const& getName(enum LevelSoundEvent);

private:
    MCAPI static class BidirectionalUnorderedMap<std::string, enum LevelSoundEvent> const map;
};