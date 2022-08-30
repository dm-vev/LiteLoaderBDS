/**
 * @file  SyncActorPropertyPacket.hpp
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
 * @brief MC class SyncActorPropertyPacket.
 *
 */
class SyncActorPropertyPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYNCACTORPROPERTYPACKET
public:
    class SyncActorPropertyPacket& operator=(class SyncActorPropertyPacket const &) = delete;
    SyncActorPropertyPacket(class SyncActorPropertyPacket const &) = delete;
#endif

public:
    virtual ~SyncActorPropertyPacket();
    virtual enum MinecraftPacketIds getId() const;
    virtual std::string getName() const;
    virtual void write(class BinaryStream &) const;
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SYNCACTORPROPERTYPACKET
#endif
    MCAPI SyncActorPropertyPacket();
    MCAPI SyncActorPropertyPacket(class Actor const &);

};