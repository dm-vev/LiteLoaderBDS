// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_TRAILDESCRIPTION
#include "Extra/TrailDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_TRAILDESCRIPTION
class TrailDescription {
#include "Extra/TrailDescriptionAPI.hpp"
public:
    virtual char const* getJsonName();
    virtual ~TrailDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value&);

public:
    MCAPI TrailDescription();
};