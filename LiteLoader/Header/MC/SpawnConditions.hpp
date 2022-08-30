/**
 * @file  SpawnConditions.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SpawnConditions.
 *
 */
class SpawnConditions {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNCONDITIONS
public:
    class SpawnConditions& operator=(class SpawnConditions const &) = delete;
    SpawnConditions(class SpawnConditions const &) = delete;
    SpawnConditions() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPAWNCONDITIONS
#endif
    MCAPI static class SpawnConditions createSpawnConditionsWithSpawnRules(class SpawnConditions const &, class MobSpawnRules const &);

};