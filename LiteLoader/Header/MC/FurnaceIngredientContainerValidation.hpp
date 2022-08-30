/**
 * @file  FurnaceIngredientContainerValidation.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FurnaceIngredientContainerValidation.
 *
 */
class FurnaceIngredientContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FURNACEINGREDIENTCONTAINERVALIDATION
public:
    class FurnaceIngredientContainerValidation& operator=(class FurnaceIngredientContainerValidation const &) = delete;
    FurnaceIngredientContainerValidation(class FurnaceIngredientContainerValidation const &) = delete;
    FurnaceIngredientContainerValidation() = delete;
#endif

public:
    virtual ~FurnaceIngredientContainerValidation();
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    virtual void __unk_vfn_2();
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    virtual void __unk_vfn_4();
    virtual void __unk_vfn_5();
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    virtual bool canDestroy(class ContainerScreenContext const &) const;
    virtual int getContainerOffset(class ContainerScreenContext const &) const;
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FURNACEINGREDIENTCONTAINERVALIDATION
#endif

};