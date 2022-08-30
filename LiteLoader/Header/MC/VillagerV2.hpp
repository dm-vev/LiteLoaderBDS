/**
 * @file  VillagerV2.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "VillagerBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VillagerV2.
 *
 */
class VillagerV2 : public VillagerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGERV2
public:
    class VillagerV2& operator=(class VillagerV2 const &) = delete;
    VillagerV2(class VillagerV2 const &) = delete;
    VillagerV2() = delete;
#endif

public:
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    virtual ~VillagerV2();
    virtual void remove();
    virtual bool isRuntimePredictedMovementEnabled() const;
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
    virtual void __unk_vfn_182();
    virtual void __unk_vfn_196();
    virtual void buildDebugInfo(std::string &) const;
    virtual void __unk_vfn_222();
    virtual void __unk_vfn_223();
    virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
    virtual void __unk_vfn_248();
    virtual void __unk_vfn_251();
    virtual void die(class ActorDamageSource const &);
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    virtual void __unk_vfn_269();
    virtual void __unk_vfn_277();
    virtual void __unk_vfn_285();
    virtual void travel(float, float, float);
    virtual void __unk_vfn_313();
    virtual void __unk_vfn_317();
    virtual void __unk_vfn_351();
    virtual void newServerAiStep();
    virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VILLAGERV2
#endif
    MCAPI VillagerV2(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};