/**
 * @file  SensingSystem.hpp
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
 * @brief MC class SensingSystem.
 *
 */
class SensingSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SENSINGSYSTEM
public:
    class SensingSystem& operator=(class SensingSystem const &) = delete;
    SensingSystem(class SensingSystem const &) = delete;
    SensingSystem() = delete;
#endif

public:
    virtual ~SensingSystem();
    virtual void __unk_vfn_1();
    virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SENSINGSYSTEM
#endif

};