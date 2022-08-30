/**
 * @file  WeaponRecipes.hpp
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
 * @brief MC class WeaponRecipes.
 *
 */
class WeaponRecipes {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEAPONRECIPES
public:
    class WeaponRecipes& operator=(class WeaponRecipes const &) = delete;
    WeaponRecipes(class WeaponRecipes const &) = delete;
    WeaponRecipes() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WEAPONRECIPES
#endif
    MCAPI static void addRecipes(class Recipes &);

};