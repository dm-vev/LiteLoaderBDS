// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_LEGACYPACKIDVERSION
#include "Extra/LegacyPackIdVersionAPI.hpp"
#undef EXTRA_INCLUDE_PART_LEGACYPACKIDVERSION
class LegacyPackIdVersion {
#include "Extra/LegacyPackIdVersionAPI.hpp"

public:
    MCAPI LegacyPackIdVersion(std::string const&, std::string const&);
    MCAPI struct PackIdVersion getUpgradedPackId() const;
    MCAPI ~LegacyPackIdVersion();
};