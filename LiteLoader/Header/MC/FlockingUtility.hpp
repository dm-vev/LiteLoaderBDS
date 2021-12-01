// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_FLOCKINGUTILITY
#include "Extra/FlockingUtilityAPI.hpp"
#undef EXTRA_INCLUDE_PART_FLOCKINGUTILITY
namespace FlockingUtility {
#include "Extra/FlockingUtilityAPI.hpp"

MCAPI bool checkForSteeringCollision(class Actor&, class Vec3 const&, float, class Vec3&);
MCAPI void chooseRandomDirection(class Actor&, class Vec3&);
MCAPI void getWaterHeights(class Actor const&, float&, float&);


} // namespace FlockingUtility