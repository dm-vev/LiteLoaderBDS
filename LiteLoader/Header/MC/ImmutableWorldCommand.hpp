// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_IMMUTABLEWORLDCOMMAND
#include "Extra/ImmutableWorldCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_IMMUTABLEWORLDCOMMAND
class ImmutableWorldCommand {
#include "Extra/ImmutableWorldCommandAPI.hpp"
public:
    virtual ~ImmutableWorldCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);
};