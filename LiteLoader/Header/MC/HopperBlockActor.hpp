/**
 * @file  HopperBlockActor.hpp
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
 * @brief MC class HopperBlockActor.
 *
 */
class HopperBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPPERBLOCKACTOR
public:
    class HopperBlockActor& operator=(class HopperBlockActor const &) = delete;
    HopperBlockActor(class HopperBlockActor const &) = delete;
    HopperBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HOPPERBLOCKACTOR
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    MCVAPI class Container * getContainer();
    MCVAPI class Container const * getContainer() const;
    MCVAPI int getContainerSize() const;
    MCVAPI class ItemStack const & getItem(int) const;
    MCVAPI int getMaxStackSize() const;
    MCVAPI std::string getName() const;
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    MCVAPI void onMove();
    MCVAPI void onNeighborChanged(class BlockSource &, class BlockPos const &);
    MCVAPI bool save(class CompoundTag &) const;
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    MCVAPI void setContainerChanged(int);
    MCVAPI void setItem(int, class ItemStack const &);
    MCVAPI void startOpen(class Player &);
    MCVAPI void stopOpen(class Player &);
    MCVAPI void tick(class BlockSource &);
#endif
    MCAPI HopperBlockActor(class BlockPos const &);
    MCAPI void checkForSmeltEverythingAchievement(class BlockSource &);
    MCAPI class FurnaceBlockActor * getAttachedFurnace(class BlockSource &);
    MCAPI bool isAttachedToChestAndFurnace(class BlockSource &);
    MCAPI void updateCooldownAfterMove(struct Tick const &, int);

//private:
    MCAPI void _ensureTickingOrder(class BlockSource &, int);
    MCAPI void _tick(class BlockSource &, int);
    MCAPI bool isAttachedToContainerType(class BlockSource &, enum ContainerType);
    MCAPI bool isSourceOfContainerType(class BlockSource &, enum ContainerType);

private:

};