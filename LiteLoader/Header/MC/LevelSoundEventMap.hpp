/**
 * @file  LevelSoundEventMap.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelSoundEventMap.
 *
 */
class LevelSoundEventMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSOUNDEVENTMAP
public:
    class LevelSoundEventMap& operator=(class LevelSoundEventMap const &) = delete;
    LevelSoundEventMap(class LevelSoundEventMap const &) = delete;
    LevelSoundEventMap() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELSOUNDEVENTMAP
#endif
    MCAPI static enum LevelSoundEvent getId(std::string const &);
    MCAPI static std::string const & getName(enum LevelSoundEvent);
MCAPI static class std::initializer_list<struct std::pair<std::string, enum LevelSoundEvent>> const initializerData;

//private:

private:
MCAPI static class BidirectionalUnorderedMap<std::string, enum LevelSoundEvent> const map;

};