/**
 * @file  SnackGoal.hpp
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
 * @brief MC class SnackGoal.
 *
 */
class SnackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNACKGOAL
public:
    class SnackGoal& operator=(class SnackGoal const &) = delete;
    SnackGoal(class SnackGoal const &) = delete;
    SnackGoal() = delete;
#endif

public:
    virtual ~SnackGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void __unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &) const;
    virtual void __unk_vfn_8();
    virtual void __unk_vfn_9();
    virtual int getRandomEatingEnd() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SNACKGOAL
#endif
    MCAPI SnackGoal(class Mob &, std::vector<class ItemDescriptor> const &, float, float, float);

//private:
    MCAPI bool _hasSnackableItems();
    MCAPI bool _isSnackableItem(class ItemStack const &) const;
    MCAPI void _updateHand(class ItemStack const &);

private:
MCAPI static int const CHEW_CHANCE;
MCAPI static int const EATING_TIME;
MCAPI static float const PATH_RANGE;
MCAPI static int const RANDOM_EATING_END;
MCAPI static int const RANDOM_EATING_START;
MCAPI static float const SEARCH_SIZE;
MCAPI static float const STOP_DIST_SQRD;

};