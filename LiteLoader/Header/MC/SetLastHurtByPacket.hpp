/**
 * @file  SetLastHurtByPacket.hpp
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
 * @brief MC class SetLastHurtByPacket.
 *
 */
class SetLastHurtByPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETLASTHURTBYPACKET
public:
    class SetLastHurtByPacket& operator=(class SetLastHurtByPacket const &) = delete;
    SetLastHurtByPacket(class SetLastHurtByPacket const &) = delete;
#endif

public:
    virtual ~SetLastHurtByPacket();
    virtual enum MinecraftPacketIds getId() const;
    virtual std::string getName() const;
    virtual void write(class BinaryStream &) const;
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETLASTHURTBYPACKET
#endif
    MCAPI SetLastHurtByPacket();
    MCAPI SetLastHurtByPacket(enum ActorType);

};