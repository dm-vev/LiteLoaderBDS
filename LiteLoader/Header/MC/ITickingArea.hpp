/**
 * @file  ITickingArea.hpp
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
 * @brief MC class ITickingArea.
 *
 */
class ITickingArea {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITICKINGAREA
public:
    class ITickingArea& operator=(class ITickingArea const &) = delete;
    ITickingArea(class ITickingArea const &) = delete;
    ITickingArea() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITICKINGAREA
#endif
    MCAPI class CompoundTag serialize() const;

};