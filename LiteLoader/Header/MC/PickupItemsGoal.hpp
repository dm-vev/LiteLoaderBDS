/**
 * @file  PickupItemsGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PickupItemsGoal.
 *
 */
class PickupItemsGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PICKUPITEMSGOAL
public:
    class PickupItemsGoal& operator=(class PickupItemsGoal const &) = delete;
    PickupItemsGoal(class PickupItemsGoal const &) = delete;
    PickupItemsGoal() = delete;
#endif

public:
    virtual ~PickupItemsGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void __unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PICKUPITEMSGOAL
#endif
    MCAPI PickupItemsGoal(class Mob &, float, bool, int, int, float, bool, bool, int, bool, bool, std::vector<class ItemDescriptor> const &);

//private:
    MCAPI void _dropItem(class ItemStack const &) const;
    MCAPI std::vector<class WeakEntityRef> _filterValidTargets(std::vector<struct DistanceSortedActor> const &) const;
    MCAPI struct Shareable const * _getShareableItem(class ItemStack const &) const;
    MCAPI bool _hasRoomForCarriedItem() const;
    MCAPI void _pickItemUp(class ItemActor *);

private:

};