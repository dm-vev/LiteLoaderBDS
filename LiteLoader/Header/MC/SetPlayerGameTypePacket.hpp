/**
 * @file  SetPlayerGameTypePacket.hpp
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
 * @brief MC class SetPlayerGameTypePacket.
 *
 */
class SetPlayerGameTypePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETPLAYERGAMETYPEPACKET
public:
    class SetPlayerGameTypePacket& operator=(class SetPlayerGameTypePacket const &) = delete;
    SetPlayerGameTypePacket(class SetPlayerGameTypePacket const &) = delete;
#endif

public:
    virtual ~SetPlayerGameTypePacket();
    virtual enum MinecraftPacketIds getId() const;
    virtual std::string getName() const;
    virtual void write(class BinaryStream &) const;
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETPLAYERGAMETYPEPACKET
#endif
    MCAPI SetPlayerGameTypePacket();

};