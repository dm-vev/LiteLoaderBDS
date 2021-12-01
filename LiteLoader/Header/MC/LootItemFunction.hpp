// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_LOOTITEMFUNCTION
#include "Extra/LootItemFunctionAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOOTITEMFUNCTION
class LootItemFunction {
#include "Extra/LootItemFunctionAPI.hpp"
public:
    virtual ~LootItemFunction();
    virtual int apply(class ItemInstance&, class Random&, struct Trade const&, class LootTableContext&);
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);
    virtual int apply(class ItemStack&, class Random&, struct Trade const&, class LootTableContext&);
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);

public:
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value);
};