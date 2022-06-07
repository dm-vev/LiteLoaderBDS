// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MapExtendingRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPEXTENDINGRECIPE
public:
    class MapExtendingRecipe& operator=(class MapExtendingRecipe const &) = delete;
    MapExtendingRecipe(class MapExtendingRecipe const &) = delete;
    MapExtendingRecipe() = delete;
#endif


public:
    /*0*/ virtual ~MapExtendingRecipe();
    /*1*/ virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /*2*/ virtual int getCraftingSize() const;
    /*3*/ virtual class RecipeIngredient const & getIngredient(int, int) const;
    /*4*/ virtual std::vector<class ItemInstance> const & getResultItem() const;
    /*6*/ virtual bool matches(class CraftingContainer &, class Level &) const;
    /*7*/ virtual int size() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MAPEXTENDINGRECIPE
#endif
    MCAPI MapExtendingRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const &);
    MCAPI static class mce::UUID const CartographyTableID;
    MCAPI static class mce::UUID const CraftingTableID;

//private:
    MCAPI void _updateMapInstance(class ItemInstance &) const;


private:


};