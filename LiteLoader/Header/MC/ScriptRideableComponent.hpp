// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptActorComponent.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTRIDEABLECOMPONENT
#include "Extra/ScriptRideableComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTRIDEABLECOMPONENT
class ScriptRideableComponent : public ScriptActorComponent {
#include "Extra/ScriptRideableComponentAPI.hpp"
public:
    virtual ~ScriptRideableComponent();

public:
    MCAPI ScriptRideableComponent(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&, std::string const&);
    MCAPI class Scripting::Result<bool> addPassenger(class ScriptActor&) const;
    MCAPI class Scripting::Result<void> ejectPassenger(class ScriptActor&) const;
    MCAPI class Scripting::Result<void> ejectPassengers() const;
    MCAPI class Scripting::Result<int> getControllingSeat() const;
    MCAPI class Scripting::Result<bool> getCrouchingSkipInteract() const;
    MCAPI class Scripting::Result<std::string> getInteractText() const;
    MCAPI class Scripting::Result<bool> getPassengerCanInteract() const;
    MCAPI class Scripting::Result<bool> getPullInEntities() const;
    MCAPI class Scripting::Result<int> getSeatCount() const;
    MCAPI class Scripting::Result<std::vector<struct SeatDescription>> getSeats() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptRideableComponent> bind(struct Scripting::Version);
};