/**
 * @file  MovementInterpolatorSystemImpl.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MovementInterpolatorSystemImpl.
 *
 */
class MovementInterpolatorSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEMENTINTERPOLATORSYSTEMIMPL
public:
    class MovementInterpolatorSystemImpl& operator=(class MovementInterpolatorSystemImpl const &) = delete;
    MovementInterpolatorSystemImpl(class MovementInterpolatorSystemImpl const &) = delete;
    MovementInterpolatorSystemImpl() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEMENTINTERPOLATORSYSTEMIMPL
#endif
    MCAPI static class std::tuple<class Vec3, float> _tickPosition(struct MovementInterpolatorComponent &, class Vec3 const &, float);
    MCAPI static class std::tuple<class Vec2, class Vec2> _tickRotation(struct MovementInterpolatorComponent &, class Vec2 const &, class Vec2 const &);

};