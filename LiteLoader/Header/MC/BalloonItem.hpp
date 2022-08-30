/**
 * @file  BalloonItem.hpp
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
 * @brief MC class BalloonItem.
 *
 */
class BalloonItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BALLOONITEM
public:
    class BalloonItem& operator=(class BalloonItem const &) = delete;
    BalloonItem(class BalloonItem const &) = delete;
    BalloonItem() = delete;
#endif

public:
    virtual ~BalloonItem();
    virtual void __unk_vfn_7();
    virtual void __unk_vfn_11();
    virtual void __unk_vfn_14();
    virtual void __unk_vfn_16();
    virtual bool isDyeable() const;
    virtual void __unk_vfn_52();
    virtual void __unk_vfn_54();
    virtual void __unk_vfn_67();
    virtual void __unk_vfn_71();
    virtual void __unk_vfn_72();
    virtual void __unk_vfn_73();
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    virtual void __unk_vfn_76();
    virtual void __unk_vfn_80();
    virtual void __unk_vfn_81();
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BALLOONITEM
#endif
    MCAPI BalloonItem(std::string const &, int);

};