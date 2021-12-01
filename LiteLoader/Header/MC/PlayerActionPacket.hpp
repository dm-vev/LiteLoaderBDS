// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART_PLAYERACTIONPACKET
#include "Extra/PlayerActionPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_PLAYERACTIONPACKET
class PlayerActionPacket : public Packet {
#include "Extra/PlayerActionPacketAPI.hpp"
public:
    virtual ~PlayerActionPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI PlayerActionPacket();
    MCAPI PlayerActionPacket(enum PlayerActionType, class ActorRuntimeID);
    MCAPI PlayerActionPacket(enum PlayerActionType, class BlockPos const&, int, class ActorRuntimeID);
    MCAPI PlayerActionPacket(enum PlayerActionType, class BlockPos const&, unsigned char, class ActorRuntimeID);
};