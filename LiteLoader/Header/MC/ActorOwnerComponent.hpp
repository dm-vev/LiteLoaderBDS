/**
 * @file  ActorOwnerComponent.hpp
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
 * @brief MC class ActorOwnerComponent.
 *
 */
class ActorOwnerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTOROWNERCOMPONENT
public:
    class ActorOwnerComponent& operator=(class ActorOwnerComponent const &) = delete;
    ActorOwnerComponent(class ActorOwnerComponent const &) = delete;
    ActorOwnerComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTOROWNERCOMPONENT
#endif
    MCAPI ActorOwnerComponent(std::unique_ptr<class Actor>);
    MCAPI ActorOwnerComponent(class ActorOwnerComponent &&);
    MCAPI class Actor & getActor() const;
    MCAPI class Actor & getActor();
    MCAPI class ActorOwnerComponent & operator=(class ActorOwnerComponent &&);
    MCAPI ~ActorOwnerComponent();

};