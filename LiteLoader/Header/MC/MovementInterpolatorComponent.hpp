/**
 * @file  MovementInterpolatorComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure MovementInterpolatorComponent.
 *
 */
struct MovementInterpolatorComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEMENTINTERPOLATORCOMPONENT
public:
    struct MovementInterpolatorComponent& operator=(struct MovementInterpolatorComponent const &) = delete;
    MovementInterpolatorComponent(struct MovementInterpolatorComponent const &) = delete;
    MovementInterpolatorComponent() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEMENTINTERPOLATORCOMPONENT
#endif
    MCAPI bool isActive() const;
    MCAPI void lerpTo(class Vec3 const &, class Vec2 const &, int);
    MCAPI void lerpToRotation(class Vec2 const &, int);
    MCAPI void reset();
    MCAPI void setHeadYawLerpTarget(float, int);
    MCAPI void start();
    MCAPI void stop();

};