// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_READONLYBINARYSTREAM
#include "Extra/ReadOnlyBinaryStreamAPI.hpp"
#undef EXTRA_INCLUDE_PART_READONLYBINARYSTREAM
class ReadOnlyBinaryStream {
#include "Extra/ReadOnlyBinaryStreamAPI.hpp"
public:
    virtual ~ReadOnlyBinaryStream();
    virtual bool read(void*, unsigned __int64);

public:
    MCAPI ReadOnlyBinaryStream(std::string const&, bool);
    MCAPI ReadOnlyBinaryStream(std::string&&);
    MCAPI bool canReadBool() const;
    MCAPI bool getBool();
    MCAPI unsigned char getByte();
    MCAPI double getDouble();
    MCAPI float getFloat();
    MCAPI enum StreamReadResult getReadCompleteResult() const;
    MCAPI int getSignedBigEndianInt();
    MCAPI int getSignedInt();
    MCAPI __int64 getSignedInt64();
    MCAPI short getSignedShort();
    MCAPI std::string getString();
    MCAPI bool getString(std::string&);
    MCAPI unsigned char getUnsignedChar();
    MCAPI unsigned int getUnsignedInt();
    MCAPI unsigned __int64 getUnsignedInt64();
    MCAPI unsigned short getUnsignedShort();
    MCAPI unsigned int getUnsignedVarInt();
    MCAPI unsigned __int64 getUnsignedVarInt64();
    MCAPI int getVarInt();
    MCAPI __int64 getVarInt64();
};