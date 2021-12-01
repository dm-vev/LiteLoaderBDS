// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "MovementScriptActorComponent.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTMOVEMENTSWAYCOMPONENT
#include "Extra/ScriptMovementSwayComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTMOVEMENTSWAYCOMPONENT
class ScriptMovementSwayComponent : public MovementScriptActorComponent {
#include "Extra/ScriptMovementSwayComponentAPI.hpp"
public:
    virtual ~ScriptMovementSwayComponent();

public:
    MCAPI class Scripting::Result<float> getSwayAmplitude() const;
    MCAPI class Scripting::Result<float> getSwayFrequency() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptMovementSwayComponent> bind(struct Scripting::Version);
};