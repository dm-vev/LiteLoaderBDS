// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_LEGACYFLOWERFEATURE
#include "Extra/LegacyFlowerFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_LEGACYFLOWERFEATURE
class LegacyFlowerFeature : public Feature {
#include "Extra/LegacyFlowerFeatureAPI.hpp"
public:
    virtual ~LegacyFlowerFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual void unk_vfn_7();

public:
    MCAPI LegacyFlowerFeature(enum FlowerPlacementType);
};