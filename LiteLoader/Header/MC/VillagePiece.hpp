// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "PoolElementStructurePiece.hpp"
#define EXTRA_INCLUDE_PART_VILLAGEPIECE
#include "Extra/VillagePieceAPI.hpp"
#undef EXTRA_INCLUDE_PART_VILLAGEPIECE
class VillagePiece : public PoolElementStructurePiece {
#include "Extra/VillagePieceAPI.hpp"
public:
    virtual ~VillagePiece();
    virtual void unk_vfn_2();
    virtual int /*enum StructurePieceType*/ getType();
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    virtual int getWorldZ(int, int);
    virtual int generateHeightAtPosition(class BlockPos const&, class Dimension&, class BlockVolume&, class std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<std::vector<short>>>>>&);
    virtual class Block const* getSupportBlock(class BlockSource&, class BlockPos const&, class Block const&);
    virtual class Block const& getBeardStabilizeBlock(class Block const&);
    virtual bool _needsPostProcessing(class BlockSource&);
};