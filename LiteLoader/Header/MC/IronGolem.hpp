/**
 * @file  IronGolem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IronGolem.
 *
 */
class IronGolem : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IRONGOLEM
public:
    class IronGolem& operator=(class IronGolem const &) = delete;
    IronGolem(class IronGolem const &) = delete;
    IronGolem() = delete;
#endif

public:
    virtual ~IronGolem();
    virtual void __unk_vfn_41();
    virtual void __unk_vfn_61();
    virtual void __unk_vfn_68();
    virtual float getShadowRadius() const;
    virtual void __unk_vfn_82();
    virtual void __unk_vfn_85();
    virtual void __unk_vfn_88();
    virtual void __unk_vfn_96();
    virtual void __unk_vfn_99();
    virtual void __unk_vfn_106();
    virtual void __unk_vfn_108();
    virtual void __unk_vfn_109();
    virtual void __unk_vfn_111();
    virtual void handleEntityEvent(enum ActorEvent, int);
    virtual void __unk_vfn_182();
    virtual void __unk_vfn_196();
    virtual void __unk_vfn_222();
    virtual void __unk_vfn_223();
    virtual void __unk_vfn_248();
    virtual void __unk_vfn_251();
    virtual void die(class ActorDamageSource const &);
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    virtual void __unk_vfn_269();
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    virtual void __unk_vfn_277();
    virtual void __unk_vfn_285();
    virtual void hurtEffects(class ActorDamageSource const &, float, bool, bool);
    virtual void aiStep();
    virtual void __unk_vfn_313();
    virtual bool doHurtTarget(class Actor *, enum ActorDamageCause const &);
    virtual void __unk_vfn_317();
    virtual void __unk_vfn_351();
    virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IRONGOLEM
    MCVAPI bool useNewAi() const;
#endif
    MCAPI IronGolem(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI int getOfferFlowerTick() const;
    MCAPI void offerFlower(bool);

};