/**
 * @file  EducationMetadataUtils.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace EducationMetadataUtils.
 *
 */
namespace EducationMetadataUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    MCAPI struct EducationMetadata parse(std::string const &, std::vector<std::string> &, class PackReport &);
    MCAPI void parseEducationMetadataContent(class Json::Value const &, std::vector<std::string> &, struct EducationMetadata &, class PackReport &);

};