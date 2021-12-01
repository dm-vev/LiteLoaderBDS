// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_IMPROVEDNOISE
#include "Extra/ImprovedNoiseAPI.hpp"
#undef EXTRA_INCLUDE_PART_IMPROVEDNOISE
class ImprovedNoise {
#include "Extra/ImprovedNoiseAPI.hpp"

public:
    MCAPI void _readArea(float*, class Vec3 const&, int, int, int, class Vec3 const&, float) const;


private:
    MCAPI void _blendCubeCorners(class Vec3 const&, int, int, int, float, float&, float&, float&, float&) const;
    MCAPI void _init(class Vec3 const&, class IRandom&, struct YBlendingBugSettings);
};