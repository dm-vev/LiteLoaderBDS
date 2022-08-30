/**
 * @file  EquipItemGoal.hpp
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
 * @brief MC class EquipItemGoal.
 *
 */
class EquipItemGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EQUIPITEMGOAL
public:
    class EquipItemGoal& operator=(class EquipItemGoal const &) = delete;
    EquipItemGoal(class EquipItemGoal const &) = delete;
    EquipItemGoal() = delete;
#endif

public:
    virtual ~EquipItemGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void __unk_vfn_3();
    virtual void __unk_vfn_4();
    virtual void __unk_vfn_5();
    virtual void tick();
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EQUIPITEMGOAL
#endif
    MCAPI EquipItemGoal(class Mob &);

//private:
    MCAPI void _dropItem(class ItemStack const &) const;

private:

};