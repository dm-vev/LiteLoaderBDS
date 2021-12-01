// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ActorBlock.hpp"
#define EXTRA_INCLUDE_PART_CHEMISTRYTABLEBLOCK
#include "Extra/ChemistryTableBlockAPI.hpp"
#undef EXTRA_INCLUDE_PART_CHEMISTRYTABLEBLOCK
class ChemistryTableBlock : public ActorBlock {
#include "Extra/ChemistryTableBlockAPI.hpp"
public:
    virtual ~ChemistryTableBlock();
    virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&);
    virtual bool isObstructingChests(class BlockSource&, class BlockPos const&);
    virtual class Vec3 randomlyModifyPosition(class BlockPos const&);
    virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool);
    virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&);
    virtual void onLightningHit(class BlockSource&, class BlockPos const&);
    virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const&(class BlockPos const&)> const&, class BlockPos const&);
    virtual void unk_vfn_17();
    virtual bool isStrippable(class Block const&);
    virtual class Block const& getStrippedBlock(class Block const&);
    virtual class CopperBehavior const* tryGetCopperBehavior();
    virtual void unk_vfn_25();
    virtual void unk_vfn_26();
    virtual void unk_vfn_27();
    virtual bool isWaterBlocking();
    virtual void unk_vfn_29();
    virtual void unk_vfn_30();
    virtual void unk_vfn_31();
    virtual void unk_vfn_32();
    virtual void unk_vfn_33();
    virtual void unk_vfn_34();
    virtual void unk_vfn_35();
    virtual bool isDoubleSlabBlock();
    virtual void unk_vfn_37();
    virtual void unk_vfn_38();
    virtual void unk_vfn_39();
    virtual void unk_vfn_40();
    virtual void unk_vfn_41();
    virtual void unk_vfn_43();
    virtual void unk_vfn_44();
    virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&);
    virtual bool isValidAuxValue(int);
    virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&);
    virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&);
    virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int);
    virtual void unk_vfn_51();
    virtual void unk_vfn_52();
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int);
    virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float);
    virtual bool canBeUsedInCommands(class BaseGameVersion const&);
    virtual void unk_vfn_58();
    virtual bool shouldDispense(class BlockSource&, class Container&);
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char);
    virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float);
    virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool);
    virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&);
    virtual void unk_vfn_65();
    virtual void movedByPiston(class BlockSource&, class BlockPos const&);
    virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&);
    virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&);
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&);
    virtual int /*enum BlockProperty*/ getRedstoneProperty(class BlockSource&, class BlockPos const&);
    virtual void unk_vfn_72();
    virtual bool isFilteredOut(int /*enum BlockRenderLayer*/);
    virtual bool ignoreEntitiesOnPistonMove(class Block const&);
    virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, int /*enum FertilizerType*/);
    virtual bool mayConsumeFertilizer(class BlockSource&);
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&);
    virtual bool mayPick();
    virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char);
    virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&);
    virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&);
    virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*);
    virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&);
    virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&);
    virtual int getResourceCount(class Randomize&, class Block const&, int);
    virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&);
    virtual void unk_vfn_96();
    virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int);
    virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&);
    virtual bool attack(class Player*, class BlockPos const&);
    virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&);
    virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&);
    virtual int getExperienceDrop(class Random&);
    virtual void unk_vfn_114();
    virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&);
    virtual void unk_vfn_116();
    virtual void unk_vfn_117();
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char);
    virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&);
    virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&);
    virtual void unk_vfn_122();
    virtual int getIconYOffset();
    virtual std::string buildDescriptionId(class Block const&);
    virtual bool isAuxValueRelevantForPicking();
    virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&);
    virtual int getColor(class Block const&);
    virtual int getColorAtPos(class BlockSource&, class BlockPos const&);
    virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&);
    virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool);
    virtual int getVariant(class Block const&);
    virtual void unk_vfn_138();
    virtual class Block const& getRenderBlock();
    virtual unsigned char getMappedFace(unsigned char, class Block const&);
    virtual int /*enum Flip*/ getFaceFlip(unsigned char, class Block const&);
    virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&);
    virtual void unk_vfn_154();
    virtual class Block const* tryLegacyUpgrade(unsigned short);
    virtual bool dealsContactDamage(class Actor const&, class Block const&, bool);
    virtual class Block const* tryGetInfested(class Block const&);
    virtual class Block const* tryGetUninfested(class Block const&);
    virtual void onRemove(class BlockSource&, class BlockPos const&);
    virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*);
    virtual void onStandOn(class Actor&, class BlockPos const&);
    virtual void onStepOn(class Actor&, class BlockPos const&);
    virtual void unk_vfn_167();
    virtual void unk_vfn_168();
    virtual void onPlace(class BlockSource&, class BlockPos const&);
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&);
    virtual void unk_vfn_175();
    virtual bool use(class Player&, class BlockPos const&, unsigned char);
    virtual bool canSurvive(class BlockSource&, class BlockPos const&);
    virtual void unk_vfn_181();
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&);
    virtual void unk_vfn_185();
    virtual void unk_vfn_186();
    virtual class ItemInstance getEntityResourceItem(class Randomize&, class BlockActor const&, int);

public:
    MCAPI ChemistryTableBlock(std::string const&, int);

    MCAPI static class ItemInstance getItemForType(enum ChemistryTableType, int);
    MCAPI static bool isUIValidForPlayer(class BlockPos const&, class Player&, float, enum ChemistryTableType);
};