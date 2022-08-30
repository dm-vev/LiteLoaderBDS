/**
 * @file  RaidBossSystem.hpp
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
 * @brief MC class RaidBossSystem.
 *
 */
class RaidBossSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAIDBOSSSYSTEM
public:
    class RaidBossSystem& operator=(class RaidBossSystem const &) = delete;
    RaidBossSystem(class RaidBossSystem const &) = delete;
    RaidBossSystem() = delete;
#endif

public:
    virtual ~RaidBossSystem();
    virtual void __unk_vfn_1();
    virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAIDBOSSSYSTEM
#endif

};