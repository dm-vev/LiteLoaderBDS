/**
 * @file  SetTitlePacket.hpp
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
 * @brief MC class SetTitlePacket.
 *
 */
class SetTitlePacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
enum TitleType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETTITLEPACKET
public:
    class SetTitlePacket& operator=(class SetTitlePacket const &) = delete;
#endif

public:
    virtual ~SetTitlePacket();
    virtual enum MinecraftPacketIds getId() const;
    virtual std::string getName() const;
    virtual void write(class BinaryStream &) const;
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETTITLEPACKET
#endif
    MCAPI SetTitlePacket(class SetTitlePacket const &);
    MCAPI SetTitlePacket();
    MCAPI SetTitlePacket(enum SetTitlePacket::TitleType, class ResolvedTextObject const &);
    MCAPI SetTitlePacket(enum SetTitlePacket::TitleType, std::string const &);
    MCAPI SetTitlePacket(enum SetTitlePacket::TitleType);
    MCAPI SetTitlePacket(int, int, int);
    MCAPI class SetTitlePacket & operator=(class SetTitlePacket &&);

};