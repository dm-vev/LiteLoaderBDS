// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_GAMEMODECOMMAND
#include "Extra/GameModeCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_GAMEMODECOMMAND
class GameModeCommand {
#include "Extra/GameModeCommandAPI.hpp"
public:
    virtual ~GameModeCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);
};