// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

namespace LegacyBlockIdMappingUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    MCAPI void addLegacyBlockIdMapping(class BlockLegacy const &, unsigned __int64);
    MCAPI void addLegacyBlockIdMappings();
    MCAPI extern class std::unordered_map<unsigned int, class WeakPtr<class BlockLegacy>, struct std::hash<unsigned int>, struct std::equal_to<unsigned int>, class std::allocator<struct std::pair<unsigned int const, class WeakPtr<class BlockLegacy>>>> mBlockIdToVanillaBlockTypesMap;
    MCAPI extern class std::unordered_map<std::string, int, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, int>>> mBlockNameToBlockIdMap;

};