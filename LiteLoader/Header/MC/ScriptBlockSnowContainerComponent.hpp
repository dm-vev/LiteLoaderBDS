// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BaseScriptBlockLiquidContainerComponent.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTBLOCKSNOWCONTAINERCOMPONENT
#include "Extra/ScriptBlockSnowContainerComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTBLOCKSNOWCONTAINERCOMPONENT
class ScriptBlockSnowContainerComponent : public BaseScriptBlockLiquidContainerComponent {
#include "Extra/ScriptBlockSnowContainerComponentAPI.hpp"
public:
    virtual ~ScriptBlockSnowContainerComponent();

public:
    MCAPI ScriptBlockSnowContainerComponent(class ScriptBlockSnowContainerComponent&&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptBlockSnowContainerComponent> bind(struct Scripting::Version);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptBlockSnowContainerComponent> tryCreate(class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&);
};