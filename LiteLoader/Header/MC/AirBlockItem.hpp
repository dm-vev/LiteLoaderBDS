/**
 * @file  AirBlockItem.hpp
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
 * @brief MC class AirBlockItem.
 *
 */
class AirBlockItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AIRBLOCKITEM
public:
    class AirBlockItem& operator=(class AirBlockItem const &) = delete;
    AirBlockItem(class AirBlockItem const &) = delete;
    AirBlockItem() = delete;
#endif

public:
    virtual ~AirBlockItem();
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AIRBLOCKITEM
#endif

};