/**
 * @file  BlockMovementSlowdownMultiplierSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockMovementSlowdownMultiplierSystem.
 *
 */
class BlockMovementSlowdownMultiplierSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKMOVEMENTSLOWDOWNMULTIPLIERSYSTEM
public:
    class BlockMovementSlowdownMultiplierSystem& operator=(class BlockMovementSlowdownMultiplierSystem const &) = delete;
    BlockMovementSlowdownMultiplierSystem(class BlockMovementSlowdownMultiplierSystem const &) = delete;
    BlockMovementSlowdownMultiplierSystem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKMOVEMENTSLOWDOWNMULTIPLIERSYSTEM
#endif
    MCAPI static void _adjustFallDistance(class StrictEntityContext &, struct BlockMovementSlowdownMultiplierComponent const &, struct FallDistanceComponent &);
    MCAPI static void _immunePlayer(class StrictEntityContext &, struct BlockMovementSlowdownMultiplierComponent &, struct AbilitiesComponent const &);
    MCAPI static void _immuneSlowdown(class StrictEntityContext &, struct BlockMovementSlowdownMultiplierComponent &);
    MCAPI static struct TickingSystemWithInfo createAdjustFallDistanceSystem();
    MCAPI static struct TickingSystemWithInfo createCleanupSystem();
    MCAPI static struct TickingSystemWithInfo createImmunePlayerSystem();
    MCAPI static struct TickingSystemWithInfo createImmuneSpiderSystem();
    MCAPI static struct TickingSystemWithInfo createImmuneWitherBossSystem();

};