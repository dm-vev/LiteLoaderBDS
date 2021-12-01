// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_WOODLANDMANSIONPIECES
#include "Extra/WoodlandMansionPiecesAPI.hpp"
#undef EXTRA_INCLUDE_PART_WOODLANDMANSIONPIECES
namespace WoodlandMansionPieces {
#include "Extra/WoodlandMansionPiecesAPI.hpp"

public:
MCAPI static void generateMansion(
    class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>,
    class BlockPos const &, enum Rotation,
    std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);

} // namespace WoodlandMansionPieces