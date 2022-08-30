/**
 * @file  Squid.hpp
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
 * @brief MC class Squid.
 *
 */
class Squid : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SQUID
public:
    class Squid& operator=(class Squid const &) = delete;
    Squid(class Squid const &) = delete;
    Squid() = delete;
#endif

public:
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    virtual ~Squid();
    virtual void __unk_vfn_41();
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
    virtual void handleEntityEvent(enum ActorEvent, int);
    virtual void __unk_vfn_182();
    virtual void __unk_vfn_196();
    virtual void __unk_vfn_222();
    virtual void __unk_vfn_223();
    virtual void __unk_vfn_248();
    virtual void __unk_vfn_251();
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    virtual void __unk_vfn_269();
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    virtual void __unk_vfn_277();
    virtual void __unk_vfn_285();
    virtual void aiStep();
    virtual bool checkSpawnRules(bool);
    virtual bool checkSpawnObstruction() const;
    virtual void __unk_vfn_313();
    virtual void __unk_vfn_317();
    virtual void __unk_vfn_351();
    virtual void __unk_vfn_365();
    virtual enum LevelSoundEvent _getInkSquirtSoundEvent() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SQUID
#endif
    MCAPI Squid(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &, class mce::Color const &);
    MCAPI void postAiStep();
    MCAPI void spawnInkParticles();

//private:
    MCAPI class Vec3 _randomInkDir();

private:

};