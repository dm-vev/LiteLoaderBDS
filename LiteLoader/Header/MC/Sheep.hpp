/**
 * @file  Sheep.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Sheep.
 *
 */
class Sheep : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHEEP
public:
    class Sheep& operator=(class Sheep const &) = delete;
    Sheep(class Sheep const &) = delete;
    Sheep() = delete;
#endif

public:
    virtual ~Sheep();
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
    virtual void __unk_vfn_269();
    virtual void __unk_vfn_277();
    virtual void __unk_vfn_285();
    virtual void aiStep();
    virtual void __unk_vfn_313();
    virtual void __unk_vfn_317();
    virtual void __unk_vfn_351();
    virtual void jumpFromGround();
    virtual void newServerAiStep();
    virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHEEP
    MCVAPI bool useNewAi() const;
#endif
    MCAPI Sheep(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI bool isGrazing() const;

//private:

private:
MCAPI static int const EAT_ANIMATION_TICKS;

};