/**
 * @file  InventorySlotPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InventorySlotPacket.
 *
 */
class InventorySlotPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYSLOTPACKET
public:
    class InventorySlotPacket& operator=(class InventorySlotPacket const &) = delete;
    InventorySlotPacket(class InventorySlotPacket const &) = delete;
#endif

public:
    virtual ~InventorySlotPacket();
    virtual enum MinecraftPacketIds getId() const;
    virtual std::string getName() const;
    virtual void write(class BinaryStream &) const;
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INVENTORYSLOTPACKET
#endif
    MCAPI InventorySlotPacket();
    MCAPI InventorySlotPacket(enum ContainerID, unsigned int, class ItemStack const &);

};