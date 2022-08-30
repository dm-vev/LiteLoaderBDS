/**
 * @file  MegaTreeCanopy.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MegaTreeCanopy.
 *
 */
class MegaTreeCanopy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MEGATREECANOPY
public:
    class MegaTreeCanopy& operator=(class MegaTreeCanopy const &) = delete;
    MegaTreeCanopy(class MegaTreeCanopy const &) = delete;
    MegaTreeCanopy() = delete;
#endif

public:
    virtual ~MegaTreeCanopy();
    virtual class std::optional<class BlockPos> placeCanopy(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &, struct TreeHelper::TreeParams const &, std::vector<class BlockPos> const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MEGATREECANOPY
#endif

};