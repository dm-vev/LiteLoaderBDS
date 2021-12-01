// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_RANDOMSPREADTREECANOPY
#include "Extra/RandomSpreadTreeCanopyAPI.hpp"
#undef EXTRA_INCLUDE_PART_RANDOMSPREADTREECANOPY
class RandomSpreadTreeCanopy {
#include "Extra/RandomSpreadTreeCanopyAPI.hpp"
public:
    virtual ~RandomSpreadTreeCanopy();
    virtual class std::optional<class BlockPos> placeCanopy(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&, struct TreeHelper::TreeParams const&, std::vector<class BlockPos> const&);

public:
    MCAPI RandomSpreadTreeCanopy();
};