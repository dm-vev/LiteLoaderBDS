// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_GETTOPSOLIDBLOCKCOMMAND
#include "Extra/GetTopSolidBlockCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_GETTOPSOLIDBLOCKCOMMAND
class GetTopSolidBlockCommand {
#include "Extra/GetTopSolidBlockCommandAPI.hpp"
public:
    virtual ~GetTopSolidBlockCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);
};