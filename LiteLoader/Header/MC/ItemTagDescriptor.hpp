/**
 * @file  ItemTagDescriptor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemDescriptor.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemTagDescriptor.
 *
 */
class ItemTagDescriptor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMTAGDESCRIPTOR
public:
    class ItemTagDescriptor& operator=(class ItemTagDescriptor const &) = delete;
    ItemTagDescriptor(class ItemTagDescriptor const &) = delete;
    ItemTagDescriptor() = delete;
#endif

public:
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;
    virtual bool sameItems(struct ItemDescriptor::BaseDescriptor const &, bool) const;
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const &, bool) const;
    virtual std::string const & getFullName() const;
    virtual struct ItemDescriptor::ItemEntry getItem() const;
    virtual bool forEachItemUntil(class std::function<bool (class Item const &, short)>) const;
    virtual class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> toMap() const;
    virtual class std::optional<class CompoundTag> save() const;
    virtual void serialize(class Json::Value &) const;
    virtual enum ItemDescriptor::InternalType getType() const;
    virtual bool shouldResolve() const;
    virtual void __unk_vfn_11();
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> resolve() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMTAGDESCRIPTOR
#endif

};