// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_ENDPODIUMFEATURE
#include "Extra/EndPodiumFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENDPODIUMFEATURE
class EndPodiumFeature : public Feature {
#include "Extra/EndPodiumFeatureAPI.hpp"
public:
    virtual ~EndPodiumFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);

public:
    MCAPI EndPodiumFeature(bool);

    MCAPI static float const CORNER_ROUNDING;
    MCAPI static class BlockPos const END_PODIUM_CHUNK_POSITION;
    MCAPI static class BlockPos const END_PODIUM_LOCATION;
    MCAPI static int const PODIUM_PILLAR_HEIGHT;
    MCAPI static int const PODIUM_RADIUS;
    MCAPI static int const RIM_RADIUS;
};