// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ACTOR
#include "Extra/ActorAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTOR
class Actor {
#include "Extra/ActorAPI.hpp"
public:
    virtual bool hasComponent(class HashedString const&);
    virtual class Mob* getLastHurtByMob();
    virtual void setLastHurtByMob(class Mob*);
    virtual class Player* getLastHurtByPlayer();
    virtual void setLastHurtByPlayer(class Player*);
    virtual class Mob* getLastHurtMob();
    virtual void setLastHurtMob(class Actor*);
    virtual void outOfWorld();
    virtual void reloadHardcoded(int /*enum Actor::InitializationMethod*/, class VariantParameterList const&);
    virtual void reloadHardcodedClient(int /*enum Actor::InitializationMethod*/, class VariantParameterList const&);
    virtual void initializeComponents(int /*enum Actor::InitializationMethod*/, class VariantParameterList const&);
    virtual void reloadComponents(int /*enum Actor::InitializationMethod*/, class VariantParameterList const&);
    virtual void _serverInitItemStackIds();
    virtual void _doInitialMove();
    virtual ~Actor();
    
    virtual void reset();
    virtual int getOnDeathExperience();
    virtual int /*enum ActorType*/ getOwnerEntityType();
    virtual void remove();
    virtual void setPos(class Vec3 const&);
    virtual bool isRuntimePredictedMovementEnabled();
    virtual struct PredictedMovementValues const& getPredictedMovementValues();
    virtual void unk_vfn_22();
    virtual class Vec3 const& getPosOld();
    virtual class Vec3 const getPosExtrapolated(float);
    virtual class Vec3 getAttachPos(int /*enum ActorLocation*/, float);
    virtual class Vec3 getFiringPos();
    virtual void setRot(class Vec2 const&);
    virtual void move(struct IActorMovementProxy&, class Vec3 const&);
    virtual void move(class Vec3 const&);
    virtual class Vec3 getInterpolatedRidingPosition(float);
    virtual float getInterpolatedBodyRot(float);
    virtual float getInterpolatedHeadRot(float);
    virtual float getInterpolatedBodyYaw(float);
    virtual float getYawSpeedInDegreesPerSecond();
    virtual float getInterpolatedWalkAnimSpeed(float);
    virtual class Vec3 getInterpolatedRidingOffset(float);
    virtual void checkBlockCollisions(class AABB const&, class std::function<void(class BlockSource&, class Block const&, class BlockPos const&, class Actor&)>);
    virtual void updateEntityInside();
    virtual void updateEntityInside(class AABB const&);
    virtual bool isFireImmune();
    virtual void unk_vfn_41();
    virtual void blockedByShield(class ActorDamageSource const&, class Actor&);
    virtual void teleportTo(class Vec3 const&, bool, int, int);
    virtual bool tryTeleportTo(class Vec3 const&, bool, bool, int, int);
    virtual void chorusFruitTeleport(class Vec3 const&);
    virtual void lerpMotion(class Vec3 const&);
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    virtual void normalTick();
    virtual void baseTick();
    virtual void vehicleTick();
    virtual void positionPassenger(class Actor&, float);
    virtual float getRidingHeight();
    virtual bool startRiding(class Actor&);
    virtual void addPassenger(class Actor&);
    virtual void flagPassengerToRemove(class Actor&);
    virtual std::string getExitTip(std::string const&, int /*enum InputMode*/);
    virtual bool intersects(class Vec3 const&, class Vec3 const&);
    virtual bool isInWall();
    virtual bool isInvisible();
    virtual bool canShowNameTag();
    virtual void unk_vfn_61();
    virtual void setNameTagVisible(bool);
    virtual std::string const& getNameTag();
    virtual unsigned __int64 getNameTagAsHash();
    virtual std::string getFormattedNameTag();
    virtual void filterFormattedNameTag(class UIProfanityContext const&);
    virtual void setNameTag(std::string const&);
    virtual void unk_vfn_68();
    virtual void setScoreTag(std::string const&);
    virtual std::string const& getScoreTag();
    virtual bool isInWater();
    virtual bool hasEnteredWater();
    virtual bool isInLava();
    virtual bool isUnderLiquid(int /*enum MaterialType*/);
    virtual bool isOverWater();
    virtual void setBlockMovementSlowdownMultiplier(class Vec3 const&);
    virtual void resetBlockMovementSlowdownMultiplier();
    virtual float getCameraOffset();
    virtual float getShadowHeightOffs();
    virtual float getShadowRadius();
    virtual class Vec3 getHeadLookVector(float);
    virtual void unk_vfn_82();
    virtual bool canSee(class Vec3 const&);
    virtual bool canSee(class Actor const&);
    virtual bool isSkyLit(float);
    virtual float getBrightness(float);
    virtual void unk_vfn_87();
    virtual void playerTouch(class Player&);
    virtual void onAboveBubbleColumn(bool);
    virtual void onInsideBubbleColumn(bool);
    virtual bool isImmobile();
    virtual bool isSilent();
    virtual bool isPickable();
    virtual void unk_vfn_94();
    virtual bool isSleeping();
    virtual void setSleeping(bool);
    virtual void unk_vfn_97();
    virtual void setSneaking(bool);
    virtual bool isBlocking();
    virtual bool isDamageBlocked(class ActorDamageSource const&);
    virtual bool isAlive();
    virtual bool isOnFire();
    virtual void unk_vfn_103();
    virtual void unk_vfn_104();
    virtual bool isSurfaceMob();
    virtual void unk_vfn_106();
    virtual void unk_vfn_107();
    virtual void unk_vfn_108();
    virtual bool isAffectedByWaterBottle();
    virtual bool canAttack(class Actor*, bool);
    virtual void setTarget(class Actor*);
    virtual class Actor* findAttackTarget();
    virtual bool isValidTarget(class Actor*);
    virtual bool attack(class Actor&, int /*enum ActorDamageCause*/ const&);
    virtual void performRangedAttack(class Actor&, float);
    virtual void adjustDamageAmount(int&);
    virtual int getEquipmentCount();
    virtual void setOwner(struct ActorUniqueID);
    virtual void setSitting(bool);
    virtual void onTame();
    virtual void onFailedTame();
    virtual int getInventorySize();
    virtual int getEquipSlots();
    virtual int getChestSlots();
    virtual void setStanding(bool);
    virtual bool canPowerJump();
    virtual void setCanPowerJump(bool);
    virtual bool isJumping();
    virtual bool isEnchanted();
    virtual void unk_vfn_130();
    virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    virtual bool shouldRender();
    virtual void playAmbientSound();
    virtual int /*enum LevelSoundEvent*/ getAmbientSound();
    virtual bool isInvulnerableTo(class ActorDamageSource const&);
    virtual int /*enum ActorDamageCause*/ getBlockDamageCause(class Block const&);
    virtual void actuallyHurt(int, class ActorDamageSource const&, bool);
    virtual void animateHurt();
    virtual bool doFireHurt(int);
    virtual void onLightningHit();
    virtual void onBounceStarted(class BlockPos const&, class Block const&);
    virtual void feed(int);
    virtual void handleEntityEvent(int /*enum ActorEvent*/, int);
    virtual void unk_vfn_144();
    virtual class HashedString const& getActorRendererId();
    virtual class ItemActor* spawnAtLocation(class ItemStack const&, float);
    virtual class ItemActor* spawnAtLocation(class Block const&, int, float);
    virtual class ItemActor* spawnAtLocation(class Block const&, int);
    virtual class ItemActor* spawnAtLocation(int, int, float);
    virtual class ItemActor* spawnAtLocation(int, int);
    virtual void despawn();
    virtual void killed(class Actor&);
    virtual void awardKillScore(class Actor&, int);
    virtual void setArmor(int /*enum ArmorSlot*/, class ItemStack const&);
    virtual class ItemStack const& getArmor(int /*enum ArmorSlot*/);
    virtual int /*enum ArmorMaterialType*/ getArmorMaterialTypeInSlot(int /*enum ArmorSlot*/);
    virtual int /*enum ArmorTextureType*/ getArmorMaterialTextureTypeInSlot(int /*enum ArmorSlot*/);
    virtual float getArmorColorInSlot(int /*enum ArmorSlot*/, int);
    virtual class ItemStack const& getEquippedSlot(int /*enum EquipmentSlot*/);
    virtual void setEquippedSlot(int /*enum EquipmentSlot*/, class ItemStack const&);
    virtual class ItemStack const& getCarriedItem();
    virtual void setCarriedItem(class ItemStack const&);
    virtual void setOffhandSlot(class ItemStack const&);
    virtual class ItemStack const& getEquippedTotem();
    virtual bool consumeTotem();
    virtual bool save(class CompoundTag&);
    virtual void saveWithoutId(class CompoundTag&);
    virtual bool load(class CompoundTag const&, class DataLoadHelper&);
    virtual void loadLinks(class CompoundTag const&, std::vector<struct ActorLink>&, class DataLoadHelper&);
    virtual int /*enum ActorType*/ getEntityTypeId();
    virtual class HashedString const& queryEntityRenderer();
    virtual struct ActorUniqueID getSourceUniqueID();
    virtual void setOnFire(int);
    virtual void extinguishFire();
    virtual void thawFreezeEffect();
    virtual bool canFreeze();
    virtual bool const isWearingLeatherArmor();
    virtual class AABB getLiquidAABB(int /*enum MaterialType*/);
    virtual void handleInsidePortal(class BlockPos const&);
    virtual int getPortalCooldown();
    virtual int getPortalWaitTime();
    virtual class AutomaticID<class Dimension, int> getDimensionId();
    virtual bool canChangeDimensions();
    virtual void unk_vfn_184();
    virtual void changeDimension(class AutomaticID<class Dimension, int>, bool);
    virtual struct ActorUniqueID getControllingPlayer();
    virtual void checkFallDamage(float, bool);
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    virtual void handleFallDistanceOnServer(float, float, bool);
    virtual void playSynchronizedSound(int /*enum LevelSoundEvent*/, class Vec3 const&, int, bool);
    virtual void playSynchronizedSound(int /*enum LevelSoundEvent*/, class Vec3 const&, class Block const&, bool);
    virtual void onSynchedDataUpdate(int);
    virtual bool canAddPassenger(class Actor&);
    virtual bool canPickupItem(class ItemStack const&);
    virtual bool canBePulledIntoVehicle();
    virtual bool inCaravan();
    virtual void unk_vfn_197();
    virtual void tickLeash();
    virtual void sendMotionPacketIfNeeded();
    virtual bool canSynchronizeNewEntity();
    virtual void stopRiding(bool, bool, bool);
    virtual void startSwimming();
    virtual void stopSwimming();
    virtual void buildDebugInfo(std::string&);
    virtual int /*enum CommandPermissionLevel*/ getCommandPermissionLevel();
    virtual bool isClientSide();
    virtual class AttributeInstance* getMutableAttribute(class Attribute const&);
    virtual class AttributeInstance const& getAttribute(class Attribute const&);
    virtual int getDeathTime();
    virtual void heal(int);
    virtual bool isInvertedHealAndHarm();
    virtual bool canBeAffected(class MobEffectInstance const&);
    virtual bool canBeAffected(int);
    virtual bool canBeAffectedByArrow(class MobEffectInstance const&);
    virtual void onEffectAdded(class MobEffectInstance&);
    virtual void onEffectUpdated(class MobEffectInstance&);
    virtual void onEffectRemoved(class MobEffectInstance&);
    virtual class AnimationComponent& getAnimationComponent();
    virtual void openContainerComponent(class Player&);
    virtual void swing();
    virtual void useItem(class ItemStackBase&, int /*enum ItemUseMethod*/, bool);
    virtual void unk_vfn_222();
    virtual void unk_vfn_223();
    virtual void getDebugText(std::vector<std::string>&);
    virtual float getMapDecorationRotation();
    virtual float getPassengerYRotation(class Actor const&);
    virtual float getYHeadRot();
    virtual bool isWorldBuilder();
    virtual void unk_vfn_229();
    virtual bool isAdventure();
    virtual bool add(class ItemStack&);
    virtual bool drop(class ItemStack const&, bool);
    virtual bool getInteraction(class Player&, class ActorInteraction&, class Vec3 const&);
    virtual bool canDestroyBlock(class Block const&);
    virtual void setAuxValue(int);
    virtual void setSize(float, float);
    virtual void onOrphan();
    virtual void wobble();
    virtual bool wasHurt();
    virtual void startSpinAttack();
    virtual void stopSpinAttack();
    virtual void setDamageNearbyMobs(bool);
    virtual void unk_vfn_243();
    virtual void reloadLootTable(struct EquipmentTableDefinition const&);
    virtual void reloadLootTable();
    virtual void unk_vfn_246();
    virtual void kill();
    virtual void die(class ActorDamageSource const&);
    virtual bool shouldDropDeathLoot();
    virtual bool shouldTick();
    virtual void extractSnapshot(struct PlayerSnapshotComponent&);
    virtual void applySnapshot(struct PlayerSnapshotComponent const&, struct PlayerSnapshotComponent const&);
    virtual float getNextStep(float);
    virtual class LootTable* getLootTable();
    virtual void interpolatorTick();
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    virtual bool shouldTryMakeStepSound();
    virtual void unk_vfn_258();
    virtual bool _hurt(class ActorDamageSource const&, int, bool, bool);
    virtual void markHurt();
    virtual class AnimationComponent& _getAnimationComponent(class std::shared_ptr<class AnimationComponent>&, int /*enum AnimationComponentGroup*/);
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    virtual void addAdditionalSaveData(class CompoundTag&);
    virtual void _playStepSound(class BlockPos const&, class Block const&);
    virtual void _playFlySound(class BlockPos const&, class Block const&);
    virtual void unk_vfn_266();
    virtual void checkInsideBlocks(float);
    virtual void pushOutOfBlocks(class Vec3 const&);
    virtual bool updateWaterState();
    virtual void doWaterSplashEffect();
    virtual void spawnTrailBubbles();
    virtual void updateInsideBlock();
    virtual void _removePassenger(struct ActorUniqueID const&, bool, bool, bool);
    virtual void _onSizeUpdated();
    virtual void unk_vfn_275();

public:
    MCAPI class Vec3 _randomHeartPos();
    MCAPI void buildDebugGroupInfo(std::string&) const;
    MCAPI bool operator==(class Actor&);
    MCAPI Actor(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class OwnerPtrT<struct EntityRefTraits> const&);
    MCAPI Actor(class ILevel&, class OwnerPtrT<struct EntityRefTraits> const&);
    MCAPI void _sendDirtyActorData();
    MCAPI void _setActorTypeId(enum ActorType);
    MCAPI void _setLevelPtr(class Level*);
    MCAPI void addDefinitionGroup(std::string const&);
    MCAPI void addEffect(class MobEffectInstance const&);
    MCAPI bool addTag(std::string const&);
    MCAPI class Vec3 buildForward() const;
    MCAPI void burn(int, bool);
    MCAPI void cacheComponentData();
    MCAPI class Vec3 calcCenterPos() const;
    MCAPI int calculateAttackDamage(class Actor&);
    MCAPI bool canAscendCurrentBlockByJumping() const;
    MCAPI bool canBeginOrContinueClimbingLadder() const;
    MCAPI bool canCurrentlySwim() const;
    MCAPI bool canDescendBlockBelowByCrouching() const;
    MCAPI bool canFly() const;
    MCAPI bool canMate(class Actor const&) const;
    MCAPI void celebrateHunt(int, bool);
    MCAPI void clearFishingHookID();
    MCAPI void consumeItem(class ItemActor&, int);
    MCAPI class UpdateEquipPacket createUpdateEquipPacket(int);
    MCAPI class UpdateTradePacket createUpdateTradePacket(int);
    MCAPI void deregisterTagsFromLevelCache();
    MCAPI float distanceSqrToBlockPosCenter(class BlockPos const&) const;
    MCAPI float distanceTo(class Actor const&) const;
    MCAPI float distanceTo(class Vec3 const&) const;
    MCAPI float distanceToSqr(class Actor const&) const;
    MCAPI float distanceToSqr(class Vec3 const&) const;
    MCAPI void dropLeash(bool, bool);
    MCAPI void dropTowards(class ItemStack const&, class Vec3);
    MCAPI bool executeEvent(std::string const&, class VariantParameterList const&);
    //MCAPI void exitVehicle(class Actor const&, class std::optional<class Vec3> (*)(struct VehicleUtils::VehicleDirections const&, class std::function<bool(class Vec3 const&, class Vec3 const&)>));
    MCAPI class FishingHook* fetchFishingHook();
    MCAPI std::vector<struct DistanceSortedActor> fetchNearbyActorsSorted(class Vec3 const&, enum ActorType);
    MCAPI void forEachLeashedActor(class std::function<void(class gsl::not_null<class Actor*>)>);
    MCAPI class AABBShapeComponent const& getAABBShapeComponent() const;
    MCAPI int getActiveEffectCount() const;
    MCAPI struct ActorDefinitionIdentifier const& getActorIdentifier() const;
    MCAPI std::vector<class MobEffectInstance> const& getAllEffects() const;
    MCAPI class SimpleContainer& getArmorContainer();
    MCAPI class SimpleContainer const& getArmorContainer() const;
    MCAPI class gsl::not_null<class BaseAttributeMap*> getAttributes();
    MCAPI class BlockPos getBlockPosCurrentlyStandingOn(class Actor*) const;
    MCAPI class BlockPos getBlockTarget() const;
    MCAPI bool getCanPickupItems() const;
    MCAPI class ItemStack const& getCarriedItemInSlotPreferredBy(class ItemStack const&) const;
    MCAPI bool getChainedDamageEffects() const;
    MCAPI bool getCollidableMobNear();
    MCAPI enum PaletteColor getColor() const;
    MCAPI enum PaletteColor getColor2() const;
    MCAPI int getControllingSeat();
    MCAPI float getCurrentSwimAmount() const;
    MCAPI bool getDamageNearbyMobs() const;
    MCAPI class ActorDefinitionDiffList* getDiffList();
    MCAPI class Dimension& getDimension() const;
    MCAPI class Dimension const& getDimensionConst() const;
    MCAPI class EconomyTradeableComponent* getEconomyTradeableComponent() const;
    MCAPI class MobEffectInstance const* getEffect(class MobEffect const&) const;
    MCAPI class SynchedActorData& getEntityData();
    MCAPI class SynchedActorData const& getEntityData() const;
    MCAPI class ActorTerrainInterlockData& getEntityTerrainInterlockData();
    MCAPI enum EquipmentSlot getEquipmentSlotForItem(class ItemStack const&) const;
    MCAPI bool getFirstAvailableSeatPos(class Actor&, class Vec3&) const;
    MCAPI class Actor* getFirstPassenger() const;
    MCAPI class SimpleContainer& getHandContainer();
    MCAPI class SimpleContainer const& getHandContainer() const;
    MCAPI int getHealth() const;
    MCAPI int getHurtDir() const;
    MCAPI int getHurtTime() const;
    MCAPI enum Actor::InitializationMethod getInitializationMethod();
    MCAPI class Vec3 getInterpolatedPosition(float) const;
    MCAPI class Vec2 getInterpolatedRotation(float) const;
    MCAPI int getJumpDuration() const;
    MCAPI int getLastHurtByMobTime();
    MCAPI int getLastHurtByMobTimestamp();
    MCAPI enum ActorDamageCause getLastHurtCause() const;
    MCAPI int getLastHurtDamage() const;
    MCAPI int getLastHurtMobTimestamp();
    MCAPI unsigned __int64 getLastHurtTimestamp() const;
    MCAPI struct ActorUniqueID getLeashHolder() const;
    MCAPI class Level const& getLevel() const;
    MCAPI class Level& getLevel();
    MCAPI int getLimitedLifetimeTicks() const;
    MCAPI std::vector<struct ActorLink> getLinks() const;
    MCAPI int getMarkVariant() const;
    MCAPI int getMaxHealth() const;
    MCAPI class MolangVariableMap& getMolangVariables();
    MCAPI class gsl::not_null<class std::shared_ptr<struct IActorMovementProxy>> getMovementProxy();
    MCAPI class gsl::not_null<class std::shared_ptr<struct IActorMovementProxy const>> getMovementProxy() const;
    MCAPI class ItemStack const& getOffhandSlot() const;
    MCAPI class Mob* getOwner() const;
    MCAPI struct ActorUniqueID const getOwnerId() const;
    MCAPI int getPassengerIndex(class Actor const&) const;
    MCAPI std::unique_ptr<class CompoundTag> getPersistingTradeOffers();
    MCAPI int getPersistingTradeRiches();
    MCAPI class Player* getPlayerOwner() const;
    MCAPI enum PortalAxis getPortalEntranceAxis() const;
    MCAPI class Vec3 const& getPostTickPosDelta() const;
    MCAPI float getRadius() const;
    MCAPI class Random& getRandom() const;
    MCAPI class BlockSource& getRegion() const;
    MCAPI class BlockSource const& getRegionConst() const;
    MCAPI class RenderParams& getRenderParams();
    MCAPI class Vec2 getRotation() const;
    MCAPI class ActorRuntimeID getRuntimeID() const;
    MCAPI int getShakeTime() const;
    MCAPI int getSkinID() const;
    MCAPI class SpatialActorNetworkData& getSpatialNetworkData();
    MCAPI class SpatialActorNetworkData const& getSpatialNetworkData() const;
    MCAPI float getSpeedInMetersPerSecond() const;
    MCAPI class StateVectorComponent const& getStateVectorComponent() const;
    MCAPI class StateVectorComponent& getStateVectorComponentNonConst();
    MCAPI bool getStatusFlag(enum ActorFlags) const;
    MCAPI int getStrength() const;
    MCAPI int getStrengthMax() const;
    MCAPI int getStructuralIntegrity() const;
    MCAPI float getSwimAmount(float) const;
    MCAPI class gsl::span<std::string, -1> const getTags() const;
    MCAPI class Actor* getTarget() const;
    MCAPI struct ActorUniqueID getTargetId();
    MCAPI class ITickingArea* getTickingArea();
    MCAPI bool getTradeInterest() const;
    MCAPI class MerchantRecipeList* getTradeOffers();
    MCAPI class Player* getTradingPlayer() const;
    MCAPI struct ActorUniqueID const& getUniqueID() const;
    MCAPI int getVariant() const;
    MCAPI class Actor* getVehicle() const;
    MCAPI class Actor* getVehicleRoot() const;
    MCAPI class ActorRuntimeID getVehicleRuntimeID() const;
    MCAPI float getVerticalSpeedInMetersPerSecond() const;
    MCAPI class Vec3 getViewVector(float) const;
    MCAPI bool hasAnyEffects() const;
    MCAPI bool hasAnyVisibleEffects() const;
    MCAPI bool hasBeenHurtByMobInLastTicks(int) const;
    MCAPI bool hasCategory(enum ActorCategory) const;
    MCAPI bool hasDefinitionGroup(std::string const&) const;
    MCAPI bool hasDimension() const;
    MCAPI bool hasEffect(class MobEffect const&) const;
    MCAPI bool hasFamily(class HashedString const&) const;
    MCAPI bool hasFishingHook() const;
    MCAPI bool hasLevel() const;
    MCAPI bool hasPassenger() const;
    MCAPI bool hasPersistingTrade() const;
    MCAPI bool hasPlayerPassenger() const;
    MCAPI bool hasPriorityAmmunition() const;
    MCAPI bool hasRuntimeID() const;
    MCAPI bool hasSaddle() const;
    MCAPI bool hasTag(std::string const&) const;
    MCAPI bool hasTags() const;
    MCAPI bool hasTeleported() const;
    MCAPI bool hasTickingArea() const;
    MCAPI bool hasTotemEquipped() const;
    MCAPI bool hasType(enum ActorType) const;
    MCAPI bool hasUniqueID() const;
    MCAPI void healEffects(int);
    MCAPI bool hurt(class ActorDamageSource const&, int, bool, bool);
    MCAPI bool inDownwardFlowingLiquid() const;
    MCAPI void initActorProperties();
    MCAPI void initParams(class VariantParameterList&);
    MCAPI bool isActorLocationInMaterial(enum ActorLocation, enum MaterialType) const;
    MCAPI bool isAngry() const;
    MCAPI bool isAutonomous() const;
    MCAPI bool isBaby() const;
    MCAPI bool isBreakingObstruction() const;
    MCAPI bool isBribed() const;
    MCAPI bool isCharged() const;
    MCAPI bool isChested() const;
    MCAPI bool isClimbing() const;
    MCAPI bool isControlledByLocalInstance() const;
    MCAPI bool isDoorBreaker() const;
    MCAPI bool isDoorOpener() const;
    MCAPI bool isGlobal() const;
    MCAPI bool isIgnited() const;
    MCAPI bool isImmersedInWater() const;
    MCAPI bool isInClouds() const;
    MCAPI bool isInContactWithWater() const;
    MCAPI bool isInLove() const;
    MCAPI bool isInPrecipitation() const;
    MCAPI bool isInRain() const;
    MCAPI bool isInScaffolding() const;
    MCAPI bool isInSnow() const;
    MCAPI bool isInThunderstorm() const;
    MCAPI bool isInWaterOrRain() const;
    MCAPI bool isInWorld() const;
    MCAPI bool isInsideBorderBlock(float) const;
    MCAPI bool isInsidePortal() const;
    MCAPI bool isLayingDown() const;
    MCAPI bool isLeashed() const;
    MCAPI bool isMovedToLimbo() const;
    MCAPI bool isMoving() const;
    MCAPI bool isOrphan() const;
    MCAPI bool isOutOfControl() const;
    MCAPI bool isOverScaffolding() const;
    MCAPI bool isPacified() const;
    MCAPI bool isPassenger(struct ActorUniqueID const&) const;
    MCAPI bool isPassenger(class Actor const&) const;
    MCAPI bool isPersistent() const;
    MCAPI bool isPlayingDead() const;
    MCAPI bool isPowered() const;
    MCAPI bool isRegionValid() const;
    MCAPI bool isRemoved() const;
    MCAPI bool isResting() const;
    MCAPI bool isRiding() const;
    MCAPI bool isRiding(class Actor*) const;
    MCAPI bool isSafeToSleepNear() const;
    MCAPI bool isSheared() const;
    MCAPI bool isSitting() const;
    MCAPI bool isSneaking() const;
    MCAPI bool isStackable() const;
    MCAPI bool isStanding() const;
    MCAPI bool isSwimmer() const;
    MCAPI bool isSwimming() const;
    MCAPI bool isTame() const;
    MCAPI bool isTickingEntity() const;
    MCAPI bool isTrading() const;
    MCAPI bool isTrusting() const;
    MCAPI bool isType(enum ActorType) const;
    MCAPI bool isWASDControlled();
    MCAPI bool isWalker() const;
    MCAPI void lerpTo(class Vec3 const&, class Vec2 const&, int);
    MCAPI void lerpTo(class Vec3 const&, class Vec2 const&, float, int);
    MCAPI void lerpToRotation(class Vec2 const&, int);
    MCAPI void loadEntityFlags(class CompoundTag const&, class DataLoadHelper&);
    MCAPI struct ActorUniqueID const& lovePartnerId() const;
    MCAPI void migrateUniqueID(struct ActorUniqueID);
    MCAPI void moveBBs(class Vec3 const&);
    MCAPI void moveRelative(float, float, float, float);
    MCAPI void moveTo(class Vec3 const&, class Vec2 const&);
    MCAPI void onAffectedByWaterBottle();
    MCAPI bool onClimbableBlock() const;
    MCAPI bool onHoverableBlock() const;
    MCAPI void onOnewayCollision(class AABB const&);
    MCAPI void pickUpItem(class ItemActor&, int);
    MCAPI void playSound(enum LevelSoundEvent, class Vec3 const&, class Block const&);
    MCAPI void playSound(enum LevelSoundEvent, class Vec3 const&, int);
    MCAPI void positionAllPassengers();
    MCAPI bool pullInEntity(class Actor&);
    MCAPI void pushBackActionEventToActionQueue(class ActionEvent);
    MCAPI void refreshComponents();
    MCAPI void reload();
    MCAPI void reloadProperties();
    MCAPI void removeAllEffects();
    MCAPI void removeAllPassengers(bool, bool);
    MCAPI void removeEffect(int);
    MCAPI void removeEffectParticles();
    MCAPI void removePersistingTrade();
    MCAPI bool removeTag(std::string const&);
    MCAPI void resetClientAnimations();
    MCAPI void resetRegion();
    MCAPI void saveEntityFlags(class CompoundTag&);
    MCAPI std::unique_ptr<class ListTag> saveLinks() const;
    MCAPI void savePersistingTrade(std::unique_ptr<class CompoundTag>, int);
    MCAPI void sendActorDefinitionEventTriggered(std::string const&);
    MCAPI void sendMotionToServer();
    MCAPI void serializationSetHealth(int);
    MCAPI void setAABB(class AABB const&);
    MCAPI void setAABBDim(class Vec2 const&);
    MCAPI void setActorRendererId(class HashedString);
    MCAPI void setAutonomous(bool);
    MCAPI void setBaseDefinition(struct ActorDefinitionIdentifier const&, bool, bool);
    MCAPI void setBlockTarget(class BlockPos const&);
    MCAPI void setBreakingObstruction(bool);
    MCAPI void setCanClimb(bool);
    MCAPI void setCanFly(bool);
    MCAPI void setChainedDamageEffects(bool);
    MCAPI void setCharged(bool);
    MCAPI void setClimbing(bool);
    MCAPI void setCollidableMob(bool);
    MCAPI void setCollidableMobNear(bool);
    MCAPI void setColor(enum PaletteColor);
    MCAPI void setColor2(enum PaletteColor);
    MCAPI void setDancing(bool);
    MCAPI void setDoorBreaker(bool);
    MCAPI void setDoorOpener(bool);
    MCAPI void setEnchanted(bool);
    MCAPI void setFishingHookID(struct ActorUniqueID);
    MCAPI void setGlobal(bool);
    MCAPI void setHurtDir(int);
    MCAPI void setHurtTime(int);
    MCAPI void setInLove(class Actor*);
    MCAPI void setInterpolation(bool);
    MCAPI void setInvisible(bool);
    MCAPI void setJumpDuration(int);
    MCAPI void setLastHitBB(class Vec3 const&, class Vec3 const&);
    MCAPI void setLayingDown(bool);
    MCAPI void setLeashHolder(struct ActorUniqueID);
    MCAPI void setLimitedLifetimeTicks(int);
    MCAPI void setMarkVariant(int);
    MCAPI void setMovedToLimbo(bool);
    MCAPI void setMoving(bool);
    MCAPI void setPersistent();
    MCAPI void setPosDirectLegacy(class Vec3 const&);
    MCAPI void setPosPrev(class Vec3 const&);
    MCAPI void setPreviousPosRot(class Vec3 const&, class Vec2 const&);
    MCAPI void setRegion(class BlockSource&);
    MCAPI void setResting(bool);
    MCAPI void setRuntimeID(class ActorRuntimeID);
    MCAPI void setSaddle(bool);
    MCAPI void setScared(bool);
    MCAPI void setSeatDescription(class Vec3 const&, struct SeatDescription const&);
    MCAPI void setShakeTime(int);
    MCAPI void setSkinID(int);
    MCAPI bool setStatusFlag(enum ActorFlags, bool);
    MCAPI void setStrength(int);
    MCAPI void setStrengthMax(int);
    MCAPI void setStructuralIntegrity(int);
    MCAPI void setStunned(bool);
    MCAPI void setSwimmer(bool);
    MCAPI void setTempted(bool);
    MCAPI void setTradeInterest(bool);
    MCAPI void setTradingPlayer(class Player*);
    MCAPI void setUniqueID(struct ActorUniqueID);
    MCAPI void setVariant(int);
    MCAPI void setWASDControlled(bool);
    MCAPI void setWalker(bool);
    MCAPI bool shouldOrphan(class BlockSource&);
    MCAPI bool shouldUpdateEffects() const;
    MCAPI void spawnBalloonPopParticles();
    MCAPI void spawnDeathParticles();
    MCAPI void spawnDustParticles(int);
    MCAPI void spawnEatParticles(class ItemStack const&, int);
    MCAPI void spawnTamingParticles(bool);
    MCAPI void teleportPassengersTo(class Vec3 const&, int, int);
    MCAPI void testForEntityStacking(class BlockSource&, class AABB const&, std::vector<class AABB>&);
    MCAPI bool tick(class BlockSource&);
    MCAPI void tickBlockDamage();
    MCAPI void transferTickingArea(class Dimension&);
    MCAPI std::vector<class ItemDescriptor> const* tryGetEquippableSlotAllowedItems(int) const;
    MCAPI bool tryMoveChunks();
    MCAPI void updateBBFromDefinition();
    MCAPI void updateDescription();
    MCAPI void updateInvisibilityStatus();
    MCAPI void updateMolangVariables(class RenderParams&);
    MCAPI void updateTickingData();
    MCAPI bool useSaddle(class ItemStackBase&, class Player*);
    MCAPI bool wasLastHitByPlayer();
    MCAPI bool wasLoadedFromNBTThisFrame() const;

    MCAPI static float const DEFAULT_AMBIENT_SOUND_INTERVAL;
    MCAPI static float const DEFAULT_AMBIENT_SOUND_INTERVAL_RANGE;
    MCAPI static class Vec3 const LAVA_AABB_SHRINK_AMOUNT;
    MCAPI static float const LAVA_FLOW_STRENGTH_MULTIPLIER;
    MCAPI static int const MAX_BYTE_CHARGE_AMOUNT;
    MCAPI static std::string const RIDING_TAG;
    MCAPI static int const TOTAL_AIR_SUPPLY;
    MCAPI static class Vec3 const WATER_AABB_SHRINK_AMOUNT;
    MCAPI static float const WATER_FLOW_STRENGTH_MULTIPLIER;
    MCAPI static void _move(struct IActorMovementProxy&, class Vec3 const&);
    MCAPI static class Vec3 buildForward(struct IActorMovementProxy const&);
    MCAPI static bool canBeginOrContinueClimbingLadder(struct IActorMovementProxy const&);
    MCAPI static void checkEntityOnewayCollision(class BlockSource&, class BlockPos const&);
    MCAPI static class BlockPos getBlockPosCurrentlyStandingOn(struct IActorMovementProxy const&, struct IActorMovementProxy*);
    MCAPI static class Vec2 getInterpolatedRotation(class Vec2 const&, class Vec2 const&, float);
    MCAPI static class AABB getLiquidAABB(struct IActorMovementProxy const&, enum MaterialType);
    MCAPI static float getLiquidFlowStrength(enum MaterialType);
    MCAPI static class Vec3 getViewVector(struct IActorMovementProxy const&, float);
    MCAPI static class Vec3 getViewVector(class Vec2 const&, class Vec2 const&, float);
    MCAPI static bool hasSubBBIn(struct IActorMovementProxy const&, enum MaterialType);
    MCAPI static bool isFree(struct IActorMovementProxy&, class Vec3 const&, float);
    MCAPI static bool isImmersedInWater(struct IActorMovementProxy const&);
    MCAPI static bool isImmobile(struct IActorMovementProxy const&);
    MCAPI static bool isInScaffolding(struct IActorMovementProxy const&);
    MCAPI static bool isSitting(struct IActorMovementProxy const&);
    MCAPI static bool isStanding(struct IActorMovementProxy const&);
    MCAPI static void moveRelative(struct IActorMovementProxy&, float, float, float, float);
    MCAPI static bool onClimbableBlock(struct IActorMovementProxy const&);
    MCAPI static bool setStatusFlag(class SynchedActorData&, enum ActorFlags, bool);
    MCAPI static void testForCollidableMobs(struct IActorMovementProxy const&, class BlockSource&, class AABB const&, std::vector<class AABB>&);
    MCAPI static class Actor* tryGetFromEntity(class EntityContext&, bool);
    MCAPI static class Actor* tryGetFromEntity(class OwnerPtrT<struct EntityRefTraits> const&, bool);

private:
    MCAPI void _defaultInitEquipmentDropChances();
    MCAPI void _initAliasProperties();
    MCAPI void _initializeLeashRopeSystem();
    MCAPI void _managePassengers(class BlockSource&);
    MCAPI void _moveHitboxTo(class Vec3 const&);
    MCAPI void _sendLinkPacket(struct ActorLink const&) const;
    MCAPI void _serializeComponents(class CompoundTag&);
    MCAPI void _setupServerAnimationComponent();
    MCAPI void _spawnTreasureHuntingParticles();
    MCAPI void _startFizzEffect();
    MCAPI bool _tryPlaceAt(class Vec3 const&, class AABB const&);
    MCAPI void _tryPlantWitherRose();
    MCAPI void _updateComposition(bool);
    MCAPI void _updateOwnerChunk();

    MCAPI static int const DAMAGE_NEARBY_MOBS_DURATION;
    MCAPI static float const DEFAULT_MAX_DISTANCE_OPTIMIZATION;
    MCAPI static unsigned __int64 const DEFAULT_MAX_TICK_DELAY_OPTIMIZATION;
    MCAPI static bool _containsSneakCollisionShapes(struct IActorMovementProxy&, class AABB const&);

protected:
    MCAPI bool _damageSensorComponentHurt(int&, int, class ActorDamageSource const&);
    MCAPI class ItemActor const* _drop(class ItemStack const&, bool);
    MCAPI class AABBShapeComponent& _getAABBShapeComponentNonConst();
    MCAPI bool _isHeadInWater() const;
    MCAPI void _playMovementSound(bool);
    MCAPI void _refreshAABB();
    MCAPI void _setAABBDim(class Vec2 const&);
    MCAPI void _setArmorContainer(std::unique_ptr<class SimpleContainer>);
    MCAPI void _setHandContainer(std::unique_ptr<class SimpleContainer>);
    MCAPI void _setHeightOffset(float);
    MCAPI void _setNetherPortalData(class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>, int);
    MCAPI void _setPos(class Vec3 const&);
    MCAPI void _setPosPrev(class Vec3 const&);
    MCAPI void enableAutoSendPosRot(bool);

    MCAPI static int const PLAYER_HURT_EXPERIENCE_TIME;
    MCAPI static class Block const& getBlockWhenClimbing(struct IActorMovementProxy const&);
};