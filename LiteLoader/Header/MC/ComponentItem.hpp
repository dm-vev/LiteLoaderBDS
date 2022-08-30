/**
 * @file  ComponentItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "JsonUtil.hpp"
#include "reflection.hpp"
#include "Core.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ComponentItem.
 *
 */
class ComponentItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPONENTITEM
public:
    class ComponentItem& operator=(class ComponentItem const &) = delete;
    ComponentItem(class ComponentItem const &) = delete;
    ComponentItem() = delete;
#endif

public:
    virtual ~ComponentItem();
    virtual bool initServer(class Json::Value &, class SemVersion const &);
    virtual void tearDown();
    virtual class ComponentItem & setDescriptionId(std::string const &);
    virtual std::string const & getDescriptionId() const;
    virtual void __unk_vfn_7();
    virtual bool hasTag(class HashedString const &) const;
    virtual bool hasTag(struct ItemTag const &) const;
    virtual void executeEvent(class ItemStackBase &, std::string const &, class RenderParams &) const;
    virtual void __unk_vfn_11();
    virtual bool isArmor() const;
    virtual bool isBlockPlanterItem() const;
    virtual void __unk_vfn_14();
    virtual void __unk_vfn_16();
    virtual bool isDamageable() const;
    virtual bool isDyeable() const;
    virtual bool isDye() const;
    virtual bool isFood() const;
    virtual bool isThrowable() const;
    virtual bool isUseable() const;
    virtual class ItemComponent * getComponent(class HashedString const &) const;
    virtual class IFoodItemComponent * getFood() const;
    virtual class FuelItemComponent * getFuel() const;
    virtual class Item & setMaxDamage(int);
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    virtual void initializeFromNetwork(class CompoundTag const &);
    virtual std::vector<std::string> validateFromNetwork(class CompoundTag const &);
    virtual enum BlockShape getBlockShape() const;
    virtual bool canBeDepleted() const;
    virtual bool canDestroySpecial(class Block const &) const;
    virtual int getLevelDataForAuxValue(int) const;
    virtual short getMaxDamage() const;
    virtual int getAttackDamage() const;
    virtual bool isGlint(class ItemStackBase const &) const;
    virtual void __unk_vfn_52();
    virtual void __unk_vfn_54();
    virtual bool canDestroyInCreative() const;
    virtual bool isDestructive(int) const;
    virtual bool isLiquidClipItem(int) const;
    virtual bool requiresInteract() const;
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    virtual int getEnchantSlot() const;
    virtual int getEnchantValue() const;
    virtual int getArmorValue() const;
    virtual void __unk_vfn_67();
    virtual bool isValidAuxValue(int) const;
    virtual int getDamageChance(int) const;
    virtual void __unk_vfn_71();
    virtual void __unk_vfn_72();
    virtual void __unk_vfn_73();
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    virtual void __unk_vfn_76();
    virtual void clearColor(class ItemStackBase &) const;
    virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
    virtual void __unk_vfn_80();
    virtual void __unk_vfn_81();
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    virtual void hitActor(class ItemStack &, class Actor &, class Mob &) const;
    virtual void hitBlock(class ItemStack &, class Block const &, class BlockPos const &, class Mob &) const;
    virtual bool mineBlock(class ItemInstance &, class Block const &, int, int, int, class Actor *) const;
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    virtual std::string buildDescriptionName(class ItemStackBase const &) const;
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    virtual std::string buildEffectDescriptionName(class ItemStackBase const &) const;
    virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    virtual class HashedString const & getCooldownType() const;
    virtual int getCooldownTime() const;
    virtual void initClient(class Json::Value &, class SemVersion const &);
    virtual std::string getInteractText(class Player const &) const;
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    virtual bool isEmissive(int) const;
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    virtual class Item & setIcon(std::string const &, int);
    virtual bool canBeCharged() const;
    virtual std::string getAuxValuesDescription() const;
    virtual bool _checkUseOnPermissions(class Actor &, class ItemStackBase &, unsigned char const &, class BlockPos const &) const;
    virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPONENTITEM
    MCVAPI int getVariant(int, int, bool) const;
    MCVAPI bool hasCustomColor(class ItemStackBase const &) const;
    MCVAPI bool isComponentBased() const;
    MCVAPI bool useVariant(int, int, bool) const;
#endif
    MCAPI ComponentItem(std::string const &, short);
    MCAPI void _addCerealItemsToMap();
    MCAPI class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ComponentItem>> _buildItemsFileSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ComponentItem>> &, bool, class SemVersion);
    MCAPI bool _validateClientSchemaAndInitItem(class Json::Value &, class SemVersion const &);
    MCAPI bool _validateServerSchemaAndInitItem(class Json::Value &, class SemVersion const &);
    MCAPI bool checkComponentDataForContentErrors() const;
    MCAPI bool executeTrigger(class ItemStackBase &, class DefinitionTrigger const &, class RenderParams &) const;
    MCAPI std::vector<std::string> const & getAliases() const;
    MCAPI class ArmorItemComponent * getArmor() const;
    MCAPI class DurabilityItemComponent * getDamageable() const;
    MCAPI class DyeableComponent * getDyeable() const;
    MCAPI class KnockbackResistanceItemComponent * getKnockbackResistance() const;
    MCAPI class ProjectileItemComponent * getProjectile() const;
    MCAPI class RecordItemComponent * getRecordComponent() const;
    MCAPI class RepairableItemComponent * getRepairable() const;
    MCAPI class StorageItemComponent * getStorage() const;
    MCAPI class WearableItemComponent * getWearable() const;
    MCAPI bool isStorage() const;
    MCAPI bool parseJsonEvents(class Json::Value const &, class SemVersion const &);
    MCAPI static struct reflection::Schema createItemAbstractCerealSchema(std::string const &);
    MCAPI static void registerItemComponentTypes();
    MCAPI static bool upgradeJson(std::string &, class Core::Path const &, class std::optional<class SemVersion>);

//private:
    MCAPI std::unique_ptr<class CompoundTag> _buildItemPropertiesNetworkTag() const;
    MCAPI void _executeEvent(class ItemStackBase &, std::string const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    MCAPI bool _forceExecuteTrigger(class ItemStackBase &, class DefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    MCAPI void _loadComponentsFromNetworkTag(std::string const &, class CompoundTag const &);
    MCAPI void _loadItemPropertiesNetworkTag(class CompoundTag const &);
    MCAPI void _loadItemTagsNetworkTag(class ListTag const &);

private:
MCAPI static class CerealDocumentUpgrader mDocumentUpgrader;

};