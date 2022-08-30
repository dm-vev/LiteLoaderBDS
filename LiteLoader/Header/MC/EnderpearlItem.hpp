/**
 * @file  EnderpearlItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnderpearlItem.
 *
 */
class EnderpearlItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERPEARLITEM
public:
    class EnderpearlItem& operator=(class EnderpearlItem const &) = delete;
    EnderpearlItem(class EnderpearlItem const &) = delete;
    EnderpearlItem() = delete;
#endif

public:
    virtual ~EnderpearlItem();
    virtual void __unk_vfn_7();
    virtual void __unk_vfn_11();
    virtual void __unk_vfn_14();
    virtual void __unk_vfn_16();
    virtual bool isThrowable() const;
    virtual void __unk_vfn_52();
    virtual void __unk_vfn_54();
    virtual void __unk_vfn_67();
    virtual void __unk_vfn_71();
    virtual void __unk_vfn_72();
    virtual void __unk_vfn_73();
    virtual void __unk_vfn_76();
    virtual void __unk_vfn_80();
    virtual void __unk_vfn_81();
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    virtual class HashedString const & getCooldownType() const;
    virtual int getCooldownTime() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDERPEARLITEM
#endif
    MCAPI EnderpearlItem(std::string const &, int);
MCAPI static class HashedString const ENDER_PEARL_COOLDOWN;

};