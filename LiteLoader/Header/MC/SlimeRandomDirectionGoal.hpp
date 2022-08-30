/**
 * @file  SlimeRandomDirectionGoal.hpp
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
 * @brief MC class SlimeRandomDirectionGoal.
 *
 */
class SlimeRandomDirectionGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMERANDOMDIRECTIONGOAL
public:
    class SlimeRandomDirectionGoal& operator=(class SlimeRandomDirectionGoal const &) = delete;
    SlimeRandomDirectionGoal(class SlimeRandomDirectionGoal const &) = delete;
    SlimeRandomDirectionGoal() = delete;
#endif

public:
    virtual ~SlimeRandomDirectionGoal();
    virtual bool canUse();
    virtual void __unk_vfn_2();
    virtual void __unk_vfn_3();
    virtual void __unk_vfn_4();
    virtual void __unk_vfn_5();
    virtual void tick();
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLIMERANDOMDIRECTIONGOAL
#endif
    MCAPI SlimeRandomDirectionGoal(class Mob &);

};