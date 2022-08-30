/**
 * @file  ConsoleChunkBlender.hpp
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
 * @brief MC class ConsoleChunkBlender.
 *
 */
class ConsoleChunkBlender {

#define AFTER_EXTRA
// Add Member There
public:
enum ShiftBlockTypes;
enum BlenderMode;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONSOLECHUNKBLENDER
public:
    class ConsoleChunkBlender& operator=(class ConsoleChunkBlender const &) = delete;
    ConsoleChunkBlender(class ConsoleChunkBlender const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONSOLECHUNKBLENDER
#endif
    MCAPI ConsoleChunkBlender();
    MCAPI void blendChunk(class LevelChunk &, class LevelChunk &, enum ConsoleChunkBlender::BlenderMode);
    MCAPI void setInterpolants(float, float, float, float);
    MCAPI ~ConsoleChunkBlender();

//protected:
    MCAPI void _blendChunkEnd4J(class LevelChunk &, class LevelChunk &);
    MCAPI void _blendChunkNether4J(class LevelChunk &, class LevelChunk &);
    MCAPI void _blendChunkOverworld(class LevelChunk &, class LevelChunk &, enum ConsoleChunkBlender::ShiftBlockTypes);
    MCAPI void _copyColumnFromGeneratedChunkNether(class LevelChunk &, class LevelChunk &, int, int);
    MCAPI void _copyColumnFromGeneratedChunkOverworld(class LevelChunk &, class LevelChunk &, int, int, enum ConsoleChunkBlender::ShiftBlockTypes);
    MCAPI class ChunkLocalHeight _findTopMostWaterHeight(class LevelChunk &, int, int, class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> const &);
    MCAPI void _prepInterpTable();
    MCAPI void _shiftColumnBySetBlocks(class LevelChunk &, int, int, int, bool, class ChunkLocalHeight, enum ConsoleChunkBlender::ShiftBlockTypes, struct OverworldBlendRules const &);

protected:

};