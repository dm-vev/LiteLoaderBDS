/**
 * @file  SingleBlockFeature.hpp
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
 * @brief MC class SingleBlockFeature.
 *
 */
class SingleBlockFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SINGLEBLOCKFEATURE
public:
    class SingleBlockFeature& operator=(class SingleBlockFeature const &) = delete;
    SingleBlockFeature(class SingleBlockFeature const &) = delete;
    SingleBlockFeature() = delete;
#endif

public:
    virtual ~SingleBlockFeature();
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SINGLEBLOCKFEATURE
#endif

//private:
    MCAPI class Block const * _mayAttach(class IBlockWorldGenAPI &, class BlockPos const &) const;

private:

};