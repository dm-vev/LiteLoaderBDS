// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ENDPORTALSHAPE
#include "Extra/EndPortalShapeAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENDPORTALSHAPE
class EndPortalShape {
#include "Extra/EndPortalShapeAPI.hpp"

public:
    MCAPI EndPortalShape(class BlockSource&, class BlockPos);
    MCAPI bool isValid(class BlockSource&);
    MCAPI ~EndPortalShape();
};