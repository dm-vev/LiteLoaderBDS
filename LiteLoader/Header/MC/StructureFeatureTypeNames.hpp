/**
 * @file  StructureFeatureTypeNames.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace StructureFeatureTypeNames.
 *
 */
namespace StructureFeatureTypeNames {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    MCAPI class std::basic_string_view<char, struct std::char_traits<char>> getFeatureName(enum StructureFeatureType);
    MCAPI enum StructureFeatureType getFeatureType(std::string const &);

};