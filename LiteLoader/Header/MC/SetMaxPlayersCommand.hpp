// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SETMAXPLAYERSCOMMAND
#include "Extra/SetMaxPlayersCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_SETMAXPLAYERSCOMMAND
class SetMaxPlayersCommand {
#include "Extra/SetMaxPlayersCommandAPI.hpp"
public:
    virtual ~SetMaxPlayersCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);
};