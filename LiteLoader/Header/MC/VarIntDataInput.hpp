/**
 * @file  VarIntDataInput.hpp
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
 * @brief MC class VarIntDataInput.
 *
 */
class VarIntDataInput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VARINTDATAINPUT
public:
    class VarIntDataInput& operator=(class VarIntDataInput const &) = delete;
    VarIntDataInput(class VarIntDataInput const &) = delete;
    VarIntDataInput() = delete;
#endif

public:
    virtual ~VarIntDataInput();
    virtual void __unk_vfn_1();
    virtual void __unk_vfn_2();
    virtual float readFloat();
    virtual double readDouble();
    virtual char readByte();
    virtual short readShort();
    virtual int readInt();
    virtual __int64 readLongLong();
    virtual bool readBytes(void *, unsigned __int64);
    virtual unsigned __int64 numBytesLeft() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VARINTDATAINPUT
    MCVAPI std::string readLongString();
    MCVAPI std::string readString();
#endif

};