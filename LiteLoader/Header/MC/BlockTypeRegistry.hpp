// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BLOCKTYPEREGISTRY
#include "Extra/BlockTypeRegistryAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLOCKTYPEREGISTRY
class BlockTypeRegistry {
#include "Extra/BlockTypeRegistryAPI.hpp"

public:
    MCAPI static void forEachBlock(class std::function<bool(class BlockLegacy const&)>);
    MCAPI static class OwnerPtrT<struct EntityRegistryRefTraits>& getEntityRegistry();
    MCAPI static void initBlockEntities();
    MCAPI static void initEntityRegistry();
    MCAPI static class WeakPtr<class BlockLegacy> lookupByName(std::string const&, bool);
    MCAPI static void prepareBlocks(unsigned int);
    MCAPI static void unregisterBlocks();

private:
    MCAPI static class OwnerPtrT<struct EntityRegistryRefTraits> mEntities;
};