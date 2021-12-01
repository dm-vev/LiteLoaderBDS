// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_NETWORKDEBUGMANAGER
#include "Extra/NetworkDebugManagerAPI.hpp"
#undef EXTRA_INCLUDE_PART_NETWORKDEBUGMANAGER
class NetworkDebugManager {
#include "Extra/NetworkDebugManagerAPI.hpp"
public:
    virtual ~NetworkDebugManager();

public:
    MCAPI static int const MAX_NUMBER_OF_SAMPLES;
    MCAPI static int const UPDATE_INTERVAL_MILLISECONDS;
};