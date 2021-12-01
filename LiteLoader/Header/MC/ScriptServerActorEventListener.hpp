// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTSERVERACTOREVENTLISTENER
#include "Extra/ScriptServerActorEventListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSERVERACTOREVENTLISTENER
class ScriptServerActorEventListener {
#include "Extra/ScriptServerActorEventListenerAPI.hpp"
public:
    virtual ~ScriptServerActorEventListener();
    virtual int /*enum EventResult*/ onActorAttack(class Actor&, class Actor&, int);
    virtual int /*enum EventResult*/ onActorHurt(struct ActorHurtEvent const&);
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual int /*enum EventResult*/ onActorTick(class Actor&);
    virtual int /*enum EventResult*/ onActorSneakChanged(class Actor&, bool);
    virtual int /*enum EventResult*/ onActorStartRiding(class Actor&, class Actor&);
    virtual int /*enum EventResult*/ onActorStopRiding(class Actor&, bool, bool, bool);
    virtual int /*enum EventResult*/ onActorDeath(class Actor&, class ActorDamageSource const&, int /*enum ActorType*/);
    virtual int /*enum EventResult*/ onActorDefinitionEventTriggered(struct ActorDefinitionEvent const&);
    virtual int /*enum EventResult*/ onActorUseItem(struct ActorUseItemEvent const&);
    virtual void unk_vfn_12();
    virtual int /*enum EventResult*/ onActorCreated(class Actor&);
    virtual int /*enum EventResult*/ onProjectileHit(struct ProjectileHitEvent const&);
    virtual void unk_vfn_15();
    virtual void unk_vfn_16();
    virtual int /*enum EventResult*/ onActorAcquiredItem(struct ActorAcquiredItemEvent const&);
    virtual void unk_vfn_18();
    virtual int /*enum EventResult*/ onActorDroppedItem(class Actor&, class ItemInstance const&);
    virtual int /*enum EventResult*/ onActorCarriedItemChanged(class Actor&, class ItemInstance const&, class ItemInstance const&, int /*enum HandSlot*/);
    virtual int /*enum EventResult*/ onActorEquippedArmor(class Actor&, class ItemInstance const&, int /*enum ArmorSlot*/);
    virtual int /*enum EventResult*/ onActorRemoved(struct ActorRemovedEvent const&);
    virtual void unk_vfn_23();
    virtual void unk_vfn_24();
    virtual void unk_vfn_25();
    virtual void unk_vfn_26();
    virtual void unk_vfn_27();
    virtual void unk_vfn_28();
    virtual void unk_vfn_29();
    virtual void unk_vfn_30();
    virtual void unk_vfn_31();

public:
    MCAPI ScriptServerActorEventListener(class MinecraftServerScriptEngine&);
};