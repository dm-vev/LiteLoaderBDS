// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BEARDANDSHAVERFEATURE
#include "Extra/BeardAndShaverFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_BEARDANDSHAVERFEATURE
class BeardAndShaverFeature {
#include "Extra/BeardAndShaverFeatureAPI.hpp"
public:
    virtual ~BeardAndShaverFeature();
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&);
    virtual void unk_vfn_2();

public:
    MCAPI BeardAndShaverFeature();
};