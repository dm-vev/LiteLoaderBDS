// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ALLOWLISTENTRY
#include "Extra/AllowListEntryAPI.hpp"
#undef EXTRA_INCLUDE_PART_ALLOWLISTENTRY
class AllowListEntry {
#include "Extra/AllowListEntryAPI.hpp"
public:
    virtual ~AllowListEntry();
    virtual void serialize(class Json::Value&);
    virtual void deserialize(class Json::Value&);

public:
    MCAPI AllowListEntry(std::string);
};