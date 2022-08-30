/**
 * @file  CrossbowEnchant.hpp
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
 * @brief MC class CrossbowEnchant.
 *
 */
class CrossbowEnchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CROSSBOWENCHANT
public:
    class CrossbowEnchant& operator=(class CrossbowEnchant const &) = delete;
    CrossbowEnchant(class CrossbowEnchant const &) = delete;
    CrossbowEnchant() = delete;
#endif

public:
    virtual ~CrossbowEnchant();
    virtual bool isCompatibleWith(enum Enchant::Type) const;
    virtual int getMinCost(int) const;
    virtual int getMaxCost(int) const;
    virtual void __unk_vfn_4();
    virtual int getMaxLevel() const;
    virtual void __unk_vfn_6();
    virtual void __unk_vfn_7();
    virtual void __unk_vfn_8();
    virtual void __unk_vfn_9();
    virtual void __unk_vfn_10();
    virtual void __unk_vfn_11();
    virtual void __unk_vfn_12();
    virtual void __unk_vfn_13();
    virtual bool _isValidEnchantmentTypeForCategory(enum Enchant::Type) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CROSSBOWENCHANT
#endif
    MCAPI CrossbowEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, bool, int);

//private:

private:
MCAPI static std::vector<enum Enchant::Type> const VALID_ENCHANTMENTS;

};