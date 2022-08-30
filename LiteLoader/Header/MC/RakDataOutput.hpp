/**
 * @file  RakDataOutput.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RakDataOutput.
 *
 */
class RakDataOutput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKDATAOUTPUT
public:
    class RakDataOutput& operator=(class RakDataOutput const &) = delete;
    RakDataOutput(class RakDataOutput const &) = delete;
    RakDataOutput() = delete;
#endif

public:
    virtual ~RakDataOutput();
    virtual void writeString(class gsl::basic_string_span<char const, -1>);
    virtual void writeLongString(class gsl::basic_string_span<char const, -1>);
    virtual void writeFloat(float);
    virtual void writeDouble(double);
    virtual void writeByte(char);
    virtual void writeShort(short);
    virtual void writeInt(int);
    virtual void writeLongLong(__int64);
    virtual void writeBytes(void const *, unsigned __int64);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKDATAOUTPUT
#endif

};