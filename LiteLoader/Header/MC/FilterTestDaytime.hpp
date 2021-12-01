// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART_FILTERTESTDAYTIME
#include "Extra/FilterTestDaytimeAPI.hpp"
#undef EXTRA_INCLUDE_PART_FILTERTESTDAYTIME
class FilterTestDaytime : public FilterTest {
#include "Extra/FilterTestDaytimeAPI.hpp"
public:
    virtual ~FilterTestDaytime();
    virtual bool evaluate(struct FilterContext const&);
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName();
};