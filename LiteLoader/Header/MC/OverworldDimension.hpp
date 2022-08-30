/**
 * @file  OverworldDimension.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OverworldDimension.
 *
 */
class OverworldDimension {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERWORLDDIMENSION
public:
    class OverworldDimension& operator=(class OverworldDimension const &) = delete;
    OverworldDimension(class OverworldDimension const &) = delete;
    OverworldDimension() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OVERWORLDDIMENSION
    MCVAPI void _upgradeOldLimboEntity(class CompoundTag &, enum LimboEntitiesVersion);
    MCVAPI std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility(std::unique_ptr<class ChunkSource>, enum StorageVersion);
    MCVAPI std::unique_ptr<class WorldGenerator> createGenerator();
    MCVAPI void fixWallChunk(class ChunkSource &, class LevelChunk &);
    MCVAPI class mce::Color getBrightnessDependentFogColor(class mce::Color const &, float) const;
    MCVAPI short getCloudHeight() const;
    MCVAPI bool levelChunkNeedsUpgrade(class LevelChunk const &) const;
    MCVAPI class Vec3 translatePosAcrossDimension(class Vec3 const &, class AutomaticID<class Dimension, int>) const;
    MCVAPI void upgradeLevelChunk(class ChunkSource &, class LevelChunk &, class LevelChunk &);
#endif
    MCAPI OverworldDimension(class Level &, class Scheduler &);

//private:
    MCAPI static std::unique_ptr<class StructureFeatureRegistry> makeStructureFeatures(unsigned int, bool, class BaseGameVersion const &, class Experiments const &);

private:

};