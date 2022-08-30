/**
 * @file  MaterialReducerOutputValidation.hpp
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
 * @brief MC class MaterialReducerOutputValidation.
 *
 */
class MaterialReducerOutputValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MATERIALREDUCEROUTPUTVALIDATION
public:
    class MaterialReducerOutputValidation& operator=(class MaterialReducerOutputValidation const &) = delete;
    MaterialReducerOutputValidation(class MaterialReducerOutputValidation const &) = delete;
    MaterialReducerOutputValidation() = delete;
#endif

public:
    virtual ~MaterialReducerOutputValidation();
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    virtual void __unk_vfn_2();
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    virtual void __unk_vfn_4();
    virtual void __unk_vfn_5();
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    virtual void __unk_vfn_7();
    virtual int getContainerOffset(class ContainerScreenContext const &) const;
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MATERIALREDUCEROUTPUTVALIDATION
    MCVAPI bool canDestroy(class ContainerScreenContext const &) const;
#endif

};