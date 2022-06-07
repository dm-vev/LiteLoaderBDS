// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "AABB.hpp"
#include "BlockPos.hpp"

#undef BEFORE_EXTRA

class BoundingBox {

#define AFTER_EXTRA
// Add Member There
public:
    BlockPos bpos1;
    BlockPos bpos2;


    inline BlockPos getCenter() const
    {
        return {(bpos1.x + bpos2.x) / 2, (bpos1.y + bpos2.y) / 2, (bpos1.z + bpos2.z) / 2};
    }

    LIAPI AABB toAABB() const;
    
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOUNDINGBOX
public:
    class BoundingBox& operator=(class BoundingBox const &) = delete;
    BoundingBox(class BoundingBox const &) = delete;
    BoundingBox() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOUNDINGBOX
#endif
    MCAPI BoundingBox(class BlockPos const &, class BlockPos const &, enum Rotation);
    MCAPI bool isValid() const;
    MCAPI static class BoundingBox orientBox(int, int, int, int, int, int, int, int, int, int);



};