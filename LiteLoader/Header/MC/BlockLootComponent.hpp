/**
 * @file  BlockLootComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockLootComponent.
 *
 */
class BlockLootComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLOOTCOMPONENT
public:
    class BlockLootComponent& operator=(class BlockLootComponent const &) = delete;
    BlockLootComponent(class BlockLootComponent const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKLOOTCOMPONENT
#endif
    MCAPI BlockLootComponent();
    MCAPI void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, std::vector<class Item const *> *, float, int, class ItemStack const &) const;

};