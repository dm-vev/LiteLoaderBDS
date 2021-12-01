// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ANIMATIONSCRIPTSDESCRIPTION
#include "Extra/AnimationScriptsDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_ANIMATIONSCRIPTSDESCRIPTION
class AnimationScriptsDescription {
#include "Extra/AnimationScriptsDescriptionAPI.hpp"
public:
    virtual char const* getJsonName();
    virtual ~AnimationScriptsDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value&);

public:
    MCAPI AnimationScriptsDescription(struct AnimationScriptsDescription const&);
};