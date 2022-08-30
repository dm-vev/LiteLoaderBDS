/**
 * @file  DamageSensorComponent.hpp
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
 * @brief MC class DamageSensorComponent.
 *
 */
class DamageSensorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGESENSORCOMPONENT
public:
    class DamageSensorComponent& operator=(class DamageSensorComponent const &) = delete;
    DamageSensorComponent(class DamageSensorComponent const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DAMAGESENSORCOMPONENT
#endif
    MCAPI DamageSensorComponent();
    MCAPI enum ActorDamageCause getCause() const;
    MCAPI float getDamageModifier();
    MCAPI float getDamageMultipler();
    MCAPI bool isFatal() const;
    MCAPI class DamageSensorComponent & operator=(class DamageSensorComponent &&);
    MCAPI bool recordDamage(class Actor &, class ActorDamageSource const &, int, bool, class VariantParameterList, bool);
    MCAPI bool recordDamage(class Actor &, class Actor *, enum ActorDamageCause, int, bool, class BlockPos);
    MCAPI bool recordDamage(class Actor &, class Actor *, enum ActorDamageCause, int, bool, class VariantParameterList);

//private:
    MCAPI bool _recordDamage(class Actor &, class Actor *, enum ActorDamageCause const &, class Actor *, int, bool, class VariantParameterList, bool);

private:

};