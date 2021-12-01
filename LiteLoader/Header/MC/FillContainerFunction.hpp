// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "LootItemFunction.hpp"
#define EXTRA_INCLUDE_PART_FILLCONTAINERFUNCTION
#include "Extra/FillContainerFunctionAPI.hpp"
#undef EXTRA_INCLUDE_PART_FILLCONTAINERFUNCTION
class FillContainerFunction : public LootItemFunction {
#include "Extra/FillContainerFunctionAPI.hpp"
public:
    virtual ~FillContainerFunction();
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);
};