/**
 * @file  TripodCameraComponent.hpp
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
 * @brief MC class TripodCameraComponent.
 *
 */
class TripodCameraComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIPODCAMERACOMPONENT
public:
    class TripodCameraComponent& operator=(class TripodCameraComponent const &) = delete;
    TripodCameraComponent(class TripodCameraComponent const &) = delete;
    TripodCameraComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRIPODCAMERACOMPONENT
#endif
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);

};