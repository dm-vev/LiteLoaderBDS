/**
 * @file  Player.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class ServerPlayer;
class Player;
class NetworkIdentifier;
class Certificate;
class Container;
class CompoundTag;
#include "UserEntityIdentifierComponent.hpp"
#include "ScorePacketInfo.hpp"
#include "DataItem.hpp"
#include "../I18nAPI.h"
#undef BEFORE_EXTRA

/**
 * @brief MC class Player.
 *
 */
class Player : public Mob {

#define AFTER_EXTRA
    // Add new members to class
public:
    enum PositionMode : char {
        NORMAL,
        RESPAWN,
        TELEPORT,
        HEAD_ROTATION,
    };

    LIAPI std::string getName();
    LIAPI std::string getRealName();
    LIAPI std::string getUuid();
    LIAPI unsigned char getClientSubId();
    LIAPI string getDeviceTypeName();
    LIAPI int getAvgPing();
    LIAPI int getLastPing();
    LIAPI std::string getIP();
    LIAPI string getLanguageCode();
    LIAPI string getServerAddress();
    LIAPI NetworkIdentifier* getNetworkIdentifier();
    LIAPI Certificate* getCertificate();
    LIAPI Container* getEnderChestContainer();
    LIAPI std::pair<BlockPos, int> getRespawnPosition();
    LIAPI float getAvgPacketLoss();
    LIAPI float getLastPacketLoss();
    LIAPI string getClientId();
    LIAPI int getDeviceType();
    LIAPI bool isOperator();
    LIAPI bool isOP();

    LIAPI int getCurrentExperience();
    LIAPI bool setCurrentExperience(int exp);
    LIAPI size_t getTotalExperience();
    LIAPI bool setTotalExperience(size_t exp);
    LIAPI bool reduceExperience(size_t exp);

    // Experience required to upgrade to level from (level-1)
    LIAPI static int getXpNeededForLevel(int level);

    // Experience required to upgrade to level from level 0
    LIAPI static size_t getTotalXpNeededForLevel(int level);

    /**
     * @brief Translate(localize) a text for the player with provided plugin handle.
     *
     * @param  hPlugin      The plugin handle
     * @param  format       The str to translate and format
     * @param  args         The format arguments
     * @return std::string  The translated str
     */
    template <typename... Args>
    inline std::string trImpl(HMODULE hPlugin, const std::string& format, Args&&... args) {
        return Translation::trlImpl(hPlugin, this->getLanguageCode(), format, std::forward<Args>(args)...);
    }

    /**
     * @brief Translate(localize) a text for the player(convenience func).
     *
     * @param  format       The str to translate and format
     * @param  args         The format arguments
     * @return std::string  The translated str
     */
    template <typename... Args>
    inline std::string tr(const std::string& format, Args&&... args) {
        return trImpl(GetCurrentModule(), format, std::forward<Args>(args)...);
    }

    LIAPI bool sendText(const std::string& text, TextType type = TextType::RAW);
    /**
     * @brief Translate(localize) and send a text to the player(convenience func).
     *
     * @tparam ttype  The text type(default RAW)
     * @tparam Args   ...
     * @param  text   The str to translate and format
     * @param  args   The format arguments
     * @return bool   Success or not
     */
    template <TextType ttype = TextType::RAW, typename... Args>
    inline bool sendText(const std::string& text, Args&&... args) {
        return sendText(this->tr(text, std::forward<Args>(args)...), ttype);
    }
    template <typename... Args>
    inline bool sendFormattedText(const std::string& text, Args&&... args) {
        if constexpr (0 == sizeof...(args)) {
            // Avoid fmt if only one argument
            return sendText(text);
        } else {
            return sendText(fmt::format(text, std::forward<Args>(args)...));
        }
    }

    LIAPI bool kick(const string& msg);
    LIAPI bool crashClient();
    LIAPI bool talkAs(const string& msg);
    LIAPI bool giveItem(ItemStack* item);
    LIAPI int clearItem(string typeName);
    LIAPI bool runcmd(const string& cmd);
    LIAPI bool transferServer(const string& address, unsigned short port);
    LIAPI bool setSidebar(const std::string& title, const std::vector<std::pair<std::string, int>>& data, ObjectiveSortOrder sortOrder);
    LIAPI bool removeSidebar();
    LIAPI std::unique_ptr<CompoundTag> getNbt();
    LIAPI bool setNbt(CompoundTag* nbt);
    LIAPI bool refreshAttribute(class Attribute const& attribute);
    LIAPI bool refreshAttributes(std::vector<Attribute const*> const& attributes);
    LIAPI void addBossEvent(int64_t uid, string name, float percent, BossEventColour colour, int overlay = 0);
    LIAPI void removeBossEvent(int64_t uid);
    LIAPI void updateBossEvent(int64_t uid, string name, float percent, BossEventColour colour, int overlay = 0);

    LIAPI int getScore(const string& key);
    LIAPI bool setScore(const string& key, int value);
    LIAPI bool addScore(const string& key, int value);
    LIAPI bool reduceScore(const string& key, int value);
    LIAPI bool deleteScore(const string& key);

    // Form
    LIAPI bool sendSimpleForm(const string& title, const string& content, const vector<string>& buttons, const std::vector<std::string>& images, std::function<void(Player*, int)> callback) const;
    LIAPI bool sendModalForm(const string& title, const string& content, const string& confirmButton, const string& cancelButton, std::function<void(Player*, bool)> callback) const;
    LIAPI bool sendCustomForm(const std::string& data, std::function<void(Player*, string)> callback) const;

    // Packet
    LIAPI bool sendTextPacket(string text, TextType Type = TextType::RAW) const;
    LIAPI bool sendTitlePacket(string text, TitleType Type, int FadeInDuration, int RemainDuration, int FadeOutDuration) const;
    LIAPI bool sendNotePacket(unsigned int tone);
    LIAPI bool sendSpawnParticleEffectPacket(Vec3 spawnPos, int dimid, string ParticleName, int64_t EntityUniqueID = -1) const;
    /*bad*/ LIAPI bool sendPlaySoundPacket(string SoundName, Vec3 Position, float Volume, float Pitch) const;
    LIAPI bool sendAddItemEntityPacket(unsigned long long runtimeID, class Item const& item, int stackSize, short aux, Vec3 pos, vector<std::unique_ptr<DataItem>> dataItems = {}) const;
    LIAPI bool sendAddEntityPacket(unsigned long long runtimeID, string entityType, Vec3 pos, Vec2 rotation, float headYaw, vector<std::unique_ptr<DataItem>> dataItems = {});
    LIAPI bool sendUpdateBlockPacket(BlockPos const& blockPos, unsigned int runtimeId, UpdateBlockFlags flag = UpdateBlockFlags::BlockUpdateAll, UpdateBlockLayer layer = UpdateBlockLayer::UpdateBlockDefault);
    LIAPI bool sendUpdateBlockPacket(BlockPos const& blockPos, const Block& block, UpdateBlockFlags flag = UpdateBlockFlags::BlockUpdateAll, UpdateBlockLayer layer = UpdateBlockLayer::UpdateBlockDefault);
    LIAPI bool sendTransferPacket(const string& address, short port) const;
    LIAPI bool sendSetDisplayObjectivePacket(const string& title, const string& name, char sortOrder) const;
    LIAPI bool sendSetScorePacket(char type, const vector<ScorePacketInfo>& data);
    LIAPI bool sendBossEventPacket(BossEvent type, string name, float percent, BossEventColour colour, int overlay = 0);
    LIAPI bool sendCommandRequestPacket(const string& cmd);
    LIAPI bool sendTextTalkPacket(const string& msg);
    LIAPI bool sendTextTalkPacket(const string& msg, Player* target /* = nullptr*/);

    LIAPI bool sendRawFormPacket(unsigned formId, const string& data) const;
    LIAPI bool sendToastPacket(string title, string msg);

    LIAPI static bool isValid(Player* player);

    // For compatibility
    inline string getDeviceName() {
        return getDeviceTypeName();
    }
    LIAPI bool sendSimpleFormPacket(const string& title, const string& content, const vector<string>& buttons, const std::vector<std::string>& images, std::function<void(int)> callback) const;
    LIAPI bool sendModalFormPacket(const string& title, const string& content, const string& button1, const string& button2, std::function<void(bool)> callback);
    LIAPI bool sendCustomFormPacket(const std::string& data, std::function<void(string)> callback);

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYER
public:
    class Player& operator=(class Player const &) = delete;
    Player(class Player const &) = delete;
    Player() = delete;
#endif

public:
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    virtual void _serverInitItemStackIds();
    virtual ~Player();
    virtual void resetUserPos(bool);
    virtual void remove();
    virtual class Vec3 getAttachPos(enum ActorLocation, float) const;
    virtual void move(class Vec3 const &);
    virtual void move(struct IActorMovementProxy &, class Vec3 const &) const;
    virtual bool isFireImmune() const;
    virtual void __unk_vfn_41();
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    virtual void normalTick();
    virtual void passengerTick();
    virtual void __unk_vfn_61();
    virtual std::string getFormattedNameTag() const;
    virtual void __unk_vfn_68();
    virtual void setBlockMovementSlowdownMultiplier(class BlockLegacy const &, class Vec3 const &);
    virtual float getCameraOffset() const;
    virtual float getShadowRadius() const;
    virtual void __unk_vfn_82();
    virtual void __unk_vfn_85();
    virtual void __unk_vfn_88();
    virtual bool isImmobile() const;
    virtual bool isSilentObserver() const;
    virtual void __unk_vfn_96();
    virtual bool isSleeping() const;
    virtual void setSleeping(bool);
    virtual void __unk_vfn_99();
    virtual bool isBlocking() const;
    virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    virtual void __unk_vfn_106();
    virtual void __unk_vfn_108();
    virtual void __unk_vfn_109();
    virtual void __unk_vfn_111();
    virtual bool attack(class Actor &, enum ActorDamageCause const &);
    virtual bool isJumping() const;
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    virtual void onBounceStarted(class BlockPos const &, class Block const &);
    virtual void feed(int);
    virtual void handleEntityEvent(enum ActorEvent, int);
    virtual class HashedString const & getActorRendererId() const;
    virtual void awardKillScore(class Actor &, int);
    virtual void setArmor(enum ArmorSlot, class ItemStack const &);
    virtual void setCarriedItem(class ItemStack const &);
    virtual class ItemStack const & getCarriedItem() const;
    virtual void setOffhandSlot(class ItemStack const &);
    virtual class ItemStack const & getEquippedTotem() const;
    virtual bool consumeTotem();
    virtual enum ActorType getEntityTypeId() const;
    virtual bool canFreeze() const;
    virtual int getPortalCooldown() const;
    virtual int getPortalWaitTime() const;
    virtual bool canChangeDimensionsUsingPortal() const;
    virtual void __unk_vfn_182();
    virtual void onSynchedDataUpdate(int);
    virtual bool canAddPassenger(class Actor &) const;
    virtual bool canBePulledIntoVehicle() const;
    virtual void __unk_vfn_196();
    virtual void sendMotionPacketIfNeeded();
    virtual void startSwimming();
    virtual void stopSwimming();
    virtual enum CommandPermissionLevel getCommandPermissionLevel() const;
    virtual bool canObstructSpawningAndBlockPlacement() const;
    virtual class AnimationComponent & getAnimationComponent();
    virtual void useItem(class ItemStackBase &, enum ItemUseMethod, bool);
    virtual void __unk_vfn_222();
    virtual void __unk_vfn_223();
    virtual float getMapDecorationRotation() const;
    virtual bool isWorldBuilder() const;
    virtual bool isCreative() const;
    virtual bool isAdventure() const;
    virtual bool isSurvival() const;
    virtual bool isSpectator() const;
    virtual bool add(class ItemStack &);
    virtual bool drop(class ItemStack const &, bool);
    virtual void setSize(float, float);
    virtual void startSpinAttack();
    virtual void stopSpinAttack();
    virtual void __unk_vfn_248();
    virtual void __unk_vfn_251();
    virtual void die(class ActorDamageSource const &);
    virtual bool shouldDropDeathLoot() const;
    virtual class std::optional<class BlockPos> getLastDeathPos() const;
    virtual class std::optional<class AutomaticID<class Dimension, int>> getLastDeathDimension() const;
    virtual bool hasDiedBefore() const;
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(enum HandSlot, class ItemStack const &) const;
    virtual bool _shouldProvideFeedbackOnArmorSet(enum ArmorSlot, class ItemStack const &) const;
    virtual void __unk_vfn_269();
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    virtual void __unk_vfn_277();
    virtual void _onSizeUpdated();
    virtual void __unk_vfn_285();
    virtual float getSpeed() const;
    virtual void setSpeed(float);
    virtual void travel(float, float, float);
    virtual void travel(struct IMobMovementProxy &, float, float, float) const;
    virtual void aiStep();
    virtual void aiStep(struct IMobMovementProxy &) const;
    virtual int getItemUseDuration() const;
    virtual float getItemUseStartupProgress() const;
    virtual float getItemUseIntervalProgress() const;
    virtual void __unk_vfn_313();
    virtual void __unk_vfn_317();
    virtual std::vector<class ItemStack const *> getAllHand() const;
    virtual std::vector<class ItemStack const *> getAllEquipment() const;
    virtual void dropEquipmentOnDeath(class ActorDamageSource const &, int);
    virtual void dropEquipmentOnDeath();
    virtual void clearVanishEnchantedItemsOnDeath();
    virtual void sendInventory(bool);
    virtual bool canExistWhenDisallowMob() const;
    virtual void __unk_vfn_351();
    virtual std::unique_ptr<class BodyControl> initBodyControl();
    virtual void jumpFromGround();
    virtual void jumpFromGround(struct IMobMovementProxy &) const;
    virtual void updateAi();
    virtual void updateGliding();
    virtual void __unk_vfn_365();
    virtual void prepareRegion(class ChunkSource &);
    virtual void destroyRegion();
    virtual void suspendRegion();
    virtual void resendAllChunks();
    virtual void _fireWillChangeDimension();
    virtual void _fireDimensionChanged();
    virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);
    virtual void tickWorld(struct Tick const &);
    virtual void __unk_vfn_375() = 0;
    virtual std::vector<class ChunkPos> const & getTickingOffsets() const;
    virtual void moveView();
    virtual void moveSpawnView(class Vec3 const &, class AutomaticID<class Dimension, int>);
    virtual void setName(std::string const &);
    virtual enum TravelMethod getTravelledMethod() const;
    virtual void checkMovementStats(class Vec3 const &);
    virtual void __unk_vfn_382();
    virtual void __unk_vfn_383();
    virtual void respawn();
    virtual void __unk_vfn_385();
    virtual void __unk_vfn_386();
    virtual bool hasResource(int);
    virtual void completeUsingItem();
    virtual void startDestroying();
    virtual void stopDestroying();
    virtual void __unk_vfn_391();
    virtual void __unk_vfn_392();
    virtual void openTrading(struct ActorUniqueID const &, bool);
    virtual bool canOpenContainerScreen();
    virtual void __unk_vfn_395();
    virtual void openNpcInteractScreen(class std::shared_ptr<struct INpcDialogueData>);
    virtual void openInventory();
    virtual void __unk_vfn_398();
    virtual void __unk_vfn_399();
    virtual void displayTextObjectMessage(class TextObjectRoot const &, std::string const &, std::string const &);
    virtual void displayTextObjectWhisperMessage(class ResolvedTextObject const &, std::string const &, std::string const &);
    virtual void displayTextObjectWhisperMessage(std::string const &, std::string const &, std::string const &);
    virtual void displayWhisperMessage(std::string const &, std::string const &, std::string const &, std::string const &);
    virtual enum BedSleepingResult startSleepInBed(class BlockPos const &);
    virtual void stopSleepInBed(bool, bool);
    virtual bool canStartSleepInBed();
    virtual int getSleepTimer() const;
    virtual int getPreviousTickSleepTimer() const;
    virtual void __unk_vfn_409();
    virtual void __unk_vfn_410();
    virtual bool isHostingPlayer() const;
    virtual bool isLoading() const;
    virtual bool isPlayerInitialized() const;
    virtual void __unk_vfn_414();
    virtual void registerTrackedBoss(struct ActorUniqueID);
    virtual void unRegisterTrackedBoss(struct ActorUniqueID);
    virtual void setPlayerGameType(enum GameType);
    virtual void initHUDContainerManager();
    virtual void _crit(class Actor &);
    virtual class IMinecraftEventing * getEventing() const;
    virtual void __unk_vfn_421();
    virtual void sendEventPacket(class EventPacket &) const;
    virtual void addExperience(int);
    virtual void addLevels(int);
    virtual void setContainerData(class IContainerManager &, int, int) = 0;
    virtual void slotChanged(class IContainerManager &, class Container &, int, class ItemStack const &, class ItemStack const &, bool) = 0;
    virtual void inventoryChanged(class Container &, int, class ItemStack const &, class ItemStack const &, bool);
    virtual void refreshContainer(class IContainerManager &) = 0;
    virtual void deleteContainerManager();
    virtual void setFieldOfViewModifier(float);
    virtual bool isActorRelevant(class Actor const &);
    virtual bool isTeacher() const = 0;
    virtual void onSuspension();
    virtual void onLinkedSlotsChanged();
    virtual void startCooldown(class Item const *, bool);
    virtual int getItemCooldownLeft(class HashedString const &) const;
    virtual int getItemCooldownLeft(unsigned __int64) const;
    virtual int getMaxItemCooldownLeft() const;
    virtual bool isItemOnCooldown(class HashedString const &) const;
    virtual void sendInventoryTransaction(class InventoryTransaction const &) const = 0;
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const = 0;
    virtual void sendNetworkPacket(class Packet &) const;
    virtual class PlayerEventCoordinator & getPlayerEventCoordinator() = 0;
    virtual class MoveInputHandler * tryGetMoveInputHandler() const = 0;
    virtual enum InputMode getInputMode() const = 0;
    virtual enum ClientPlayMode getPlayMode() const = 0;
    virtual void reportMovementTelemetry(enum MovementEventType);
    virtual void __unk_vfn_448();
    virtual std::string getXuid() const;
    virtual struct PlayerMovementSettings const & getMovementSettings() const;
    virtual void addSavedChunk(class ChunkPos const &);
    virtual void onMovePlayerPacketNormal(class Vec3 const &, class Vec2 const &, float);
    virtual class std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYER
    MCVAPI bool canInteractWithOtherEntitiesInGame() const;
    MCVAPI void displayChatMessage(std::string const &, std::string const &);
    MCVAPI void displayClientMessage(std::string const &);
    MCVAPI bool getAlwaysShowNameTag() const;
    MCVAPI enum StructureFeatureType getCurrentStructureFeature() const;
    MCVAPI unsigned int getUserId() const;
    MCVAPI bool isAutoJumpEnabled() const;
    MCVAPI bool isCreativeModeAllowed();
    MCVAPI bool isInTrialMode();
    MCVAPI bool isPlayer() const;
    MCVAPI bool isShootable();
    MCVAPI bool isSimulated() const;
    MCVAPI void openBook(int, bool, int, class BlockActor *);
    MCVAPI void openChalkboard(class ChalkboardBlockActor &, bool);
    MCVAPI void openPortfolio();
    MCVAPI void openSign(class BlockPos const &);
    MCVAPI void playEmote(std::string const &);
    MCVAPI void resetRot();
    MCVAPI void stopLoading();
    MCVAPI bool useNewAi() const;
#endif
    MCAPI Player(class Level &, class PacketSender &, enum GameType, class NetworkIdentifier const &, enum SubClientId, class mce::UUID, std::string const &, std::string const &, std::unique_ptr<class Certificate>, class EntityContext &, std::string const &, std::string const &);
    MCAPI void applyExhaustion(class Vec3 const &);
    MCAPI void broadcastPlayerSpawnedMobEvent(enum ActorType, enum MobSpawnMethod);
    MCAPI bool canBeSeenOnMap() const;
    MCAPI bool canDestroy(class Block const &) const;
    MCAPI bool canSleep() const;
    MCAPI bool canStackInOffhand(class ItemStack const &) const;
    MCAPI bool canUseAbility(enum AbilitiesIndex) const;
    MCAPI bool canUseOperatorBlocks() const;
    MCAPI void causeFoodExhaustion(float);
    MCAPI void clearRespawnPosition();
    MCAPI void eat(class ItemStack const &);
    MCAPI void eat(int, float);
    MCAPI bool equippedArmorItemCanBeMoved(class ItemStack const &) const;
    MCAPI void fireDimensionChangedEvent(class AutomaticID<class Dimension, int>);
    MCAPI bool forceAllowEating() const;
    MCAPI class Agent * getAgent() const;
    MCAPI struct ActorUniqueID getAgentID() const;
    MCAPI class Agent * getAgentIfAllowed(bool, struct ActorUniqueID) const;
    MCAPI class BlockPos const & getBedPosition() const;
    MCAPI __int64 getBlockedUsingDamagedShieldTimeStamp() const;
    MCAPI __int64 getBlockedUsingShieldTimeStamp() const;
    MCAPI __int64 getBlockingStartTimeStamp() const;
    MCAPI class Vec3 getCapePos(float);
    MCAPI unsigned int getChunkRadius() const;
    MCAPI class std::weak_ptr<class IContainerManager> getContainerManager();
    MCAPI class ItemStack const & getCurrentActiveShield() const;
    MCAPI float getDestroyProgress(class Block const &) const;
    MCAPI float getDestroySpeed(class Block const &) const;
    MCAPI int getDirection() const;
    MCAPI int getEnchantmentSeed() const;
    MCAPI class AutomaticID<class Dimension, int> getExpectedSpawnDimensionId() const;
    MCAPI class BlockPos const & getExpectedSpawnPosition() const;
    MCAPI std::string getInteractText() const;
    MCAPI class Container & getInventory();
    MCAPI class ItemStack const & getItemInUse() const;
    MCAPI std::string getItemInteractText(class Item const &) const;
    MCAPI class ItemStackNetManagerBase * getItemStackNetManager();
    MCAPI class ItemStackNetManagerBase const * getItemStackNetManager() const;
    MCAPI float getLuck();
    MCAPI int getMapIndex();
    MCAPI class MoveInputHandler * getMoveInputHandler() const;
    MCAPI void getNewEnchantmentSeed();
    MCAPI class AABB getPickupArea() const;
    MCAPI enum BuildPlatform getPlatform() const;
    MCAPI std::string const & getPlatformOnlineId() const;
    MCAPI enum GameType getPlayerGameType() const;
    MCAPI int getPlayerIndex() const;
    MCAPI int getPlayerLevel() const;
    MCAPI enum PlayerPermissionLevel getPlayerPermissionLevel() const;
    MCAPI std::string const & getPlayerSessionId() const;
    MCAPI class ItemStack const & getPlayerUIItem(enum PlayerUISlot);
    MCAPI class BlockPos const & getRespawnAnchorPosition() const;
    MCAPI class ItemStack const & getSelectedItem() const;
    MCAPI int getSelectedItemSlot() const;
    MCAPI class SerializedSkin & getSkin();
    MCAPI class SerializedSkin const & getSkin() const;
    MCAPI float getSleepRotation() const;
    MCAPI class AutomaticID<class Dimension, int> getSpawnDimension() const;
    MCAPI class BlockPos const & getSpawnPosition() const;
    MCAPI class PlayerInventory & getSupplies();
    MCAPI class PlayerInventory const & getSupplies() const;
    MCAPI std::vector<struct ActorUniqueID> const & getTrackedBosses();
    MCAPI enum GameType getUnmappedPlayerGameType() const;
    MCAPI bool getUsedPotion();
    MCAPI int getXpNeededForNextLevel() const;
    MCAPI bool hasBedPosition() const;
    MCAPI bool hasOpenContainer() const;
    MCAPI bool hasOpenContainerOfContainerType(enum ContainerType) const;
    MCAPI bool hasOwnedChunkSource() const;
    MCAPI bool hasResource(class ItemDescriptor const &);
    MCAPI bool hasRespawnAnchorPosition() const;
    MCAPI bool hasRespawnPosition() const;
    MCAPI bool interact(class Actor &, class Vec3 const &);
    MCAPI bool is2DPositionRelevant(class AutomaticID<class Dimension, int>, class BlockPos const &);
    MCAPI bool isFlying() const;
    MCAPI bool isForcedRespawn() const;
    MCAPI bool isHiddenFrom(class Mob &) const;
    MCAPI bool isHungry() const;
    MCAPI bool isHurt();
    MCAPI bool isInCreativeMode() const;
    MCAPI bool isInRaid() const;
    MCAPI bool isRespawningFromTheEnd() const;
    MCAPI bool isSleepingLongEnough() const;
    MCAPI bool isSpawned() const;
    MCAPI bool isUsingItem() const;
    MCAPI void loadLastDeathLocation(class CompoundTag const &);
    MCAPI void recheckSpawnPosition();
    MCAPI void releaseUsingItem();
    MCAPI void resetPlayerLevel();
    MCAPI void resetToDefaultGameMode();
    MCAPI void setAgent(class Agent *);
    MCAPI void setAllPlayersSleeping();
    MCAPI void setBedRespawnPosition(class BlockPos const &);
    MCAPI void setBlockRespawnUntilClientMessage(bool);
    MCAPI void setChunkRadius(unsigned int);
    MCAPI void setContainerManager(class std::shared_ptr<class IContainerManager>);
    MCAPI void setCursorSelectedItem(class ItemStack const &);
    MCAPI void setCursorSelectedItemGroup(class ItemGroup const &);
    MCAPI void setEnchantmentSeed(int);
    MCAPI void setHasDied(bool);
    MCAPI void setHasSeenCredits(bool);
    MCAPI void setLastDeathDimension(class AutomaticID<class Dimension, int>);
    MCAPI void setMapIndex(int);
    MCAPI void setPermissions(enum CommandPermissionLevel);
    MCAPI void setPlatformOnlineId(std::string const &);
    MCAPI void setPlayerIndex(int);
    MCAPI void setPlayerUIItem(enum PlayerUISlot, class ItemStack const &);
    MCAPI void setRespawnPosition(class BlockPos const &, class AutomaticID<class Dimension, int>);
    MCAPI void setRespawnPositionCandidate();
    MCAPI void setRespawnReady(class Vec3 const &);
    MCAPI void setSelectedItem(class ItemStack const &);
    MCAPI class ItemStack const & setSelectedSlot(int);
    MCAPI void setSpawnBlockRespawnPosition(class BlockPos const &, class AutomaticID<class Dimension, int>);
    MCAPI void setUsedPotion(bool);
    MCAPI bool shouldShowCredits() const;
    MCAPI void spawnExperienceOrb(class Vec3 const &, int);
    MCAPI void startCooldown(class HashedString const &, int, bool);
    MCAPI void startGliding();
    MCAPI void startUsingItem(class ItemStack const &, int);
    MCAPI void stopGliding();
    MCAPI void stopUsingItem();
    MCAPI bool take(class Actor &, int, int);
    MCAPI void updateBlockSourceTick();
    MCAPI void updateInventoryTransactions();
    MCAPI void updateSkin(class SerializedSkin const &, int);
    MCAPI void updateSpawnChunkView();
    MCAPI void updateTrackedBosses();
    MCAPI void useSelectedItem(enum ItemUseMethod, bool);
MCAPI static float const DEFAULT_BB_HEIGHT;
MCAPI static float const DEFAULT_BB_WIDTH;
MCAPI static float const DEFAULT_FLY_SPEED;
MCAPI static float const DEFAULT_PLAYER_HEIGHT_OFFSET;
MCAPI static float const DEFAULT_WALK_SPEED;
MCAPI static float const DISTANCE_TO_TRANSFORM_EVENT;
MCAPI static float const DISTANCE_TO_TRAVELLED_EVENT;
MCAPI static class Attribute const EXHAUSTION;
MCAPI static class Attribute const EXPERIENCE;
MCAPI static int const GLIDE_STOP_DELAY;
MCAPI static class Attribute const HUNGER;
MCAPI static int const ITEM_USE_INTERVAL_COUNT;
MCAPI static int const ITEM_USE_INTERVAL_DURATION;
MCAPI static class Attribute const LEVEL;
MCAPI static int const MAX_ITEM_USE_DURATION;
MCAPI static float const PLAYER_ALIVE_HEIGHT;
MCAPI static float const PLAYER_ALIVE_WIDTH;
MCAPI static float const PLAYER_DEAD_HEIGHT;
MCAPI static float const PLAYER_DEAD_WIDTH;
MCAPI static float const PLAYER_DOWN_SWIM_SPEED;
MCAPI static float const PLAYER_GLIDING_CAMERA_OFFSET;
MCAPI static float const PLAYER_ITEM_USE_DEFAULT_SPEED_MODIFIER;
MCAPI static float const PLAYER_SLEEPING_CAMERA_OFFSET;
MCAPI static float const PLAYER_SLEEPING_HEIGHT;
MCAPI static float const PLAYER_SLEEPING_WIDTH;
MCAPI static float const PLAYER_SNEAK_OFFSET;
MCAPI static float const PLAYER_SWIMMING_CAMERA_OFFSET;
MCAPI static float const PLAYER_SWIM_BREACH_ANGLE;
MCAPI static float const PLAYER_SWIM_ENTER_THRESHOLD;
MCAPI static float const PLAYER_SWIM_FLY_MULTI;
MCAPI static float const PLAYER_UP_SWIM_SPEED;
MCAPI static class Attribute const SATURATION;
MCAPI static unsigned int const SPAWN_CHUNK_LARGE_JUMP;
MCAPI static unsigned int const SPAWN_CHUNK_RADIUS;
    MCAPI static void _aiStep(struct IPlayerMovementProxy &);
    MCAPI static void _travel(struct IPlayerMovementProxy &, float, float, float);
    MCAPI static bool canJump(struct IPlayerMovementProxy &);
    MCAPI static bool checkAndFixSpawnPosition(class Vec3 &, std::vector<class gsl::not_null<class BlockSource *>>, class AABB, bool, bool, bool, bool, bool, bool, short);
    MCAPI static bool checkNeedAutoJump(struct IPlayerMovementProxy *, float, float);
    MCAPI static void goDownInWater(struct IActorMovementProxy &);
    MCAPI static void handleJumpEffects(struct IPlayerMovementProxy &);
    MCAPI static bool isDangerousVolume(class BlockSource &, class AABB const &, bool);
    MCAPI static class Player * tryGetFromComponent(class FlagComponent<struct PlayerComponentFlag> const &, class ActorOwnerComponent &, bool);
    MCAPI static class Player * tryGetFromEntity(class StackRefResultT<struct EntityRefTraits>, bool);
    MCAPI static class Player * tryGetFromEntity(class EntityContext &, bool);

//protected:
    MCAPI bool _checkAndFixSpawnPosition(class Vec3 &, std::vector<class gsl::not_null<class BlockSource *>>, bool, bool, bool, bool, bool) const;
    MCAPI void _chooseSpawnArea();
    MCAPI bool _chooseSpawnPositionWithinArea();
    MCAPI void _registerPlayerAttributes();
    MCAPI void _updateInteraction();
    MCAPI bool _validateSpawnPositionAvailability(class Vec3 const &, class BlockSource *, class Vec3 const *const) const;
    MCAPI bool checkBed(class BlockSource *, class Vec3 const *const);
    MCAPI bool checkSpawnBlock(class BlockSource const &) const;
    MCAPI static bool _isDangerousBlock(class Block const &, bool);

//private:
    MCAPI void _addLevels(int);
    MCAPI bool _blockUsingShield(class ActorDamageSource const &, float);
    MCAPI void _ensureSafeSpawnPosition(class Vec3 &);
    MCAPI bool _findFallbackSpawnPosition(class Vec3 &, std::vector<class gsl::not_null<class BlockSource *>>, unsigned int);
    MCAPI void _handleCarriedItemInteractText();
    MCAPI bool _isChunkSourceLoaded(class Vec3 const &, class BlockSource const &) const;
    MCAPI void _registerElytraLoopSound();
    MCAPI void _sendShieldUpdatePacket(class ShieldItem const &, class ItemStack const &, class ItemStack const &, enum ContainerID, int);

protected:

private:

};