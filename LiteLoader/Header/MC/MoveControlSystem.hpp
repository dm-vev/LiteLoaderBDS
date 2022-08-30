/**
 * @file  MoveControlSystem.hpp
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
 * @brief MC class MoveControlSystem.
 *
 */
class MoveControlSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROLSYSTEM
public:
    class MoveControlSystem& operator=(class MoveControlSystem const &) = delete;
    MoveControlSystem(class MoveControlSystem const &) = delete;
    MoveControlSystem() = delete;
#endif

public:
    virtual ~MoveControlSystem();
    virtual void __unk_vfn_1();
    virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVECONTROLSYSTEM
#endif

};