/**
 * @file  HangingActor.hpp
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
 * @brief MC class HangingActor.
 *
 */
class HangingActor : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HANGINGACTOR
public:
    class HangingActor& operator=(class HangingActor const &) = delete;
    HangingActor(class HangingActor const &) = delete;
    HangingActor() = delete;
#endif

public:
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const &);
    virtual ~HangingActor();
    virtual void move(class Vec3 const &);
    virtual void __unk_vfn_41();
    virtual void normalTick();
    virtual void __unk_vfn_61();
    virtual void __unk_vfn_68();
    virtual void __unk_vfn_82();
    virtual void __unk_vfn_85();
    virtual float getBrightness(float) const;
    virtual void __unk_vfn_88();
    virtual bool isPickable();
    virtual void __unk_vfn_96();
    virtual void __unk_vfn_99();
    virtual void __unk_vfn_106();
    virtual void __unk_vfn_108();
    virtual void __unk_vfn_109();
    virtual void __unk_vfn_111();
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    virtual void __unk_vfn_182();
    virtual void __unk_vfn_196();
    virtual void __unk_vfn_222();
    virtual void __unk_vfn_223();
    virtual void setSize(float, float);
    virtual void __unk_vfn_248();
    virtual void __unk_vfn_251();
    virtual void __unk_vfn_269();
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    virtual void __unk_vfn_277();
    virtual void __unk_vfn_285();
    virtual void setDir(int);
    virtual int getWidth() const = 0;
    virtual int getHeight() const = 0;
    virtual void dropItem() = 0;
    virtual bool placeHangingEntity(class BlockSource &, int);
    virtual bool wouldSurvive(class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HANGINGACTOR
#endif
    MCAPI HangingActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI int getDirection() const;

//protected:
    MCAPI void _calculateAABB();
    MCAPI void _calculateActorPositionFromPlacementPosition(class BlockPos const &);
    MCAPI bool _wouldSurvive(class BlockSource &, class BlockPos const &, bool);

//private:
    MCAPI bool _blockContainsObstruction(class BlockSource const &, class BlockPos const &) const;
    MCAPI bool _canSurviveOnBlock(class BlockSource const &, class BlockPos const &, bool) const;

protected:

private:
MCAPI static float const HANGING_OFFSET;

};