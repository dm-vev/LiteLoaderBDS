// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "NavigationScriptActorComponent.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTNAVIGATIONGENERICCOMPONENT
#include "Extra/ScriptNavigationGenericComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTNAVIGATIONGENERICCOMPONENT
class ScriptNavigationGenericComponent : public NavigationScriptActorComponent {
#include "Extra/ScriptNavigationGenericComponentAPI.hpp"
public:
    virtual ~ScriptNavigationGenericComponent();

public:
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptNavigationGenericComponent> bind(struct Scripting::Version);
};