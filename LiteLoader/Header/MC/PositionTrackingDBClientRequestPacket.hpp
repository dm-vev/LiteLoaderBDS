/**
 * @file  PositionTrackingDBClientRequestPacket.hpp
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
 * @brief MC class PositionTrackingDBClientRequestPacket.
 *
 */
class PositionTrackingDBClientRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSITIONTRACKINGDBCLIENTREQUESTPACKET
public:
    class PositionTrackingDBClientRequestPacket& operator=(class PositionTrackingDBClientRequestPacket const &) = delete;
    PositionTrackingDBClientRequestPacket(class PositionTrackingDBClientRequestPacket const &) = delete;
#endif

public:
    virtual ~PositionTrackingDBClientRequestPacket();
    virtual enum MinecraftPacketIds getId() const;
    virtual std::string getName() const;
    virtual void write(class BinaryStream &) const;
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POSITIONTRACKINGDBCLIENTREQUESTPACKET
#endif
    MCAPI PositionTrackingDBClientRequestPacket();

};