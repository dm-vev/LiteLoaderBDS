/**
 * @file  ControlledByLocalInstanceSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ControlledByLocalInstanceSystem.
 *
 */
class ControlledByLocalInstanceSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTROLLEDBYLOCALINSTANCESYSTEM
public:
    class ControlledByLocalInstanceSystem& operator=(class ControlledByLocalInstanceSystem const &) = delete;
    ControlledByLocalInstanceSystem(class ControlledByLocalInstanceSystem const &) = delete;
    ControlledByLocalInstanceSystem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTROLLEDBYLOCALINSTANCESYSTEM
#endif
    MCAPI static struct TickingSystemWithInfo createRecalculateControlledByLocalInstanceSystemClient();
    MCAPI static struct TickingSystemWithInfo createRecalculateControlledByLocalInstanceSystemServer();
    MCAPI static struct TickingSystemWithInfo createWasControlledByLocalInstanceSystem();

};