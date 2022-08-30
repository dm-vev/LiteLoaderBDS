/**
 * @file  LegacyFlowerFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyFlowerFeature.
 *
 */
class LegacyFlowerFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYFLOWERFEATURE
public:
    class LegacyFlowerFeature& operator=(class LegacyFlowerFeature const &) = delete;
    LegacyFlowerFeature(class LegacyFlowerFeature const &) = delete;
    LegacyFlowerFeature() = delete;
#endif

public:
    virtual ~LegacyFlowerFeature();
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEGACYFLOWERFEATURE
#endif
    MCAPI LegacyFlowerFeature(enum FlowerPlacementType);

};