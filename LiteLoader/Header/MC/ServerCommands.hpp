// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SERVERCOMMANDS
#include "Extra/ServerCommandsAPI.hpp"
#undef EXTRA_INCLUDE_PART_SERVERCOMMANDS
namespace ServerCommands {
#include "Extra/ServerCommandsAPI.hpp"

MCAPI void setupCommonEnums(class CommandRegistry&);
MCAPI void setupStandardServer(class Minecraft&, std::string const&, std::string const&, class PermissionsFile*);


} // namespace ServerCommands