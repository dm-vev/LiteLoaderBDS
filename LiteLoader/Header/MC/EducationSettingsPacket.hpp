// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART_EDUCATIONSETTINGSPACKET
#include "Extra/EducationSettingsPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_EDUCATIONSETTINGSPACKET
class EducationSettingsPacket : public Packet {
#include "Extra/EducationSettingsPacketAPI.hpp"
public:
    virtual ~EducationSettingsPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI EducationSettingsPacket();
    MCAPI EducationSettingsPacket(struct EducationLevelSettings);
};