// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART_ACTORHASTAGTEST
#include "Extra/ActorHasTagTestAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORHASTAGTEST
class ActorHasTagTest : public FilterTest {
#include "Extra/ActorHasTagTestAPI.hpp"
public:
    virtual ~ActorHasTagTest();
    virtual bool evaluate(struct FilterContext const&);
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName();
};