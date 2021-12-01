// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "MineshaftPiece.hpp"
#define EXTRA_INCLUDE_PART_MINESHAFTSTAIRS
#include "Extra/MineshaftStairsAPI.hpp"
#undef EXTRA_INCLUDE_PART_MINESHAFTSTAIRS
class MineshaftStairs : public MineshaftPiece {
#include "Extra/MineshaftStairsAPI.hpp"
public:
    virtual ~MineshaftStairs();
    virtual void unk_vfn_2();
    virtual int /*enum StructurePieceType*/ getType();
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    virtual int getWorldZ(int, int);
};