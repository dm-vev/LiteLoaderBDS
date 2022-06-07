// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BuoyancyComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUOYANCYCOMPONENT
public:
    class BuoyancyComponent& operator=(class BuoyancyComponent const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BUOYANCYCOMPONENT
#endif
    MCAPI BuoyancyComponent(class BuoyancyComponent const &);
    MCAPI BuoyancyComponent();
    MCAPI bool canFloat(class Actor const &) const;
    MCAPI float getBaseBuoyancy() const;
    MCAPI float getBigWaveProbability() const;
    MCAPI float getBigWaveSpeedMultiplier() const;
    MCAPI double getTimer() const;
    MCAPI void increaseTimer(float);
    MCAPI void loadData(std::string const &, class SemVersion const &);
    MCAPI bool needToResurface(class Actor const &) const;
    MCAPI class BuoyancyComponent & operator=(class BuoyancyComponent &&);
    MCAPI bool shouldApplyGravity() const;
    MCAPI bool shouldSimulateWaves() const;



};