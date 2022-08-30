/**
 * @file  DimensionBrightnessRamp.hpp
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
 * @brief MC class DimensionBrightnessRamp.
 *
 */
class DimensionBrightnessRamp {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONBRIGHTNESSRAMP
public:
    class DimensionBrightnessRamp& operator=(class DimensionBrightnessRamp const &) = delete;
    DimensionBrightnessRamp(class DimensionBrightnessRamp const &) = delete;
    DimensionBrightnessRamp() = delete;
#endif

public:
    virtual ~DimensionBrightnessRamp();
    virtual void buildBrightnessRamp();
    virtual float getBaseAmbientValue() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIMENSIONBRIGHTNESSRAMP
#endif
    MCAPI float getBrightnessRampValue(int) const;

};