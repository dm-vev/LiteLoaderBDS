// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_CODEBUILDERCOMMAND
#include "Extra/CodeBuilderCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_CODEBUILDERCOMMAND
class CodeBuilderCommand {
#include "Extra/CodeBuilderCommandAPI.hpp"
public:
    virtual ~CodeBuilderCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);
};