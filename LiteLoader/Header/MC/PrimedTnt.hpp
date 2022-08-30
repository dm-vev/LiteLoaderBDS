/**
 * @file  PrimedTnt.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PrimedTnt.
 *
 */
class PrimedTnt : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRIMEDTNT
public:
    class PrimedTnt& operator=(class PrimedTnt const &) = delete;
    PrimedTnt(class PrimedTnt const &) = delete;
    PrimedTnt() = delete;
#endif

public:
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const &);
    virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    virtual ~PrimedTnt();
    virtual enum ActorType getOwnerEntityType();
    virtual void __unk_vfn_41();
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    virtual void normalTick();
    virtual void __unk_vfn_61();
    virtual void __unk_vfn_68();
    virtual float getShadowHeightOffs();
    virtual float getShadowRadius() const;
    virtual void __unk_vfn_82();
    virtual void __unk_vfn_85();
    virtual void __unk_vfn_88();
    virtual bool isPickable();
    virtual void __unk_vfn_96();
    virtual void __unk_vfn_99();
    virtual void __unk_vfn_106();
    virtual void __unk_vfn_108();
    virtual void __unk_vfn_109();
    virtual void __unk_vfn_111();
    virtual struct ActorUniqueID getSourceUniqueID() const;
    virtual void __unk_vfn_182();
    virtual void __unk_vfn_196();
    virtual void __unk_vfn_222();
    virtual void __unk_vfn_223();
    virtual void __unk_vfn_248();
    virtual void __unk_vfn_251();
    virtual void __unk_vfn_269();
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    virtual void __unk_vfn_277();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PRIMEDTNT
#endif
    MCAPI PrimedTnt(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void postNormalTick();

};