/**
 * @file  SubChunkBlockStorageUtil.hpp
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
 * @brief MC namespace SubChunkBlockStorageUtil.
 *
 */
namespace SubChunkBlockStorageUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    MCAPI std::unique_ptr<class SubChunkStorage<class Block>> makeDeserialized(class IDataInput &, class BlockPalette const &, class std::function<class Block const * (unsigned __int64)> const &, class std::function<class Block const * (class CompoundTag const &)> const &, enum SubChunkFormat);

};