// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_AZALEATREEANDROOTSFEATURE
#include "Extra/AzaleaTreeAndRootsFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_AZALEATREEANDROOTSFEATURE
class AzaleaTreeAndRootsFeature : public Feature {
#include "Extra/AzaleaTreeAndRootsFeatureAPI.hpp"
public:
    virtual ~AzaleaTreeAndRootsFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);


private:
    MCAPI bool _isLushGroundReplaceable(class BlockSource&, class BlockPos const&) const;
    MCAPI bool _tryPlaceAzaleaTree(class BlockSource&, class BlockPos const&, class Random&) const;
};