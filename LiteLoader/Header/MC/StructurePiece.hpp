/**
 * @file  StructurePiece.hpp
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
 * @brief MC class StructurePiece.
 *
 */
class StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPIECE
public:
    class StructurePiece& operator=(class StructurePiece const &) = delete;
    StructurePiece(class StructurePiece const &) = delete;
    StructurePiece() = delete;
#endif

public:
    virtual ~StructurePiece();
    virtual void moveBoundingBox(int, int, int);
    virtual enum StructurePieceType getType() const;
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &) = 0;
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    virtual bool isInInvalidLocation(class BlockSource &, class BoundingBox const &);
    virtual int getWorldX(int, int);
    virtual int getWorldZ(int, int);
    virtual void placeBlock(class BlockSource &, class Block const &, int, int, int, class BoundingBox const &);
    virtual bool canBeReplaced(class BlockSource &, int, int, int, class BoundingBox const &);
    virtual void generateBox(class BlockSource &, class BoundingBox const &, int, int, int, int, int, int, class Block const &, class Block const &, bool);
    virtual void addHardcodedSpawnAreas(class LevelChunk &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREPIECE
#endif
    MCAPI class BlockPos _getWorldPos(int, int, int);
    MCAPI void addTerrainAdjustmentToken(class std::shared_ptr<bool>);
    MCAPI void generateAirBox(class BlockSource &, class BoundingBox const &, int, int, int, int, int, int);
    MCAPI void generateBox(class BlockSource &, class BoundingBox const &, int, int, int, int, int, int, bool, class Random &, class BlockSelector const &);
    MCAPI void generateMaybeBox(class BlockSource &, class BoundingBox const &, class Random &, float, int, int, int, int, int, int, class Block const &, class Block const &, bool, bool);
    MCAPI void generateUpperHalfSphere(class BlockSource &, class BoundingBox const &, int, int, int, int, int, int, class Block const &, bool);
    MCAPI class Block const & getBlock(class BlockSource &, int, int, int, class BoundingBox const &);
    MCAPI unsigned short getOrientationData(class Block const *, unsigned short);
    MCAPI int getWorldY(int);
    MCAPI bool isAboveGround(int, int, int, class BlockSource &);
    MCAPI bool isAir(class BlockSource &, int, int, int, class BoundingBox const &);
    MCAPI bool isReplaceableBlock(class Block const &);
    MCAPI void maybeGenerateBlock(class BlockSource &, class BoundingBox const &, class Random &, float, int, int, int, class Block const &);
    MCAPI void maybeGenerateBlockIfNotFloating(class BlockSource &, class BoundingBox const &, class Random &, float, int, int, int, class Block const &);
    MCAPI static class StructurePiece * findCollisionPiece(std::vector<std::unique_ptr<class StructurePiece>> const &, class BoundingBox const &);
    MCAPI static int getTotalWeight(std::vector<class PieceWeight> const &);

};