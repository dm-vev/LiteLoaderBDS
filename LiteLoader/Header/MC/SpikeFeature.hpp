/**
 * @file  SpikeFeature.hpp
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
 * @brief MC class SpikeFeature.
 *
 */
class SpikeFeature : public Feature {

#define AFTER_EXTRA
// Add Member There
public:
class EndSpike {
public:
    EndSpike() = delete;
    EndSpike(EndSpike const&) = delete;
    EndSpike(EndSpike const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPIKEFEATURE
public:
    class SpikeFeature& operator=(class SpikeFeature const &) = delete;
    SpikeFeature(class SpikeFeature const &) = delete;
    SpikeFeature() = delete;
#endif

public:
    virtual ~SpikeFeature();
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPIKEFEATURE
#endif
    MCAPI SpikeFeature(class SpikeFeature::EndSpike const &);
    MCAPI bool placeManually(class BlockSource &, class BlockPos const &, class Random &, class Actor *);
    MCAPI void postProcessMobsAt(class BlockSource &, class BlockPos const &, class Random &) const;
    MCAPI void setCrystalBeamTarget(class BlockPos const &);
    MCAPI void setCrystalInvulnerable(bool);

};