// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART_SIMULATIONTYPEPACKET
#include "Extra/SimulationTypePacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_SIMULATIONTYPEPACKET
class SimulationTypePacket : public Packet {
#include "Extra/SimulationTypePacketAPI.hpp"
public:
    virtual ~SimulationTypePacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI SimulationTypePacket();
};