// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptObject.hpp"
#define EXTRA_INCLUDE_PART_BASESCRIPTBLOCKLIQUIDCONTAINERCOMPONENT
#include "Extra/BaseScriptBlockLiquidContainerComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_BASESCRIPTBLOCKLIQUIDCONTAINERCOMPONENT
class BaseScriptBlockLiquidContainerComponent : public ScriptObject {
#include "Extra/BaseScriptBlockLiquidContainerComponentAPI.hpp"
public:
    virtual ~BaseScriptBlockLiquidContainerComponent();
    virtual class Scripting::Result<void> setFillLevel(int);

public:
    MCAPI BaseScriptBlockLiquidContainerComponent(class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&, enum CauldronLiquidType);
    MCAPI class Scripting::Result<int> getFillLevel();


protected:
    MCAPI class CauldronBlock const* _tryGetCauldronBlock();
    MCAPI class CauldronBlockActor* _tryGetCauldronBlockActor();

    MCAPI static enum GameTestFluidType _getActualCauldronLiquidType(class BlockSource&, class BlockPos);
};