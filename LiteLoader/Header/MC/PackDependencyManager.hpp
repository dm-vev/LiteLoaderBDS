/**
 * @file  PackDependencyManager.hpp
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
 * @brief MC namespace PackDependencyManager.
 *
 */
namespace PackDependencyManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    MCAPI std::vector<struct PackIdVersion> getMissingDependencyIdentities(class gsl::not_null<class PackSource const *>, class PackManifest const &);
    MCAPI bool hasMissingDependencies(class gsl::not_null<class PackSource const *>, class PackManifest const &);
    MCAPI bool isNativeModule(std::string const &);

};