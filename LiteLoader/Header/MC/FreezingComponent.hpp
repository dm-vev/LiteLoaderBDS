/**
 * @file  FreezingComponent.hpp
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
 * @brief MC class FreezingComponent.
 *
 */
class FreezingComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FREEZINGCOMPONENT
public:
    class FreezingComponent& operator=(class FreezingComponent const &) = delete;
    FreezingComponent(class FreezingComponent const &) = delete;
    FreezingComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FREEZINGCOMPONENT
#endif
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    MCAPI void decreaseFreezingEffect();
    MCAPI float getFreezingEffectStrength() const;
    MCAPI void increaseFreezingEffect();
    MCAPI bool isFullyFrozen() const;
    MCAPI bool isFullyUnfrozen() const;
    MCAPI bool operator==(class FreezingComponent const &) const;
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI void resetFreezingEffect();

};