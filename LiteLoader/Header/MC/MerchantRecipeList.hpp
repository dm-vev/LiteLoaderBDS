/**
 * @file  MerchantRecipeList.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include <MC/MerchantRecipe.hpp>

#undef BEFORE_EXTRA

/**
 * @brief MC class MerchantRecipeList.
 *
 */
class MerchantRecipeList {

#define AFTER_EXTRA
// Add Member There
    std::vector<MerchantRecipe> mRecipes;
    std::vector<int> mTierExpRequirements;

public:
    inline MerchantRecipe* getRecipeByNetId(unsigned int recipeNetId)
    {
        for (auto& recipe : mRecipes)
        {
            if (recipe.getRecipeNetId() == recipeNetId)
                return &recipe;
        }
        return nullptr;
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MERCHANTRECIPELIST
public:
    class MerchantRecipeList& operator=(class MerchantRecipeList const &) = delete;
    MerchantRecipeList(class MerchantRecipeList const &) = delete;
#endif

public:
    virtual ~MerchantRecipeList();
    virtual class MerchantRecipe * getRecipeFor(class ItemInstance const &, class ItemInstance const &, int);
    virtual void addIfNewOrBetter(class MerchantRecipe *);
    virtual class MerchantRecipe * getMatchingRecipeFor(class ItemInstance const &, class ItemInstance const &, class ItemInstance const &);
    virtual class MerchantRecipe * getMatchingRecipeFor(class MerchantRecipe const &);
    virtual void load(class CompoundTag const &);
    virtual std::unique_ptr<class CompoundTag> createTag(bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MERCHANTRECIPELIST
#endif
    MCAPI MerchantRecipeList();
    MCAPI void assignNetIds();
    MCAPI class MerchantRecipe const * getRecipeByNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &) const;
    MCAPI class std::optional<unsigned __int64> getRecipeIndexByNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &) const;
    MCAPI bool isRequiredItem(class ItemInstance const &, class ItemInstance const &);

};