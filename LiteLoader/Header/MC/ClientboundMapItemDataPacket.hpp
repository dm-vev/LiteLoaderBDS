// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART_CLIENTBOUNDMAPITEMDATAPACKET
#include "Extra/ClientboundMapItemDataPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_CLIENTBOUNDMAPITEMDATAPACKET
class ClientboundMapItemDataPacket : public Packet {
#include "Extra/ClientboundMapItemDataPacketAPI.hpp"
public:
    virtual ~ClientboundMapItemDataPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI ClientboundMapItemDataPacket();
    MCAPI ClientboundMapItemDataPacket(class gsl::not_null<class MapItemSavedData*>, class Level&);
};