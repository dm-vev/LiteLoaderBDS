/**
 * @file  ArrowItem.hpp
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
 * @brief MC class ArrowItem.
 *
 */
class ArrowItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARROWITEM
public:
    class ArrowItem& operator=(class ArrowItem const &) = delete;
    ArrowItem(class ArrowItem const &) = delete;
    ArrowItem() = delete;
#endif

public:
    virtual ~ArrowItem();
    virtual void __unk_vfn_7();
    virtual void __unk_vfn_11();
    virtual void __unk_vfn_14();
    virtual void __unk_vfn_16();
    virtual void __unk_vfn_52();
    virtual void __unk_vfn_54();
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    virtual void __unk_vfn_67();
    virtual bool isValidAuxValue(int) const;
    virtual void __unk_vfn_71();
    virtual void __unk_vfn_72();
    virtual void __unk_vfn_73();
    virtual void __unk_vfn_76();
    virtual void __unk_vfn_80();
    virtual void __unk_vfn_81();
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    virtual std::string buildEffectDescriptionName(class ItemStackBase const &) const;
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    virtual class Item & setIcon(std::string const &, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARROWITEM
#endif
    MCAPI ArrowItem(std::string const &, int);
    MCAPI void applyEffect(class Arrow *, class ItemInstance const &) const;

//protected:
    MCAPI std::vector<class MobEffectInstance> getMobEffects(int) const;

protected:

};