/**
 * @file  BarterGoal.hpp
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
 * @brief MC class BarterGoal.
 *
 */
class BarterGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BARTERGOAL
public:
    class BarterGoal& operator=(class BarterGoal const &) = delete;
    BarterGoal(class BarterGoal const &) = delete;
    BarterGoal() = delete;
#endif

public:
    virtual ~BarterGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void __unk_vfn_3();
    virtual void __unk_vfn_4();
    virtual void __unk_vfn_5();
    virtual void tick();
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BARTERGOAL
#endif
    MCAPI BarterGoal(class Mob &);

//private:
    MCAPI class Vec3 _getThrowVector();

private:

};