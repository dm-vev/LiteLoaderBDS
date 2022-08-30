/**
 * @file  CryptoUtils.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace CryptoUtils.
 *
 */
namespace CryptoUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    MCAPI std::string getDirectroyChecksum(class Core::Path const &);
    MCAPI std::string getFileChecksum(class Core::Path const &);

};