/**
 * @file  VillagePiece.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PoolElementStructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VillagePiece.
 *
 */
class VillagePiece : public PoolElementStructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGEPIECE
public:
    class VillagePiece& operator=(class VillagePiece const &) = delete;
    VillagePiece(class VillagePiece const &) = delete;
    VillagePiece() = delete;
#endif

public:
    virtual ~VillagePiece();
    virtual int generateHeightAtPosition(class BlockPos const &, class Dimension &, class BlockVolume &, class std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<std::vector<short>>>>> &) const;
    virtual class Block const * getSupportBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    virtual class Block const & getBeardStabilizeBlock(class Block const &) const;
    virtual enum AdjustmentEffect getTerrainAdjustmentEffect() const;
    virtual bool _needsPostProcessing(class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VILLAGEPIECE
#endif
    MCAPI static void addPieces(class BlockPos, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, class JigsawStructureRegistry &, enum VanillaBiomeTypes, class Dimension &);

};