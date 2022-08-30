/**
 * @file  EnderChestBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnderChestBlockActor.
 *
 */
class EnderChestBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERCHESTBLOCKACTOR
public:
    class EnderChestBlockActor& operator=(class EnderChestBlockActor const &) = delete;
    EnderChestBlockActor(class EnderChestBlockActor const &) = delete;
    EnderChestBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDERCHESTBLOCKACTOR
    MCVAPI bool canPullOutItem(class BlockSource &, int, int, class ItemInstance const &) const;
    MCVAPI bool canPushInItem(class BlockSource &, int, int, class ItemInstance const &) const;
    MCVAPI std::string getName() const;
    MCVAPI void playCloseSound(class BlockSource &);
    MCVAPI void playOpenSound(class BlockSource &);
#endif
    MCAPI EnderChestBlockActor(enum BlockActorType, std::string const &, enum BlockActorRendererId, class BlockPos const &);

//private:

private:
MCAPI static int const ITEMS_SIZE;

};