// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_OCEANMIXEROPERATIONNODE
#include "Extra/OceanMixerOperationNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART_OCEANMIXEROPERATIONNODE
class OceanMixerOperationNode {
#include "Extra/OceanMixerOperationNodeAPI.hpp"
public:
    virtual ~OceanMixerOperationNode();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void _fillArea(class OperationNodeDetails::WorkingData<class Biome*, class Biome*>&, class Pos2d const&, class Pos2d const&, int, class OperationGraphResult<int /*enum BiomeTemperatureCategory*/>);
    virtual void unk_vfn_4();
};