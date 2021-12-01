// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "StructurePiece.hpp"
#define EXTRA_INCLUDE_PART_SHRIGHTTURN
#include "Extra/SHRightTurnAPI.hpp"
#undef EXTRA_INCLUDE_PART_SHRIGHTTURN
class SHRightTurn : public StructurePiece {
#include "Extra/SHRightTurnAPI.hpp"
public:
    virtual ~SHRightTurn();
    virtual void unk_vfn_2();
    virtual int /*enum StructurePieceType*/ getType();
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    virtual int getWorldZ(int, int);
};