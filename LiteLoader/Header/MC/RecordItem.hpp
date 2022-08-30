/**
 * @file  RecordItem.hpp
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
 * @brief MC class RecordItem.
 *
 */
class RecordItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECORDITEM
public:
    class RecordItem& operator=(class RecordItem const &) = delete;
    RecordItem(class RecordItem const &) = delete;
    RecordItem() = delete;
#endif

public:
    virtual ~RecordItem();
    virtual void __unk_vfn_7();
    virtual void __unk_vfn_11();
    virtual void __unk_vfn_14();
    virtual void __unk_vfn_16();
    virtual void __unk_vfn_52();
    virtual void __unk_vfn_54();
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    virtual void __unk_vfn_67();
    virtual void __unk_vfn_71();
    virtual void __unk_vfn_72();
    virtual void __unk_vfn_73();
    virtual void __unk_vfn_76();
    virtual void __unk_vfn_80();
    virtual void __unk_vfn_81();
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RECORDITEM
    MCVAPI bool isMusicDisk() const;
#endif
    MCAPI RecordItem(std::string const &, int, enum LevelSoundEvent);
    MCAPI float getDuration() const;
    MCAPI enum LevelSoundEvent getSound() const;

};