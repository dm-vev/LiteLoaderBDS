// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PARAMETER
#include "Extra/ParameterAPI.hpp"
#undef EXTRA_INCLUDE_PART_PARAMETER
class Parameter {
#include "Extra/ParameterAPI.hpp"

public:
    MCAPI Parameter(float, float);

    MCAPI static struct Parameter fromParameters(struct Parameter const&, struct Parameter const&);
};