// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_VANILLASYSTEMSREGISTRATION
#include "Extra/VanillaSystemsRegistrationAPI.hpp"
#undef EXTRA_INCLUDE_PART_VANILLASYSTEMSREGISTRATION
namespace VanillaSystemsRegistration {
#include "Extra/VanillaSystemsRegistrationAPI.hpp"

MCAPI void registerSharedVanillaPlayerInteractionSystems(class EntitySystems&);
MCAPI void registerVanillaServerTickingSystems(class EntitySystems&, class Experiments const&);


} // namespace VanillaSystemsRegistration