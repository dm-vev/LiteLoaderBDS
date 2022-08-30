/**
 * @file  EnderDragon.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnderDragon.
 *
 */
class EnderDragon : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERDRAGON
public:
    class EnderDragon& operator=(class EnderDragon const &) = delete;
    EnderDragon(class EnderDragon const &) = delete;
    EnderDragon() = delete;
#endif

public:
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    virtual ~EnderDragon();
    virtual void remove();
    virtual void __unk_vfn_41();
    virtual void __unk_vfn_61();
    virtual void __unk_vfn_68();
    virtual float getShadowRadius() const;
    virtual class Vec3 getHeadLookVector(float) const;
    virtual void __unk_vfn_82();
    virtual void __unk_vfn_85();
    virtual void __unk_vfn_88();
    virtual bool isImmobile() const;
    virtual void __unk_vfn_96();
    virtual void __unk_vfn_99();
    virtual void __unk_vfn_106();
    virtual void __unk_vfn_108();
    virtual void __unk_vfn_109();
    virtual void __unk_vfn_111();
    virtual void setSitting(bool);
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    virtual void handleEntityEvent(enum ActorEvent, int);
    virtual bool canChangeDimensionsUsingPortal() const;
    virtual void __unk_vfn_182();
    virtual bool canBePulledIntoVehicle() const;
    virtual void __unk_vfn_196();
    virtual bool canBeAffected(class MobEffectInstance const &) const;
    virtual void __unk_vfn_222();
    virtual void __unk_vfn_223();
    virtual void __unk_vfn_248();
    virtual void __unk_vfn_251();
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    virtual void __unk_vfn_269();
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    virtual void __unk_vfn_277();
    virtual void _onSizeUpdated();
    virtual void __unk_vfn_285();
    virtual void aiStep();
    virtual void __unk_vfn_313();
    virtual void __unk_vfn_317();
    virtual void __unk_vfn_351();
    virtual void tickDeath();
    virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDERDRAGON
    MCVAPI bool canExistInPeaceful() const;
    MCVAPI bool isFishable() const;
#endif
    MCAPI EnderDragon(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void dieNaturally();
    MCAPI int findClosestNode(class Vec3 const &);
    MCAPI int findClosestNode();
    MCAPI std::unique_ptr<class Path> findPath(int, int, class PathfinderNode *);
    MCAPI int getFlameCount() const;
    MCAPI float getFlapTime() const;
    MCAPI class BlockPos getHeadPos() const;
    MCAPI std::vector<float> const getLatencyPos(int, float) const;
    MCAPI int getNumCrystalsAlive();
    MCAPI class Vec3 getTargetPos() const;
    MCAPI void incrementFlameCount();
    MCAPI void onCrystalDestroyed(class EnderCrystal const &, class BlockPos, class ActorDamageSource const &);
    MCAPI void postAiStep();
    MCAPI void resetFlameCount();
    MCAPI void setDragonKilledCallback(class std::function<void (class EnderDragon &)>);
    MCAPI void setHasDragonPreviouslyBeenKilled(bool);
    MCAPI void setNumCrystalsAlive(int);
    MCAPI void setTargetPos(class Vec3);
    MCAPI void setTurnSpeed(float);

//protected:
    MCAPI bool _hurt(class AABB *, class ActorDamageSource const &, float);

//private:
    MCAPI void _checkCrystals();
    MCAPI bool _checkWalls(class AABB);
    MCAPI void _hurtEntities(class gsl::span<class gsl::not_null<class Actor *>, -1>) const;
    MCAPI void _knockBack(class gsl::span<class gsl::not_null<class Actor *>, -1>) const;
    MCAPI std::unique_ptr<class Path> _reconstructPath(class PathfinderNode &, class PathfinderNode &, enum PathCompletionType);
    MCAPI static bool _isDragonImmuneBlock(class BlockLegacy const &);

protected:

private:
MCAPI static int GROWL_INTERVAL_MAX;
MCAPI static int GROWL_INTERVAL_MIN;
MCAPI static int MAX_PATH_RADIUS;
MCAPI static float SITTING_ALLOWED_DAMAGE_PERCENTAGE;

};