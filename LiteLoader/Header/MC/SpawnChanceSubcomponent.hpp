/**
 * @file  SpawnChanceSubcomponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpawnChanceSubcomponent.
 *
 */
class SpawnChanceSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNCHANCESUBCOMPONENT
public:
    class SpawnChanceSubcomponent& operator=(class SpawnChanceSubcomponent const &) = delete;
    SpawnChanceSubcomponent(class SpawnChanceSubcomponent const &) = delete;
#endif

public:
    virtual ~SpawnChanceSubcomponent();
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    virtual void writetoJSON(class Json::Value &) const;
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPAWNCHANCESUBCOMPONENT
#endif
    MCAPI SpawnChanceSubcomponent();

};