// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART_BLOCKISNAMETEST
#include "Extra/BlockIsNameTestAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLOCKISNAMETEST
class BlockIsNameTest : public FilterTest {
#include "Extra/BlockIsNameTestAPI.hpp"
public:
    virtual ~BlockIsNameTest();
    virtual bool evaluate(struct FilterContext const&);
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName();
};