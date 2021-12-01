// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ShapelessRecipe.hpp"
#define EXTRA_INCLUDE_PART_SHAPELESSCHEMISTRYRECIPE
#include "Extra/ShapelessChemistryRecipeAPI.hpp"
#undef EXTRA_INCLUDE_PART_SHAPELESSCHEMISTRYRECIPE
class ShapelessChemistryRecipe : public ShapelessRecipe {
#include "Extra/ShapelessChemistryRecipeAPI.hpp"
public:
    virtual ~ShapelessChemistryRecipe();
    virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&);
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual bool matches(class CraftingContainer&, class Level&);
    virtual class mce::UUID const& getId();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_15();

public:
    MCAPI static class mce::UUID const ID;
};