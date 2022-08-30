/**
 * @file  InsidePowderSnowBlockSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InsidePowderSnowBlockSystem.
 *
 */
class InsidePowderSnowBlockSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEPOWDERSNOWBLOCKSYSTEM
public:
    class InsidePowderSnowBlockSystem& operator=(class InsidePowderSnowBlockSystem const &) = delete;
    InsidePowderSnowBlockSystem(class InsidePowderSnowBlockSystem const &) = delete;
    InsidePowderSnowBlockSystem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INSIDEPOWDERSNOWBLOCKSYSTEM
#endif
    MCAPI static struct TickingSystemWithInfo createMovementSlowdownSystem();
    MCAPI static struct TickingSystemWithInfo createServerSideClearFireSystem();
    MCAPI static struct TickingSystemWithInfo createServerSideFreezingSystem();

};