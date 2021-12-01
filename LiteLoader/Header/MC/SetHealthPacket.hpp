// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART_SETHEALTHPACKET
#include "Extra/SetHealthPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_SETHEALTHPACKET
class SetHealthPacket : public Packet {
#include "Extra/SetHealthPacketAPI.hpp"
public:
    virtual ~SetHealthPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI SetHealthPacket();
    MCAPI SetHealthPacket(int);
};