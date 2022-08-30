/**
 * @file  PredictableProjectile.hpp
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
 * @brief MC class PredictableProjectile.
 *
 */
class PredictableProjectile : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PREDICTABLEPROJECTILE
public:
    class PredictableProjectile& operator=(class PredictableProjectile const &) = delete;
    PredictableProjectile(class PredictableProjectile const &) = delete;
    PredictableProjectile() = delete;
#endif

public:
    virtual void _doInitialMove();
    virtual ~PredictableProjectile();
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
    virtual void __unk_vfn_222();
    virtual void __unk_vfn_223();
    virtual void __unk_vfn_248();
    virtual void __unk_vfn_251();
    virtual void __unk_vfn_269();
    virtual void __unk_vfn_277();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PREDICTABLEPROJECTILE
#endif
    MCAPI PredictableProjectile(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};