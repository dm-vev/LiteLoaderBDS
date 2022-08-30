/**
 * @file  MineshaftStairs.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MineshaftPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MineshaftStairs.
 *
 */
class MineshaftStairs : public MineshaftPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINESHAFTSTAIRS
public:
    class MineshaftStairs& operator=(class MineshaftStairs const &) = delete;
    MineshaftStairs(class MineshaftStairs const &) = delete;
    MineshaftStairs() = delete;
#endif

public:
    virtual ~MineshaftStairs();
    virtual enum StructurePieceType getType() const;
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINESHAFTSTAIRS
#endif

};