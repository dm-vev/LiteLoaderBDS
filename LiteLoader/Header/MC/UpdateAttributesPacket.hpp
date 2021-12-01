// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART_UPDATEATTRIBUTESPACKET
#include "Extra/UpdateAttributesPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_UPDATEATTRIBUTESPACKET
class UpdateAttributesPacket : public Packet {
#include "Extra/UpdateAttributesPacketAPI.hpp"
public:
    virtual ~UpdateAttributesPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI UpdateAttributesPacket();
    MCAPI UpdateAttributesPacket(class Actor const&, std::vector<class AttributeInstanceHandle> const&);
};