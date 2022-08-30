/**
 * @file  UpdateEquipPacket.hpp
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
 * @brief MC class UpdateEquipPacket.
 *
 */
class UpdateEquipPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEEQUIPPACKET
public:
    class UpdateEquipPacket& operator=(class UpdateEquipPacket const &) = delete;
    UpdateEquipPacket(class UpdateEquipPacket const &) = delete;
#endif

public:
    virtual ~UpdateEquipPacket();
    virtual enum MinecraftPacketIds getId() const;
    virtual std::string getName() const;
    virtual void write(class BinaryStream &) const;
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATEEQUIPPACKET
#endif
    MCAPI UpdateEquipPacket();
    MCAPI UpdateEquipPacket(enum ContainerID, enum ContainerType, int, class CompoundTag &&, struct ActorUniqueID const &);

};