/**
 * @file  LargeDripstoneFeature.hpp
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
 * @brief MC class LargeDripstoneFeature.
 *
 */
class LargeDripstoneFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LARGEDRIPSTONEFEATURE
public:
    class LargeDripstoneFeature& operator=(class LargeDripstoneFeature const &) = delete;
    LargeDripstoneFeature(class LargeDripstoneFeature const &) = delete;
    LargeDripstoneFeature() = delete;
#endif

public:
    virtual ~LargeDripstoneFeature();
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LARGEDRIPSTONEFEATURE
#endif

};