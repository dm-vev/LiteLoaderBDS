// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_COMPOUNDTAGVARIANT
#include "Extra/CompoundTagVariantAPI.hpp"
#undef EXTRA_INCLUDE_PART_COMPOUNDTAGVARIANT
class CompoundTagVariant {
#include "Extra/CompoundTagVariantAPI.hpp"

public:
    MCAPI class Tag& emplace(class Tag&&);
    MCAPI class Tag* get();
    MCAPI class Tag const* get() const;
    MCAPI ~CompoundTagVariant();
};