// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_STRUCTUREPOOLBLOCKPREDICATEAXISALIGNEDPOSITION
#include "Extra/StructurePoolBlockPredicateAxisAlignedPositionAPI.hpp"
#undef EXTRA_INCLUDE_PART_STRUCTUREPOOLBLOCKPREDICATEAXISALIGNEDPOSITION
class StructurePoolBlockPredicateAxisAlignedPosition {
#include "Extra/StructurePoolBlockPredicateAxisAlignedPositionAPI.hpp"
public:
    virtual ~StructurePoolBlockPredicateAxisAlignedPosition();
    virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&);
    virtual void unk_vfn_2();

public:
    MCAPI StructurePoolBlockPredicateAxisAlignedPosition(float, float, int, int, unsigned char);
};