/**
 * @file  KeyFrameLerpMode.hpp
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
 * @brief MC class KeyFrameLerpMode.
 *
 */
class KeyFrameLerpMode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KEYFRAMELERPMODE
public:
    KeyFrameLerpMode(class KeyFrameLerpMode const &) = delete;
    KeyFrameLerpMode() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_KEYFRAMELERPMODE
#endif
    MCAPI struct glm::mat<4, 4, float, 0> const & getPrecomputedCubicCoeffs() const;
    MCAPI class KeyFrameLerpMode & operator=(class KeyFrameLerpMode const &);
    MCAPI void setLerpStyle(enum KeyFrameLerpStyle);

};