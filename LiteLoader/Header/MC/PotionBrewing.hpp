// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_POTIONBREWING
#include "Extra/PotionBrewingAPI.hpp"
#undef EXTRA_INCLUDE_PART_POTIONBREWING
class PotionBrewing {
#include "Extra/PotionBrewingAPI.hpp"

public:
    MCAPI static void addContainerRecipe(class Item const&, class PotionBrewing::Ingredient const&, class Item const&);
    MCAPI static void addPotionMix(class ItemDescriptor const&, class PotionBrewing::Ingredient const&, class ItemDescriptor const&);
    MCAPI static int getFuelValue(class ItemDescriptor const&);
    MCAPI static bool hasMix(class ItemInstance const&, class ItemDescriptor const&);
    MCAPI static void initPotionBrewing();
    MCAPI static bool isFuel(class ItemDescriptor const&);
    MCAPI static bool isIngredient(class ItemDescriptor const&);
    MCAPI static bool isPotionRecipeInput(class ItemDescriptor const&);
    MCAPI static class ItemInstance mix(class ItemDescriptor const&, class ItemInstance const&);
    MCAPI static void shutdown();

private:
    MCAPI static void addChemistryMix(class ItemInstance const&, class PotionBrewing::Ingredient const&, class ItemInstance const&);
    MCAPI static class ItemInstance getChemistryMix(class ItemDescriptor const&, class ItemDescriptor const&);
    MCAPI static std::vector<class PotionBrewing::Mix<class ItemInstance>> mChemistryMixes;
    MCAPI static std::vector<class PotionBrewing::Mix<class Item const&>> mContainerMixes;
    MCAPI static std::vector<class PotionBrewing::Mix<class ItemDescriptor>> mPotionMixes;
    MCAPI static std::vector<class PotionBrewing::Ingredient> mValidContainers;
};