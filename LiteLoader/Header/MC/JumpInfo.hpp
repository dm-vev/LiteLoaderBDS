/**
 * @file  JumpInfo.hpp
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
 * @brief MC class JumpInfo.
 *
 */
class JumpInfo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUMPINFO
public:
    class JumpInfo& operator=(class JumpInfo const &) = delete;
    JumpInfo(class JumpInfo const &) = delete;
    JumpInfo() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUMPINFO
#endif
    MCAPI JumpInfo(float, float, int, int);
    MCAPI int getAnimDuration() const;
    MCAPI float getDistanceScale() const;
    MCAPI float getHeight() const;
    MCAPI int getJumpDelay() const;

};