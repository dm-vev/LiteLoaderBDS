/**
 * @file  ShapelessChemistryRecipe.hpp
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
 * @brief MC class ShapelessChemistryRecipe.
 *
 */
class ShapelessChemistryRecipe : public ShapelessRecipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAPELESSCHEMISTRYRECIPE
public:
    class ShapelessChemistryRecipe& operator=(class ShapelessChemistryRecipe const &) = delete;
    ShapelessChemistryRecipe(class ShapelessChemistryRecipe const &) = delete;
    ShapelessChemistryRecipe() = delete;
#endif

public:
    virtual ~ShapelessChemistryRecipe();
    virtual bool matches(class CraftingContainer &, class Level &) const;
    virtual class mce::UUID const & getId() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHAPELESSCHEMISTRYRECIPE
#endif
MCAPI static class mce::UUID const ID;

};