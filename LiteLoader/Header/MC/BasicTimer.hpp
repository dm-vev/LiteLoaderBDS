/**
 * @file  BasicTimer.hpp
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
 * @brief MC class BasicTimer.
 *
 */
class BasicTimer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASICTIMER
public:
    class BasicTimer& operator=(class BasicTimer const &) = delete;
    BasicTimer(class BasicTimer const &) = delete;
    BasicTimer() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASICTIMER
#endif
    MCAPI BasicTimer(double, class std::function<double (void)>);
    MCAPI bool isFinished() const;
    MCAPI void resetTime();
    MCAPI ~BasicTimer();

};