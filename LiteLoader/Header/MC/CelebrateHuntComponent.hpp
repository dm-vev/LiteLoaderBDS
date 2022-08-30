/**
 * @file  CelebrateHuntComponent.hpp
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
 * @brief MC class CelebrateHuntComponent.
 *
 */
class CelebrateHuntComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CELEBRATEHUNTCOMPONENT
public:
    class CelebrateHuntComponent& operator=(class CelebrateHuntComponent const &) = delete;
    CelebrateHuntComponent(class CelebrateHuntComponent const &) = delete;
    CelebrateHuntComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CELEBRATEHUNTCOMPONENT
#endif
    MCAPI enum LevelSoundEvent const getCelebrateSound(class Mob const &) const;
    MCAPI struct Tick const getCelebrateUntil() const;
    MCAPI struct Tick const getNextSoundEventTick() const;
    MCAPI bool isCelebrating() const;
    MCAPI void setNextSoundEventTick(class Mob const &);
    MCAPI void startCelebrating(struct Tick const &);
    MCAPI void stopCelebrating();

};