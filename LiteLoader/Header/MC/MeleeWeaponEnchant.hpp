/**
 * @file  MeleeWeaponEnchant.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MeleeWeaponEnchant.
 *
 */
class MeleeWeaponEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MELEEWEAPONENCHANT
public:
    class MeleeWeaponEnchant& operator=(class MeleeWeaponEnchant const &) = delete;
    MeleeWeaponEnchant(class MeleeWeaponEnchant const &) = delete;
    MeleeWeaponEnchant() = delete;
#endif

public:
    virtual ~MeleeWeaponEnchant();
    virtual int getMinCost(int) const;
    virtual int getMaxCost(int) const;
    virtual int getMaxLevel() const;
    virtual float getDamageBonus(int, class Actor const &) const;
    virtual void doPostAttack(class Actor &, class Actor &, int) const;
    virtual void __unk_vfn_10();
    virtual void __unk_vfn_11();
    virtual void __unk_vfn_12();
    virtual void __unk_vfn_13();
    virtual bool _isValidEnchantmentTypeForCategory(enum Enchant::Type) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MELEEWEAPONENCHANT
    MCVAPI bool isMeleeDamageEnchant() const;
#endif
    MCAPI MeleeWeaponEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);

//private:

private:
MCAPI static std::vector<enum Enchant::Type> const VALID_ENCHANTMENTS;

};