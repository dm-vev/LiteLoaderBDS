// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PRINTSTREAM
#include "Extra/PrintStreamAPI.hpp"
#undef EXTRA_INCLUDE_PART_PRINTSTREAM
class PrintStream {
#include "Extra/PrintStreamAPI.hpp"
public:
    virtual ~PrintStream();
    virtual void unk_vfn_1();

public:
    MCAPI void println(std::string const&);
};