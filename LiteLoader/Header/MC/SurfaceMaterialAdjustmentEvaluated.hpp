// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SURFACEMATERIALADJUSTMENTEVALUATED
#include "Extra/SurfaceMaterialAdjustmentEvaluatedAPI.hpp"
#undef EXTRA_INCLUDE_PART_SURFACEMATERIALADJUSTMENTEVALUATED
class SurfaceMaterialAdjustmentEvaluated {
#include "Extra/SurfaceMaterialAdjustmentEvaluatedAPI.hpp"

public:
    MCAPI bool empty() const;
    MCAPI void makeAdjustments(struct SurfaceMaterialBlocks&, int) const;
    MCAPI ~SurfaceMaterialAdjustmentEvaluated();
};