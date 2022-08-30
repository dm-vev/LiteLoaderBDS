/**
 * @file  SubChunk.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SubChunkBrightnessStorage.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure SubChunk.
 *
 */
struct SubChunk {

#define AFTER_EXTRA
// Add Member There
    enum SubChunkState;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNK
public:
    struct SubChunk& operator=(struct SubChunk const &) = delete;
    SubChunk(struct SubChunk const &) = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SUBCHUNK
#endif
    MCAPI SubChunk();
    MCAPI SubChunk(class Block const *, bool, bool, class SpinLock &, signed char);
    MCAPI SubChunk(struct SubChunk &&);
    MCAPI void deserialize(class IDataInput &, class BlockPalette const &, class SubChunkPos const &, class std::optional<struct DeserializationChanges *>);
    MCAPI void fetchBlocks(class BlockPos const &, class BlockPos const &, short, class BlockVolume &) const;
    MCAPI void fetchBlocksInBox(class BlockPos const &, class BoundingBox const &, class std::function<bool (class Block const &)> const &, std::vector<class BlockDataFetchResult<class Block>> &) const;
    MCAPI void fetchBlocksInCylinder(class BlockPos const &, class BlockPos const &, unsigned int, unsigned int, class std::function<bool (class Block const &)> const &, std::vector<class BlockDataFetchResult<class Block>> &) const;
    MCAPI struct SubChunkBrightnessStorage::LightPair getLight(unsigned short) const;
    MCAPI enum SubChunk::SubChunkState getSubChunkState() const;
    MCAPI void initialize(class Block const *, bool, bool, class SpinLock &, signed char);
    MCAPI bool isPaletteUniform(class Block const &) const;
    MCAPI bool isUniform(class Block const &) const;
    MCAPI bool likelyHasNonUniformBlockLight() const;
    MCAPI bool needsInitLighting() const;
    MCAPI struct SubChunk & operator=(struct SubChunk &&);
    MCAPI void prune(enum SubChunkStorageUnit::PruneType);
    MCAPI void recalculateHash(bool);
    MCAPI std::string recalculateHashAndSerialize(bool);
    MCAPI void reset(class Block const *, bool, bool);
    MCAPI bool safeToModify() const;
    MCAPI void serialize(class IDataOutput &, bool) const;
    MCAPI void setAllIsMaxSkyLight();
    MCAPI void setAllIsNoSkyLight();
    MCAPI void setBlockLight(unsigned short, unsigned char);
    MCAPI void setFromBlockVolume(class BlockVolume const &, short);
    MCAPI void setNeedsClientLighting(bool);
    MCAPI void setNeedsInitLighting(bool);
    MCAPI void setSkyLight(unsigned short, unsigned char);
    MCAPI void setSubChunkState(enum SubChunk::SubChunkState);
    MCAPI void shutdown();
    MCAPI ~SubChunk();
    MCAPI static void flushGarbageCollectors();

//protected:
    MCAPI void _createBlockLightStorage();
    MCAPI void _createSkyLightStorage();
    MCAPI void _replaceBlocks(unsigned char, std::unique_ptr<class SubChunkStorage<class Block>>, class Bedrock::Threading::LockGuard<class SpinLock> &);
    MCAPI void _resetLight(bool, bool);
    MCAPI void _setBlock(unsigned char, unsigned short, class Block const &);

};