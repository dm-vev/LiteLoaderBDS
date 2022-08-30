/**
 * @file  UpdatePlayerGameTypePacket.hpp
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
 * @brief MC class UpdatePlayerGameTypePacket.
 *
 */
class UpdatePlayerGameTypePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEPLAYERGAMETYPEPACKET
public:
    class UpdatePlayerGameTypePacket& operator=(class UpdatePlayerGameTypePacket const &) = delete;
    UpdatePlayerGameTypePacket(class UpdatePlayerGameTypePacket const &) = delete;
#endif

public:
    virtual ~UpdatePlayerGameTypePacket();
    virtual enum MinecraftPacketIds getId() const;
    virtual std::string getName() const;
    virtual void write(class BinaryStream &) const;
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATEPLAYERGAMETYPEPACKET
#endif
    MCAPI UpdatePlayerGameTypePacket();
    MCAPI UpdatePlayerGameTypePacket(enum GameType, struct ActorUniqueID const &);

};