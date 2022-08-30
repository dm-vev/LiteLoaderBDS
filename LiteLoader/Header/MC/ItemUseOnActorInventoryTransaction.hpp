/**
 * @file  ItemUseOnActorInventoryTransaction.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemUseOnActorInventoryTransaction.
 *
 */
class ItemUseOnActorInventoryTransaction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMUSEONACTORINVENTORYTRANSACTION
public:
    class ItemUseOnActorInventoryTransaction& operator=(class ItemUseOnActorInventoryTransaction const &) = delete;
    ItemUseOnActorInventoryTransaction(class ItemUseOnActorInventoryTransaction const &) = delete;
    ItemUseOnActorInventoryTransaction() = delete;
#endif

public:
    virtual ~ItemUseOnActorInventoryTransaction();
    virtual void read(class ReadOnlyBinaryStream &);
    virtual void write(class BinaryStream &) const;
    virtual void postLoadItems(class BlockPalette &, bool);
    virtual enum InventoryTransactionError handle(class Player &, bool) const;
    virtual void onTransactionError(class Player &, enum InventoryTransactionError) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMUSEONACTORINVENTORYTRANSACTION
#endif
    MCAPI class ItemUseOnActorInventoryTransaction & setSelectedItem(class ItemStack const &);

};