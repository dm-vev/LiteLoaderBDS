// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART_PACKETVIOLATIONWARNINGPACKET
#include "Extra/PacketViolationWarningPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_PACKETVIOLATIONWARNINGPACKET
class PacketViolationWarningPacket : public Packet {
#include "Extra/PacketViolationWarningPacketAPI.hpp"
public:
    virtual ~PacketViolationWarningPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI PacketViolationWarningPacket();
    MCAPI PacketViolationWarningPacket(enum StreamReadResult, enum PacketViolationResponse, enum MinecraftPacketIds, std::string const&);
};