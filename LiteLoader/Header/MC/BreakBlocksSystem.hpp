/**
 * @file  BreakBlocksSystem.hpp
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
 * @brief MC class BreakBlocksSystem.
 *
 */
class BreakBlocksSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKBLOCKSSYSTEM
public:
    class BreakBlocksSystem& operator=(class BreakBlocksSystem const &) = delete;
    BreakBlocksSystem(class BreakBlocksSystem const &) = delete;
    BreakBlocksSystem() = delete;
#endif

public:
    virtual ~BreakBlocksSystem();
    virtual void __unk_vfn_1();
    virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BREAKBLOCKSSYSTEM
#endif

};