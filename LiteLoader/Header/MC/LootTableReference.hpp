// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_LOOTTABLEREFERENCE
#include "Extra/LootTableReferenceAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOOTTABLEREFERENCE
class LootTableReference {
#include "Extra/LootTableReferenceAPI.hpp"
public:
    virtual bool _createItem(std::vector<class ItemStack>&, class Random&, class LootTableContext&);
    virtual ~LootTableReference();
};