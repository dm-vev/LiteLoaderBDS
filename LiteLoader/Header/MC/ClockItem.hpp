/**
 * @file  ClockItem.hpp
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
 * @brief MC class ClockItem.
 *
 */
class ClockItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLOCKITEM
public:
    class ClockItem& operator=(class ClockItem const &) = delete;
    ClockItem(class ClockItem const &) = delete;
    ClockItem() = delete;
#endif

public:
    virtual ~ClockItem();
    virtual void __unk_vfn_7();
    virtual void __unk_vfn_11();
    virtual void __unk_vfn_14();
    virtual void __unk_vfn_16();
    virtual void __unk_vfn_52();
    virtual void __unk_vfn_54();
    virtual void __unk_vfn_67();
    virtual void __unk_vfn_71();
    virtual void __unk_vfn_72();
    virtual void __unk_vfn_73();
    virtual void __unk_vfn_76();
    virtual void __unk_vfn_80();
    virtual void __unk_vfn_81();
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLOCKITEM
#endif
    MCAPI ClockItem(std::string const &, int);

};