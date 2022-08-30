/**
 * @file  ResetEventObj.hpp
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
 * @brief MC class ResetEventObj.
 *
 */
class ResetEventObj {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESETEVENTOBJ
public:
    class ResetEventObj& operator=(class ResetEventObj const &) = delete;
    ResetEventObj(class ResetEventObj const &) = delete;
    ResetEventObj() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESETEVENTOBJ
#endif
    MCAPI ResetEventObj(bool, bool);
    MCAPI void set();
    MCAPI void wait();
    MCAPI bool wait_until(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    MCAPI ~ResetEventObj();

};