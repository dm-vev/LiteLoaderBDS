/**
 * @file  CraftingContainer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Container.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CraftingContainer.
 *
 */
class CraftingContainer : public Container {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTINGCONTAINER
public:
    class CraftingContainer& operator=(class CraftingContainer const &) = delete;
    CraftingContainer(class CraftingContainer const &) = delete;
    CraftingContainer() = delete;
#endif

public:
    virtual ~CraftingContainer();
    virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    virtual class ItemStack const & getItem(int) const;
    virtual void setItem(int, class ItemStack const &);
    virtual int getContainerSize() const;
    virtual int getMaxStackSize() const;
    virtual void startOpen(class Player &);
    virtual void stopOpen(class Player &);
    virtual void __unk_vfn_22();
    virtual void __unk_vfn_23();
    virtual void setContainerChanged(int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRAFTINGCONTAINER
#endif
    MCAPI CraftingContainer(int, int);
    MCAPI class ItemStack const & getItem(int, int) const;

};