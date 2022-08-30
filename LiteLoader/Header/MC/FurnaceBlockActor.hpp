/**
 * @file  FurnaceBlockActor.hpp
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
 * @brief MC class FurnaceBlockActor.
 *
 */
class FurnaceBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FURNACEBLOCKACTOR
public:
    class FurnaceBlockActor& operator=(class FurnaceBlockActor const &) = delete;
    FurnaceBlockActor(class FurnaceBlockActor const &) = delete;
    FurnaceBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FURNACEBLOCKACTOR
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    MCVAPI bool canPullOutItem(class BlockSource &, int, int, class ItemInstance const &) const;
    MCVAPI bool canPushInItem(class BlockSource &, int, int, class ItemInstance const &) const;
    MCVAPI void fixupOnLoad(class LevelChunk &);
    MCVAPI class Container * getContainer();
    MCVAPI class Container const * getContainer() const;
    MCVAPI int getContainerSize() const;
    MCVAPI class ItemStack const & getItem(int) const;
    MCVAPI int getMaxStackSize() const;
    MCVAPI std::string getName() const;
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    MCVAPI void onCustomTagLoadDone(class BlockSource &);
    MCVAPI void onMove();
    MCVAPI void onNeighborChanged(class BlockSource &, class BlockPos const &);
    MCVAPI bool save(class CompoundTag &) const;
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    MCVAPI void setItem(int, class ItemStack const &);
    MCVAPI void startOpen(class Player &);
    MCVAPI void stopOpen(class Player &);
    MCVAPI void tick(class BlockSource &);
    MCVAPI ~FurnaceBlockActor();
#endif
    MCAPI FurnaceBlockActor(class BlockPos const &);
    MCAPI void checkForAlternativeFuelAchievement(class BlockSource &, class ItemStack const &);
    MCAPI void checkForSmeltEverythingAchievement(class BlockSource &);
    MCAPI int getLitDuration() const;
    MCAPI int getLitTime() const;
    MCAPI int getStoredXP() const;
    MCAPI int getTickCount() const;
    MCAPI bool isEmptiedByHopper(class BlockSource &);
    MCAPI void onFurnaceBlockRemoved(class BlockSource &);
    MCAPI void setLitDuration(int);
    MCAPI void setLitTime(int);
    MCAPI void setStoredXP(int);
    MCAPI void setTickCount(int);
    MCAPI void storeXPRewardForRemovingWithHopper(class ItemStackBase const &, int);
    MCAPI int withdrawStoredXPReward();
MCAPI static int const BURN_INTERVAL;
MCAPI static float const DEFAULT_SMELTING_TIME;
    MCAPI static int getAvailableFuelSetCount(int, class ItemStackBase const &);
    MCAPI static float getBurnDuration(class ItemStackBase const &, float);
    MCAPI static int getXPRewardFromSmeltingItems(class ItemStackBase const &, int);
    MCAPI static bool isItemAllowedInFuelSlot(int, class ItemStackBase const &, int);

//protected:
    MCAPI FurnaceBlockActor(enum BlockActorType, class BlockPos const &, class HashedString const &, enum LevelSoundEvent, enum ContainerType, int, class Block const &, class Block const &);

//private:
    MCAPI void _refreshFurnaceBlockLitState(class BlockSource &);
    MCAPI void burn(class Recipes const &);
    MCAPI bool canBurn(class Recipes const &);
    MCAPI static float _getXPRewardMultiplier(class ItemStackBase const &);
    MCAPI static int _roundXPReward(float);

protected:

private:
MCAPI static std::string const BURN_DURATION_KEY;
MCAPI static std::string const BURN_TIME_KEY;
MCAPI static std::string const COOK_TIME_KEY;
MCAPI static std::string const CUSTOM_NAME_KEY;
MCAPI static std::string const ITEMS_LIST_KEY;
MCAPI static std::string const LAST_FUEL_KEY;
MCAPI static std::string const SLOT_KEY;
MCAPI static std::string const STORED_XP_DEPRECATED_KEY;
MCAPI static std::string const STORED_XP_KEY;

};