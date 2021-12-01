// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PERMISSIONSHANDLER
#include "Extra/PermissionsHandlerAPI.hpp"
#undef EXTRA_INCLUDE_PART_PERMISSIONSHANDLER
namespace PermissionsHandler {
#include "Extra/PermissionsHandlerAPI.hpp"

public:
MCAPI static enum PlayerPermissionLevel playerPermissionLevelFromString(std::string const&);
MCAPI static std::string playerPermissionLevelToString(enum PlayerPermissionLevel const&);


} // namespace PermissionsHandler