/**
 * @file  HurtOnConditionSystem.hpp
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
 * @brief MC class HurtOnConditionSystem.
 *
 */
class HurtOnConditionSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HURTONCONDITIONSYSTEM
public:
    class HurtOnConditionSystem& operator=(class HurtOnConditionSystem const &) = delete;
    HurtOnConditionSystem(class HurtOnConditionSystem const &) = delete;
    HurtOnConditionSystem() = delete;
#endif

public:
    virtual ~HurtOnConditionSystem();
    virtual void __unk_vfn_1();
    virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HURTONCONDITIONSYSTEM
#endif

};