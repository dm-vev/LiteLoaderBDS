// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "LootItemFunction.hpp"
#define EXTRA_INCLUDE_PART_SPECIFICENCHANTFUNCTION
#include "Extra/SpecificEnchantFunctionAPI.hpp"
#undef EXTRA_INCLUDE_PART_SPECIFICENCHANTFUNCTION
class SpecificEnchantFunction : public LootItemFunction {
#include "Extra/SpecificEnchantFunctionAPI.hpp"
public:
    virtual ~SpecificEnchantFunction();
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);


private:
    MCAPI void _applyInner(class ItemStackBase&, class Random&, class LootTableContext&, bool);
};