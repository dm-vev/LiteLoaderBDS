// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Item.hpp"
#define EXTRA_INCLUDE_PART_COMPOUNDITEM
#include "Extra/CompoundItemAPI.hpp"
#undef EXTRA_INCLUDE_PART_COMPOUNDITEM
class CompoundItem : public Item {
#include "Extra/CompoundItemAPI.hpp"
public:
    virtual ~CompoundItem();
    virtual void tearDown();
    virtual int getMaxUseDuration(class ItemStack const*);
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void executeEvent(class ItemStackBase&, std::string const&, class RenderParams&);
    virtual void unk_vfn_7();
    virtual bool isArmor();
    virtual bool isBlockPlanterItem();
    virtual void unk_vfn_10();
    virtual void unk_vfn_12();
    virtual bool isDyeable();
    virtual bool isDye();
    virtual int /*enum ItemColor*/ getItemColor();
    virtual bool isFertilizer();
    virtual void unk_vfn_18();
    virtual bool isThrowable();
    virtual bool isUseable();
    virtual class FuelItemComponent* getFuel();
    virtual void unk_vfn_35();
    virtual bool canDestroySpecial(class Block const&);
    virtual int getLevelDataForAuxValue(int);
    virtual short getMaxDamage();
    virtual int getAttackDamage();
    virtual bool isGlint(class ItemStackBase const&);
    virtual void unk_vfn_44();
    virtual void unk_vfn_45();
    virtual void unk_vfn_46();
    virtual bool isWearableThroughLootTable(class CompoundTag const*);
    virtual bool canDestroyInCreative();
    virtual bool isDestructive(int);
    virtual bool isLiquidClipItem(int);
    virtual bool shouldInteractionWithBlockBypassLiquid(class Block const&);
    virtual bool requiresInteract();
    virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&);
    virtual int getEnchantSlot();
    virtual int getEnchantValue();
    virtual int getArmorValue();
    virtual void unk_vfn_58();
    virtual bool isValidAuxValue(int);
    virtual void unk_vfn_61();
    virtual void unk_vfn_62();
    virtual void unk_vfn_63();
    virtual void unk_vfn_64();
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&);
    virtual bool hasCustomColor(class CompoundTag const*);
    virtual void unk_vfn_67();
    virtual void clearColor(class CompoundTag*);
    virtual void unk_vfn_69();
    virtual void unk_vfn_70();
    virtual void unk_vfn_71();
    virtual void unk_vfn_72();
    virtual void unk_vfn_74();
    virtual void unk_vfn_75();
    virtual void unk_vfn_77();
    virtual float getDestroySpeed(class ItemStackBase const&, class Block const&);
    virtual void hitActor(class ItemStack&, class Actor&, class Mob&);
    virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&);
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*);
    virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*);
    virtual void unk_vfn_88();
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*);
    virtual unsigned char getMaxStackSize(class ItemDescriptor const&);
    virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool);
    virtual void refreshedInContainer(class ItemStackBase const&, class Level&);
    virtual void fixupCommon(class ItemStackBase&, class Level&);
    virtual void fixupCommon(class ItemStackBase&);
    virtual void unk_vfn_103();
    virtual void unk_vfn_104();
    virtual bool validFishInteraction(int);
    virtual std::string getInteractText(class Player const&);
    virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool);
    virtual struct TextureUVCoordinateSet const& getIcon(class ItemStackBase const&, int, bool);
    virtual int getIconYOffset();
    virtual class Item& setIcon(std::string const&, int);
    virtual bool canBeCharged();
    virtual void playSoundIncrementally(class ItemStack const&, class Mob&);
    virtual void unk_vfn_119();
    virtual std::string getAuxValuesDescription();
    virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&);

public:
    MCAPI CompoundItem(std::string const&, int, class Experiments const&);

    MCAPI static enum CompoundType getCompoundType(class ItemDescriptor const&);
    MCAPI static class RecipeIngredient getIngredientForCompound(enum CompoundType);
    MCAPI static class ItemInstance getItemForCompound(enum CompoundType, int);
    MCAPI static bool isCompoundItem(class ItemStackBase const&);
    MCAPI static void unregisterSpecialCompounds();

private:
    MCAPI void _registerSpecialCompound(class ItemInstance const&, enum CompoundType);
    MCAPI void _registerSpecialCompounds(class Experiments const&);

    MCAPI static std::string _getName(enum CompoundType);
    MCAPI static class std::unordered_map<int, int, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, int>>> mIdToSpecialCompound;
    MCAPI static class std::unordered_map<int, class ItemInstance, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, class ItemInstance>>> mTypeToSpecialCompound;
};