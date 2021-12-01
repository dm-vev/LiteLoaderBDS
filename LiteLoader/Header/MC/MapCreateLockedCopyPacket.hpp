// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART_MAPCREATELOCKEDCOPYPACKET
#include "Extra/MapCreateLockedCopyPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_MAPCREATELOCKEDCOPYPACKET
class MapCreateLockedCopyPacket : public Packet {
#include "Extra/MapCreateLockedCopyPacketAPI.hpp"
public:
    virtual ~MapCreateLockedCopyPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI MapCreateLockedCopyPacket();
    MCAPI MapCreateLockedCopyPacket(struct ActorUniqueID, struct ActorUniqueID);
    MCAPI struct ActorUniqueID getNewMapId() const;
    MCAPI struct ActorUniqueID getOriginalMapId() const;
};