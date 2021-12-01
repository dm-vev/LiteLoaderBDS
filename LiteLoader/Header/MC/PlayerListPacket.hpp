// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PLAYERLISTPACKET
#include "Extra/PlayerListPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_PLAYERLISTPACKET
class PlayerListPacket {
#include "Extra/PlayerListPacketAPI.hpp"
public:
    virtual ~PlayerListPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream&);
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();

public:
    MCAPI PlayerListPacket();
    MCAPI PlayerListPacket(class mce::UUID const&);
    MCAPI void emplace(class PlayerListEntry&&);
};