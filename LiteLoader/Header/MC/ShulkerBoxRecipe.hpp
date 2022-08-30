/**
 * @file  ShulkerBoxRecipe.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ShapelessRecipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShulkerBoxRecipe.
 *
 */
class ShulkerBoxRecipe : public ShapelessRecipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERBOXRECIPE
public:
    class ShulkerBoxRecipe& operator=(class ShulkerBoxRecipe const &) = delete;
    ShulkerBoxRecipe(class ShulkerBoxRecipe const &) = delete;
    ShulkerBoxRecipe() = delete;
#endif

public:
    virtual ~ShulkerBoxRecipe();
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    virtual bool itemsMatch(class ItemDescriptor const &, class ItemDescriptor const &) const;
    virtual bool itemsMatch(class ItemDescriptor const &, int, int, class CompoundTag const *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHULKERBOXRECIPE
#endif
    MCAPI ShulkerBoxRecipe(class gsl::basic_string_span<char const, -1>, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString, int, class mce::UUID const *);
MCAPI static class mce::UUID const ID;

};