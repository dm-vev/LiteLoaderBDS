/**
 * @file  SpawnData.hpp
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
 * @brief MC class SpawnData.
 *
 */
class SpawnData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNDATA
public:
    class SpawnData& operator=(class SpawnData const &) = delete;
    SpawnData() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPAWNDATA
#endif
    MCAPI SpawnData(class CompoundTag const &);
    MCAPI SpawnData(class SpawnData const &);
    MCAPI std::unique_ptr<class CompoundTag> save();

};