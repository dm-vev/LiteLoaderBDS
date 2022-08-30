/**
 * @file  FlatWorldGenerator.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FlatWorldGenerator.
 *
 */
class FlatWorldGenerator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLATWORLDGENERATOR
public:
    class FlatWorldGenerator& operator=(class FlatWorldGenerator const &) = delete;
    FlatWorldGenerator(class FlatWorldGenerator const &) = delete;
    FlatWorldGenerator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLATWORLDGENERATOR
    MCVAPI void decorateWorldGenLoadChunk(class Biome &, class LevelChunk &, class BlockVolumeTarget &, class Random &, class ChunkPos const &) const;
    MCVAPI void decorateWorldGenPostProcess(class Biome &, class LevelChunk &, class BlockSource &, class Random &) const;
    MCVAPI bool findNearestStructureFeature(enum StructureFeatureType, class BlockPos const &, class BlockPos &, bool);
    MCVAPI class BlockPos findSpawnPosition() const;
    MCVAPI enum StructureFeatureType findStructureFeatureTypeAt(class BlockPos const &);
    MCVAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos>);
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    MCVAPI class BiomeSource const & getBiomeSource() const;
    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;
    MCVAPI bool isStructureFeatureTypeAt(class BlockPos const &, enum StructureFeatureType) const;
    MCVAPI void loadChunk(class LevelChunk &, bool);
    MCVAPI bool postProcess(class ChunkViewSource &);
    MCVAPI void prepareAndComputeHeights(class BlockVolume &, class ChunkPos const &, std::vector<short> &, bool, int);
    MCVAPI void prepareHeights(class BlockVolume &, class ChunkPos const &, bool);
#endif
    MCAPI FlatWorldGenerator(class Dimension &, unsigned int, class Json::Value const &);

//private:
    MCAPI void _generatePrototypeBlockValues(class FlatWorldGeneratorOptions const &, short);

private:

};