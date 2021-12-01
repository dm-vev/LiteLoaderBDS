// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "StructureFeature.hpp"
#define EXTRA_INCLUDE_PART_STRONGHOLDFEATURE
#include "Extra/StrongholdFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_STRONGHOLDFEATURE
class StrongholdFeature : public StructureFeature {
#include "Extra/StrongholdFeatureAPI.hpp"
public:
    virtual ~StrongholdFeature();
    virtual bool getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, bool);
    virtual bool isFeatureChunk(class Dimension const&, class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int);
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);

public:
    MCAPI StrongholdFeature(class VillageFeature*, unsigned int);


private:
    MCAPI struct StrongholdFeature::StrongholdResult const _generateStronghold(unsigned int, class ChunkPos const&);
    MCAPI bool _getNearestStronghold(class Dimension const&, unsigned int, class BlockPos const&, class BlockPos&, bool);


protected:
    MCAPI void generatePositions(class Dimension const&, class Random&, class BiomeSource const&, unsigned int);
};