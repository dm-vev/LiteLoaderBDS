/**
 * @file  Packet.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "ServerNetworkHandler.hpp"
class ReadOnlyBinaryStream;
class BinaryStream;
class ServerPlayer;
class NetworkIdentifier;
enum StreamReadResult;
enum class PacketReliability {
    Relible,
    RelibleOrdered
};

#undef BEFORE_EXTRA

/**
 * @brief MC class Packet.
 *
 */
class Packet {

#define AFTER_EXTRA
// Add Member There
public:
    unsigned unk2 = 2;                                                     // 8
    PacketReliability reliableOrdered = PacketReliability::RelibleOrdered; // 12
    unsigned char clientSubId = 0;                                         // 16
    uint64_t unk24 = 0;                                                    // 24
    uint64_t unk40 = 0;                                                    // 32
    uint32_t incompressible = 0;                                           // 40

    inline Packet(unsigned compress)
        : incompressible(!compress)
    { }
#define DISABLE_CONSTRUCTOR_PREVENTION_PACKET
    inline Packet() {}
    class Packet& operator=(class Packet const&) = delete;
    Packet(class Packet const&) = delete;

    inline ServerPlayer* getPlayerFromPacket(ServerNetworkHandler* handler, NetworkIdentifier* netId)
    {
        return handler->getServerPlayer(*netId, dAccess<char>(this, 16));
    }
    inline enum StreamReadResult read(class ReadOnlyBinaryStream& binaryStream)
    {
        return _read(binaryStream);
    }
protected:
    std::string toDebugString() {
        return fmt::format("{}({})->{}", getName(), getId(), clientSubId);
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKET
public:
    class Packet& operator=(class Packet const &) = delete;
    Packet(class Packet const &) = delete;
    Packet() = delete;
#endif

public:
    virtual ~Packet();
    virtual enum MinecraftPacketIds getId() const = 0;
    virtual std::string getName() const = 0;
    virtual void write(class BinaryStream &) const = 0;
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
    virtual bool disallowBatching() const;
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKET
#endif
    MCAPI void handle(class NetworkIdentifier const &, class NetEventCallback &, class std::shared_ptr<class Packet> &);
    MCAPI bool readNoHeader(class ReadOnlyBinaryStream &, enum SubClientId const &, struct ExtendedStreamReadResult &);
    MCAPI void writeWithHeader(enum SubClientId, class BinaryStream &) const;

};