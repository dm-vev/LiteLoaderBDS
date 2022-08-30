/**
 * @file  Npc.hpp
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
 * @brief MC class Npc.
 *
 */
class Npc : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPC
public:
    class Npc& operator=(class Npc const &) = delete;
    Npc(class Npc const &) = delete;
    Npc() = delete;
#endif

public:
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    virtual ~Npc();
    virtual void __unk_vfn_41();
    virtual bool canShowNameTag() const;
    virtual void __unk_vfn_61();
    virtual std::string getFormattedNameTag() const;
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
    virtual bool canBePulledIntoVehicle() const;
    virtual void __unk_vfn_196();
    virtual void buildDebugInfo(std::string &) const;
    virtual bool canBeAffected(class MobEffectInstance const &) const;
    virtual void __unk_vfn_222();
    virtual void __unk_vfn_223();
    virtual void __unk_vfn_248();
    virtual void __unk_vfn_251();
    virtual void die(class ActorDamageSource const &);
    virtual void __unk_vfn_269();
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    virtual void __unk_vfn_277();
    virtual void _onSizeUpdated();
    virtual void __unk_vfn_285();
    virtual void knockback(class Actor *, int, float, float, float, float, float);
    virtual void __unk_vfn_313();
    virtual void __unk_vfn_317();
    virtual bool canExistWhenDisallowMob() const;
    virtual void __unk_vfn_351();
    virtual void newServerAiStep();
    virtual void _serverAiMobStep();
    virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPC
    MCVAPI bool breaksFallingBlocks() const;
    MCVAPI bool interactPreventDefault();
    MCVAPI bool isFishable() const;
    MCVAPI bool isTargetable() const;
    MCVAPI bool useNewAi() const;
#endif
    MCAPI Npc(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
MCAPI static std::string const SKIN_ID_TAG;
MCAPI static std::vector<struct std::pair<std::string, std::string>> const Skins;

};