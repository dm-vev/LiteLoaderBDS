// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Actor.hpp"
#define EXTRA_INCLUDE_PART_EXPERIENCEORB
#include "Extra/ExperienceOrbAPI.hpp"
#undef EXTRA_INCLUDE_PART_EXPERIENCEORB
class ExperienceOrb : public Actor {
#include "Extra/ExperienceOrbAPI.hpp"
public:
    virtual void reloadHardcoded(int /*enum Actor::InitializationMethod*/, class VariantParameterList const&);
    virtual ~ExperienceOrb();
    virtual bool isRuntimePredictedMovementEnabled();
    virtual void unk_vfn_22();
    virtual float getInterpolatedHeadRot(float);
    virtual float getInterpolatedBodyYaw(float);
    virtual class Vec3 getInterpolatedRidingOffset(float);
    virtual void unk_vfn_41();
    virtual void normalTick();
    virtual float getRidingHeight();
    virtual void unk_vfn_61();
    virtual void unk_vfn_68();
    virtual float getCameraOffset();
    virtual float getShadowRadius();
    virtual void unk_vfn_82();
    virtual void unk_vfn_87();
    virtual void playerTouch(class Player&);
    virtual bool isPickable();
    virtual void unk_vfn_94();
    virtual bool isSleeping();
    virtual void setSleeping(bool);
    virtual void unk_vfn_97();
    virtual bool isBlocking();
    virtual bool isDamageBlocked(class ActorDamageSource const&);
    virtual void unk_vfn_103();
    virtual void unk_vfn_104();
    virtual bool isSurfaceMob();
    virtual void unk_vfn_106();
    virtual void unk_vfn_107();
    virtual void unk_vfn_108();
    virtual class Actor* findAttackTarget();
    virtual bool isValidTarget(class Actor*);
    virtual void adjustDamageAmount(int&);
    virtual void onTame();
    virtual void onFailedTame();
    virtual bool isJumping();
    virtual void unk_vfn_130();
    virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    virtual bool isInvulnerableTo(class ActorDamageSource const&);
    virtual void animateHurt();
    virtual void onBounceStarted(class BlockPos const&, class Block const&);
    virtual void unk_vfn_144();
    virtual void awardKillScore(class Actor&, int);
    virtual int /*enum ArmorMaterialType*/ getArmorMaterialTypeInSlot(int /*enum ArmorSlot*/);
    virtual int /*enum ArmorTextureType*/ getArmorMaterialTextureTypeInSlot(int /*enum ArmorSlot*/);
    virtual float getArmorColorInSlot(int /*enum ArmorSlot*/, int);
    virtual void setEquippedSlot(int /*enum EquipmentSlot*/, class ItemStack const&);
    virtual int /*enum ActorType*/ getEntityTypeId();
    virtual class HashedString const& queryEntityRenderer();
    virtual struct ActorUniqueID getSourceUniqueID();
    virtual bool canFreeze();
    virtual int getPortalWaitTime();
    virtual bool canChangeDimensions();
    virtual void unk_vfn_184();
    virtual struct ActorUniqueID getControllingPlayer();
    virtual bool canPickupItem(class ItemStack const&);
    virtual bool canBePulledIntoVehicle();
    virtual bool inCaravan();
    virtual void unk_vfn_197();
    virtual bool canSynchronizeNewEntity();
    virtual void buildDebugInfo(std::string&);
    virtual int getDeathTime();
    virtual void swing();
    virtual void unk_vfn_222();
    virtual void unk_vfn_223();
    virtual float getYHeadRot();
    virtual bool isWorldBuilder();
    virtual void unk_vfn_229();
    virtual bool isAdventure();
    virtual bool canDestroyBlock(class Block const&);
    virtual void setAuxValue(int);
    virtual void stopSpinAttack();
    virtual void unk_vfn_243();
    virtual void unk_vfn_246();
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    virtual void unk_vfn_258();
    virtual bool _hurt(class ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    virtual void addAdditionalSaveData(class CompoundTag&);
    virtual void _playStepSound(class BlockPos const&, class Block const&);
    virtual void unk_vfn_266();
    virtual void doWaterSplashEffect();
    virtual void _onSizeUpdated();
    virtual void unk_vfn_275();

public:
    MCAPI ExperienceOrb(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class OwnerPtrT<struct EntityRefTraits> const&);
    MCAPI int getIconIndex() const;
    MCAPI void setValue(int);

    MCAPI static void spawnOrbs(class BlockSource&, class Vec3 const&, int, int, enum ExperienceOrb::DropType, class Player*);
    MCAPI static void spawnOrbs(class BlockSource&, class Vec3 const&, int, enum ExperienceOrb::DropType, class Player*);

private:
    MCAPI void _handleMending(class Player&);

    MCAPI static int const LIFETIME;
};