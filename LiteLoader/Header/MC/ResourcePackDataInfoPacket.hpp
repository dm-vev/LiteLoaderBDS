/**
 * @file  ResourcePackDataInfoPacket.hpp
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
 * @brief MC class ResourcePackDataInfoPacket.
 *
 */
class ResourcePackDataInfoPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    string mPackId;
    unsigned int maxChunkSize;
    int chunkCount;
    unsigned __int64 compressedPackSize;
    string sha256;
    bool isPremium;
    int packType;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKDATAINFOPACKET
public:
    class ResourcePackDataInfoPacket& operator=(class ResourcePackDataInfoPacket const &) = delete;
    ResourcePackDataInfoPacket(class ResourcePackDataInfoPacket const &) = delete;
#endif

public:
    virtual ~ResourcePackDataInfoPacket();
    virtual enum MinecraftPacketIds getId() const;
    virtual std::string getName() const;
    virtual void write(class BinaryStream &) const;
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKDATAINFOPACKET
#endif
    MCAPI ResourcePackDataInfoPacket();
    MCAPI ResourcePackDataInfoPacket(std::string const &, unsigned int, int, unsigned __int64, std::string const &, bool, enum PackType);

};