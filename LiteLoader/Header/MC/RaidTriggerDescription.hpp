// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_RAIDTRIGGERDESCRIPTION
#include "Extra/RaidTriggerDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_RAIDTRIGGERDESCRIPTION
class RaidTriggerDescription {
#include "Extra/RaidTriggerDescriptionAPI.hpp"
public:
    virtual char const* getJsonName();
    virtual ~RaidTriggerDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value&);
};