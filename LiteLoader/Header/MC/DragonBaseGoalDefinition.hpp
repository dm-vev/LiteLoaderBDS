/**
 * @file  DragonBaseGoalDefinition.hpp
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
 * @brief MC class DragonBaseGoalDefinition.
 *
 */
class DragonBaseGoalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONBASEGOALDEFINITION
public:
    class DragonBaseGoalDefinition& operator=(class DragonBaseGoalDefinition const &) = delete;
    DragonBaseGoalDefinition(class DragonBaseGoalDefinition const &) = delete;
#endif

public:
    virtual ~DragonBaseGoalDefinition();
    virtual bool validateMobType(class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DRAGONBASEGOALDEFINITION
#endif
    MCAPI DragonBaseGoalDefinition();
    MCAPI void initialize(class EntityContext &, class DragonBaseGoal &);

};