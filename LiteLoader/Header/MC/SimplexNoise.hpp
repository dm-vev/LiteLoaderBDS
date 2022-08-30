/**
 * @file  SimplexNoise.hpp
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
 * @brief MC class SimplexNoise.
 *
 */
class SimplexNoise {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLEXNOISE
public:
    class SimplexNoise& operator=(class SimplexNoise const &) = delete;
    SimplexNoise(class SimplexNoise const &) = delete;
    SimplexNoise() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMPLEXNOISE
#endif
    MCAPI SimplexNoise(class IRandom &, bool);
    MCAPI void _add(float *, float, float, int, int, float, float, float) const;
    MCAPI float _getValue(class Vec2 const &) const;
    MCAPI float _getValue(class Vec3 const &) const;

};