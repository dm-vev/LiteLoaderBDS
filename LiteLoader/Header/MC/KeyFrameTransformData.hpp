// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_KEYFRAMETRANSFORMDATA
#include "Extra/KeyFrameTransformDataAPI.hpp"
#undef EXTRA_INCLUDE_PART_KEYFRAMETRANSFORMDATA
class KeyFrameTransformData {
#include "Extra/KeyFrameTransformDataAPI.hpp"

public:
    MCAPI KeyFrameTransformData(class KeyFrameTransformData const&);
    MCAPI void addChannelTransform(class ExpressionNode const&, int);
    MCAPI bool operator==(class KeyFrameTransformData const&);
};