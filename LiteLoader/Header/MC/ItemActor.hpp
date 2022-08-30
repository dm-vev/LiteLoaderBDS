/**
 * @file  ItemActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemActor.
 *
 */
class ItemActor : public Actor {

#define AFTER_EXTRA
// Add Member There
public:
    LIAPI ItemStack* getItemStack();
    LIAPI int getDespawnTime();
    LIAPI bool setDespawnTime(int);
    LIAPI int getLatestSpawnTime();
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMACTOR
public:
    class ItemActor& operator=(class ItemActor const &) = delete;
    ItemActor(class ItemActor const &) = delete;
    ItemActor() = delete;
#endif

public:
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    virtual ~ItemActor();
    virtual bool isRuntimePredictedMovementEnabled() const;
    virtual bool isFireImmune() const;
    virtual void __unk_vfn_41();
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    virtual void normalTick();
    virtual void __unk_vfn_61();
    virtual void __unk_vfn_68();
    virtual void __unk_vfn_82();
    virtual void __unk_vfn_85();
    virtual void __unk_vfn_88();
    virtual void playerTouch(class Player &);
    virtual void __unk_vfn_96();
    virtual void __unk_vfn_99();
    virtual void __unk_vfn_106();
    virtual void __unk_vfn_108();
    virtual void __unk_vfn_109();
    virtual void __unk_vfn_111();
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    virtual void handleEntityEvent(enum ActorEvent, int);
    virtual struct ActorUniqueID getSourceUniqueID() const;
    virtual class AABB getLiquidAABB(enum MaterialType) const;
    virtual void __unk_vfn_182();
    virtual void __unk_vfn_196();
    virtual bool canSynchronizeNewEntity() const;
    virtual void __unk_vfn_222();
    virtual void __unk_vfn_223();
    virtual void __unk_vfn_248();
    virtual void __unk_vfn_251();
    virtual void __unk_vfn_269();
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    virtual void __unk_vfn_277();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMACTOR
    MCVAPI bool canMakeStepSound() const;
#endif
    MCAPI ItemActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void postNormalTick();
    MCAPI void setSourceEntity(class Actor const *);
    MCAPI static class ItemActor * tryGetFromEntity(class EntityContext &, bool);

//private:
    MCAPI void _addComponents();
    MCAPI void _dropContents();
    MCAPI bool _merge(class ItemActor *);
    MCAPI void _validateItem();

private:
MCAPI static int const LIFETIME;

};