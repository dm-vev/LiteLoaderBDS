// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_COMMANDDISPATCHER
#include "Extra/CommandDispatcherAPI.hpp"
#undef EXTRA_INCLUDE_PART_COMMANDDISPATCHER
class CommandDispatcher {
#include "Extra/CommandDispatcherAPI.hpp"
public:
    virtual ~CommandDispatcher();
    virtual int performCommand(class CommandOrigin const&, class Command&);

public:
    MCAPI CommandDispatcher();
};