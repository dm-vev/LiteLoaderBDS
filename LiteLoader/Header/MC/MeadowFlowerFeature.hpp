// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_MEADOWFLOWERFEATURE
#include "Extra/MeadowFlowerFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_MEADOWFLOWERFEATURE
class MeadowFlowerFeature : public Feature {
#include "Extra/MeadowFlowerFeatureAPI.hpp"
public:
    virtual ~MeadowFlowerFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);

public:
    MCAPI MeadowFlowerFeature();


private:
    MCAPI int getRandomArrayIndex(class BlockPos const&, unsigned __int64, float) const;
};