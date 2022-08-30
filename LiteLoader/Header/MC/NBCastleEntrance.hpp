/**
 * @file  NBCastleEntrance.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetherFortressPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NBCastleEntrance.
 *
 */
class NBCastleEntrance : public NetherFortressPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBCASTLEENTRANCE
public:
    class NBCastleEntrance& operator=(class NBCastleEntrance const &) = delete;
    NBCastleEntrance(class NBCastleEntrance const &) = delete;
    NBCastleEntrance() = delete;
#endif

public:
    virtual ~NBCastleEntrance();
    virtual enum StructurePieceType getType() const;
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NBCASTLEENTRANCE
#endif

};