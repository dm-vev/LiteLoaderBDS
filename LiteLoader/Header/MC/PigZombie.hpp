/**
 * @file  PigZombie.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Zombie.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PigZombie.
 *
 */
class PigZombie : public Zombie {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PIGZOMBIE
public:
    class PigZombie& operator=(class PigZombie const &) = delete;
    PigZombie(class PigZombie const &) = delete;
    PigZombie() = delete;
#endif

public:
    virtual ~PigZombie();
    virtual void __unk_vfn_41();
    virtual void normalTick();
    virtual void __unk_vfn_61();
    virtual void __unk_vfn_68();
    virtual void __unk_vfn_82();
    virtual void __unk_vfn_85();
    virtual void __unk_vfn_88();
    virtual void __unk_vfn_96();
    virtual void __unk_vfn_99();
    virtual void __unk_vfn_106();
    virtual void __unk_vfn_108();
    virtual void __unk_vfn_109();
    virtual void __unk_vfn_111();
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
    virtual void __unk_vfn_285();
    virtual bool checkSpawnRules(bool);
    virtual void __unk_vfn_313();
    virtual void __unk_vfn_317();
    virtual int getAttackTime();
    virtual void __unk_vfn_351();
    virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PIGZOMBIE
#endif
    MCAPI PigZombie(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

//private:

private:
MCAPI static class mce::UUID const SPEED_MODIFIER_ATTACK_UUID;

};