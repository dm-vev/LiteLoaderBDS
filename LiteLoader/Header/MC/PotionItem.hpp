// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Item.hpp"
#define EXTRA_INCLUDE_PART_POTIONITEM
#include "Extra/PotionItemAPI.hpp"
#undef EXTRA_INCLUDE_PART_POTIONITEM
class PotionItem : public Item {
#include "Extra/PotionItemAPI.hpp"
public:
    virtual ~PotionItem();
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
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool);
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
    virtual class ItemStack& use(class ItemStack&, class Player&);
    virtual int /*enum ItemUseMethod*/ useTimeDepleted(class ItemStack&, class Level*, class Player*);
    virtual float getDestroySpeed(class ItemStackBase const&, class Block const&);
    virtual void hitActor(class ItemStack&, class Actor&, class Mob&);
    virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&);
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*);
    virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*);
    virtual void unk_vfn_88();
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*);
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&);
    virtual unsigned char getMaxStackSize(class ItemDescriptor const&);
    virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool);
    virtual void refreshedInContainer(class ItemStackBase const&, class Level&);
    virtual void fixupCommon(class ItemStackBase&, class Level&);
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
    virtual void unk_vfn_126();

public:
    MCAPI PotionItem(std::string const&, int);

    MCAPI static void applyEffect(class ThrownPotion*, class ItemStack const&);
    MCAPI static bool isDestructivePotion(enum Potion::PotionVariant);
};